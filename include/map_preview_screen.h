#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

enum MapPreviewScreenId
{
    MPS_VIRIDIAN_FOREST = 0u,
    MPS_MT_MOON,
    MPS_DIGLETTS_CAVE,
    MPS_ROCK_TUNNEL,
    MPS_POKEMON_TOWER,
    MPS_SAFARI_ZONE,
    MPS_SEAFOAM_ISLANDS,
    MPS_POKEMON_MANSION,
    MPS_ROCKET_HIDEOUT,
    MPS_SILPH_CO,
    MPS_VICTORY_ROAD,
    MPS_CERULEAN_CAVE,
    MPS_POWER_PLANT,
    MPS_DARK_CAVE_SOUTH,
    MPS_SPROUT_TOWER,
    MPS_RUINS_OF_ALPH,
    MPS_SLOWPOKE_WELL,
    MPS_ILEX_FOREST,
    MPS_UNION_CAVE,
    MPS_NATIONAL_PARK,
    MPS_BURNED_TOWER,
    MPS_BELL_TOWER,
    MPS_OLIVINE_LIGHTHOUSE,
    MPS_WHIRL_ISLANDS,
    MPS_MT_MORTAR,
    MPS_TEAM_ROCKET_HQ,
    MPS_ICE_PATH,
    MPS_DRAGONS_DEN,
    MPS_DARK_CAVE_NORTH,
    MPS_COUNT
};

enum MapPreviewScreenType
{
    MPS_TYPE_CAVE,
    MPS_TYPE_FADE_IN,
    MPS_TYPE_BASIC,
    MPS_TYPE_ANY
};

#define MPS_FLAG_NULL   0

struct MapPreviewScreen
{
    mapsec_u8_t mapsec;
    enum MapPreviewScreenType type:2;
    u8 usesAllPalettes:1;
    u8 nameDisabled:1;
    u8 padding:4;
    u16 flagId;
    const void *tilesptr;
    const void *tilemapptr;
    const void *palptr;
};

bool32 ShouldRunMapPreview(void);
u16 MapPreview_CreateMapNameWindow(mapsec_u8_t mapsec);
u16 MapPreview_GetDuration(mapsec_u8_t mapsec);
const struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(mapsec_u8_t mapsec);
bool32 CurrentMapHasPreviewScreen(enum MapPreviewScreenType type);
bool32 FadeInMapPreviewScreenIsRunning(void);
void MapPreview_InitBgs(void);
void MapPreview_LoadGfx(mapsec_u8_t mapsec);
bool32 MapPreview_IsGfxLoadFinished(void);
void MapPreview_Unload(s32 windowId);
void RunMapPreviewScreenNonFade(u8 mapSecId);
void RunMapPreviewScreenFadeIn(mapsec_u8_t mapsec);
void Task_MapPreviewScreen_NonFade(u8 taskId);
void MapPreview_SetFlag(u16 flagId);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
