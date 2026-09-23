#include "global.h"
#include "main.h"
#include "battle_setup.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "list_menu.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "music_player.h"
#include "overworld.h"
#include "palette.h"
#include "radio.h"
#include "random.h"
#include "regions.h"
#include "rtc.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "text_window.h"
#include "constants/songs.h"
#include "constants/trainers.h"
#include "constants/music_player.h"
#include "constants/rgb.h"

struct MP3PlayerResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    struct ListMenuItem *mp3PlayerItems;
    u8 *mp3PlayerMusicNames;
    u16 *mp3PlayerMusicIDs;
    u8 menuMode;
    u8 gfxLoadState;
    u8 exiting;
    u8 musicTrackCount;
    u8 musicTrackActionWindowId;
    u16 musicScrollOffset;
    u16 musicSelectedItem;
    bool8 canSwitchCards;
    u8 fakeSeconds;
    u8 currentRadioStation;
    struct Time cachedTime;
};

static EWRAM_DATA struct MP3PlayerResources *sMP3PlayerDataPtr = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;

static void MP3Player_RunSetup(void);
static bool8 MP3Player_DoGfxSetup(void);
static bool8 MP3Player_InitBgs(void);
static void MP3Player_FadeAndBail(void);
static bool8 MP3Player_LoadGraphics(void);
static void MP3Player_InitWindows(void);
static void Task_MP3PlayerWaitFadeIn(u8 taskId);
static void Task_MP3PlayerTryExit(u8 taskId);
static void Task_MP3PlayerTurnOff(u8 taskId);
static void Task_Pokegear1(u8 taskId);
static void Task_Pokegear1_1(u8 taskId);
static void Task_Pokegear2(u8 taskId);
static void Task_Pokegear3(u8 taskId);
static void Task_SwapCards(u8 taskId);
static void Task_ClockCard(u8 taskId);
static void Task_PhoneCard(u8 taskId);
static void Task_RadioCard(u8 taskId);
static void PhoneCard_ConfirmCall(u8 taskId);
static void LoadClockCard(void);
static void LoadMP3PlayerCard(void);
static void DisplayPhoneCardDefaultText(void);
static void LoadRadioCard(void);
static void LoadCard(enum MP3Menus type);
static void LoadTabBgs(u32 type);
static void SpriteCB_ClockDigits(struct Sprite* sprite);
static void SpriteCB_RadioDigits(struct Sprite* sprite);
static void UnloadClockCard(void);
static void UnloadMP3PlayerCard(void);
static void UnloadRadioCard(void);
static void PhoneCard_ConfirmCallProcessInput(u8 taskId);
static void PhoneCard_AddScrollIndicators(u8 taskId);
static void PhoneCard_ReturnToMain(u8 taskId);
static void PhoneCard_PlaceCall(u8 taskId);
static void PhoneCard_DeleteEntry(u8 taskId);
static void UpdateRadioStation(u8 taskId, u8 frequency);
static void LoadTabSprites(u8 taskId);
static void SpriteCB_Icons(struct Sprite* sprite);
static void InitMP3PlayerData(void);
static void ClearOrDrawTopBar(bool8 clear);
static void ShowHelpBar(const u8 *string);

#define MENU_FRAME_BASE_TILE_NUM 532
#define MENU_FRAME_PALETTE_NUM 14
#define MENU_MESSAGE_BASE_TILE_NUM 541
#define MENU_MESSAGE_PALETTE_NUM 13

#define CARD_SLIDE_SPEED 32
#define ICON_SLIDE_SPEED 2
#define CARD_SLIDE_RIGHT_X 208

#define MUSIC_TRACK_MAX_SHOWN_LIMIT 5
#define MUSIC_TRACK_MAX_NAME_LENGTH 31

#define TAG_DIGITS       12345
#define TAG_ICONS        12346
#define TAG_PHONE_SIGNAL 12347

static const u32 sMP3PlayerBgTiles[] = INCGFX_U32("graphics/music_player/bg.png", ".4bpp.smol");
static const u32 sMP3PlayerTilemap[] = INCGFX_U32("graphics/music_player/background.bin", ".smolTM");
static const u16 sMP3PlayerBGPalette[] = INCGFX_U16("graphics/music_player/bg.pal", ".gbapal");
static const u16 sMenuSpritesPalette[] = INCGFX_U16("graphics/music_player/menu_sprites.pal", ".gbapal");
static const u8 sDigitTiles[] = INCGFX_U8("graphics/music_player/digits.png", ".4bpp");
static const u8 sIconTiles[] = INCGFX_U8("graphics/music_player/icons.png", ".4bpp");
static const u32 gClockCardTilemap[] = INCGFX_U32("graphics/music_player/clock.bin", ".smolTM");
static const u32 gPhoneCardTilemap[] = INCGFX_U32("graphics/music_player/phone.bin", ".smolTM");
static const u32 gRadioCardTilemap[] = INCGFX_U32("graphics/music_player/radio.bin", ".smolTM");
static const u8 sPhoneSignalIconGfx[] = INCGFX_U8("graphics/music_player/phone_signal.png", ".4bpp");
static const u16 sPhoneSignalIconPalette[] = INCGFX_U16("graphics/music_player/phone_signal.png", ".gbapal");

static const u8 gText_ClockCardHelp[] = _("{A_BUTTON}MODE  {B_BUTTON}EXIT");
static const u8 gText_PhoneCardHelp1[] = _("{DPAD_UPDOWN}PICK  {A_BUTTON}OK  {B_BUTTON}EXIT");
static const u8 gText_UpDownPickAOk[] = _("{DPAD_UPDOWN}PICK  {A_BUTTON}OK");
static const u8 gText_ANext[] = _("{A_BUTTON}NEXT");
static const u8 gText_RadioCardHelp[] = _("{DPAD_LEFTRIGHT}TUNING  {B_BUTTON}EXIT");

// Pokégear
static const u8 gText_PokegearInstructions[] = _("Press {START_BUTTON} and {SELECT_BUTTON} to switch.\nPress B to exit.");
static const u8 gText_PokegearWhomDoYouWantToCall[] = _("Select music to play.");
static const u8 gText_PokegearDeleteThisStoredPhoneNumber[] = _("Placeholder");


static const struct BgTemplate sMP3PlayerBgTemplates[] =
{
    {
        .bg = MP3_BG_1,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = MP3_BG_2,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0
    },
    {
        .bg = MP3_BG_3,
        .charBaseIndex = 0,
        .mapBaseIndex = 26,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
};

static const struct WindowTemplate sMP3PlayerWindowTemplates[] = 
{
    [MP3_WINDOW_HEADER] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = MENU_MESSAGE_PALETTE_NUM,
        .baseBlock = 1
    },
    [MP3_WINDOW_DESCRIPTION] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 6,
        .tilemapTop = 15,
        .width = 23,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2)
    },
    [MP3_WINDOW_WEEKDAY] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 10,
        .tilemapTop = 5,
        .width = 14,
        .height = 3,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (23 * 4)
    },
    [MP3_WINDOW_STATION] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 10,
        .tilemapTop = 10,
        .width = 14,
        .height = 3,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (23 * 4)
    },
    [MP3_WINDOW_LIST] =
    {
        .bg = MP3_BG_1,
        .tilemapLeft = 8,
        .tilemapTop = 4,
        .width = 17,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 1 + (30 * 2) + (23 * 4)
    },
    DUMMY_WIN_TEMPLATE
};

enum MP3PlayerColors
{
    MP3_COLOR_BLACK,
    MP3_COLOR_WHITE,
    MP3_COLOR_HEADER,
    FONT_BLUE,
};

