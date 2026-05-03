#include "global.h"
#include "main.h"
#include "constants/field_mugshots.h"

static const u32 sFieldMugshotGfx_TestNormal[] = INCGFX_U32("graphics/field_mugshots/test/normal.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_TestAlt[] = INCGFX_U32("graphics/field_mugshots/test/alt.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_TestNormal[] = INCGFX_U16("graphics/field_mugshots/amelia/normal.png", ".gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCGFX_U16("graphics/field_mugshots/test/alt.png", ".gbapal");

static const u32 sFieldMugshotGfx_AmeliaNormal[] = INCGFX_U32("graphics/field_mugshots/amelia/normal.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_AmeliaGeneral[] = INCGFX_U16("graphics/field_mugshots/amelia/general.pal", ".gbapal");

static const u32 sFieldMugshotGfx_GigiNormal[] = INCGFX_U32("graphics/field_mugshots/gigi/normal.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_GigiHappy[] = INCGFX_U32("graphics/field_mugshots/gigi/colon_3.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_GigiShadow[] = INCGFX_U32("graphics/field_mugshots/gigi/shadow.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_GigiXParantheses[] = INCGFX_U32("graphics/field_mugshots/gigi/x_parantheses.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_GigiXD[] = INCGFX_U32("graphics/field_mugshots/gigi/x_d.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_GigiGeneral[] = INCGFX_U16("graphics/field_mugshots/gigi/general.pal", ".gbapal");

static const u32 sFieldMugshotGfx_KroniiNormal[] = INCGFX_U32("graphics/field_mugshots/kronii/normal.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiHappy[] = INCGFX_U32("graphics/field_mugshots/kronii/happy.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiAnnoyed[] = INCGFX_U32("graphics/field_mugshots/kronii/annoyed.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiSad[] = INCGFX_U32("graphics/field_mugshots/kronii/sad.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiSerious[] = INCGFX_U32("graphics/field_mugshots/kronii/serious.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiAngry[] = INCGFX_U32("graphics/field_mugshots/kronii/angry.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiDeadpan[] = INCGFX_U32("graphics/field_mugshots/kronii/deadpan.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiShocked[] = INCGFX_U32("graphics/field_mugshots/kronii/shocked.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_KroniiShadow[] = INCGFX_U32("graphics/field_mugshots/kronii/shadow.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_KroniiGeneral[] = INCGFX_U16("graphics/field_mugshots/kronii/general.pal", ".gbapal");

static const u32 sFieldMugshotGfx_RenkoSerious[] = INCGFX_U32("graphics/field_mugshots/renko/serious.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_RenkoSerious[] = INCGFX_U16("graphics/field_mugshots/renko/serious.png", ".gbapal");

static const u32 sFieldMugshotGfx_MaribelNormal[] = INCGFX_U32("graphics/field_mugshots/maribel/normal.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_MaribelNormal[] = INCGFX_U16("graphics/field_mugshots/maribel/normal.png", ".gbapal");

static const u32 sFieldMugshotGfx_ShioriNormal[] = INCGFX_U32("graphics/field_mugshots/shiori/normal.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_ShioriNormal[] = INCGFX_U16("graphics/field_mugshots/shiori/normal.png", ".gbapal");

static const u32 sFieldMugshotGfx_BaelzNormal[] = INCGFX_U32("graphics/field_mugshots/baelz/normal.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_BaelzHappy[] = INCGFX_U32("graphics/field_mugshots/baelz/happy.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_BaelzSerious[] = INCGFX_U32("graphics/field_mugshots/baelz/serious.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_BaelzNormal[] = INCGFX_U16("graphics/field_mugshots/baelz/normal.png", ".gbapal");

static const u32 sFieldMugshotGfx_SusieHappy[] = INCGFX_U32("graphics/field_mugshots/susie/happy.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieSlightSmile[] = INCGFX_U32("graphics/field_mugshots/susie/slight_smile.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieAnnoyed[] = INCGFX_U32("graphics/field_mugshots/susie/annoyed.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieSad[] = INCGFX_U32("graphics/field_mugshots/susie/sad.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieSerious[] = INCGFX_U32("graphics/field_mugshots/susie/serious.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieAngry[] = INCGFX_U32("graphics/field_mugshots/susie/angry.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieDeadpan[] = INCGFX_U32("graphics/field_mugshots/susie/deadpan.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieWhereAreWe[] = INCGFX_U32("graphics/field_mugshots/susie/where_are_we.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieLookAwaySerious[] = INCGFX_U32("graphics/field_mugshots/susie/look_away_serious.png", ".4bpp.smol");
static const u32 sFieldMugshotGfx_SusieLookDownSerious[] = INCGFX_U32("graphics/field_mugshots/susie/look_down_serious.png", ".4bpp.smol");
static const u16 sFieldMugshotPal_SusieGeneral[] = INCGFX_U16("graphics/field_mugshots/susie/happy.png", ".gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
    u16 x;
    u16 y;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_RENKO] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_RenkoSerious,
            .pal = sFieldMugshotPal_RenkoSerious,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_MARIBEL] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MaribelNormal,
            .pal = sFieldMugshotPal_MaribelNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_SUSIE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_SusieSlightSmile,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_SusieHappy,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_SusieSad,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SERIOUS] =
        {
            .gfx = sFieldMugshotGfx_SusieSerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANNOYED] =
        {
            .gfx = sFieldMugshotGfx_SusieAnnoyed,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_SusieAngry,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_DEADPAN] =
        {
            .gfx = sFieldMugshotGfx_SusieDeadpan,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_8] =
        {
            .gfx = sFieldMugshotGfx_SusieLookDownSerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_9] =
        {
            .gfx = sFieldMugshotGfx_SusieWhereAreWe,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_10] =
        {
            .gfx = sFieldMugshotGfx_SusieLookAwaySerious,
            .pal = sFieldMugshotPal_SusieGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_AMELIA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_AmeliaNormal,
            .pal = sFieldMugshotPal_AmeliaGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_SHIORI] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_ShioriNormal,
            .pal = sFieldMugshotPal_ShioriNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_BAELZ] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BaelzNormal,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_BaelzHappy,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SERIOUS] =
        {
            .gfx = sFieldMugshotGfx_BaelzSerious,
            .pal = sFieldMugshotPal_BaelzNormal,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_GIGI] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_GigiNormal,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_GigiHappy,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SHADOW] =
        {
            .gfx = sFieldMugshotGfx_GigiShadow,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_8] =
        {
            .gfx = sFieldMugshotGfx_GigiXParantheses,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_9] =
        {
            .gfx = sFieldMugshotGfx_GigiXD,
            .pal = sFieldMugshotPal_GigiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

    [MUGSHOT_KRONII] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_KroniiNormal,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_KroniiHappy,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_KroniiSad,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SERIOUS] =
        {
            .gfx = sFieldMugshotGfx_KroniiSerious,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANNOYED] =
        {
            .gfx = sFieldMugshotGfx_KroniiAnnoyed,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_KroniiAngry,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_DEADPAN] =
        {
            .gfx = sFieldMugshotGfx_KroniiDeadpan,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_SHADOW] =
        {
            .gfx = sFieldMugshotGfx_KroniiShadow,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
        [EMOTE_ALT_9] =
        {
            .gfx = sFieldMugshotGfx_KroniiShocked,
            .pal = sFieldMugshotPal_KroniiGeneral,
            .x = MUGSHOT_X,
            .y = MUGSHOT_Y,
        },
    },

};