static const u8 sMenuWindowFontColors[][3] = 
{
    [MP3_COLOR_BLACK]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [MP3_COLOR_WHITE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [MP3_COLOR_HEADER]   = { TEXT_DYNAMIC_COLOR_6, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE },
    [FONT_BLUE]  = {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_GRAY},
};

static const struct WindowTemplate sCallCancelWindowTemplate = {
    .bg = 0,
    .tilemapLeft = 22,
    .tilemapTop = 7,
    .width = 7,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 0x0163,
};

static const struct WindowTemplate sYesNoWindowTemplate = {
    .bg = 0,
    .tilemapLeft = 23,
    .tilemapTop = 9,
    .width = 6,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x0163,  
};

static const struct ListMenuTemplate sMusicTrackListMenuTemplate =
{
    .items = NULL,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 0,
    .maxShowed = MUSIC_TRACK_MAX_SHOWN_LIMIT,
    .windowId = MP3_WINDOW_LIST,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = TEXT_COLOR_DARK_GRAY,
    .fillValue = TEXT_COLOR_TRANSPARENT,
    .cursorShadowPal = TEXT_COLOR_LIGHT_GRAY,
    .lettersSpacing = 1,
    .itemVerticalPadding = 2,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_SHORT,
    .cursorKind = 0
};

static const struct SpriteSheet sSpriteSheet_IconTiles =
{
    .data = sIconTiles,
    .size = 0x800,
    .tag = TAG_ICONS,
};

static const union AnimCmd sSpriteAnim_IconClock[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_IconPhone[] =
{
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_IconRadio[] =
{
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_IconWrench[] =
{
    ANIMCMD_FRAME(48, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_Icons[] =
{
    sSpriteAnim_IconClock,
    sSpriteAnim_IconPhone,
    sSpriteAnim_IconRadio,
    sSpriteAnim_IconWrench,
};

static const struct OamData sOamData_Icons =
{
    .size = 2,
    .priority = 1
};

static const struct SpriteTemplate sSpriteTemplate_Icons = {
    .tileTag = TAG_ICONS,
    .paletteTag = TAG_ICONS,
    .oam = &sOamData_Icons,
    .anims = sSpriteAnimTable_Icons,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_Icons
};

static const struct SpritePalette gSpritePalette_MusicPlayerMenuSprites =
{
    .data = sMenuSpritesPalette,
    .tag = TAG_ICONS
};

static const struct SpriteSheet sSpriteSheet_DigitTiles =
{
    .data = sDigitTiles,
    .size = 2176,
    .tag = TAG_DIGITS,
};

static const union AnimCmd sSpriteAnim_Digit0[] =
{
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit1[] =
{
    ANIMCMD_FRAME(4, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit2[] =
{
    ANIMCMD_FRAME(8, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit3[] =
{
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit4[] =
{
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit5[] =
{
    ANIMCMD_FRAME(20, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit6[] =
{
    ANIMCMD_FRAME(24, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit7[] =
{
    ANIMCMD_FRAME(28, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit8[] =
{
    ANIMCMD_FRAME(32, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Digit9[] =
{
    ANIMCMD_FRAME(36, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_DigitOff[] =
{
    ANIMCMD_FRAME(40, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_ColonOff[] =
{
    ANIMCMD_FRAME(44, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_ColonOn[] =
{
    ANIMCMD_FRAME(48, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_AM[] =
{
    ANIMCMD_FRAME(52, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_PM[] =
{
    ANIMCMD_FRAME(56, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_AMPMOff[] =
{
    ANIMCMD_FRAME(60, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Point[] =
{
    ANIMCMD_FRAME(64, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_Digits[] =
{
    sSpriteAnim_Digit0,
    sSpriteAnim_Digit1,
    sSpriteAnim_Digit2,
    sSpriteAnim_Digit3,
    sSpriteAnim_Digit4,
    sSpriteAnim_Digit5,
    sSpriteAnim_Digit6,
    sSpriteAnim_Digit7,
    sSpriteAnim_Digit8,
    sSpriteAnim_Digit9,
    sSpriteAnim_DigitOff,
    sSpriteAnim_ColonOff,
    sSpriteAnim_ColonOn,
    sSpriteAnim_AM,
    sSpriteAnim_PM,
    sSpriteAnim_AMPMOff,
    sSpriteAnim_Point,
};

static const struct OamData sOamData_Digits =
{
    .y = 0,
    .affineMode = 0,
    .objMode = 0,
    .mosaic = 0,
    .bpp = 0,
    .shape = 0,
    .x = 0,
    .matrixNum = 0,
    .size = 1,
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct SpriteTemplate sSpriteTemplate_Digits = {
    .tileTag = TAG_DIGITS,
    .paletteTag = TAG_ICONS,
    .oam = &sOamData_Digits,
    .anims = sSpriteAnimTable_Digits,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteSheet sSpriteSheet_PhoneSignal = {
    .data = sPhoneSignalIconGfx,
    .size = 0x200,
    .tag = TAG_PHONE_SIGNAL,
};

static const struct SpritePalette sSpritePalette_PhoneSignal =
{
    .data = sPhoneSignalIconPalette,
    .tag = TAG_PHONE_SIGNAL
};

static const union AnimCmd sSpriteAnim_Signal0[] = {
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Signal1[] = {
    ANIMCMD_FRAME(4, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Signal2[] = {
    ANIMCMD_FRAME(8, 5),
    ANIMCMD_END
};

static const union AnimCmd sSpriteAnim_Signal3[] = {
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_PhoneSignal[] =
{
    sSpriteAnim_Signal0,
    sSpriteAnim_Signal1,
    sSpriteAnim_Signal2,
    sSpriteAnim_Signal3
};

static const struct OamData sOamData_PhoneSignal = {
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = 0,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(16x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(16x16),
    .tileNum = 0,
    .priority = 0,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct SpriteTemplate sSpriteTemplate_PhoneSignal = {
    .tileTag = TAG_PHONE_SIGNAL,
    .paletteTag = TAG_PHONE_SIGNAL,
    .oam = &sOamData_PhoneSignal,
    .anims = sSpriteAnimTable_PhoneSignal,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

#define DEFAULT_WILD_BATTLE_MUSIC      IS_FRLG ? MUS_TPPE_VS_WILD : MUS_WLD_VS_WILD
#define DEFAULT_TRAINER_BATTLE_MUSIC   IS_FRLG ? MUS_ZGS_VS_TRAINER : MUS_ZGS_VS_AYA_REMATCH
#define DEFAULT_GYM_BATTLE_MUSIC       IS_FRLG ? MUS_ZGS_VS_GYM_LEADER : MUS_ZGS_VS_EIKI
#define DEFAULT_ELITE_4_BATTLE_MUSIC   IS_FRLG ? MUS_ZGS_VS_GYM_LEADER : MUS_VS_ELITE_FOUR
#define DEFAULT_CHAMPION_BATTLE_MUSIC  IS_FRLG ? MUS_ZGS_VS_CHAMPION : MUS_ZGS_VS_MARISA_REMATCH
#define DEFAULT_SURF_MUSIC             IS_FRLG ? MUS_ZGS_SURF : MUS_WLD_SURF
#define DEFAULT_BIKE_MUSIC             IS_FRLG ? MUS_ZGS_CYCLING : MUS_CYCLING

static const struct PlaylistMusicList sPlaylistMusicList[PLAYLIST_SET_STYLE_COUNT] =
{
    [PLAYLIST_SET_STYLE_DEFAULT] =
    {
        .wildBattleMusic = DEFAULT_WILD_BATTLE_MUSIC,
        .trainerBattleMusic = DEFAULT_TRAINER_BATTLE_MUSIC,
        .gymLeaderBattleMusic = DEFAULT_GYM_BATTLE_MUSIC,
        .eliteFourBattleMusic = DEFAULT_ELITE_4_BATTLE_MUSIC,
        .championBattleMusic = DEFAULT_CHAMPION_BATTLE_MUSIC,
        .surfMusic = DEFAULT_SURF_MUSIC,
        .bikeMusic = DEFAULT_BIKE_MUSIC,
    },
    [PLAYLIST_SET_STYLE_REGULAR] =
    {
        .wildBattleMusic = MUS_WLD_VS_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_AYA_REMATCH,
        .gymLeaderBattleMusic = MUS_ZGS_VS_EIKI,
        .eliteFourBattleMusic = MUS_VS_ELITE_FOUR,
        .championBattleMusic = MUS_ZGS_VS_MARISA_REMATCH,
        .surfMusic = MUS_WLD_SURF,
        .bikeMusic = MUS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ZGS] =
    {
        .wildBattleMusic = MUS_ZGS_VS_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE] =
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_BYAKUREN,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_REIMU,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
    [PLAYLIST_SET_STYLE_ALTERNATE2] = // placeholder
    {
        .wildBattleMusic = MUS_ZGS_VS_DREAM_WILD,
        .trainerBattleMusic = MUS_ZGS_VS_DREAM_TRAINER,
        .gymLeaderBattleMusic = MUS_ZGS_VS_GYM_LEADER,
        .eliteFourBattleMusic = MUS_ZGS_VS_SAKUYA,
        .championBattleMusic = MUS_ZGS_VS_CHAMPION,
        .surfMusic = MUS_ZGS_SURF,
        .bikeMusic = MUS_ZGS_CYCLING,
    },
};

const struct MP3PlayerTrackInfo gMP3PlayerTrackInfo[MUSIC_TRACK_COUNT] =
{
    [MUSIC_TRACK_ZGS_VS_WILD] =
    {
        .name = COMPOUND_STRING("Vs. Wild (ZGS)"),
        .trackId = MUS_ZGS_VS_WILD,
    },
    [MUSIC_TRACK_ZGS_VS_TRAINER] =
    {
        .name = COMPOUND_STRING("Vs. Trainer (ZGS)"),
        .trackId = MUS_ZGS_VS_TRAINER,
    },
    [MUSIC_TRACK_ZGS_VS_CHAMPION] =
    {
        .name = COMPOUND_STRING("Vs. Champion (ZGS)"),
        .trackId = MUS_ZGS_VS_CHAMPION,
    },
    [MUSIC_TRACK_ZGS_VICTORY_WILD] =
    {
        .name = COMPOUND_STRING("Victory Wild (ZGS)"),
        .trackId = MUS_ZGS_VICTORY_WILD,
    },
    [MUSIC_TRACK_ZGS_VICTORY_TRAINER] =
    {
        .name = COMPOUND_STRING("Victory Trainer (ZGS)"),
        .trackId = MUS_ZGS_VICTORY_TRAINER,
    },
};

static inline const u8 *GetMP3PlayerTrackName(u32 musicTrack)
{
    return gMP3PlayerTrackInfo[musicTrack].name;
}

static inline u16 GetMP3PlayerTrackId(u32 musicTrack)
{
    return gMP3PlayerTrackInfo[musicTrack].trackId;
}

bool32 IsMP3PlayerOn(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn;
}

bool32 IsOverridingBattleMusic(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic;
}

bool32 IsOverridingBikeMusic(void)
{
    return gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic;
}

static void ClearOrDrawTopBar(bool8 clear)
{
    if (!clear)
    {
        PutWindowTilemap(MP3_WINDOW_HEADER);
    }
    else
    {
        ClearWindowTilemap(MP3_WINDOW_HEADER);
    }
}

void MP3Player_Init(MainCallback callback)
{
    if ((sMP3PlayerDataPtr = AllocZeroed(sizeof(struct MP3PlayerResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    // initialize stuff
    sMP3PlayerDataPtr->gfxLoadState = 0;
    sMP3PlayerDataPtr->savedCallback = callback;
    sMP3PlayerDataPtr->menuMode = MP3_MENU_MAIN;

    SetMainCallback2(MP3Player_RunSetup);
}

static void MP3Player_RunSetup(void)
{
    while (TRUE)
    {
        if (MP3Player_DoGfxSetup() == TRUE)
            break;
    }
}

static void MP3Player_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void MP3Player_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(MP3_BG_3, 96, BG_COORD_ADD);
    ChangeBgY(MP3_BG_3, 96, BG_COORD_ADD);
}

static bool8 MP3Player_DoGfxSetup(void)
{
    u8 newTask;

    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (MP3Player_InitBgs())
        {
            sMP3PlayerDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            MP3Player_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (MP3Player_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        MP3Player_InitWindows();
        gMain.state++;
        break;
    case 5:
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
        sMP3PlayerDataPtr->exiting = FALSE;
        newTask = CreateTask(Task_MP3PlayerWaitFadeIn, 0);
        gTasks[newTask].data[0] = 0;
        LoadTabSprites(newTask);
        ClearOrDrawTopBar(FALSE);
        ShowHelpBar(gText_ClockCardHelp);
        ScheduleBgCopyTilemapToVram(MP3_BG_1);
        SetGpuReg(REG_OFFSET_BG1HOFS, 512 - CARD_SLIDE_RIGHT_X);
        LoadTabBgs(MP3_MENU_MAIN);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(MP3Player_VBlankCB);
        SetMainCallback2(MP3Player_MainCB);
        return TRUE;
    }
    return FALSE;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void MP3Player_FreeResources(void)
{
    try_free(sMP3PlayerDataPtr->mp3PlayerMusicNames);
    try_free(sMP3PlayerDataPtr->mp3PlayerItems);
    try_free(sMP3PlayerDataPtr->mp3PlayerMusicIDs);
    try_free(sMP3PlayerDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(sBg2TilemapBuffer);
    FreeAllWindowBuffers();
}

static void Task_MP3PlayerWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMP3PlayerDataPtr->savedCallback);
        MP3Player_FreeResources();
        DestroyTask(taskId);
    }
}

static void MP3Player_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MP3PlayerWaitFadeAndBail, 0);
    SetVBlankCallback(MP3Player_VBlankCB);
    SetMainCallback2(MP3Player_MainCB);
}

static bool8 MP3Player_InitBgs(void)
{
    ResetAllBgsCoordinates();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMP3PlayerBgTemplates, NELEMS(sMP3PlayerBgTemplates));
    sBg1TilemapBuffer = AllocZeroed(BG_SCREEN_SIZE);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;

    SetBgTilemapBuffer(MP3_BG_3, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(MP3_BG_3);

    sBg2TilemapBuffer = AllocZeroed(BG_SCREEN_SIZE * 2);
    if (sBg2TilemapBuffer == NULL)
        return FALSE;

    SetBgTilemapBuffer(MP3_BG_2, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(MP3_BG_2);

    ShowBg(MP3_BG_1);
    ShowBg(MP3_BG_2);
    ShowBg(MP3_BG_3);
    return TRUE;
}

static void LoadTabBgs(u32 newTab)
{
    HideBg(MP3_BG_2);
    try_free(sBg2TilemapBuffer);

    sBg2TilemapBuffer = AllocZeroed(BG_SCREEN_SIZE * 2);

    SetBgTilemapBuffer(MP3_BG_2, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(MP3_BG_2);

    switch (newTab)
    {
    default:
    case MP3_MENU_MAIN:
        DecompressDataWithHeaderVram(gClockCardTilemap, sBg2TilemapBuffer);
        break;
    case MP3_MENU_PLAY_MUSIC:
        DecompressDataWithHeaderVram(gPhoneCardTilemap, sBg2TilemapBuffer);
        break;
    case MP3_MENU_RADIO:
        DecompressDataWithHeaderVram(gRadioCardTilemap, sBg2TilemapBuffer);
        break;
    }
    ShowBg(MP3_BG_2);
}

static void ShowHelpBar(const u8 *string)
{
    FillWindowPixelBuffer(MP3_WINDOW_HEADER, PIXEL_FILL(TEXT_DYNAMIC_COLOR_6));
    AddTextPrinterParameterized3(MP3_WINDOW_HEADER, 0, GetStringRightAlignXOffset(0, string, 240) - 4, 0, sMenuWindowFontColors[MP3_COLOR_HEADER], 0, string);
    CopyWindowToVram(MP3_WINDOW_HEADER, 2);
}

#define tState data[0]
#define tCounter data[1]

#define tState data[0]
#define tNewCard data[1]
#define tCurrentPos data[2]
#define tIconSprites(n) data[3 + n]

#define tState data[0]
#define tNewCard data[1]
#define tCurrentPos data[2]
#define tIconSprites(n) data[3 + n]

static void LoadTabSprites(u8 taskId)
{
    u8 i, spriteId;

    LoadSpriteSheet(&sSpriteSheet_IconTiles);
    LoadSpritePalette(&gSpritePalette_MusicPlayerMenuSprites);

    for (i = 0; i < MP3_MENU_COUNT; i++)
    {
        u8 anim;

        spriteId = CreateSprite(&sSpriteTemplate_Icons, -24, i * 32 + 32, 0);
        gTasks[taskId].tIconSprites(i) = spriteId;
        gSprites[spriteId].tState = 0;
        switch (i)
        {
        case MP3_MENU_MAIN:
            anim = 0;
            gSprites[spriteId].x += 8;
            break;
        case MP3_MENU_PLAY_MUSIC:
            anim = 1;
            break;
        case MP3_MENU_RADIO:
            if (!FlagGet(FLAG_SYS_HAS_RADIO_CARD))
                gSprites[spriteId].invisible = TRUE;
            anim = 2;
            break;
        }
        StartSpriteAnim(&gSprites[spriteId], anim);
    }
}

static void SpriteCB_Icons(struct Sprite *sprite)
{
    switch (sprite->tState)
    {
    case 0: // slide on Pokegear init
        if (sprite->tCounter < 32)
        {
            sprite->x += ICON_SLIDE_SPEED;
            sprite->tCounter += ICON_SLIDE_SPEED;
        }
        else
        {
            sprite->tCounter = 0;
            sprite->tState = 3;
        }
        break;
    case 1: // sliding out
        if (sprite->x < 16)
        {
            sprite->x += 2;
        }
        else
        {
            sprite->tState = 3;
        }
        break;
    case 2: // sliding in
        if (sprite->x > 8)
        {
            sprite->x -= 2;
        }
        else
        {
            sprite->tState = 3;
        }
        break;
    case 3: // done
        break;
    }
}

static u8 ChangeCardWithDelta(s8 delta, u8 oldCard)
{
    int newCard = oldCard + delta;

    while (TRUE)
    {
        if (newCard < 0 || newCard >= MP3_MENU_COUNT)
        {
            newCard = oldCard;
            break;
        }
        
        if ((newCard == MP3_MENU_RADIO && !FlagGet(FLAG_SYS_HAS_RADIO_CARD)))
        {
            newCard += delta;
        }
        else
        {
            break;
        }
    }

    return newCard;
}

static void Task_SwapCards(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u8 newCard = tNewCard;

    if (JOY_NEW(START_BUTTON))
    {
        newCard = ChangeCardWithDelta(-1, tNewCard);
    }
    else if (JOY_NEW(SELECT_BUTTON))
    {
        newCard = ChangeCardWithDelta(1, tNewCard);
    }

    if (tNewCard != newCard)
    {
        PlaySE(SE_SELECT);
        if (tState > 1)
        {
            tState = 0;
        }
        sMP3PlayerDataPtr->menuMode = tNewCard;
        tNewCard = newCard;
    }

    switch (tState)
    {
        case 0:
            tCurrentPos = 0;
            gSprites[tIconSprites(sMP3PlayerDataPtr->menuMode)].data[0] = 2;
            tState++;
        case 1:
            tCurrentPos += CARD_SLIDE_SPEED;
            if (tCurrentPos < CARD_SLIDE_RIGHT_X)
            {
                SetGpuReg(REG_OFFSET_BG1HOFS, 512 - tCurrentPos);
            }
            else
            {
                tCurrentPos = CARD_SLIDE_RIGHT_X;
                SetGpuReg(REG_OFFSET_BG1HOFS, 512 - CARD_SLIDE_RIGHT_X);
                gSprites[tIconSprites(tNewCard)].data[0] = 1;
                sMP3PlayerDataPtr->menuMode = tNewCard;
                LoadTabBgs(tNewCard);
                tState++;
            }
            break;
        case 2:
            tCurrentPos -= CARD_SLIDE_SPEED;
            if (tCurrentPos > 0)
            {
                SetGpuReg(REG_OFFSET_BG1HOFS, 512 - tCurrentPos);
            }
            else
            {
                SetGpuReg(REG_OFFSET_BG1HOFS, 0);
                LoadCard(tNewCard);
                gTasks[taskId].func = Task_Pokegear3;
            }
            break;
    }
}

static void LoadCard(enum MP3Menus menu)
{
    switch (menu)
    {
    default:
    case MP3_MENU_MAIN:
        LoadClockCard();
        break;
    case MP3_MENU_PLAY_MUSIC:
        LoadMP3PlayerCard();
        break;
    case MP3_MENU_RADIO:
        LoadRadioCard();
        break;
    }
}

static void UnloadCard(enum MP3Menus menu)
{
    switch (menu)
    {
    default:
    case MP3_MENU_MAIN:
        UnloadClockCard();
        break;
    case MP3_MENU_PLAY_MUSIC:
        UnloadMP3PlayerCard();
        break;
    case MP3_MENU_RADIO:
        UnloadRadioCard();
        break;
    }
}

#define tListMenuTaskId data[0]
#define tScrollTaskId   data[1]
#define tSignalSpriteId data[2]

static void LoadMusicTrackList(u8 taskId)
{
    struct ListMenuTemplate menuTemplate = sMusicTrackListMenuTemplate;
    menuTemplate.items = sMP3PlayerDataPtr->mp3PlayerItems;
    menuTemplate.totalItems = sMP3PlayerDataPtr->musicTrackCount;
    SetCursorWithinListBounds(&sMP3PlayerDataPtr->musicScrollOffset, &sMP3PlayerDataPtr->musicSelectedItem, menuTemplate.maxShowed, sMP3PlayerDataPtr->musicTrackCount);
    gTasks[taskId].tListMenuTaskId = ListMenuInit(&menuTemplate, sMP3PlayerDataPtr->musicScrollOffset, sMP3PlayerDataPtr->musicSelectedItem);
}

static void LoadMP3PlayerCard(void)
{
    u8 newTask = CreateTask(Task_PhoneCard, 0);
    s16 *data = gTasks[newTask].data;
    u8 animNum = 3;

    ShowHelpBar(gText_PhoneCardHelp1);
    LoadMusicTrackList(newTask);
    DisplayPhoneCardDefaultText();
    tScrollTaskId = TASK_NONE;

    LoadSpriteSheet(&sSpriteSheet_PhoneSignal);
    LoadSpritePalette(&sSpritePalette_PhoneSignal);
    tSignalSpriteId = CreateSprite(&sSpriteTemplate_PhoneSignal, 220, 40, 0);

    animNum = 0;
    /*
    if (!MapAllowsMatchCall())
    {
        animNum = 0;
    }
    else
    {
        switch (gMapHeader.mapType)
        {
        case MAP_TYPE_UNDERGROUND:
        case MAP_TYPE_UNDERWATER:
            animNum = 1;
            break;
        case MAP_TYPE_INDOOR:
        case MAP_TYPE_SECRET_BASE:
            animNum = 2;
            break;
        default:
            animNum = 3;
            break;
        }
    }
    */

    StartSpriteAnim(&gSprites[tSignalSpriteId], animNum);

    PhoneCard_AddScrollIndicators(newTask);
}

static void DisplayPhoneCardDefaultText(void)
{
    DrawStdFrameWithCustomTileAndPalette(MP3_WINDOW_DESCRIPTION, FALSE, MENU_FRAME_BASE_TILE_NUM, MENU_FRAME_PALETTE_NUM);
    AddTextPrinterParameterized5(MP3_WINDOW_DESCRIPTION, 2, gText_PokegearWhomDoYouWantToCall, 0, 1, 0, NULL, 1, 1);
    ScheduleBgCopyTilemapToVram(0);
}

static void PhoneCard_AddScrollIndicators(u8 taskId)
{
    if (sMP3PlayerDataPtr->musicTrackCount > MUSIC_TRACK_MAX_SHOWN_LIMIT && gTasks[taskId].tScrollTaskId == 0xFF)
        gTasks[taskId].tScrollTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP,
                                                                                206,
                                                                                40,
                                                                                104,
                                                                                sMP3PlayerDataPtr->musicTrackCount - MUSIC_TRACK_MAX_SHOWN_LIMIT,
                                                                                0x13F8,
                                                                                0x13F8,
                                                                                &sMP3PlayerDataPtr->musicScrollOffset);
}

static void PhoneCard_RemoveScrollIndicators(u8 taskId)
{
    if (gTasks[taskId].tScrollTaskId != 0xFF)
    {
        RemoveScrollIndicatorArrowPair(gTasks[taskId].tScrollTaskId);
        gTasks[taskId].tScrollTaskId = 0xFF;
    }
}

static void Task_PhoneCard(u8 taskId)
{
    int input;
    if (sMP3PlayerDataPtr->exiting)
        return;

    input = ListMenu_ProcessInput(gTasks[taskId].tListMenuTaskId);
    ListMenuGetScrollAndRow(gTasks[taskId].tListMenuTaskId, &sMP3PlayerDataPtr->musicScrollOffset, &sMP3PlayerDataPtr->musicSelectedItem);
    switch (input)
    {
    case LIST_NOTHING_CHOSEN:
    case LIST_CANCEL:
        break;
    default:
        PlaySE(SE_SELECT);
        PhoneCard_ConfirmCall(taskId);
        break;
    }
}

static const struct MenuAction sCallOptions[] =
{
    {COMPOUND_STRING("Play"), {PhoneCard_PlaceCall}},
    {COMPOUND_STRING("Register"), {PhoneCard_DeleteEntry}},
    {COMPOUND_STRING("Cancel"), {PhoneCard_ReturnToMain}}
};

static void PhoneCard_ConfirmCall(u8 taskId)
{
    sMP3PlayerDataPtr->canSwitchCards = FALSE;
    ShowHelpBar(gText_UpDownPickAOk);
    PhoneCard_RemoveScrollIndicators(taskId);

    sMP3PlayerDataPtr->musicTrackActionWindowId = AddWindow(&sCallCancelWindowTemplate);
    DrawStdFrameWithCustomTileAndPalette(sMP3PlayerDataPtr->musicTrackActionWindowId, FALSE, MENU_FRAME_BASE_TILE_NUM, MENU_FRAME_PALETTE_NUM);
    PrintMenuActionTextsWithSpacing(sMP3PlayerDataPtr->musicTrackActionWindowId, FONT_SHORT, GetMenuCursorDimensionByFont(1, 0), 1, 16, ARRAY_COUNT(sCallOptions), sCallOptions, 0, 2);
    InitMenuInUpperLeftCornerNormal(sMP3PlayerDataPtr->musicTrackActionWindowId, ARRAY_COUNT(sCallOptions), 0);

    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = PhoneCard_ConfirmCallProcessInput;
}

static void PhoneCard_ConfirmCallProcessInput(u8 taskId)
{
    s8 input = Menu_ProcessInputNoWrap();
    switch (input)
    {
    case MENU_NOTHING_CHOSEN:
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(sMP3PlayerDataPtr->musicTrackActionWindowId, FALSE);
        RemoveWindow(sMP3PlayerDataPtr->musicTrackActionWindowId);
        PutWindowTilemap(MP3_WINDOW_LIST);
        PhoneCard_ReturnToMain(taskId);
        break;
    default:
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(sMP3PlayerDataPtr->musicTrackActionWindowId, FALSE);
        RemoveWindow(sMP3PlayerDataPtr->musicTrackActionWindowId);
        PutWindowTilemap(MP3_WINDOW_LIST);
        gTasks[taskId].func = sCallOptions[input].func.void_u8;
        break;
    }
}

static void PhoneCard_ReturnToMain(u8 taskId)
{
    ShowHelpBar(gText_PhoneCardHelp1);
    PhoneCard_AddScrollIndicators(taskId);
    DisplayPhoneCardDefaultText();
    sMP3PlayerDataPtr->canSwitchCards = TRUE;
    gTasks[taskId].func = Task_PhoneCard;
}

static void PlayAndSaveMusic(u16 song)
{
    Overworld_SetSavedMusic(song);
    PlayNewMapMusic(song);
}

static void PhoneCard_PlaceCall(u8 taskId)
{
    PlayAndSaveMusic(sMP3PlayerDataPtr->mp3PlayerMusicIDs[sMP3PlayerDataPtr->musicSelectedItem + sMP3PlayerDataPtr->musicScrollOffset]);
    gTasks[taskId].func = PhoneCard_ReturnToMain;
}

static void PhoneCard_ConfirmDeleteProcessInput(u8 taskId)
{
    s8 input = Menu_ProcessInputNoWrap();

    switch (input)
    {
    case MENU_B_PRESSED:
    case 1:
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(sMP3PlayerDataPtr->musicTrackActionWindowId, FALSE);
        RemoveWindow(sMP3PlayerDataPtr->musicTrackActionWindowId);
        PutWindowTilemap(MP3_WINDOW_LIST);
        PhoneCard_ReturnToMain(taskId);
        break;
    case 0:
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(sMP3PlayerDataPtr->musicTrackActionWindowId, FALSE);
        RemoveWindow(sMP3PlayerDataPtr->musicTrackActionWindowId);
        //FlagClear(gPhoneContacts[sMP3PlayerDataPtr->phoneContactIds[sMP3PlayerDataPtr->musicSelectedItem + sMP3PlayerDataPtr->musicScrollOffset]].registeredFlag);
        InitMP3PlayerData();
        DestroyListMenuTask(gTasks[taskId].tListMenuTaskId, &sMP3PlayerDataPtr->musicScrollOffset, &sMP3PlayerDataPtr->musicSelectedItem);
        LoadMusicTrackList(taskId);
        PutWindowTilemap(MP3_WINDOW_LIST);
        PhoneCard_ReturnToMain(taskId);
        break;
    }
}
static void PhoneCard_DeleteEntry(u8 taskId)
{
    ShowHelpBar(gText_ANext);
    FillWindowPixelBuffer(MP3_WINDOW_DESCRIPTION, 0x11);
    AddTextPrinterParameterized5(MP3_WINDOW_DESCRIPTION, 2, gText_PokegearDeleteThisStoredPhoneNumber, 0, 1, 0, NULL, 1, 1);
    CreateYesNoMenu(&sYesNoWindowTemplate, MENU_FRAME_BASE_TILE_NUM, MENU_FRAME_PALETTE_NUM, 0);
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = PhoneCard_ConfirmDeleteProcessInput;
}

static void UnloadMP3PlayerCard(void)
{
    u8 taskId = FindTaskIdByFunc(Task_PhoneCard);
    s16 *data = gTasks[taskId].data;

    FreeSpriteTilesByTag(TAG_PHONE_SIGNAL);
    FreeSpritePaletteByTag(TAG_PHONE_SIGNAL);
    if (tSignalSpriteId != MAX_SPRITES)
    {
        DestroySprite(&gSprites[tSignalSpriteId]);
        tSignalSpriteId = MAX_SPRITES;
    }

    PhoneCard_RemoveScrollIndicators(taskId);
    ClearStdWindowAndFrameToTransparent(MP3_WINDOW_DESCRIPTION, TRUE);
    ClearStdWindowAndFrameToTransparent(MP3_WINDOW_LIST, TRUE);
    DestroyListMenuTask(tListMenuTaskId, NULL, NULL);

    DestroyTask(taskId);
}

#undef tListMenuTaskId
#undef tScrollTaskId
#undef tSignalSpriteId

#define tRadioShowTaskId data[0]

#define tShowNameId data[0]
#define tWindowId data[1]
#define tCurrentLine data[2]

#define tPosition data[0]
#define tStoredVal data[1]

static void LoadRadioCard(void)
{
    static const u8 radioX[6] = {
        114, 128, 142, 150, 159
    };

    int i;
    u8 newTask, spriteId;
    
    ShowHelpBar(gText_RadioCardHelp);
    DrawStdFrameWithCustomTileAndPalette(MP3_WINDOW_DESCRIPTION, FALSE, MENU_FRAME_BASE_TILE_NUM, MENU_FRAME_PALETTE_NUM);
    FillWindowPixelBuffer(MP3_WINDOW_DESCRIPTION, 0x11);
    CopyWindowToVram(MP3_WINDOW_DESCRIPTION, 2);
    PutWindowTilemap(MP3_WINDOW_STATION);
    FillWindowPixelBuffer(MP3_WINDOW_STATION, 0x00);
    CopyWindowToVram(MP3_WINDOW_STATION, 2);
    ScheduleBgCopyTilemapToVram(0);

    LoadSpriteSheet(&sSpriteSheet_DigitTiles);

    newTask = CreateTask(Task_RadioCard, 0);

    gTasks[newTask].tRadioShowTaskId = 0xFF;

    UpdateRadioStation(newTask, sMP3PlayerDataPtr->currentRadioStation);
    PlayNewMapMusic(MUS_DUMMY);
    Overworld_SetSavedMusic(MUS_DUMMY);

    for (i = 0; i < 5; i++)
    {
        spriteId = CreateSprite(&sSpriteTemplate_Digits, radioX[i], 52, 0);
        gSprites[spriteId].tPosition = i;
        gSprites[spriteId].callback = SpriteCB_RadioDigits;
        gTasks[newTask].data[i + 1] = spriteId;
    }
}

static void SpriteCB_RadioDigits(struct Sprite* sprite)
{
    u8 value;
    u8 station = sMP3PlayerDataPtr->currentRadioStation + 1;
    u8 stationMajor = station >> 1;

    switch (sprite->tPosition)
    {
        case 0:
            value = stationMajor / 100 + 1;
            break;
        case 1:
            value = (stationMajor / 10) % 10 + 1;
            break;
        case 2:
            value = stationMajor % 10 + 1;
            break;
        case 3:
            value = 16;
            break;
        case 4:
            value = station & 1 ? 6 : 1;
            break;
        default:
            value = 0;
            break;
    }

    if (sprite->tStoredVal != value)
    {
        sprite->tStoredVal = value;
        StartSpriteAnim(sprite, value);
    }
}

static void ClearRadioWindows(void)
{
    FillWindowPixelBuffer(MP3_WINDOW_STATION, 0);
    CopyWindowToVram(MP3_WINDOW_STATION, 2);
    FillWindowPixelBuffer(MP3_WINDOW_DESCRIPTION, 0x11);
    CopyWindowToVram(MP3_WINDOW_DESCRIPTION, 2);
}

static void UpdateRadioStation(u8 taskId, u8 frequency)
{
    const struct RadioStation *station;
    u8 region = GetCurrentPokemonRegion();

    for (station = gRadioStationData; station->frequency != 0xFF; station++)
    {
        if (station->frequency == frequency && station->region == region)
            break;
    }

    if (gTasks[taskId].tRadioShowTaskId != 0xFF)
    {
        DestroyTask(gTasks[taskId].tRadioShowTaskId);
        gTasks[taskId].tRadioShowTaskId = 0xFF;
        ClearRadioWindows();
        PlayNewMapMusic(MUS_DUMMY);
        Overworld_SetSavedMusic(MUS_DUMMY);
    }

    if (station->frequency != 0xFF)
    {
        u8 showId = station->loadFunc();

        if (showId != NO_RADIO_SHOW)
        {
            u8 radioShowTaskId = CreateTask(Task_PlayRadioShow, 80);

            gTasks[radioShowTaskId].tWindowId = MP3_WINDOW_DESCRIPTION;
            gTasks[radioShowTaskId].tCurrentLine = showId;
            gTasks[radioShowTaskId].tShowNameId = NO_RADIO_SHOW;
            gTasks[taskId].tRadioShowTaskId = radioShowTaskId;

            ClearRadioWindows();
        }
        else
        {
            gTasks[taskId].tRadioShowTaskId = 0xFF;
        }
    }
    else
    {
        gTasks[taskId].tRadioShowTaskId = 0xFF;
    }
}

static void Task_RadioCard(u8 taskId)
{
    u8 station;
    if (sMP3PlayerDataPtr->exiting)
    {
        if (gTasks[taskId].tRadioShowTaskId != 0xFF)
        {
            DestroyTask(gTasks[taskId].tRadioShowTaskId);
            gTasks[taskId].tRadioShowTaskId = 0xFF;
        }
        return;
    }

    station = sMP3PlayerDataPtr->currentRadioStation;
    if (JOY_REPEAT(DPAD_RIGHT))
    {
        station++;
    }
    else if (JOY_REPEAT(DPAD_LEFT))
    {
        station--;
    }

    if (station != sMP3PlayerDataPtr->currentRadioStation && station <= RADIO_FREQ(20.5)) // limit station between 0.5 and 20.5
    {
        PlaySE(SE_BALL_TRAY_EXIT);
        UpdateRadioStation(taskId, station);
        sMP3PlayerDataPtr->currentRadioStation = station;
    }

    if (gTasks[taskId].tRadioShowTaskId != 0xFF)
    {
        u8 showNameId = gTasks[gTasks[taskId].tRadioShowTaskId].tShowNameId;
        if (showNameId != 0xFF)
        {
            if (showNameId != NO_RADIO_SHOW)
            {
                AddTextPrinterParameterized3(MP3_WINDOW_STATION,
                                             2,
                                             GetStringCenterAlignXOffset(2, gRadioShowNames[showNameId], 0x70),
                                             5,
                                             sMenuWindowFontColors[MP3_COLOR_WHITE],
                                             0,
                                             gRadioShowNames[showNameId]);
            }
            else
            {
                ClearRadioWindows();
            }
            gTasks[gTasks[taskId].tRadioShowTaskId].tShowNameId = 0xFF;
        }
    }
}

static void UnloadRadioCard(void)
{
    u8 taskId = FindTaskIdByFunc(Task_RadioCard);
    int i;

    ClearStdWindowAndFrameToTransparent(MP3_WINDOW_DESCRIPTION, TRUE);
    
    FillWindowPixelBuffer(MP3_WINDOW_STATION, 0);
    ClearWindowTilemap(MP3_WINDOW_STATION);
    CopyWindowToVram(MP3_WINDOW_STATION, 2);

    if (IsBGMStopped())
        Overworld_PlaySpecialMapMusic();

    FreeSpriteTilesByTag(TAG_DIGITS);
    
    for (i = 0; i < 5; i++)
    {
        DestroySprite(&gSprites[gTasks[taskId].data[i + 1]]);
    }

    if (gTasks[taskId].tRadioShowTaskId != 0xFF)
    {
        DestroyTask(gTasks[taskId].tRadioShowTaskId);
    }

    DestroyTask(taskId);
}

static bool8 MP3Player_LoadGraphics(void)
{
    switch (sMP3PlayerDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(MP3_BG_2, sMP3PlayerBgTiles, 0, 0, 0);
        sMP3PlayerDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sMP3PlayerTilemap, sBg1TilemapBuffer);
            sMP3PlayerDataPtr->gfxLoadState++;
        }
        break;
    case 2:
        LoadPalette(sMP3PlayerBGPalette, BG_PLTT_ID(0), sizeof(sMP3PlayerBGPalette));
        LoadMessageBoxGfx(0, MENU_MESSAGE_BASE_TILE_NUM, BG_PLTT_ID(MENU_MESSAGE_PALETTE_NUM));
        LoadUserWindowBorderGfx(MP3_WINDOW_DESCRIPTION, MENU_FRAME_BASE_TILE_NUM, BG_PLTT_ID(MENU_FRAME_PALETTE_NUM));
        LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sMP3PlayerDataPtr->gfxLoadState++;
        break;
    default:
        sMP3PlayerDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void MP3Player_InitWindows(void)
{
    InitWindows(sMP3PlayerWindowTemplates);

    DeactivateAllTextPrinters();
}

static void InitMP3PlayerData(void)
{
    u32 i;
    u16 musicTracks[MUSIC_TRACK_COUNT];
    u32 musicTrackCount = 0;

    for (i = 0; i < MUSIC_TRACK_COUNT; i++)
    {
        musicTracks[musicTrackCount] = GetMP3PlayerTrackId(i);
        musicTrackCount++;
    }

    sMP3PlayerDataPtr->musicTrackCount = musicTrackCount;
    if (musicTrackCount > 0)
    {
        if (!sMP3PlayerDataPtr->mp3PlayerMusicNames)
        {
            sMP3PlayerDataPtr->mp3PlayerMusicNames = Alloc(musicTrackCount * MUSIC_TRACK_MAX_NAME_LENGTH);
        }

        if (!sMP3PlayerDataPtr->mp3PlayerItems)
        {
            sMP3PlayerDataPtr->mp3PlayerItems = Alloc(musicTrackCount * sizeof(struct ListMenuItem));
        }

        if (!sMP3PlayerDataPtr->mp3PlayerMusicIDs)
        {
            sMP3PlayerDataPtr->mp3PlayerMusicIDs = Alloc(musicTrackCount);
        }

        for (i = 0; i < musicTrackCount; i++)
        {
            struct ListMenuItem *item = &sMP3PlayerDataPtr->mp3PlayerItems[i];
            item->id = i;
            sMP3PlayerDataPtr->mp3PlayerMusicIDs[i] = musicTracks[i];
            StringCopy(sMP3PlayerDataPtr->mp3PlayerMusicNames + i * MUSIC_TRACK_MAX_NAME_LENGTH, GetMP3PlayerTrackName(i));
            item->name = sMP3PlayerDataPtr->mp3PlayerMusicNames + i * MUSIC_TRACK_MAX_NAME_LENGTH;
        }
    }
}

#define tDayOfWeek data[0]
#define tDigitSpriteIds(n) data[n + 1]

#define tPosition data[0]
#define tStoredVal data[1]

static void LoadClockCard(void)
{
    static const u8 clockX[6] = {
        108, 122, 130, 139, 153, 165
    };

    int i;
    u8 newTask, spriteId;
    const u8 *dayOfWeek = GetDayOfWeekString(GetDayOfWeek());
    ShowHelpBar(gText_ClockCardHelp);

    DrawStdFrameWithCustomTileAndPalette(MP3_WINDOW_DESCRIPTION, FALSE, MENU_FRAME_BASE_TILE_NUM, MENU_FRAME_PALETTE_NUM);
    PutWindowTilemap(MP3_WINDOW_WEEKDAY);
    AddTextPrinterParameterized2(MP3_WINDOW_DESCRIPTION, FONT_SHORT, gText_PokegearInstructions, 0, NULL, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_WHITE, TEXT_COLOR_LIGHT_GRAY);
    AddTextPrinterParameterized3(MP3_WINDOW_WEEKDAY, FONT_SHORT, GetStringCenterAlignXOffset(2, dayOfWeek, 0x70), 1, sMenuWindowFontColors[MP3_COLOR_WHITE], 0, dayOfWeek);
    ScheduleBgCopyTilemapToVram(MP3_BG_1);
    
    LoadSpriteSheet(&sSpriteSheet_DigitTiles);

    newTask = CreateTask(Task_ClockCard, 0);
    gTasks[newTask].tDayOfWeek = GetDayOfWeek();

    for (i = 0; i < 6; i++)
    {
        spriteId = CreateSprite(&sSpriteTemplate_Digits, clockX[i], 84, 0);
        gSprites[spriteId].tPosition = i;
        gSprites[spriteId].tStoredVal = -1; // causes initialization
        gSprites[spriteId].callback = SpriteCB_ClockDigits;
        gTasks[newTask].tDigitSpriteIds(i) = spriteId;
    }
}

static void Task_ClockCard(u8 taskId)
{
    int i;
    bool8 shouldForceUpdate = FALSE;

    RtcCalcLocalTime();

    // if emulator paused on Pokégear main menu, force update
    // don't check seconds because that just leads back to mistimed blinks again
    // also we don't even display seconds anyway
    if (sMP3PlayerDataPtr->cachedTime.minutes != gLocalTime.minutes ||
        sMP3PlayerDataPtr->cachedTime.hours != gLocalTime.hours ||
        sMP3PlayerDataPtr->cachedTime.days != gLocalTime.days)
    {
        sMP3PlayerDataPtr->cachedTime = gLocalTime;
        shouldForceUpdate = TRUE;
    }

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        gSaveBlock2Ptr->twentyFourHourClock = !gSaveBlock2Ptr->twentyFourHourClock;
        shouldForceUpdate = TRUE;
    }

    // only change day of week when clock gets an update
    if ((shouldForceUpdate || sMP3PlayerDataPtr->fakeSeconds == 0) && gTasks[taskId].tDayOfWeek != GetDayOfWeek())
    {
        const u8 *dayOfWeek = GetDayOfWeekString(GetDayOfWeek());
        gTasks[taskId].tDayOfWeek = GetDayOfWeek();
        FillWindowPixelBuffer(MP3_WINDOW_WEEKDAY, 0);
        AddTextPrinterParameterized3(MP3_WINDOW_WEEKDAY, 2, GetStringCenterAlignXOffset(2, dayOfWeek, 0x70), 1, sMenuWindowFontColors[MP3_COLOR_WHITE], 0, dayOfWeek);
    }
    
    if (shouldForceUpdate)
    {
        for (i = 0; i < 6; i++)
        {
            gSprites[gTasks[taskId].tDigitSpriteIds(i)].tStoredVal = -1; // queue sprites for immediate changeover
        }
    }
}

static void SpriteCB_ClockDigits(struct Sprite* sprite)
{
    u8 value = sprite->tStoredVal;

    if (sprite->tStoredVal == -1 || sMP3PlayerDataPtr->fakeSeconds == 0)
    {
        switch (sprite->tPosition)
        {
            case 0:
                value = gLocalTime.hours;
                if (!gSaveBlock2Ptr->twentyFourHourClock)
                {
                    if (value > 12)
                        value -= 12;
                    else if (value == 0)
                        value = 12;
                }
                value = value / 10;
                if (value != 0)
                    value += 1;
                break;
            case 1:
                value = gLocalTime.hours;
                if (!gSaveBlock2Ptr->twentyFourHourClock)
                {
                    if (value > 12)
                        value -= 12;
                    else if (value == 0)
                        value = 12;
                }
                value = value % 10 + 1;
                break;
            case 2:
                // handled outside of switch
                break;
            case 3:
                value = gLocalTime.minutes / 10 + 1;
                break;
            case 4:
                value = gLocalTime.minutes % 10 + 1;
                break;
            case 5:
                if (gSaveBlock2Ptr->twentyFourHourClock)
                    value = 13;
                else if (gLocalTime.hours < 12)
                    value = 14;
                else
                    value = 15;
                break;
            default:
                value = 0;
                break;
        }
    }

    if (sprite->tPosition == 2)
    {
        if (sMP3PlayerDataPtr->fakeSeconds < 30)
            value = 12;
        else
            value = 11;
    }

    if (sprite->tStoredVal != value)
    {
        sprite->tStoredVal = value;
        StartSpriteAnim(sprite, value);
    }
}

static void UnloadClockCard(void)
{
    u8 taskId = FindTaskIdByFunc(Task_ClockCard);
    int i;

    ClearStdWindowAndFrameToTransparent(MP3_WINDOW_DESCRIPTION, TRUE);

    FillWindowPixelBuffer(MP3_WINDOW_WEEKDAY, 0);
    ClearWindowTilemap(MP3_WINDOW_WEEKDAY);
    CopyWindowToVram(MP3_WINDOW_WEEKDAY, 2);

    FreeSpriteTilesByTag(TAG_DIGITS);

    for (i = 0; i < 6; i++)
    {
        DestroySprite(&gSprites[gTasks[taskId].data[i + 1]]);
    }

    DestroyTask(taskId);
}

#undef tDayOfWeek

#undef tPosition
#undef tStoredVal

static void Task_MP3PlayerWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_Pokegear1;
}

static void Task_MP3PlayerTryExit(u8 taskId)
{
    PlaySE(SE_PC_OFF);
    sMP3PlayerDataPtr->exiting = TRUE;
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_MP3PlayerTurnOff;
}

static void Task_MP3PlayerTurnOff(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMP3PlayerDataPtr->savedCallback);
        UnloadCard(sMP3PlayerDataPtr->menuMode);
        ClearOrDrawTopBar(TRUE);
        FreeAllWindowBuffers(); // just make sure, y'know?
        MP3Player_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_Pokegear1(u8 taskId)
{
    if (gTasks[taskId].data[0]++ > 10)
    {
        sMP3PlayerDataPtr->canSwitchCards = FALSE;
        sMP3PlayerDataPtr->fakeSeconds = Random() & 0xFF; // don't always start fully on
        sMP3PlayerDataPtr->cachedTime = gLocalTime; // initialize cached time
        InitMP3PlayerData();
        gTasks[taskId].tCurrentPos = CARD_SLIDE_RIGHT_X;
        gTasks[taskId].func = Task_Pokegear1_1;
    }
}

static void Task_Pokegear1_1(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tCurrentPos -= CARD_SLIDE_SPEED;

    if (tCurrentPos > 0)
    {
        SetGpuReg(REG_OFFSET_BG1HOFS, 512 - tCurrentPos);
    }
    else
    {
        SetGpuReg(REG_OFFSET_BG1HOFS, 0);
        LoadCard(MP3_MENU_MAIN);
        gTasks[taskId].func = Task_Pokegear2;
    }
}

static void Task_Pokegear2(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sMP3PlayerDataPtr->menuMode = MP3_MENU_MAIN;
        sMP3PlayerDataPtr->canSwitchCards = TRUE;
        gTasks[taskId].func = Task_Pokegear3;
    }
}

static void Task_Pokegear3(u8 taskId)
{
    if (++sMP3PlayerDataPtr->fakeSeconds >= 60)
    {
        sMP3PlayerDataPtr->fakeSeconds = 0;
    }

    if (sMP3PlayerDataPtr->canSwitchCards)
    {
        u8 newCard = sMP3PlayerDataPtr->menuMode;

        if (JOY_NEW(B_BUTTON))
        {
            gTasks[taskId].func = Task_MP3PlayerTryExit;
            PlaySE(SE_POKENAV_OFF);
            return;
        }
        else if (JOY_NEW(START_BUTTON))
        {
            newCard = ChangeCardWithDelta(-1, sMP3PlayerDataPtr->menuMode);
        }
        else if (JOY_NEW(SELECT_BUTTON))
        {
            newCard = ChangeCardWithDelta(1, sMP3PlayerDataPtr->menuMode);
        }

        if (sMP3PlayerDataPtr->menuMode != newCard)
        {
            PlaySE(SE_SELECT);
            gTasks[taskId].tState = 0;
            gTasks[taskId].tNewCard = newCard;
            gTasks[taskId].func = Task_SwapCards;
            UnloadCard(sMP3PlayerDataPtr->menuMode);
        }
    }
}

static u16 GetMusicStyle(void)
{
    u16 musicStyle = gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle;

    if (musicStyle >= PLAYLIST_SET_STYLE_COUNT)
        return PLAYLIST_SET_STYLE_DEFAULT;
    else
        return musicStyle;
}

u16 GetRegularWildBattleMusic(void)
{
    u16 musicStyle = GetMusicStyle();

    if (gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic != MUS_NONE)
        return gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic;

    return sPlaylistMusicList[musicStyle].wildBattleMusic;
}

u16 GetLegndaryWildBattleMusic(u16 species)
{
    if (gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic != MUS_NONE)
        return gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic;

    switch (species)
    {
    case SPECIES_LAST_WORD_KANAKO:
        return MUS_VS_RAYQUAZA;
    case SPECIES_LAST_WORD_SUWAKO:
    case SPECIES_LAST_WORD_UTSUHO:
        return MUS_VS_KYOGRE_GROUDON;
    case SPECIES_NORMAL_SARIEL:
        return MUS_ZGS_VS_SARIEL;
    case SPECIES_REGIELEKI:
    case SPECIES_REGIDRAGO:
        return MUS_VS_REGI;
    default:
        return MUS_ZGS_VS_LEGEND;
    }
}

u16 GetTrainerBattleMusic(u8 trainerClass)
{
    u16 musicStyle = GetMusicStyle();

    if (gSaveBlock3Ptr->savedPlayerMusic.trainerBattleSavedMusic != MUS_NONE)
        return gSaveBlock3Ptr->savedPlayerMusic.trainerBattleSavedMusic;

    switch (trainerClass)
    {
    case TRAINER_CLASS_AQUA_LEADER:
    case TRAINER_CLASS_MAGMA_LEADER:
        return MUS_VS_AQUA_MAGMA_LEADER;
    case TRAINER_CLASS_TEAM_AQUA:
    case TRAINER_CLASS_TEAM_MAGMA:
    case TRAINER_CLASS_AQUA_ADMIN:
    case TRAINER_CLASS_MAGMA_ADMIN:
        return MUS_VS_AQUA_MAGMA;
    case TRAINER_CLASS_LEADER:
    case TRAINER_CLASS_LEADER_FRLG:
        return sPlaylistMusicList[musicStyle].gymLeaderBattleMusic;
    case TRAINER_CLASS_CHAMPION:
    case TRAINER_CLASS_CHAMPION_FRLG:
        return sPlaylistMusicList[musicStyle].championBattleMusic;
    case TRAINER_CLASS_RIVAL:
        return MUS_VS_RIVAL;
    case TRAINER_CLASS_ELITE_FOUR:
    case TRAINER_CLASS_ELITE_FOUR_FRLG:
        return sPlaylistMusicList[musicStyle].eliteFourBattleMusic;
    case TRAINER_CLASS_SALON_MAIDEN:
    case TRAINER_CLASS_DOME_ACE:
    case TRAINER_CLASS_PALACE_MAVEN:
    case TRAINER_CLASS_ARENA_TYCOON:
    case TRAINER_CLASS_FACTORY_HEAD:
    case TRAINER_CLASS_PIKE_QUEEN:
    case TRAINER_CLASS_PYRAMID_KING:
        return MUS_VS_FRONTIER_BRAIN;
    default:
        return sPlaylistMusicList[musicStyle].trainerBattleMusic;
    }
}

void PlayVictoryMusic(u8 battleType)
{
    if (gSaveBlock3Ptr->savedPlayerMusic.victorySavedMusic != MUS_NONE)
    {
        PlayBGM(gSaveBlock3Ptr->savedPlayerMusic.victorySavedMusic);
    }
    else if (battleType == MUSIC_PLAYER_VICTORY_TRAINER)
    {
        switch (GetTrainerClassFromId(TRAINER_BATTLE_PARAM.opponentA))
        {
        case TRAINER_CLASS_ELITE_FOUR:
        case TRAINER_CLASS_CHAMPION:
            PlayBGM(MUS_VICTORY_LEAGUE);
            break;
        case TRAINER_CLASS_TEAM_AQUA:
        case TRAINER_CLASS_TEAM_MAGMA:
        case TRAINER_CLASS_AQUA_ADMIN:
        case TRAINER_CLASS_AQUA_LEADER:
        case TRAINER_CLASS_MAGMA_ADMIN:
        case TRAINER_CLASS_MAGMA_LEADER:
            PlayBGM(MUS_VICTORY_AQUA_MAGMA);
            break;
        case TRAINER_CLASS_LEADER:
        case TRAINER_CLASS_LEADER_FRLG:
        case TRAINER_CLASS_ELITE_FOUR_FRLG:
        case TRAINER_CLASS_CHAMPION_FRLG:
            PlayBGM(MUS_ZGS_VICTORY_GYM_LEADER);
            break;
        default:
            PlayBGM(MUS_ZGS_VICTORY_TRAINER);
            break;
        }
    }
    else if (battleType == MUSIC_PLAYER_CAUGHT_MON)
    {
        PlayBGM(MUS_ZGS_CAUGHT);
    }
    else
    {
        PlayBGM(MUS_ZGS_VICTORY_WILD);
    }
    
}

u16 GetSurfMusic(void)
{
    u16 musicStyle = GetMusicStyle();
    return sPlaylistMusicList[musicStyle].surfMusic;
}

u16 GetBikeMusic(void)
{
    u16 musicStyle = GetMusicStyle();
    return sPlaylistMusicList[musicStyle].bikeMusic;
}

void SetPlaylistPresetStyle(struct ScriptContext *ctx)
{
    u32 playlistSet = ScriptReadByte(ctx);
    if (playlistSet >= PLAYLIST_SET_STYLE_COUNT)
        gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = PLAYLIST_SET_STYLE_DEFAULT;
    else
        gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = playlistSet;
}

void GetPlaylistPresetStyle(struct ScriptContext *ctx)
{
    u16 variable = ScriptReadHalfword(ctx);
    u16 musicStyle = gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle;
    VarSet(variable, musicStyle);
}

void SetOverworldPlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = gMP3PlayerTrackInfo[track].trackId;
}

void SetWildBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic = gMP3PlayerTrackInfo[track].trackId;
}

void SetTrainerBattlePlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleSavedMusic = gMP3PlayerTrackInfo[track].trackId;
}

void SetVictoryPlayerMusic(struct ScriptContext *ctx)
{
    u16 track = ScriptReadHalfword(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.victorySavedMusic = gMP3PlayerTrackInfo[track].trackId;
}

void PowerMP3PlayerOverride(struct ScriptContext *ctx)
{
    u32 power = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = power;
}

void SetOverworldMusicBattleOverride(struct ScriptContext *ctx)
{
    u32 canOverride = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = canOverride;
}

void MuteBikeSurfMusicOverride(struct ScriptContext *ctx)
{
    u32 canOverride = ScriptReadByte(ctx);
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = canOverride;
}

void ResetOverridePlayerMusic(void)
{
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleSavedMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.victorySavedMusic = MUS_NONE;
}

void ResetAllPlayerMusic(void)
{
    gSaveBlock3Ptr->savedPlayerMusic.isPlayerOn = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.canOverrideBattleMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.muteBikeSurfMusic = FALSE;
    gSaveBlock3Ptr->savedPlayerMusic.playlistPresetStyle = PLAYLIST_SET_STYLE_DEFAULT;
    gSaveBlock3Ptr->savedPlayerMusic.overworldMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.wildBattleSavedMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.trainerBattleSavedMusic = MUS_NONE;
    gSaveBlock3Ptr->savedPlayerMusic.victorySavedMusic = MUS_NONE;
}
