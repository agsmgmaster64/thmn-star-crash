// Normally, INCGFX_COMP acts like INCGFX_U32, but appends `.smol` to the file, compressing it;
// If not compressing overworld gfx, make this an alias to INCGFX_32, so gfx will *not* be compressed
#if !(OW_GFX_COMPRESS)
#define INCGFX_COMP INCGFX_U32
#endif

const u32 gMonFrontPic_CircledQuestionMark[] = INCGFX_U32("graphics/pokemon/question_mark/circled/anim_front.png", ".4bpp.smol");
const u32 gMonBackPic_CircledQuestionMark[] = INCGFX_U32("graphics/pokemon/question_mark/circled/back.png", ".4bpp.smol");
const u16 gMonPalette_CircledQuestionMark[] = INCGFX_U16("graphics/pokemon/question_mark/circled/normal.pal", ".gbapal");
const u16 gMonShinyPalette_CircledQuestionMark[] = INCGFX_U16("graphics/pokemon/question_mark/circled/shiny.pal", ".gbapal");
const u8 gMonIcon_QuestionMark[] = INCGFX_U8("graphics/pokemon/question_mark/icon.png", ".4bpp");
#if P_FOOTPRINTS
#if !P_GBA_STYLE_SPECIES_FOOTPRINTS
    const u8 gMonFootprint_QuestionMark[] = INCGFX_U8("graphics/pokemon/question_mark/footprint.png", ".1bpp");
#else
    const u8 gMonFootprint_QuestionMark[] = INCGFX_U8("graphics/pokemon/question_mark/footprint_gba.png", ".1bpp");
#endif //P_GBA_STYLE_SPECIES_FOOTPRINTS
#endif //P_FOOTPRINTS
const u32 gObjectEventPic_Substitute[] = INCGFX_COMP("graphics/pokemon/question_mark/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");

#if P_FAMILY_PORYGON
#if !P_GBA_STYLE_SPECIES_GFX
    const u32 gMonFrontPic_Porygon[] = INCGFX_U32("graphics/pokemon/porygon/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/normal.pal", ".gbapal");
    const u32 gMonBackPic_Porygon[] = INCGFX_U32("graphics/pokemon/porygon/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/shiny.pal", ".gbapal");
#else
    const u32 gMonFrontPic_Porygon[] = INCGFX_U32("graphics/pokemon/porygon/anim_front_gba.png", ".4bpp.smol");
    const u16 gMonPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/normal_gba.pal", ".gbapal");
    const u32 gMonBackPic_Porygon[] = INCGFX_U32("graphics/pokemon/porygon/back_gba.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/shiny_gba.pal", ".gbapal");
#endif //P_GBA_STYLE_SPECIES_GFX
#if !P_GBA_STYLE_SPECIES_ICONS
    const u8 gMonIcon_Porygon[] = INCGFX_U8("graphics/pokemon/porygon/icon.png", ".4bpp");
#else
    const u8 gMonIcon_Porygon[] = INCGFX_U8("graphics/pokemon/porygon/icon_gba.png", ".4bpp");
#endif //P_GBA_STYLE_SPECIES_ICONS
#if P_FOOTPRINTS
    const u8 gMonFootprint_Porygon[] = INCGFX_U8("graphics/pokemon/porygon/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Porygon[] = INCGFX_COMP("graphics/pokemon/porygon/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Porygon[] = INCGFX_U16("graphics/pokemon/porygon/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

#if P_GEN_2_CROSS_EVOS
#if !P_GBA_STYLE_SPECIES_GFX
    const u32 gMonFrontPic_Porygon2[] = INCGFX_U32("graphics/pokemon/porygon2/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/normal.pal", ".gbapal");
    const u32 gMonBackPic_Porygon2[] = INCGFX_U32("graphics/pokemon/porygon2/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/shiny.pal", ".gbapal");
#else
    const u32 gMonFrontPic_Porygon2[] = INCGFX_U32("graphics/pokemon/porygon2/anim_front_gba.png", ".4bpp.smol");
    const u16 gMonPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/normal_gba.pal", ".gbapal");
    const u32 gMonBackPic_Porygon2[] = INCGFX_U32("graphics/pokemon/porygon2/back_gba.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/shiny_gba.pal", ".gbapal");
#endif //P_GBA_STYLE_SPECIES_GFX
#if !P_GBA_STYLE_SPECIES_ICONS
    const u8 gMonIcon_Porygon2[] = INCGFX_U8("graphics/pokemon/porygon2/icon.png", ".4bpp");
#else
    const u8 gMonIcon_Porygon2[] = INCGFX_U8("graphics/pokemon/porygon2/icon_gba.png", ".4bpp");
#endif //P_GBA_STYLE_SPECIES_ICONS
#if P_FOOTPRINTS
    const u8 gMonFootprint_Porygon2[] = INCGFX_U8("graphics/pokemon/porygon2/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Porygon2[] = INCGFX_COMP("graphics/pokemon/porygon2/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Porygon2[] = INCGFX_U16("graphics/pokemon/porygon2/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

#if P_GEN_4_CROSS_EVOS
    const u32 gMonFrontPic_PorygonZ[] = INCGFX_U32("graphics/pokemon/porygon_z/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_PorygonZ[] = INCGFX_U16("graphics/pokemon/porygon_z/normal.pal", ".gbapal");
    const u32 gMonBackPic_PorygonZ[] = INCGFX_U32("graphics/pokemon/porygon_z/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_PorygonZ[] = INCGFX_U16("graphics/pokemon/porygon_z/shiny.pal", ".gbapal");
    const u8 gMonIcon_PorygonZ[] = INCGFX_U8("graphics/pokemon/porygon_z/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_PorygonZ[] = INCGFX_U8("graphics/pokemon/porygon_z/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_PorygonZ[] = INCGFX_COMP("graphics/pokemon/porygon_z/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_PorygonZ[] = INCGFX_U16("graphics/pokemon/porygon_z/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_PorygonZ[] = INCGFX_U16("graphics/pokemon/porygon_z/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_TERAPAGOS
    const u32 gMonFrontPic_TerapagosNormal[] = INCGFX_U32("graphics/pokemon/terapagos/front.png", ".4bpp.smol");
    const u16 gMonPalette_TerapagosNormal[] = INCGFX_U16("graphics/pokemon/terapagos/normal.pal", ".gbapal");
    const u32 gMonBackPic_TerapagosNormal[] = INCGFX_U32("graphics/pokemon/terapagos/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TerapagosNormal[] = INCGFX_U16("graphics/pokemon/terapagos/shiny.pal", ".gbapal");
    const u8 gMonIcon_TerapagosNormal[] = INCGFX_U8("graphics/pokemon/terapagos/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosNormal[] = INCGFX_U8("graphics/pokemon/terapagos/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TerapagosNormal[] = INCGFX_COMP("graphics/pokemon/terapagos/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TerapagosNormal[] = INCGFX_U16("graphics/pokemon/terapagos/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TerapagosNormal[] = INCGFX_U16("graphics/pokemon/terapagos/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TerapagosTerastal[] = INCGFX_U32("graphics/pokemon/terapagos/terastal/front.png", ".4bpp.smol");
    const u16 gMonPalette_TerapagosTerastal[] = INCGFX_U16("graphics/pokemon/terapagos/terastal/normal.pal", ".gbapal");
    const u32 gMonBackPic_TerapagosTerastal[] = INCGFX_U32("graphics/pokemon/terapagos/terastal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TerapagosTerastal[] = INCGFX_U16("graphics/pokemon/terapagos/terastal/shiny.pal", ".gbapal");
    const u8 gMonIcon_TerapagosTerastal[] = INCGFX_U8("graphics/pokemon/terapagos/terastal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosTerastal[] = INCGFX_U8("graphics/pokemon/terapagos/terastal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TerapagosTerastal[] = INCGFX_COMP("graphics/pokemon/terapagos/terastal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TerapagosTerastal[] = INCGFX_U16("graphics/pokemon/terapagos/terastal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TerapagosTerastal[] = INCGFX_U16("graphics/pokemon/terapagos/terastal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TerapagosStellar[] = INCGFX_U32("graphics/pokemon/terapagos/stellar/front.png", ".4bpp.smol");
    const u16 gMonPalette_TerapagosStellar[] = INCGFX_U16("graphics/pokemon/terapagos/stellar/normal.pal", ".gbapal");
    const u32 gMonBackPic_TerapagosStellar[] = INCGFX_U32("graphics/pokemon/terapagos/stellar/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TerapagosStellar[] = INCGFX_U16("graphics/pokemon/terapagos/stellar/shiny.pal", ".gbapal");
    const u8 gMonIcon_TerapagosStellar[] = INCGFX_U8("graphics/pokemon/terapagos/stellar/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TerapagosStellar[] = INCGFX_U8("graphics/pokemon/terapagos/stellar/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
//    const u32 gObjectEventPic_TerapagosStellar[] = INCGFX_COMP("graphics/pokemon/terapagos/stellar/overworld.png", ".4bpp");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
//    const u16 gOverworldPalette_TerapagosStellar[] = INCGFX_U16("graphics/pokemon/terapagos/stellar/overworld_normal.pal", ".gbapal");
//    const u16 gShinyOverworldPalette_TerapagosStellar[] = INCGFX_U16("graphics/pokemon/terapagos/stellar/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS
#endif //P_FAMILY_TERAPAGOS

    const u32 gMonFrontPic_CReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CReimu[] = INCGFX_COMP("graphics/pokemon/_add/th/reimu/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Reimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Reimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Reimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Reimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Reimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Reimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Reimu[] = INCGFX_COMP("graphics/pokemon/_add/th/reimu/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Reimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Reimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AReimu[] = INCGFX_COMP("graphics/pokemon/_add/th/reimu/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DReimu[] = INCGFX_U32("graphics/pokemon/_add/th/reimu/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DReimu[] = INCGFX_U8("graphics/pokemon/_add/th/reimu/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DReimu[] = INCGFX_COMP("graphics/pokemon/_add/th/reimu/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DReimu[] = INCGFX_U16("graphics/pokemon/_add/th/reimu/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMarisa[] = INCGFX_COMP("graphics/pokemon/_add/th/marisa/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Marisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Marisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Marisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Marisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Marisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Marisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Marisa[] = INCGFX_COMP("graphics/pokemon/_add/th/marisa/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Marisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Marisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AMarisa[] = INCGFX_COMP("graphics/pokemon/_add/th/marisa/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SMarisa[] = INCGFX_COMP("graphics/pokemon/_add/th/marisa/speed/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/speed/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_SMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/speed/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdMarisa[] = INCGFX_U32("graphics/pokemon/_add/th/marisa/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdMarisa[] = INCGFX_U16("graphics/pokemon/_add/th/marisa/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMarisa[] = INCGFX_U8("graphics/pokemon/_add/th/marisa/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CDaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CDaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CDaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CDaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CDaiyousei[] = INCGFX_COMP("graphics/pokemon/_add/th/daiyousei/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Daiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Daiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Daiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Daiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Daiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Daiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Daiyousei[] = INCGFX_COMP("graphics/pokemon/_add/th/daiyousei/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Daiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Daiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ADaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ADaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ADaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ADaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ADaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ADaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ADaiyousei[] = INCGFX_COMP("graphics/pokemon/_add/th/daiyousei/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ADaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_ADaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DDaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DDaiyousei[] = INCGFX_U32("graphics/pokemon/_add/th/daiyousei/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DDaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DDaiyousei[] = INCGFX_U8("graphics/pokemon/_add/th/daiyousei/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DDaiyousei[] = INCGFX_COMP("graphics/pokemon/_add/th/daiyousei/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DDaiyousei[] = INCGFX_U16("graphics/pokemon/_add/th/daiyousei/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CCirno[] = INCGFX_COMP("graphics/pokemon/_add/th/cirno/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Cirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Cirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Cirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Cirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Cirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Cirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Cirno[] = INCGFX_COMP("graphics/pokemon/_add/th/cirno/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Cirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Cirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SCirno[] = INCGFX_COMP("graphics/pokemon/_add/th/cirno/speed/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/speed/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_SCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/speed/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TCirno[] = INCGFX_COMP("graphics/pokemon/_add/th/cirno/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdCirno[] = INCGFX_U32("graphics/pokemon/_add/th/cirno/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdCirno[] = INCGFX_U16("graphics/pokemon/_add/th/cirno/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdCirno[] = INCGFX_U8("graphics/pokemon/_add/th/cirno/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Rumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Rumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Rumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Rumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ARumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ARumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ARumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ARumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SRumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SRumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SRumia[] = INCGFX_U32("graphics/pokemon/_add/th/rumia/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SRumia[] = INCGFX_U16("graphics/pokemon/_add/th/rumia/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SRumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SRumia[] = INCGFX_U8("graphics/pokemon/_add/th/rumia/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Meiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Meiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Meiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Meiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Meiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Meiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdMeiling[] = INCGFX_U32("graphics/pokemon/_add/th/meiling/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdMeiling[] = INCGFX_U16("graphics/pokemon/_add/th/meiling/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMeiling[] = INCGFX_U8("graphics/pokemon/_add/th/meiling/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKoakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKoakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKoakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKoakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKoakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKoakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Koakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Koakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Koakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Koakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Koakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Koakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HKoakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HKoakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HKoakuma[] = INCGFX_U32("graphics/pokemon/_add/th/koakuma/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HKoakuma[] = INCGFX_U16("graphics/pokemon/_add/th/koakuma/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HKoakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HKoakuma[] = INCGFX_U8("graphics/pokemon/_add/th/koakuma/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CPatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CPatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CPatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CPatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CPatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CPatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Patchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Patchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Patchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Patchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Patchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Patchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_APatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_APatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_APatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_APatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_APatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_APatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DPatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DPatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DPatchouli[] = INCGFX_U32("graphics/pokemon/_add/th/patchouli/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DPatchouli[] = INCGFX_U16("graphics/pokemon/_add/th/patchouli/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DPatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DPatchouli[] = INCGFX_U8("graphics/pokemon/_add/th/patchouli/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HSakuya[] = INCGFX_U32("graphics/pokemon/_add/th/sakuya/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HSakuya[] = INCGFX_U16("graphics/pokemon/_add/th/sakuya/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HSakuya[] = INCGFX_U8("graphics/pokemon/_add/th/sakuya/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Remilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Remilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Remilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Remilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Remilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Remilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ARemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ARemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ARemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ARemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DRemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DRemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DRemilia[] = INCGFX_U32("graphics/pokemon/_add/th/remilia/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DRemilia[] = INCGFX_U16("graphics/pokemon/_add/th/remilia/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DRemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DRemilia[] = INCGFX_U8("graphics/pokemon/_add/th/remilia/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Flandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Flandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Flandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Flandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Flandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Flandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SFlandre[] = INCGFX_U32("graphics/pokemon/_add/th/flandre/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SFlandre[] = INCGFX_U16("graphics/pokemon/_add/th/flandre/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SFlandre[] = INCGFX_U8("graphics/pokemon/_add/th/flandre/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Letty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Letty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Letty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Letty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Letty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Letty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdLetty[] = INCGFX_U32("graphics/pokemon/_add/th/letty/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdLetty[] = INCGFX_U16("graphics/pokemon/_add/th/letty/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdLetty[] = INCGFX_U8("graphics/pokemon/_add/th/letty/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shanghai[] = INCGFX_U32("graphics/pokemon/_add/th/shanghai/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Shanghai[] = INCGFX_U16("graphics/pokemon/_add/th/shanghai/normal.pal", ".gbapal");
    const u32 gMonBackPic_Shanghai[] = INCGFX_U32("graphics/pokemon/_add/th/shanghai/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Shanghai[] = INCGFX_U16("graphics/pokemon/_add/th/shanghai/shiny.pal", ".gbapal");
    const u8 gMonIcon_Shanghai[] = INCGFX_U8("graphics/pokemon/_add/th/shanghai/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shanghai[] = INCGFX_U8("graphics/pokemon/_add/th/shanghai/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hourai[] = INCGFX_U32("graphics/pokemon/_add/th/hourai/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Hourai[] = INCGFX_U16("graphics/pokemon/_add/th/hourai/normal.pal", ".gbapal");
    const u32 gMonBackPic_Hourai[] = INCGFX_U32("graphics/pokemon/_add/th/hourai/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Hourai[] = INCGFX_U16("graphics/pokemon/_add/th/hourai/shiny.pal", ".gbapal");
    const u8 gMonIcon_Hourai[] = INCGFX_U8("graphics/pokemon/_add/th/hourai/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hourai[] = INCGFX_U8("graphics/pokemon/_add/th/hourai/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Goliath[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Goliath[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/normal.pal", ".gbapal");
    const u32 gMonBackPic_Goliath[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Goliath[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/shiny.pal", ".gbapal");
    const u8 gMonIcon_Goliath[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Goliath[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShanghaiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/shanghai/sanni/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ShanghaiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/shanghai/sanni/normal.pal", ".gbapal");
    const u32 gMonBackPic_ShanghaiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/shanghai/sanni/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ShanghaiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/shanghai/sanni/shiny.pal", ".gbapal");
    const u8 gMonIcon_ShanghaiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/shanghai/sanni/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShanghaiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/shanghai/sanni/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HouraiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/hourai/sanni/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HouraiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/hourai/sanni/normal.pal", ".gbapal");
    const u32 gMonBackPic_HouraiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/hourai/sanni/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HouraiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/hourai/sanni/shiny.pal", ".gbapal");
    const u8 gMonIcon_HouraiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/hourai/sanni/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HouraiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/hourai/sanni/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_GoliathSanniAttack[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/sanni/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_GoliathSanniAttack[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/sanni/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_GoliathSanniAttack[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/sanni/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_GoliathSanniAttack[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/sanni/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_GoliathSanniAttack[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/sanni/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_GoliathSanniAttack[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/sanni/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_GoliathSanniDefense[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/sanni/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_GoliathSanniDefense[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/sanni/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_GoliathSanniDefense[] = INCGFX_U32("graphics/pokemon/_add/th/goliath/sanni/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_GoliathSanniDefense[] = INCGFX_U16("graphics/pokemon/_add/th/goliath/sanni/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_GoliathSanniDefense[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/sanni/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_GoliathSanniDefense[] = INCGFX_U8("graphics/pokemon/_add/th/goliath/sanni/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CAlice[] = INCGFX_COMP("graphics/pokemon/_add/th/alice/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Alice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Alice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Alice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Alice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Alice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Alice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Alice[] = INCGFX_COMP("graphics/pokemon/_add/th/alice/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Alice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Alice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AAlice[] = INCGFX_COMP("graphics/pokemon/_add/th/alice/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TAlice[] = INCGFX_COMP("graphics/pokemon/_add/th/alice/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DarkAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/dark/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DarkAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/dark/normal.pal", ".gbapal");
    const u32 gMonBackPic_DarkAlice[] = INCGFX_U32("graphics/pokemon/_add/th/alice/dark/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DarkAlice[] = INCGFX_U16("graphics/pokemon/_add/th/alice/dark/shiny.pal", ".gbapal");
    const u8 gMonIcon_DarkAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/dark/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DarkAlice[] = INCGFX_U8("graphics/pokemon/_add/th/alice/dark/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CLilyWhite[] = INCGFX_COMP("graphics/pokemon/_add/th/lilywhite/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_LilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_LilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_LilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_LilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_LilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_LilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_LilyWhite[] = INCGFX_COMP("graphics/pokemon/_add/th/lilywhite/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_LilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_LilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ALilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ALilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ALilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ALilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ALilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ALilyWhite[] = INCGFX_COMP("graphics/pokemon/_add/th/lilywhite/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ALilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_ALilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HLilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HLilyWhite[] = INCGFX_U32("graphics/pokemon/_add/th/lilywhite/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HLilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLilyWhite[] = INCGFX_U8("graphics/pokemon/_add/th/lilywhite/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HLilyWhite[] = INCGFX_COMP("graphics/pokemon/_add/th/lilywhite/helper/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/helper/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_HLilyWhite[] = INCGFX_U16("graphics/pokemon/_add/th/lilywhite/helper/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CLilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_LilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_LilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_LilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_LilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_LilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_LilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ALilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ALilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ALilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ALilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ALilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SLilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SLilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SLilyBlack[] = INCGFX_U32("graphics/pokemon/_add/th/lilyblack/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SLilyBlack[] = INCGFX_U16("graphics/pokemon/_add/th/lilyblack/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SLilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SLilyBlack[] = INCGFX_U8("graphics/pokemon/_add/th/lilyblack/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Lunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Lunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Lunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Lunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Lunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Lunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HLunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HLunasa[] = INCGFX_U32("graphics/pokemon/_add/th/lunasa/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HLunasa[] = INCGFX_U16("graphics/pokemon/_add/th/lunasa/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HLunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLunasa[] = INCGFX_U8("graphics/pokemon/_add/th/lunasa/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMerlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMerlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMerlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMerlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMerlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMerlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Merlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Merlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Merlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Merlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Merlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Merlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HMerlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HMerlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HMerlin[] = INCGFX_U32("graphics/pokemon/_add/th/merlin/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HMerlin[] = INCGFX_U16("graphics/pokemon/_add/th/merlin/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HMerlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HMerlin[] = INCGFX_U8("graphics/pokemon/_add/th/merlin/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Lyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Lyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Lyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Lyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Lyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Lyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HLyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HLyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HLyrica[] = INCGFX_U32("graphics/pokemon/_add/th/lyrica/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HLyrica[] = INCGFX_U16("graphics/pokemon/_add/th/lyrica/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HLyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HLyrica[] = INCGFX_U8("graphics/pokemon/_add/th/lyrica/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLayla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLayla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLayla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLayla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLayla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLayla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Layla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Layla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Layla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Layla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Layla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Layla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DLayla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DLayla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DLayla[] = INCGFX_U32("graphics/pokemon/_add/th/layla/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DLayla[] = INCGFX_U16("graphics/pokemon/_add/th/layla/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DLayla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DLayla[] = INCGFX_U8("graphics/pokemon/_add/th/layla/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CYoumu[] = INCGFX_COMP("graphics/pokemon/_add/th/youmu/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Youmu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Youmu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Youmu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Youmu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Youmu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Youmu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Youmu[] = INCGFX_COMP("graphics/pokemon/_add/th/youmu/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Youmu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Youmu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DYoumu[] = INCGFX_COMP("graphics/pokemon/_add/th/youmu/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SYoumu[] = INCGFX_COMP("graphics/pokemon/_add/th/youmu/speed/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/speed/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_SYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/speed/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdYoumu[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdYoumu[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYoumu[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_YoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_YoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_YoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_YoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_YoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_YoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_EYoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/extra/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_EYoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/extra/normal.pal", ".gbapal");
    const u32 gMonBackPic_EYoumuOld[] = INCGFX_U32("graphics/pokemon/_add/th/youmu/old/extra/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_EYoumuOld[] = INCGFX_U16("graphics/pokemon/_add/th/youmu/old/extra/shiny.pal", ".gbapal");
    const u8 gMonIcon_EYoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/extra/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_EYoumuOld[] = INCGFX_U8("graphics/pokemon/_add/th/youmu/old/extra/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdYuyuko[] = INCGFX_U32("graphics/pokemon/_add/th/yuyuko/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdYuyuko[] = INCGFX_U16("graphics/pokemon/_add/th/yuyuko/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYuyuko[] = INCGFX_U8("graphics/pokemon/_add/th/yuyuko/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CChen[] = INCGFX_COMP("graphics/pokemon/_add/th/chen/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Chen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Chen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Chen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Chen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Chen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Chen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Chen[] = INCGFX_COMP("graphics/pokemon/_add/th/chen/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Chen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Chen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AChen[] = INCGFX_COMP("graphics/pokemon/_add/th/chen/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TChen[] = INCGFX_COMP("graphics/pokemon/_add/th/chen/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdChen[] = INCGFX_U32("graphics/pokemon/_add/th/chen/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdChen[] = INCGFX_U16("graphics/pokemon/_add/th/chen/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdChen[] = INCGFX_U8("graphics/pokemon/_add/th/chen/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ran[] = INCGFX_U32("graphics/pokemon/_add/th/ran/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Ran[] = INCGFX_U16("graphics/pokemon/_add/th/ran/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Ran[] = INCGFX_U32("graphics/pokemon/_add/th/ran/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Ran[] = INCGFX_U16("graphics/pokemon/_add/th/ran/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Ran[] = INCGFX_U8("graphics/pokemon/_add/th/ran/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ran[] = INCGFX_U8("graphics/pokemon/_add/th/ran/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ARan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ARan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ARan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ARan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdRan[] = INCGFX_U32("graphics/pokemon/_add/th/ran/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdRan[] = INCGFX_U16("graphics/pokemon/_add/th/ran/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdRan[] = INCGFX_U8("graphics/pokemon/_add/th/ran/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdYukari[] = INCGFX_U32("graphics/pokemon/_add/th/yukari/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdYukari[] = INCGFX_U16("graphics/pokemon/_add/th/yukari/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdYukari[] = INCGFX_U8("graphics/pokemon/_add/th/yukari/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Wriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Wriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Wriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Wriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Wriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Wriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SWriggle[] = INCGFX_U32("graphics/pokemon/_add/th/wriggle/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SWriggle[] = INCGFX_U16("graphics/pokemon/_add/th/wriggle/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SWriggle[] = INCGFX_U8("graphics/pokemon/_add/th/wriggle/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMystia[] = INCGFX_COMP("graphics/pokemon/_add/th/mystia/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Mystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Mystia[] = INCGFX_COMP("graphics/pokemon/_add/th/mystia/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Mystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Mystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AMystia[] = INCGFX_COMP("graphics/pokemon/_add/th/mystia/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HMystia[] = INCGFX_COMP("graphics/pokemon/_add/th/mystia/helper/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/helper/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_HMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/helper/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdMystia[] = INCGFX_U32("graphics/pokemon/_add/th/mystia/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdMystia[] = INCGFX_U16("graphics/pokemon/_add/th/mystia/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMystia[] = INCGFX_U8("graphics/pokemon/_add/th/mystia/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Keine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Keine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Keine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Keine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Keine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Keine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HKeine[] = INCGFX_U32("graphics/pokemon/_add/th/keine/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HKeine[] = INCGFX_U16("graphics/pokemon/_add/th/keine/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HKeine[] = INCGFX_U8("graphics/pokemon/_add/th/keine/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ATewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ATewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ATewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ATewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ATewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdTewi[] = INCGFX_U32("graphics/pokemon/_add/th/tewi/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdTewi[] = INCGFX_U16("graphics/pokemon/_add/th/tewi/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdTewi[] = INCGFX_U8("graphics/pokemon/_add/th/tewi/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CReisen[] = INCGFX_COMP("graphics/pokemon/_add/th/reisen/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Reisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Reisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Reisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Reisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Reisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Reisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Reisen[] = INCGFX_COMP("graphics/pokemon/_add/th/reisen/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Reisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Reisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DReisen[] = INCGFX_COMP("graphics/pokemon/_add/th/reisen/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TReisen[] = INCGFX_COMP("graphics/pokemon/_add/th/reisen/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AdReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdReisen[] = INCGFX_U32("graphics/pokemon/_add/th/reisen/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdReisen[] = INCGFX_U16("graphics/pokemon/_add/th/reisen/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdReisen[] = INCGFX_U8("graphics/pokemon/_add/th/reisen/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CReisenII[] = INCGFX_U32("graphics/pokemon/_add/th/reisenii/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CReisenII[] = INCGFX_U16("graphics/pokemon/_add/th/reisenii/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CReisenII[] = INCGFX_U32("graphics/pokemon/_add/th/reisenii/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CReisenII[] = INCGFX_U16("graphics/pokemon/_add/th/reisenii/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CReisenII[] = INCGFX_U8("graphics/pokemon/_add/th/reisenii/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CReisenII[] = INCGFX_U8("graphics/pokemon/_add/th/reisenii/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ReisenII[] = INCGFX_U32("graphics/pokemon/_add/th/reisenii/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ReisenII[] = INCGFX_U16("graphics/pokemon/_add/th/reisenii/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_ReisenII[] = INCGFX_U32("graphics/pokemon/_add/th/reisenii/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ReisenII[] = INCGFX_U16("graphics/pokemon/_add/th/reisenii/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_ReisenII[] = INCGFX_U8("graphics/pokemon/_add/th/reisenii/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ReisenII[] = INCGFX_U8("graphics/pokemon/_add/th/reisenii/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Eirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Eirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Eirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Eirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HEirin[] = INCGFX_U32("graphics/pokemon/_add/th/eirin/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HEirin[] = INCGFX_U16("graphics/pokemon/_add/th/eirin/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HEirin[] = INCGFX_U8("graphics/pokemon/_add/th/eirin/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DKaguya[] = INCGFX_U32("graphics/pokemon/_add/th/kaguya/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DKaguya[] = INCGFX_U16("graphics/pokemon/_add/th/kaguya/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKaguya[] = INCGFX_U8("graphics/pokemon/_add/th/kaguya/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AdMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/advent/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AdMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/advent/normal.pal", ".gbapal");
    const u32 gMonBackPic_AdMokou[] = INCGFX_U32("graphics/pokemon/_add/th/mokou/advent/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AdMokou[] = INCGFX_U16("graphics/pokemon/_add/th/mokou/advent/shiny.pal", ".gbapal");
    const u8 gMonIcon_AdMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/advent/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AdMokou[] = INCGFX_U8("graphics/pokemon/_add/th/mokou/advent/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Aya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Aya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Aya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Aya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Aya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Aya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TAya[] = INCGFX_U32("graphics/pokemon/_add/th/aya/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TAya[] = INCGFX_U16("graphics/pokemon/_add/th/aya/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TAya[] = INCGFX_U8("graphics/pokemon/_add/th/aya/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMedicine[] = INCGFX_COMP("graphics/pokemon/_add/th/medicine/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Medicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Medicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Medicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Medicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Medicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Medicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Medicine[] = INCGFX_COMP("graphics/pokemon/_add/th/medicine/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Medicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Medicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AMedicine[] = INCGFX_COMP("graphics/pokemon/_add/th/medicine/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_SMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_SMedicine[] = INCGFX_COMP("graphics/pokemon/_add/th/medicine/speed/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_SMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/speed/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_SMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/speed/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TMedicine[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TMedicine[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TMedicine[] = INCGFX_COMP("graphics/pokemon/_add/th/medicine/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TMedicine[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CMedicineSanni[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/sanni/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMedicineSanni[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/sanni/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMedicineSanni[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/sanni/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMedicineSanni[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/sanni/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMedicineSanni[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/sanni/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMedicineSanni[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/sanni/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MedicineSanni[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/sanni/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_MedicineSanni[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/sanni/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_MedicineSanni[] = INCGFX_U32("graphics/pokemon/_add/th/medicine/sanni/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_MedicineSanni[] = INCGFX_U16("graphics/pokemon/_add/th/medicine/sanni/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_MedicineSanni[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/sanni/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MedicineSanni[] = INCGFX_U8("graphics/pokemon/_add/th/medicine/sanni/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TYuuka[] = INCGFX_U32("graphics/pokemon/_add/th/yuuka/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TYuuka[] = INCGFX_U16("graphics/pokemon/_add/th/yuuka/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYuuka[] = INCGFX_U8("graphics/pokemon/_add/th/yuuka/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Komachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Komachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Komachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Komachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Komachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Komachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SKomachi[] = INCGFX_U32("graphics/pokemon/_add/th/komachi/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SKomachi[] = INCGFX_U16("graphics/pokemon/_add/th/komachi/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKomachi[] = INCGFX_U8("graphics/pokemon/_add/th/komachi/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Eiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Eiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Eiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Eiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DEiki[] = INCGFX_U32("graphics/pokemon/_add/th/eiki/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DEiki[] = INCGFX_U16("graphics/pokemon/_add/th/eiki/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DEiki[] = INCGFX_U8("graphics/pokemon/_add/th/eiki/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Shizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Shizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Shizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Shizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HShizuha[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HShizuha[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HShizuha[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShizuhaSannian[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/sannian/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShizuhaSannian[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/sannian/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShizuhaSannian[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/sannian/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShizuhaSannian[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/sannian/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShizuhaSannian[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/sannian/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShizuhaSannian[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/sannian/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShizuhaSannian[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/sannian/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ShizuhaSannian[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/sannian/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_ShizuhaSannian[] = INCGFX_U32("graphics/pokemon/_add/th/shizuha/sannian/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ShizuhaSannian[] = INCGFX_U16("graphics/pokemon/_add/th/shizuha/sannian/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_ShizuhaSannian[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/sannian/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShizuhaSannian[] = INCGFX_U8("graphics/pokemon/_add/th/shizuha/sannian/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Minoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Minoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Minoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Minoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Minoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Minoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DMinoriko[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DMinoriko[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMinoriko[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMinorikoSannian[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/sannian/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMinorikoSannian[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/sannian/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMinorikoSannian[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/sannian/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMinorikoSannian[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/sannian/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMinorikoSannian[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/sannian/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMinorikoSannian[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/sannian/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MinorikoSannian[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/sannian/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_MinorikoSannian[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/sannian/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_MinorikoSannian[] = INCGFX_U32("graphics/pokemon/_add/th/minoriko/sannian/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_MinorikoSannian[] = INCGFX_U16("graphics/pokemon/_add/th/minoriko/sannian/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_MinorikoSannian[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/sannian/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MinorikoSannian[] = INCGFX_U8("graphics/pokemon/_add/th/minoriko/sannian/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AkiSisters[] = INCGFX_U32("graphics/pokemon/_add/th/akisisters/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AkiSisters[] = INCGFX_U16("graphics/pokemon/_add/th/akisisters/normal.pal", ".gbapal");
    const u32 gMonBackPic_AkiSisters[] = INCGFX_U32("graphics/pokemon/_add/th/akisisters/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AkiSisters[] = INCGFX_U16("graphics/pokemon/_add/th/akisisters/shiny.pal", ".gbapal");
    const u8 gMonIcon_AkiSisters[] = INCGFX_U8("graphics/pokemon/_add/th/akisisters/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AkiSisters[] = INCGFX_U8("graphics/pokemon/_add/th/akisisters/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CHina[] = INCGFX_COMP("graphics/pokemon/_add/th/hina/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Hina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Hina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Hina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Hina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Hina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Hina[] = INCGFX_COMP("graphics/pokemon/_add/th/hina/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Hina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Hina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AHina[] = INCGFX_COMP("graphics/pokemon/_add/th/hina/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DHina[] = INCGFX_U32("graphics/pokemon/_add/th/hina/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DHina[] = INCGFX_U8("graphics/pokemon/_add/th/hina/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DHina[] = INCGFX_COMP("graphics/pokemon/_add/th/hina/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DHina[] = INCGFX_U16("graphics/pokemon/_add/th/hina/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CNitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CNitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CNitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CNitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CNitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Nitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Nitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Nitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Nitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Nitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ANitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ANitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ANitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ANitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ANitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ANitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TNitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TNitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TNitori[] = INCGFX_U32("graphics/pokemon/_add/th/nitori/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TNitori[] = INCGFX_U16("graphics/pokemon/_add/th/nitori/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TNitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNitori[] = INCGFX_U8("graphics/pokemon/_add/th/nitori/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMomiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMomiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMomiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMomiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CMomiji[] = INCGFX_COMP("graphics/pokemon/_add/th/momiji/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Momiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Momiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Momiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Momiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Momiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Momiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Momiji[] = INCGFX_COMP("graphics/pokemon/_add/th/momiji/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Momiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Momiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DMomiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DMomiji[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DMomiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMomiji[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DMomiji[] = INCGFX_COMP("graphics/pokemon/_add/th/momiji/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DMomiji[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CMomijiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/sanni/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMomijiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/sanni/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMomijiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/sanni/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMomijiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/sanni/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMomijiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/sanni/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMomijiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/sanni/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_MomijiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/sanni/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_MomijiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/sanni/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_MomijiSanni[] = INCGFX_U32("graphics/pokemon/_add/th/momiji/sanni/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_MomijiSanni[] = INCGFX_U16("graphics/pokemon/_add/th/momiji/sanni/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_MomijiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/sanni/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_MomijiSanni[] = INCGFX_U8("graphics/pokemon/_add/th/momiji/sanni/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CSanae[] = INCGFX_COMP("graphics/pokemon/_add/th/sanae/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Sanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Sanae[] = INCGFX_COMP("graphics/pokemon/_add/th/sanae/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Sanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Sanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ASanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ASanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ASanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ASanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ASanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ASanae[] = INCGFX_COMP("graphics/pokemon/_add/th/sanae/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ASanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_ASanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TSanae[] = INCGFX_COMP("graphics/pokemon/_add/th/sanae/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_JKSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/joshi_kosei/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_JKSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/joshi_kosei/normal.pal", ".gbapal");
    const u32 gMonBackPic_JKSanae[] = INCGFX_U32("graphics/pokemon/_add/th/sanae/joshi_kosei/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_JKSanae[] = INCGFX_U16("graphics/pokemon/_add/th/sanae/joshi_kosei/shiny.pal", ".gbapal");
    const u8 gMonIcon_JKSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/joshi_kosei/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_JKSanae[] = INCGFX_U8("graphics/pokemon/_add/th/sanae/joshi_kosei/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DKanako[] = INCGFX_U32("graphics/pokemon/_add/th/kanako/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DKanako[] = INCGFX_U16("graphics/pokemon/_add/th/kanako/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DKanako[] = INCGFX_U8("graphics/pokemon/_add/th/kanako/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Suwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Suwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Suwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Suwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Suwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Suwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ASuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ASuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ASuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ASuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DSuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DSuwako[] = INCGFX_U32("graphics/pokemon/_add/th/suwako/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DSuwako[] = INCGFX_U16("graphics/pokemon/_add/th/suwako/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DSuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSuwako[] = INCGFX_U8("graphics/pokemon/_add/th/suwako/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TKisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TKisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TKisume[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TKisume[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TKisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TKisume[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKisumeSanni[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/sanni/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKisumeSanni[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/sanni/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKisumeSanni[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/sanni/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKisumeSanni[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/sanni/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKisumeSanni[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/sanni/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKisumeSanni[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/sanni/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_KisumeSanni[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/sanni/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_KisumeSanni[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/sanni/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_KisumeSanni[] = INCGFX_U32("graphics/pokemon/_add/th/kisume/sanni/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_KisumeSanni[] = INCGFX_U16("graphics/pokemon/_add/th/kisume/sanni/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_KisumeSanni[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/sanni/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_KisumeSanni[] = INCGFX_U8("graphics/pokemon/_add/th/kisume/sanni/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TYamame[] = INCGFX_U32("graphics/pokemon/_add/th/yamame/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TYamame[] = INCGFX_U16("graphics/pokemon/_add/th/yamame/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TYamame[] = INCGFX_U8("graphics/pokemon/_add/th/yamame/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Parsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Parsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Parsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Parsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Parsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Parsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TParsee[] = INCGFX_U32("graphics/pokemon/_add/th/parsee/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TParsee[] = INCGFX_U16("graphics/pokemon/_add/th/parsee/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TParsee[] = INCGFX_U8("graphics/pokemon/_add/th/parsee/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DYuugi[] = INCGFX_U32("graphics/pokemon/_add/th/yuugi/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DYuugi[] = INCGFX_U16("graphics/pokemon/_add/th/yuugi/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DYuugi[] = INCGFX_U8("graphics/pokemon/_add/th/yuugi/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Rin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Rin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Rin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Rin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ARin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ARin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ARin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ARin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ARin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ARin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SRin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SRin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SRin[] = INCGFX_U32("graphics/pokemon/_add/th/rin/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SRin[] = INCGFX_U16("graphics/pokemon/_add/th/rin/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SRin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SRin[] = INCGFX_U8("graphics/pokemon/_add/th/rin/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ZFairy[] = INCGFX_U32("graphics/pokemon/_add/th/zombiefairy/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ZFairy[] = INCGFX_U16("graphics/pokemon/_add/th/zombiefairy/normal.pal", ".gbapal");
    const u32 gMonBackPic_ZFairy[] = INCGFX_U32("graphics/pokemon/_add/th/zombiefairy/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ZFairy[] = INCGFX_U16("graphics/pokemon/_add/th/zombiefairy/shiny.pal", ".gbapal");
    const u8 gMonIcon_ZFairy[] = INCGFX_U8("graphics/pokemon/_add/th/zombiefairy/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ZFairy[] = INCGFX_U8("graphics/pokemon/_add/th/zombiefairy/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Utsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Utsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Utsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Utsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Utsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Utsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SUtsuho[] = INCGFX_U32("graphics/pokemon/_add/th/utsuho/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SUtsuho[] = INCGFX_U16("graphics/pokemon/_add/th/utsuho/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SUtsuho[] = INCGFX_U8("graphics/pokemon/_add/th/utsuho/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Satori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Satori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Satori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Satori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Satori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Satori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TSatori[] = INCGFX_U32("graphics/pokemon/_add/th/satori/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TSatori[] = INCGFX_U16("graphics/pokemon/_add/th/satori/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSatori[] = INCGFX_U8("graphics/pokemon/_add/th/satori/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Koishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Koishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Koishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Koishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Koishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Koishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SKoishi[] = INCGFX_U32("graphics/pokemon/_add/th/koishi/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SKoishi[] = INCGFX_U16("graphics/pokemon/_add/th/koishi/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKoishi[] = INCGFX_U8("graphics/pokemon/_add/th/koishi/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CNazrin[] = INCGFX_COMP("graphics/pokemon/_add/th/nazrin/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Nazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Nazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Nazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Nazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Nazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Nazrin[] = INCGFX_COMP("graphics/pokemon/_add/th/nazrin/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Nazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Nazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TNazrin[] = INCGFX_COMP("graphics/pokemon/_add/th/nazrin/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HNazrin[] = INCGFX_U32("graphics/pokemon/_add/th/nazrin/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HNazrin[] = INCGFX_U8("graphics/pokemon/_add/th/nazrin/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HNazrin[] = INCGFX_COMP("graphics/pokemon/_add/th/nazrin/helper/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/helper/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_HNazrin[] = INCGFX_U16("graphics/pokemon/_add/th/nazrin/helper/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TKogasa[] = INCGFX_U32("graphics/pokemon/_add/th/kogasa/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TKogasa[] = INCGFX_U16("graphics/pokemon/_add/th/kogasa/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TKogasa[] = INCGFX_U8("graphics/pokemon/_add/th/kogasa/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ichirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Ichirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Ichirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Ichirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Ichirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ichirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TIchirin[] = INCGFX_U32("graphics/pokemon/_add/th/ichirin/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TIchirin[] = INCGFX_U16("graphics/pokemon/_add/th/ichirin/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TIchirin[] = INCGFX_U8("graphics/pokemon/_add/th/ichirin/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Murasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Murasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Murasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Murasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Murasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Murasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DMurasa[] = INCGFX_U32("graphics/pokemon/_add/th/murasa/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DMurasa[] = INCGFX_U16("graphics/pokemon/_add/th/murasa/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DMurasa[] = INCGFX_U8("graphics/pokemon/_add/th/murasa/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Shou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Shou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Shou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Shou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TShou[] = INCGFX_U32("graphics/pokemon/_add/th/shou/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TShou[] = INCGFX_U16("graphics/pokemon/_add/th/shou/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TShou[] = INCGFX_U8("graphics/pokemon/_add/th/shou/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Byakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Byakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Byakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Byakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Byakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Byakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TByakuren[] = INCGFX_U32("graphics/pokemon/_add/th/byakuren/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TByakuren[] = INCGFX_U16("graphics/pokemon/_add/th/byakuren/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TByakuren[] = INCGFX_U8("graphics/pokemon/_add/th/byakuren/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CNue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CNue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CNue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CNue[] = INCGFX_COMP("graphics/pokemon/_add/th/nue/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Nue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Nue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Nue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Nue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Nue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Nue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Nue[] = INCGFX_COMP("graphics/pokemon/_add/th/nue/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Nue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Nue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ANue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ANue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ANue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ANue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ANue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ANue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ANue[] = INCGFX_COMP("graphics/pokemon/_add/th/nue/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ANue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_ANue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_TNue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TNue[] = INCGFX_U32("graphics/pokemon/_add/th/nue/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TNue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TNue[] = INCGFX_U8("graphics/pokemon/_add/th/nue/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_TNue[] = INCGFX_COMP("graphics/pokemon/_add/th/nue/tech/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_TNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/tech/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_TNue[] = INCGFX_U16("graphics/pokemon/_add/th/nue/tech/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKyouko[] = INCGFX_U32("graphics/pokemon/_add/th/kyouko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKyouko[] = INCGFX_U32("graphics/pokemon/_add/th/kyouko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKyouko[] = INCGFX_U8("graphics/pokemon/_add/th/kyouko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKyouko[] = INCGFX_U8("graphics/pokemon/_add/th/kyouko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CKyouko[] = INCGFX_COMP("graphics/pokemon/_add/th/kyouko/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CKyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CKyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Kyouko[] = INCGFX_U32("graphics/pokemon/_add/th/kyouko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kyouko[] = INCGFX_U32("graphics/pokemon/_add/th/kyouko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kyouko[] = INCGFX_U8("graphics/pokemon/_add/th/kyouko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kyouko[] = INCGFX_U8("graphics/pokemon/_add/th/kyouko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Kyouko[] = INCGFX_COMP("graphics/pokemon/_add/th/kyouko/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Kyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Kyouko[] = INCGFX_U16("graphics/pokemon/_add/th/kyouko/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CYoshika[] = INCGFX_U32("graphics/pokemon/_add/th/yoshika/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYoshika[] = INCGFX_U16("graphics/pokemon/_add/th/yoshika/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYoshika[] = INCGFX_U32("graphics/pokemon/_add/th/yoshika/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYoshika[] = INCGFX_U16("graphics/pokemon/_add/th/yoshika/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYoshika[] = INCGFX_U8("graphics/pokemon/_add/th/yoshika/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYoshika[] = INCGFX_U8("graphics/pokemon/_add/th/yoshika/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yoshika[] = INCGFX_U32("graphics/pokemon/_add/th/yoshika/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yoshika[] = INCGFX_U16("graphics/pokemon/_add/th/yoshika/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yoshika[] = INCGFX_U32("graphics/pokemon/_add/th/yoshika/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yoshika[] = INCGFX_U16("graphics/pokemon/_add/th/yoshika/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yoshika[] = INCGFX_U8("graphics/pokemon/_add/th/yoshika/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yoshika[] = INCGFX_U8("graphics/pokemon/_add/th/yoshika/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeiga[] = INCGFX_U32("graphics/pokemon/_add/th/seiga/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSeiga[] = INCGFX_U16("graphics/pokemon/_add/th/seiga/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSeiga[] = INCGFX_U32("graphics/pokemon/_add/th/seiga/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSeiga[] = INCGFX_U16("graphics/pokemon/_add/th/seiga/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSeiga[] = INCGFX_U8("graphics/pokemon/_add/th/seiga/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeiga[] = INCGFX_U8("graphics/pokemon/_add/th/seiga/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seiga[] = INCGFX_U32("graphics/pokemon/_add/th/seiga/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Seiga[] = INCGFX_U16("graphics/pokemon/_add/th/seiga/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Seiga[] = INCGFX_U32("graphics/pokemon/_add/th/seiga/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Seiga[] = INCGFX_U16("graphics/pokemon/_add/th/seiga/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Seiga[] = INCGFX_U8("graphics/pokemon/_add/th/seiga/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seiga[] = INCGFX_U8("graphics/pokemon/_add/th/seiga/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTojiko[] = INCGFX_U32("graphics/pokemon/_add/th/tojiko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTojiko[] = INCGFX_U16("graphics/pokemon/_add/th/tojiko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTojiko[] = INCGFX_U32("graphics/pokemon/_add/th/tojiko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTojiko[] = INCGFX_U16("graphics/pokemon/_add/th/tojiko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTojiko[] = INCGFX_U8("graphics/pokemon/_add/th/tojiko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTojiko[] = INCGFX_U8("graphics/pokemon/_add/th/tojiko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tojiko[] = INCGFX_U32("graphics/pokemon/_add/th/tojiko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tojiko[] = INCGFX_U16("graphics/pokemon/_add/th/tojiko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tojiko[] = INCGFX_U32("graphics/pokemon/_add/th/tojiko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tojiko[] = INCGFX_U16("graphics/pokemon/_add/th/tojiko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tojiko[] = INCGFX_U8("graphics/pokemon/_add/th/tojiko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tojiko[] = INCGFX_U8("graphics/pokemon/_add/th/tojiko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CFuto[] = INCGFX_U32("graphics/pokemon/_add/th/futo/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CFuto[] = INCGFX_U16("graphics/pokemon/_add/th/futo/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CFuto[] = INCGFX_U32("graphics/pokemon/_add/th/futo/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CFuto[] = INCGFX_U16("graphics/pokemon/_add/th/futo/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CFuto[] = INCGFX_U8("graphics/pokemon/_add/th/futo/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CFuto[] = INCGFX_U8("graphics/pokemon/_add/th/futo/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Futo[] = INCGFX_U32("graphics/pokemon/_add/th/futo/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Futo[] = INCGFX_U16("graphics/pokemon/_add/th/futo/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Futo[] = INCGFX_U32("graphics/pokemon/_add/th/futo/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Futo[] = INCGFX_U16("graphics/pokemon/_add/th/futo/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Futo[] = INCGFX_U8("graphics/pokemon/_add/th/futo/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Futo[] = INCGFX_U8("graphics/pokemon/_add/th/futo/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMiko[] = INCGFX_U32("graphics/pokemon/_add/th/miko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMiko[] = INCGFX_U16("graphics/pokemon/_add/th/miko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMiko[] = INCGFX_U32("graphics/pokemon/_add/th/miko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMiko[] = INCGFX_U16("graphics/pokemon/_add/th/miko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMiko[] = INCGFX_U8("graphics/pokemon/_add/th/miko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMiko[] = INCGFX_U8("graphics/pokemon/_add/th/miko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Miko[] = INCGFX_U32("graphics/pokemon/_add/th/miko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Miko[] = INCGFX_U16("graphics/pokemon/_add/th/miko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Miko[] = INCGFX_U32("graphics/pokemon/_add/th/miko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Miko[] = INCGFX_U16("graphics/pokemon/_add/th/miko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Miko[] = INCGFX_U8("graphics/pokemon/_add/th/miko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Miko[] = INCGFX_U8("graphics/pokemon/_add/th/miko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMamizou[] = INCGFX_U32("graphics/pokemon/_add/th/mamizou/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMamizou[] = INCGFX_U16("graphics/pokemon/_add/th/mamizou/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMamizou[] = INCGFX_U32("graphics/pokemon/_add/th/mamizou/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMamizou[] = INCGFX_U16("graphics/pokemon/_add/th/mamizou/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMamizou[] = INCGFX_U8("graphics/pokemon/_add/th/mamizou/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMamizou[] = INCGFX_U8("graphics/pokemon/_add/th/mamizou/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mamizou[] = INCGFX_U32("graphics/pokemon/_add/th/mamizou/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mamizou[] = INCGFX_U16("graphics/pokemon/_add/th/mamizou/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mamizou[] = INCGFX_U32("graphics/pokemon/_add/th/mamizou/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mamizou[] = INCGFX_U16("graphics/pokemon/_add/th/mamizou/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mamizou[] = INCGFX_U8("graphics/pokemon/_add/th/mamizou/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mamizou[] = INCGFX_U8("graphics/pokemon/_add/th/mamizou/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSekibanki[] = INCGFX_U32("graphics/pokemon/_add/th/sekibanki/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSekibanki[] = INCGFX_U16("graphics/pokemon/_add/th/sekibanki/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSekibanki[] = INCGFX_U32("graphics/pokemon/_add/th/sekibanki/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSekibanki[] = INCGFX_U16("graphics/pokemon/_add/th/sekibanki/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSekibanki[] = INCGFX_U8("graphics/pokemon/_add/th/sekibanki/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSekibanki[] = INCGFX_U8("graphics/pokemon/_add/th/sekibanki/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sekibanki[] = INCGFX_U32("graphics/pokemon/_add/th/sekibanki/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sekibanki[] = INCGFX_U16("graphics/pokemon/_add/th/sekibanki/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sekibanki[] = INCGFX_U32("graphics/pokemon/_add/th/sekibanki/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sekibanki[] = INCGFX_U16("graphics/pokemon/_add/th/sekibanki/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sekibanki[] = INCGFX_U8("graphics/pokemon/_add/th/sekibanki/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sekibanki[] = INCGFX_U8("graphics/pokemon/_add/th/sekibanki/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKagerou[] = INCGFX_U32("graphics/pokemon/_add/th/kagerou/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKagerou[] = INCGFX_U32("graphics/pokemon/_add/th/kagerou/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKagerou[] = INCGFX_U8("graphics/pokemon/_add/th/kagerou/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKagerou[] = INCGFX_U8("graphics/pokemon/_add/th/kagerou/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CKagerou[] = INCGFX_COMP("graphics/pokemon/_add/th/kagerou/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CKagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CKagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Kagerou[] = INCGFX_U32("graphics/pokemon/_add/th/kagerou/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kagerou[] = INCGFX_U32("graphics/pokemon/_add/th/kagerou/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kagerou[] = INCGFX_U8("graphics/pokemon/_add/th/kagerou/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kagerou[] = INCGFX_U8("graphics/pokemon/_add/th/kagerou/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Kagerou[] = INCGFX_COMP("graphics/pokemon/_add/th/kagerou/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Kagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Kagerou[] = INCGFX_U16("graphics/pokemon/_add/th/kagerou/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CWakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CWakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CWakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CWakasagihime[] = INCGFX_COMP("graphics/pokemon/_add/th/wakasagihime/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Wakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Wakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Wakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Wakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Wakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Wakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Wakasagihime[] = INCGFX_COMP("graphics/pokemon/_add/th/wakasagihime/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Wakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Wakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_DWakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DWakasagihime[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DWakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWakasagihime[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_DWakasagihime[] = INCGFX_COMP("graphics/pokemon/_add/th/wakasagihime/defense/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_DWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/defense/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_DWakasagihime[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/defense/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CWakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CWakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CWakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CWakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CWakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CWakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_WakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_WakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_WakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_WakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_WakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_WakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DWakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DWakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DWakasagihimeGolden[] = INCGFX_U32("graphics/pokemon/_add/th/wakasagihime/golden/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DWakasagihimeGolden[] = INCGFX_U16("graphics/pokemon/_add/th/wakasagihime/golden/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DWakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DWakasagihimeGolden[] = INCGFX_U8("graphics/pokemon/_add/th/wakasagihime/golden/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CBenben[] = INCGFX_U32("graphics/pokemon/_add/th/benben/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CBenben[] = INCGFX_U16("graphics/pokemon/_add/th/benben/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CBenben[] = INCGFX_U32("graphics/pokemon/_add/th/benben/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CBenben[] = INCGFX_U16("graphics/pokemon/_add/th/benben/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CBenben[] = INCGFX_U8("graphics/pokemon/_add/th/benben/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CBenben[] = INCGFX_U8("graphics/pokemon/_add/th/benben/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Benben[] = INCGFX_U32("graphics/pokemon/_add/th/benben/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Benben[] = INCGFX_U16("graphics/pokemon/_add/th/benben/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Benben[] = INCGFX_U32("graphics/pokemon/_add/th/benben/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Benben[] = INCGFX_U16("graphics/pokemon/_add/th/benben/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Benben[] = INCGFX_U8("graphics/pokemon/_add/th/benben/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Benben[] = INCGFX_U8("graphics/pokemon/_add/th/benben/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYatsuhashi[] = INCGFX_U32("graphics/pokemon/_add/th/yatsuhashi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYatsuhashi[] = INCGFX_U16("graphics/pokemon/_add/th/yatsuhashi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYatsuhashi[] = INCGFX_U32("graphics/pokemon/_add/th/yatsuhashi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYatsuhashi[] = INCGFX_U16("graphics/pokemon/_add/th/yatsuhashi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYatsuhashi[] = INCGFX_U8("graphics/pokemon/_add/th/yatsuhashi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYatsuhashi[] = INCGFX_U8("graphics/pokemon/_add/th/yatsuhashi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yatsuhashi[] = INCGFX_U32("graphics/pokemon/_add/th/yatsuhashi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yatsuhashi[] = INCGFX_U16("graphics/pokemon/_add/th/yatsuhashi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yatsuhashi[] = INCGFX_U32("graphics/pokemon/_add/th/yatsuhashi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yatsuhashi[] = INCGFX_U16("graphics/pokemon/_add/th/yatsuhashi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yatsuhashi[] = INCGFX_U8("graphics/pokemon/_add/th/yatsuhashi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yatsuhashi[] = INCGFX_U8("graphics/pokemon/_add/th/yatsuhashi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRaiko[] = INCGFX_U32("graphics/pokemon/_add/th/raiko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRaiko[] = INCGFX_U16("graphics/pokemon/_add/th/raiko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRaiko[] = INCGFX_U32("graphics/pokemon/_add/th/raiko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRaiko[] = INCGFX_U16("graphics/pokemon/_add/th/raiko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRaiko[] = INCGFX_U8("graphics/pokemon/_add/th/raiko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRaiko[] = INCGFX_U8("graphics/pokemon/_add/th/raiko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Raiko[] = INCGFX_U32("graphics/pokemon/_add/th/raiko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Raiko[] = INCGFX_U16("graphics/pokemon/_add/th/raiko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Raiko[] = INCGFX_U32("graphics/pokemon/_add/th/raiko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Raiko[] = INCGFX_U16("graphics/pokemon/_add/th/raiko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Raiko[] = INCGFX_U8("graphics/pokemon/_add/th/raiko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Raiko[] = INCGFX_U8("graphics/pokemon/_add/th/raiko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeija[] = INCGFX_U32("graphics/pokemon/_add/th/seija/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSeija[] = INCGFX_U16("graphics/pokemon/_add/th/seija/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSeija[] = INCGFX_U32("graphics/pokemon/_add/th/seija/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSeija[] = INCGFX_U16("graphics/pokemon/_add/th/seija/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSeija[] = INCGFX_U8("graphics/pokemon/_add/th/seija/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeija[] = INCGFX_U8("graphics/pokemon/_add/th/seija/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seija[] = INCGFX_U32("graphics/pokemon/_add/th/seija/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Seija[] = INCGFX_U16("graphics/pokemon/_add/th/seija/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Seija[] = INCGFX_U32("graphics/pokemon/_add/th/seija/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Seija[] = INCGFX_U16("graphics/pokemon/_add/th/seija/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Seija[] = INCGFX_U8("graphics/pokemon/_add/th/seija/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seija[] = INCGFX_U8("graphics/pokemon/_add/th/seija/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Shinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Shinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Shinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Shinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DShinmyoumaru[] = INCGFX_U32("graphics/pokemon/_add/th/shinmyoumaru/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DShinmyoumaru[] = INCGFX_U16("graphics/pokemon/_add/th/shinmyoumaru/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DShinmyoumaru[] = INCGFX_U8("graphics/pokemon/_add/th/shinmyoumaru/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Suika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Suika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Suika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Suika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Suika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Suika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ASuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ASuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ASuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ASuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TSuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TSuika[] = INCGFX_U32("graphics/pokemon/_add/th/suika/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TSuika[] = INCGFX_U16("graphics/pokemon/_add/th/suika/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TSuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSuika[] = INCGFX_U8("graphics/pokemon/_add/th/suika/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Iku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Iku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Iku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Iku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Iku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Iku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TIku[] = INCGFX_U32("graphics/pokemon/_add/th/iku/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TIku[] = INCGFX_U16("graphics/pokemon/_add/th/iku/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TIku[] = INCGFX_U8("graphics/pokemon/_add/th/iku/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ATenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ATenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ATenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ATenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ATenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DTenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DTenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DTenshi[] = INCGFX_U32("graphics/pokemon/_add/th/tenshi/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DTenshi[] = INCGFX_U16("graphics/pokemon/_add/th/tenshi/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DTenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DTenshi[] = INCGFX_U8("graphics/pokemon/_add/th/tenshi/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Hatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Hatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Hatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Hatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DHatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DHatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DHatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DHatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DHatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DHatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_THatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_THatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_THatate[] = INCGFX_U32("graphics/pokemon/_add/th/hatate/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_THatate[] = INCGFX_U16("graphics/pokemon/_add/th/hatate/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_THatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_THatate[] = INCGFX_U8("graphics/pokemon/_add/th/hatate/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ASunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ASunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ASunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ASunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_DSunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/defense/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_DSunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/defense/normal.pal", ".gbapal");
    const u32 gMonBackPic_DSunny[] = INCGFX_U32("graphics/pokemon/_add/th/sunny/defense/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_DSunny[] = INCGFX_U16("graphics/pokemon/_add/th/sunny/defense/shiny.pal", ".gbapal");
    const u8 gMonIcon_DSunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/defense/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_DSunny[] = INCGFX_U8("graphics/pokemon/_add/th/sunny/defense/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Luna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Luna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Luna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Luna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Luna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Luna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ALuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ALuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ALuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ALuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ALuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ALuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TLuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TLuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TLuna[] = INCGFX_U32("graphics/pokemon/_add/th/luna/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TLuna[] = INCGFX_U16("graphics/pokemon/_add/th/luna/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TLuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TLuna[] = INCGFX_U8("graphics/pokemon/_add/th/luna/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CStar[] = INCGFX_COMP("graphics/pokemon/_add/th/star/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Star[] = INCGFX_U32("graphics/pokemon/_add/th/star/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Star[] = INCGFX_U16("graphics/pokemon/_add/th/star/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Star[] = INCGFX_U32("graphics/pokemon/_add/th/star/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Star[] = INCGFX_U16("graphics/pokemon/_add/th/star/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Star[] = INCGFX_U8("graphics/pokemon/_add/th/star/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Star[] = INCGFX_U8("graphics/pokemon/_add/th/star/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Star[] = INCGFX_COMP("graphics/pokemon/_add/th/star/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Star[] = INCGFX_U16("graphics/pokemon/_add/th/star/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Star[] = INCGFX_U16("graphics/pokemon/_add/th/star/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_AStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_AStar[] = INCGFX_COMP("graphics/pokemon/_add/th/star/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_AStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_AStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_HStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HStar[] = INCGFX_U32("graphics/pokemon/_add/th/star/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HStar[] = INCGFX_U8("graphics/pokemon/_add/th/star/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_HStar[] = INCGFX_COMP("graphics/pokemon/_add/th/star/helper/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_HStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/helper/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_HStar[] = INCGFX_U16("graphics/pokemon/_add/th/star/helper/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKokoro[] = INCGFX_U32("graphics/pokemon/_add/th/kokoro/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKokoro[] = INCGFX_U16("graphics/pokemon/_add/th/kokoro/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKokoro[] = INCGFX_U32("graphics/pokemon/_add/th/kokoro/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKokoro[] = INCGFX_U16("graphics/pokemon/_add/th/kokoro/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKokoro[] = INCGFX_U8("graphics/pokemon/_add/th/kokoro/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKokoro[] = INCGFX_U8("graphics/pokemon/_add/th/kokoro/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kokoro[] = INCGFX_U32("graphics/pokemon/_add/th/kokoro/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kokoro[] = INCGFX_U16("graphics/pokemon/_add/th/kokoro/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kokoro[] = INCGFX_U32("graphics/pokemon/_add/th/kokoro/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kokoro[] = INCGFX_U16("graphics/pokemon/_add/th/kokoro/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kokoro[] = INCGFX_U8("graphics/pokemon/_add/th/kokoro/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kokoro[] = INCGFX_U8("graphics/pokemon/_add/th/kokoro/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKasen[] = INCGFX_U32("graphics/pokemon/_add/th/kasen/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKasen[] = INCGFX_U16("graphics/pokemon/_add/th/kasen/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKasen[] = INCGFX_U32("graphics/pokemon/_add/th/kasen/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKasen[] = INCGFX_U16("graphics/pokemon/_add/th/kasen/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKasen[] = INCGFX_U8("graphics/pokemon/_add/th/kasen/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKasen[] = INCGFX_U8("graphics/pokemon/_add/th/kasen/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kasen[] = INCGFX_U32("graphics/pokemon/_add/th/kasen/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kasen[] = INCGFX_U16("graphics/pokemon/_add/th/kasen/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kasen[] = INCGFX_U32("graphics/pokemon/_add/th/kasen/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kasen[] = INCGFX_U16("graphics/pokemon/_add/th/kasen/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kasen[] = INCGFX_U8("graphics/pokemon/_add/th/kasen/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kasen[] = INCGFX_U8("graphics/pokemon/_add/th/kasen/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SYorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SYorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SYorihime[] = INCGFX_U32("graphics/pokemon/_add/th/yorihime/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SYorihime[] = INCGFX_U16("graphics/pokemon/_add/th/yorihime/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SYorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SYorihime[] = INCGFX_U8("graphics/pokemon/_add/th/yorihime/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CToyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CToyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CToyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CToyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CToyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CToyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Toyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Toyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Toyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Toyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Toyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Toyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TToyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TToyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TToyohime[] = INCGFX_U32("graphics/pokemon/_add/th/toyohime/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TToyohime[] = INCGFX_U16("graphics/pokemon/_add/th/toyohime/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TToyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TToyohime[] = INCGFX_U8("graphics/pokemon/_add/th/toyohime/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CTokiko[] = INCGFX_COMP("graphics/pokemon/_add/th/tokiko/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CTokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CTokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Tokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Tokiko[] = INCGFX_COMP("graphics/pokemon/_add/th/tokiko/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Tokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Tokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_ATokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ATokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ATokiko[] = INCGFX_U32("graphics/pokemon/_add/th/tokiko/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ATokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ATokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ATokiko[] = INCGFX_U8("graphics/pokemon/_add/th/tokiko/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_ATokiko[] = INCGFX_COMP("graphics/pokemon/_add/th/tokiko/attack/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_ATokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/attack/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_ATokiko[] = INCGFX_U16("graphics/pokemon/_add/th/tokiko/attack/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CKosuzu[] = INCGFX_U32("graphics/pokemon/_add/th/kosuzu/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKosuzu[] = INCGFX_U16("graphics/pokemon/_add/th/kosuzu/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKosuzu[] = INCGFX_U32("graphics/pokemon/_add/th/kosuzu/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKosuzu[] = INCGFX_U16("graphics/pokemon/_add/th/kosuzu/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKosuzu[] = INCGFX_U8("graphics/pokemon/_add/th/kosuzu/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKosuzu[] = INCGFX_U8("graphics/pokemon/_add/th/kosuzu/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kosuzu[] = INCGFX_U32("graphics/pokemon/_add/th/kosuzu/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kosuzu[] = INCGFX_U16("graphics/pokemon/_add/th/kosuzu/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kosuzu[] = INCGFX_U32("graphics/pokemon/_add/th/kosuzu/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kosuzu[] = INCGFX_U16("graphics/pokemon/_add/th/kosuzu/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kosuzu[] = INCGFX_U8("graphics/pokemon/_add/th/kosuzu/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kosuzu[] = INCGFX_U8("graphics/pokemon/_add/th/kosuzu/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CJoon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CJoon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CJoon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CJoon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CJoon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CJoon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Joon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Joon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Joon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Joon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Joon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Joon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AJoon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AJoon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AJoon[] = INCGFX_U32("graphics/pokemon/_add/th/joon/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AJoon[] = INCGFX_U16("graphics/pokemon/_add/th/joon/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AJoon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AJoon[] = INCGFX_U8("graphics/pokemon/_add/th/joon/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHakurei[] = INCGFX_U32("graphics/pokemon/_add/th/hakurei/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHakurei[] = INCGFX_U16("graphics/pokemon/_add/th/hakurei/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHakurei[] = INCGFX_U32("graphics/pokemon/_add/th/hakurei/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHakurei[] = INCGFX_U16("graphics/pokemon/_add/th/hakurei/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHakurei[] = INCGFX_U8("graphics/pokemon/_add/th/hakurei/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHakurei[] = INCGFX_U8("graphics/pokemon/_add/th/hakurei/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Hakurei[] = INCGFX_U32("graphics/pokemon/_add/th/hakurei/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Hakurei[] = INCGFX_U16("graphics/pokemon/_add/th/hakurei/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Hakurei[] = INCGFX_U32("graphics/pokemon/_add/th/hakurei/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Hakurei[] = INCGFX_U16("graphics/pokemon/_add/th/hakurei/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Hakurei[] = INCGFX_U8("graphics/pokemon/_add/th/hakurei/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Hakurei[] = INCGFX_U8("graphics/pokemon/_add/th/hakurei/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKonngara[] = INCGFX_U32("graphics/pokemon/_add/th/konngara/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKonngara[] = INCGFX_U16("graphics/pokemon/_add/th/konngara/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKonngara[] = INCGFX_U32("graphics/pokemon/_add/th/konngara/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKonngara[] = INCGFX_U16("graphics/pokemon/_add/th/konngara/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKonngara[] = INCGFX_U8("graphics/pokemon/_add/th/konngara/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKonngara[] = INCGFX_U8("graphics/pokemon/_add/th/konngara/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Konngara[] = INCGFX_U32("graphics/pokemon/_add/th/konngara/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Konngara[] = INCGFX_U16("graphics/pokemon/_add/th/konngara/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Konngara[] = INCGFX_U32("graphics/pokemon/_add/th/konngara/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Konngara[] = INCGFX_U16("graphics/pokemon/_add/th/konngara/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Konngara[] = INCGFX_U8("graphics/pokemon/_add/th/konngara/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Konngara[] = INCGFX_U8("graphics/pokemon/_add/th/konngara/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKikuri[] = INCGFX_U32("graphics/pokemon/_add/th/kikuri/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKikuri[] = INCGFX_U16("graphics/pokemon/_add/th/kikuri/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKikuri[] = INCGFX_U32("graphics/pokemon/_add/th/kikuri/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKikuri[] = INCGFX_U16("graphics/pokemon/_add/th/kikuri/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKikuri[] = INCGFX_U8("graphics/pokemon/_add/th/kikuri/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKikuri[] = INCGFX_U8("graphics/pokemon/_add/th/kikuri/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kikuri[] = INCGFX_U32("graphics/pokemon/_add/th/kikuri/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kikuri[] = INCGFX_U16("graphics/pokemon/_add/th/kikuri/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kikuri[] = INCGFX_U32("graphics/pokemon/_add/th/kikuri/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kikuri[] = INCGFX_U16("graphics/pokemon/_add/th/kikuri/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kikuri[] = INCGFX_U8("graphics/pokemon/_add/th/kikuri/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kikuri[] = INCGFX_U8("graphics/pokemon/_add/th/kikuri/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuugenmagan[] = INCGFX_U32("graphics/pokemon/_add/th/yuugenmagan/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYuugenmagan[] = INCGFX_U16("graphics/pokemon/_add/th/yuugenmagan/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYuugenmagan[] = INCGFX_U32("graphics/pokemon/_add/th/yuugenmagan/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYuugenmagan[] = INCGFX_U16("graphics/pokemon/_add/th/yuugenmagan/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYuugenmagan[] = INCGFX_U8("graphics/pokemon/_add/th/yuugenmagan/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuugenmagan[] = INCGFX_U8("graphics/pokemon/_add/th/yuugenmagan/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuugenmagan[] = INCGFX_U32("graphics/pokemon/_add/th/yuugenmagan/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yuugenmagan[] = INCGFX_U16("graphics/pokemon/_add/th/yuugenmagan/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yuugenmagan[] = INCGFX_U32("graphics/pokemon/_add/th/yuugenmagan/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yuugenmagan[] = INCGFX_U16("graphics/pokemon/_add/th/yuugenmagan/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yuugenmagan[] = INCGFX_U8("graphics/pokemon/_add/th/yuugenmagan/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuugenmagan[] = INCGFX_U8("graphics/pokemon/_add/th/yuugenmagan/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_SSariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_SSariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_SSariel[] = INCGFX_U32("graphics/pokemon/_add/th/sariel/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_SSariel[] = INCGFX_U16("graphics/pokemon/_add/th/sariel/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_SSariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_SSariel[] = INCGFX_U8("graphics/pokemon/_add/th/sariel/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShingyoku[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShingyoku[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShingyoku[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShingyoku[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShingyoku[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShingyoku[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuO[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/origin/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ShingyokuO[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/origin/normal.pal", ".gbapal");
    const u32 gMonBackPic_ShingyokuO[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/origin/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuO[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/origin/shiny.pal", ".gbapal");
    const u8 gMonIcon_ShingyokuO[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/origin/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuO[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/origin/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuM[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/male/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ShingyokuM[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/male/normal.pal", ".gbapal");
    const u32 gMonBackPic_ShingyokuM[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/male/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuM[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/male/shiny.pal", ".gbapal");
    const u8 gMonIcon_ShingyokuM[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/male/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuM[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/male/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ShingyokuF[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/female/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ShingyokuF[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/female/normal.pal", ".gbapal");
    const u32 gMonBackPic_ShingyokuF[] = INCGFX_U32("graphics/pokemon/_add/th/shingyoku/female/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ShingyokuF[] = INCGFX_U16("graphics/pokemon/_add/th/shingyoku/female/shiny.pal", ".gbapal");
    const u8 gMonIcon_ShingyokuF[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/female/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ShingyokuF[] = INCGFX_U8("graphics/pokemon/_add/th/shingyoku/female/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CElis[] = INCGFX_U32("graphics/pokemon/_add/th/elis/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CElis[] = INCGFX_U16("graphics/pokemon/_add/th/elis/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CElis[] = INCGFX_U32("graphics/pokemon/_add/th/elis/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CElis[] = INCGFX_U16("graphics/pokemon/_add/th/elis/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CElis[] = INCGFX_U8("graphics/pokemon/_add/th/elis/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CElis[] = INCGFX_U8("graphics/pokemon/_add/th/elis/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Elis[] = INCGFX_U32("graphics/pokemon/_add/th/elis/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Elis[] = INCGFX_U16("graphics/pokemon/_add/th/elis/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Elis[] = INCGFX_U32("graphics/pokemon/_add/th/elis/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Elis[] = INCGFX_U16("graphics/pokemon/_add/th/elis/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Elis[] = INCGFX_U8("graphics/pokemon/_add/th/elis/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Elis[] = INCGFX_U8("graphics/pokemon/_add/th/elis/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMima[] = INCGFX_U32("graphics/pokemon/_add/th/mima/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMima[] = INCGFX_U16("graphics/pokemon/_add/th/mima/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMima[] = INCGFX_U32("graphics/pokemon/_add/th/mima/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMima[] = INCGFX_U16("graphics/pokemon/_add/th/mima/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMima[] = INCGFX_U8("graphics/pokemon/_add/th/mima/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMima[] = INCGFX_U8("graphics/pokemon/_add/th/mima/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mima[] = INCGFX_U32("graphics/pokemon/_add/th/mima/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mima[] = INCGFX_U16("graphics/pokemon/_add/th/mima/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mima[] = INCGFX_U32("graphics/pokemon/_add/th/mima/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mima[] = INCGFX_U16("graphics/pokemon/_add/th/mima/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mima[] = INCGFX_U8("graphics/pokemon/_add/th/mima/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mima[] = INCGFX_U8("graphics/pokemon/_add/th/mima/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKirisame[] = INCGFX_U32("graphics/pokemon/_add/th/kirisame/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKirisame[] = INCGFX_U16("graphics/pokemon/_add/th/kirisame/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKirisame[] = INCGFX_U32("graphics/pokemon/_add/th/kirisame/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKirisame[] = INCGFX_U16("graphics/pokemon/_add/th/kirisame/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKirisame[] = INCGFX_U8("graphics/pokemon/_add/th/kirisame/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKirisame[] = INCGFX_U8("graphics/pokemon/_add/th/kirisame/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kirisame[] = INCGFX_U32("graphics/pokemon/_add/th/kirisame/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kirisame[] = INCGFX_U16("graphics/pokemon/_add/th/kirisame/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kirisame[] = INCGFX_U32("graphics/pokemon/_add/th/kirisame/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kirisame[] = INCGFX_U16("graphics/pokemon/_add/th/kirisame/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kirisame[] = INCGFX_U8("graphics/pokemon/_add/th/kirisame/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kirisame[] = INCGFX_U8("graphics/pokemon/_add/th/kirisame/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Genji[] = INCGFX_U32("graphics/pokemon/_add/th/genji/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Genji[] = INCGFX_U16("graphics/pokemon/_add/th/genji/normal.pal", ".gbapal");
    const u32 gMonBackPic_Genji[] = INCGFX_U32("graphics/pokemon/_add/th/genji/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Genji[] = INCGFX_U16("graphics/pokemon/_add/th/genji/shiny.pal", ".gbapal");
    const u8 gMonIcon_Genji[] = INCGFX_U8("graphics/pokemon/_add/th/genji/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Genji[] = INCGFX_U8("graphics/pokemon/_add/th/genji/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRika[] = INCGFX_U32("graphics/pokemon/_add/th/rika/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRika[] = INCGFX_U16("graphics/pokemon/_add/th/rika/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRika[] = INCGFX_U32("graphics/pokemon/_add/th/rika/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRika[] = INCGFX_U16("graphics/pokemon/_add/th/rika/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRika[] = INCGFX_U8("graphics/pokemon/_add/th/rika/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRika[] = INCGFX_U8("graphics/pokemon/_add/th/rika/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rika[] = INCGFX_U32("graphics/pokemon/_add/th/rika/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Rika[] = INCGFX_U16("graphics/pokemon/_add/th/rika/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Rika[] = INCGFX_U32("graphics/pokemon/_add/th/rika/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Rika[] = INCGFX_U16("graphics/pokemon/_add/th/rika/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Rika[] = INCGFX_U8("graphics/pokemon/_add/th/rika/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rika[] = INCGFX_U8("graphics/pokemon/_add/th/rika/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMeira[] = INCGFX_U32("graphics/pokemon/_add/th/meira/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMeira[] = INCGFX_U16("graphics/pokemon/_add/th/meira/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMeira[] = INCGFX_U32("graphics/pokemon/_add/th/meira/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMeira[] = INCGFX_U16("graphics/pokemon/_add/th/meira/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMeira[] = INCGFX_U8("graphics/pokemon/_add/th/meira/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMeira[] = INCGFX_U8("graphics/pokemon/_add/th/meira/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Meira[] = INCGFX_U32("graphics/pokemon/_add/th/meira/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Meira[] = INCGFX_U16("graphics/pokemon/_add/th/meira/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Meira[] = INCGFX_U32("graphics/pokemon/_add/th/meira/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Meira[] = INCGFX_U16("graphics/pokemon/_add/th/meira/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Meira[] = INCGFX_U8("graphics/pokemon/_add/th/meira/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Meira[] = INCGFX_U8("graphics/pokemon/_add/th/meira/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEllen[] = INCGFX_U32("graphics/pokemon/_add/th/ellen/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CEllen[] = INCGFX_U16("graphics/pokemon/_add/th/ellen/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CEllen[] = INCGFX_U32("graphics/pokemon/_add/th/ellen/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CEllen[] = INCGFX_U16("graphics/pokemon/_add/th/ellen/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CEllen[] = INCGFX_U8("graphics/pokemon/_add/th/ellen/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEllen[] = INCGFX_U8("graphics/pokemon/_add/th/ellen/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ellen[] = INCGFX_U32("graphics/pokemon/_add/th/ellen/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Ellen[] = INCGFX_U16("graphics/pokemon/_add/th/ellen/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Ellen[] = INCGFX_U32("graphics/pokemon/_add/th/ellen/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Ellen[] = INCGFX_U16("graphics/pokemon/_add/th/ellen/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Ellen[] = INCGFX_U8("graphics/pokemon/_add/th/ellen/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ellen[] = INCGFX_U8("graphics/pokemon/_add/th/ellen/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKotohime[] = INCGFX_U32("graphics/pokemon/_add/th/kotohime/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKotohime[] = INCGFX_U16("graphics/pokemon/_add/th/kotohime/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKotohime[] = INCGFX_U32("graphics/pokemon/_add/th/kotohime/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKotohime[] = INCGFX_U16("graphics/pokemon/_add/th/kotohime/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKotohime[] = INCGFX_U8("graphics/pokemon/_add/th/kotohime/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKotohime[] = INCGFX_U8("graphics/pokemon/_add/th/kotohime/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kotohime[] = INCGFX_U32("graphics/pokemon/_add/th/kotohime/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kotohime[] = INCGFX_U16("graphics/pokemon/_add/th/kotohime/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kotohime[] = INCGFX_U32("graphics/pokemon/_add/th/kotohime/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kotohime[] = INCGFX_U16("graphics/pokemon/_add/th/kotohime/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kotohime[] = INCGFX_U8("graphics/pokemon/_add/th/kotohime/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kotohime[] = INCGFX_U8("graphics/pokemon/_add/th/kotohime/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKana[] = INCGFX_U32("graphics/pokemon/_add/th/kana/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKana[] = INCGFX_U16("graphics/pokemon/_add/th/kana/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKana[] = INCGFX_U32("graphics/pokemon/_add/th/kana/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKana[] = INCGFX_U16("graphics/pokemon/_add/th/kana/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKana[] = INCGFX_U8("graphics/pokemon/_add/th/kana/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKana[] = INCGFX_U8("graphics/pokemon/_add/th/kana/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kana[] = INCGFX_U32("graphics/pokemon/_add/th/kana/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kana[] = INCGFX_U16("graphics/pokemon/_add/th/kana/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kana[] = INCGFX_U32("graphics/pokemon/_add/th/kana/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kana[] = INCGFX_U16("graphics/pokemon/_add/th/kana/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kana[] = INCGFX_U8("graphics/pokemon/_add/th/kana/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kana[] = INCGFX_U8("graphics/pokemon/_add/th/kana/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRikako[] = INCGFX_U32("graphics/pokemon/_add/th/rikako/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRikako[] = INCGFX_U16("graphics/pokemon/_add/th/rikako/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRikako[] = INCGFX_U32("graphics/pokemon/_add/th/rikako/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRikako[] = INCGFX_U16("graphics/pokemon/_add/th/rikako/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRikako[] = INCGFX_U8("graphics/pokemon/_add/th/rikako/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRikako[] = INCGFX_U8("graphics/pokemon/_add/th/rikako/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rikako[] = INCGFX_U32("graphics/pokemon/_add/th/rikako/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Rikako[] = INCGFX_U16("graphics/pokemon/_add/th/rikako/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Rikako[] = INCGFX_U32("graphics/pokemon/_add/th/rikako/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Rikako[] = INCGFX_U16("graphics/pokemon/_add/th/rikako/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Rikako[] = INCGFX_U8("graphics/pokemon/_add/th/rikako/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rikako[] = INCGFX_U8("graphics/pokemon/_add/th/rikako/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CChiyuri[] = INCGFX_U32("graphics/pokemon/_add/th/chiyuri/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CChiyuri[] = INCGFX_U16("graphics/pokemon/_add/th/chiyuri/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CChiyuri[] = INCGFX_U32("graphics/pokemon/_add/th/chiyuri/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CChiyuri[] = INCGFX_U16("graphics/pokemon/_add/th/chiyuri/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CChiyuri[] = INCGFX_U8("graphics/pokemon/_add/th/chiyuri/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CChiyuri[] = INCGFX_U8("graphics/pokemon/_add/th/chiyuri/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Chiyuri[] = INCGFX_U32("graphics/pokemon/_add/th/chiyuri/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Chiyuri[] = INCGFX_U16("graphics/pokemon/_add/th/chiyuri/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Chiyuri[] = INCGFX_U32("graphics/pokemon/_add/th/chiyuri/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Chiyuri[] = INCGFX_U16("graphics/pokemon/_add/th/chiyuri/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Chiyuri[] = INCGFX_U8("graphics/pokemon/_add/th/chiyuri/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Chiyuri[] = INCGFX_U8("graphics/pokemon/_add/th/chiyuri/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYumemi[] = INCGFX_U32("graphics/pokemon/_add/th/yumemi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYumemi[] = INCGFX_U16("graphics/pokemon/_add/th/yumemi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYumemi[] = INCGFX_U32("graphics/pokemon/_add/th/yumemi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYumemi[] = INCGFX_U16("graphics/pokemon/_add/th/yumemi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYumemi[] = INCGFX_U8("graphics/pokemon/_add/th/yumemi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYumemi[] = INCGFX_U8("graphics/pokemon/_add/th/yumemi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yumemi[] = INCGFX_U32("graphics/pokemon/_add/th/yumemi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yumemi[] = INCGFX_U16("graphics/pokemon/_add/th/yumemi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yumemi[] = INCGFX_U32("graphics/pokemon/_add/th/yumemi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yumemi[] = INCGFX_U16("graphics/pokemon/_add/th/yumemi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yumemi[] = INCGFX_U8("graphics/pokemon/_add/th/yumemi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yumemi[] = INCGFX_U8("graphics/pokemon/_add/th/yumemi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kedama[] = INCGFX_U32("graphics/pokemon/_add/th/kedama/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kedama[] = INCGFX_U16("graphics/pokemon/_add/th/kedama/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kedama[] = INCGFX_U32("graphics/pokemon/_add/th/kedama/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kedama[] = INCGFX_U16("graphics/pokemon/_add/th/kedama/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kedama[] = INCGFX_U8("graphics/pokemon/_add/th/kedama/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kedama[] = INCGFX_U8("graphics/pokemon/_add/th/kedama/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ruukoto[] = INCGFX_U32("graphics/pokemon/_add/th/ruukoto/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Ruukoto[] = INCGFX_U16("graphics/pokemon/_add/th/ruukoto/normal.pal", ".gbapal");
    const u32 gMonBackPic_Ruukoto[] = INCGFX_U32("graphics/pokemon/_add/th/ruukoto/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Ruukoto[] = INCGFX_U16("graphics/pokemon/_add/th/ruukoto/shiny.pal", ".gbapal");
    const u8 gMonIcon_Ruukoto[] = INCGFX_U8("graphics/pokemon/_add/th/ruukoto/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ruukoto[] = INCGFX_U8("graphics/pokemon/_add/th/ruukoto/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mimichan[] = INCGFX_U32("graphics/pokemon/_add/th/mimichan/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mimichan[] = INCGFX_U16("graphics/pokemon/_add/th/mimichan/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mimichan[] = INCGFX_U32("graphics/pokemon/_add/th/mimichan/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mimichan[] = INCGFX_U16("graphics/pokemon/_add/th/mimichan/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mimichan[] = INCGFX_U8("graphics/pokemon/_add/th/mimichan/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mimichan[] = INCGFX_U8("graphics/pokemon/_add/th/mimichan/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_COrange[] = INCGFX_U32("graphics/pokemon/_add/th/orange/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_COrange[] = INCGFX_U16("graphics/pokemon/_add/th/orange/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_COrange[] = INCGFX_U32("graphics/pokemon/_add/th/orange/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_COrange[] = INCGFX_U16("graphics/pokemon/_add/th/orange/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_COrange[] = INCGFX_U8("graphics/pokemon/_add/th/orange/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_COrange[] = INCGFX_U8("graphics/pokemon/_add/th/orange/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Orange[] = INCGFX_U32("graphics/pokemon/_add/th/orange/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Orange[] = INCGFX_U16("graphics/pokemon/_add/th/orange/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Orange[] = INCGFX_U32("graphics/pokemon/_add/th/orange/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Orange[] = INCGFX_U16("graphics/pokemon/_add/th/orange/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Orange[] = INCGFX_U8("graphics/pokemon/_add/th/orange/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Orange[] = INCGFX_U8("graphics/pokemon/_add/th/orange/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKurumi[] = INCGFX_U32("graphics/pokemon/_add/th/kurumi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKurumi[] = INCGFX_U16("graphics/pokemon/_add/th/kurumi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKurumi[] = INCGFX_U32("graphics/pokemon/_add/th/kurumi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKurumi[] = INCGFX_U16("graphics/pokemon/_add/th/kurumi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKurumi[] = INCGFX_U8("graphics/pokemon/_add/th/kurumi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKurumi[] = INCGFX_U8("graphics/pokemon/_add/th/kurumi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kurumi[] = INCGFX_U32("graphics/pokemon/_add/th/kurumi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kurumi[] = INCGFX_U16("graphics/pokemon/_add/th/kurumi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kurumi[] = INCGFX_U32("graphics/pokemon/_add/th/kurumi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kurumi[] = INCGFX_U16("graphics/pokemon/_add/th/kurumi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kurumi[] = INCGFX_U8("graphics/pokemon/_add/th/kurumi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kurumi[] = INCGFX_U8("graphics/pokemon/_add/th/kurumi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CElly[] = INCGFX_U32("graphics/pokemon/_add/th/elly/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CElly[] = INCGFX_U16("graphics/pokemon/_add/th/elly/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CElly[] = INCGFX_U32("graphics/pokemon/_add/th/elly/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CElly[] = INCGFX_U16("graphics/pokemon/_add/th/elly/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CElly[] = INCGFX_U8("graphics/pokemon/_add/th/elly/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CElly[] = INCGFX_U8("graphics/pokemon/_add/th/elly/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Elly[] = INCGFX_U32("graphics/pokemon/_add/th/elly/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Elly[] = INCGFX_U16("graphics/pokemon/_add/th/elly/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Elly[] = INCGFX_U32("graphics/pokemon/_add/th/elly/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Elly[] = INCGFX_U16("graphics/pokemon/_add/th/elly/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Elly[] = INCGFX_U8("graphics/pokemon/_add/th/elly/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Elly[] = INCGFX_U8("graphics/pokemon/_add/th/elly/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CKazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CKazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CKazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CKazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CKazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CKazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AKazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AKazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_AKazami[] = INCGFX_U32("graphics/pokemon/_add/th/kazami/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AKazami[] = INCGFX_U16("graphics/pokemon/_add/th/kazami/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_AKazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AKazami[] = INCGFX_U8("graphics/pokemon/_add/th/kazami/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMugetsu[] = INCGFX_U32("graphics/pokemon/_add/th/mugetsu/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMugetsu[] = INCGFX_U16("graphics/pokemon/_add/th/mugetsu/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMugetsu[] = INCGFX_U32("graphics/pokemon/_add/th/mugetsu/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMugetsu[] = INCGFX_U16("graphics/pokemon/_add/th/mugetsu/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMugetsu[] = INCGFX_U8("graphics/pokemon/_add/th/mugetsu/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMugetsu[] = INCGFX_U8("graphics/pokemon/_add/th/mugetsu/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mugetsu[] = INCGFX_U32("graphics/pokemon/_add/th/mugetsu/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mugetsu[] = INCGFX_U16("graphics/pokemon/_add/th/mugetsu/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mugetsu[] = INCGFX_U32("graphics/pokemon/_add/th/mugetsu/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mugetsu[] = INCGFX_U16("graphics/pokemon/_add/th/mugetsu/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mugetsu[] = INCGFX_U8("graphics/pokemon/_add/th/mugetsu/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mugetsu[] = INCGFX_U8("graphics/pokemon/_add/th/mugetsu/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CGengetsu[] = INCGFX_U32("graphics/pokemon/_add/th/gengetsu/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CGengetsu[] = INCGFX_U16("graphics/pokemon/_add/th/gengetsu/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CGengetsu[] = INCGFX_U32("graphics/pokemon/_add/th/gengetsu/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CGengetsu[] = INCGFX_U16("graphics/pokemon/_add/th/gengetsu/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CGengetsu[] = INCGFX_U8("graphics/pokemon/_add/th/gengetsu/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CGengetsu[] = INCGFX_U8("graphics/pokemon/_add/th/gengetsu/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Gengetsu[] = INCGFX_U32("graphics/pokemon/_add/th/gengetsu/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Gengetsu[] = INCGFX_U16("graphics/pokemon/_add/th/gengetsu/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Gengetsu[] = INCGFX_U32("graphics/pokemon/_add/th/gengetsu/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Gengetsu[] = INCGFX_U16("graphics/pokemon/_add/th/gengetsu/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Gengetsu[] = INCGFX_U8("graphics/pokemon/_add/th/gengetsu/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Gengetsu[] = INCGFX_U8("graphics/pokemon/_add/th/gengetsu/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSara[] = INCGFX_U32("graphics/pokemon/_add/th/sara/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSara[] = INCGFX_U16("graphics/pokemon/_add/th/sara/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSara[] = INCGFX_U32("graphics/pokemon/_add/th/sara/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSara[] = INCGFX_U16("graphics/pokemon/_add/th/sara/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSara[] = INCGFX_U8("graphics/pokemon/_add/th/sara/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSara[] = INCGFX_U8("graphics/pokemon/_add/th/sara/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sara[] = INCGFX_U32("graphics/pokemon/_add/th/sara/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sara[] = INCGFX_U16("graphics/pokemon/_add/th/sara/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sara[] = INCGFX_U32("graphics/pokemon/_add/th/sara/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sara[] = INCGFX_U16("graphics/pokemon/_add/th/sara/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sara[] = INCGFX_U8("graphics/pokemon/_add/th/sara/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sara[] = INCGFX_U8("graphics/pokemon/_add/th/sara/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CLouise[] = INCGFX_U32("graphics/pokemon/_add/th/louise/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CLouise[] = INCGFX_U16("graphics/pokemon/_add/th/louise/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CLouise[] = INCGFX_U32("graphics/pokemon/_add/th/louise/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CLouise[] = INCGFX_U16("graphics/pokemon/_add/th/louise/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CLouise[] = INCGFX_U8("graphics/pokemon/_add/th/louise/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CLouise[] = INCGFX_U8("graphics/pokemon/_add/th/louise/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Louise[] = INCGFX_U32("graphics/pokemon/_add/th/louise/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Louise[] = INCGFX_U16("graphics/pokemon/_add/th/louise/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Louise[] = INCGFX_U32("graphics/pokemon/_add/th/louise/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Louise[] = INCGFX_U16("graphics/pokemon/_add/th/louise/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Louise[] = INCGFX_U8("graphics/pokemon/_add/th/louise/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Louise[] = INCGFX_U8("graphics/pokemon/_add/th/louise/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMargatroid[] = INCGFX_U32("graphics/pokemon/_add/th/margatroid/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMargatroid[] = INCGFX_U16("graphics/pokemon/_add/th/margatroid/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMargatroid[] = INCGFX_U32("graphics/pokemon/_add/th/margatroid/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMargatroid[] = INCGFX_U16("graphics/pokemon/_add/th/margatroid/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMargatroid[] = INCGFX_U8("graphics/pokemon/_add/th/margatroid/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMargatroid[] = INCGFX_U8("graphics/pokemon/_add/th/margatroid/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Margatroid[] = INCGFX_U32("graphics/pokemon/_add/th/margatroid/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Margatroid[] = INCGFX_U16("graphics/pokemon/_add/th/margatroid/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Margatroid[] = INCGFX_U32("graphics/pokemon/_add/th/margatroid/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Margatroid[] = INCGFX_U16("graphics/pokemon/_add/th/margatroid/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Margatroid[] = INCGFX_U8("graphics/pokemon/_add/th/margatroid/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Margatroid[] = INCGFX_U8("graphics/pokemon/_add/th/margatroid/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYuki[] = INCGFX_U32("graphics/pokemon/_add/th/yuki/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYuki[] = INCGFX_U16("graphics/pokemon/_add/th/yuki/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYuki[] = INCGFX_U32("graphics/pokemon/_add/th/yuki/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYuki[] = INCGFX_U16("graphics/pokemon/_add/th/yuki/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYuki[] = INCGFX_U8("graphics/pokemon/_add/th/yuki/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYuki[] = INCGFX_U8("graphics/pokemon/_add/th/yuki/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yuki[] = INCGFX_U32("graphics/pokemon/_add/th/yuki/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yuki[] = INCGFX_U16("graphics/pokemon/_add/th/yuki/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yuki[] = INCGFX_U32("graphics/pokemon/_add/th/yuki/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yuki[] = INCGFX_U16("graphics/pokemon/_add/th/yuki/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yuki[] = INCGFX_U8("graphics/pokemon/_add/th/yuki/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yuki[] = INCGFX_U8("graphics/pokemon/_add/th/yuki/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CMai[] = INCGFX_U32("graphics/pokemon/_add/th/mai/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CMai[] = INCGFX_U16("graphics/pokemon/_add/th/mai/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CMai[] = INCGFX_U32("graphics/pokemon/_add/th/mai/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CMai[] = INCGFX_U16("graphics/pokemon/_add/th/mai/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CMai[] = INCGFX_U8("graphics/pokemon/_add/th/mai/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CMai[] = INCGFX_U8("graphics/pokemon/_add/th/mai/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Mai[] = INCGFX_U32("graphics/pokemon/_add/th/mai/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Mai[] = INCGFX_U16("graphics/pokemon/_add/th/mai/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Mai[] = INCGFX_U32("graphics/pokemon/_add/th/mai/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Mai[] = INCGFX_U16("graphics/pokemon/_add/th/mai/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Mai[] = INCGFX_U8("graphics/pokemon/_add/th/mai/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Mai[] = INCGFX_U8("graphics/pokemon/_add/th/mai/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CYumeko[] = INCGFX_U32("graphics/pokemon/_add/th/yumeko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CYumeko[] = INCGFX_U16("graphics/pokemon/_add/th/yumeko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CYumeko[] = INCGFX_U32("graphics/pokemon/_add/th/yumeko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CYumeko[] = INCGFX_U16("graphics/pokemon/_add/th/yumeko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CYumeko[] = INCGFX_U8("graphics/pokemon/_add/th/yumeko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CYumeko[] = INCGFX_U8("graphics/pokemon/_add/th/yumeko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Yumeko[] = INCGFX_U32("graphics/pokemon/_add/th/yumeko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Yumeko[] = INCGFX_U16("graphics/pokemon/_add/th/yumeko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Yumeko[] = INCGFX_U32("graphics/pokemon/_add/th/yumeko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Yumeko[] = INCGFX_U16("graphics/pokemon/_add/th/yumeko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Yumeko[] = INCGFX_U8("graphics/pokemon/_add/th/yumeko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Yumeko[] = INCGFX_U8("graphics/pokemon/_add/th/yumeko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CShinki[] = INCGFX_U32("graphics/pokemon/_add/th/shinki/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CShinki[] = INCGFX_U16("graphics/pokemon/_add/th/shinki/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CShinki[] = INCGFX_U32("graphics/pokemon/_add/th/shinki/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CShinki[] = INCGFX_U16("graphics/pokemon/_add/th/shinki/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CShinki[] = INCGFX_U8("graphics/pokemon/_add/th/shinki/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CShinki[] = INCGFX_U8("graphics/pokemon/_add/th/shinki/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Shinki[] = INCGFX_U32("graphics/pokemon/_add/th/shinki/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Shinki[] = INCGFX_U16("graphics/pokemon/_add/th/shinki/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Shinki[] = INCGFX_U32("graphics/pokemon/_add/th/shinki/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Shinki[] = INCGFX_U16("graphics/pokemon/_add/th/shinki/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Shinki[] = INCGFX_U8("graphics/pokemon/_add/th/shinki/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Shinki[] = INCGFX_U8("graphics/pokemon/_add/th/shinki/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Akyuu[] = INCGFX_U32("graphics/pokemon/_add/th/akyuu/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Akyuu[] = INCGFX_U16("graphics/pokemon/_add/th/akyuu/normal.pal", ".gbapal");
    const u32 gMonBackPic_Akyuu[] = INCGFX_U32("graphics/pokemon/_add/th/akyuu/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Akyuu[] = INCGFX_U16("graphics/pokemon/_add/th/akyuu/shiny.pal", ".gbapal");
    const u8 gMonIcon_Akyuu[] = INCGFX_U8("graphics/pokemon/_add/th/akyuu/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Akyuu[] = INCGFX_U8("graphics/pokemon/_add/th/akyuu/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Rinnosuke[] = INCGFX_U32("graphics/pokemon/_add/th/rinnosuke/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Rinnosuke[] = INCGFX_U16("graphics/pokemon/_add/th/rinnosuke/normal.pal", ".gbapal");
    const u32 gMonBackPic_Rinnosuke[] = INCGFX_U32("graphics/pokemon/_add/th/rinnosuke/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Rinnosuke[] = INCGFX_U16("graphics/pokemon/_add/th/rinnosuke/shiny.pal", ".gbapal");
    const u8 gMonIcon_Rinnosuke[] = INCGFX_U8("graphics/pokemon/_add/th/rinnosuke/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Rinnosuke[] = INCGFX_U8("graphics/pokemon/_add/th/rinnosuke/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Youki[] = INCGFX_U32("graphics/pokemon/_add/th/youki/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Youki[] = INCGFX_U16("graphics/pokemon/_add/th/youki/normal.pal", ".gbapal");
    const u32 gMonBackPic_Youki[] = INCGFX_U32("graphics/pokemon/_add/th/youki/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Youki[] = INCGFX_U16("graphics/pokemon/_add/th/youki/shiny.pal", ".gbapal");
    const u8 gMonIcon_Youki[] = INCGFX_U8("graphics/pokemon/_add/th/youki/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Youki[] = INCGFX_U8("graphics/pokemon/_add/th/youki/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tori[] = INCGFX_U32("graphics/pokemon/_add/th/tori/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tori[] = INCGFX_U16("graphics/pokemon/_add/th/tori/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tori[] = INCGFX_U32("graphics/pokemon/_add/th/tori/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tori[] = INCGFX_U16("graphics/pokemon/_add/th/tori/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tori[] = INCGFX_U8("graphics/pokemon/_add/th/tori/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tori[] = INCGFX_U8("graphics/pokemon/_add/th/tori/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Namazu[] = INCGFX_U32("graphics/pokemon/_add/th/namazu/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Namazu[] = INCGFX_U16("graphics/pokemon/_add/th/namazu/normal.pal", ".gbapal");
    const u32 gMonBackPic_Namazu[] = INCGFX_U32("graphics/pokemon/_add/th/namazu/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Namazu[] = INCGFX_U16("graphics/pokemon/_add/th/namazu/shiny.pal", ".gbapal");
    const u8 gMonIcon_Namazu[] = INCGFX_U8("graphics/pokemon/_add/th/namazu/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Namazu[] = INCGFX_U8("graphics/pokemon/_add/th/namazu/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tensoku[] = INCGFX_U32("graphics/pokemon/_add/th/tensoku/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tensoku[] = INCGFX_U16("graphics/pokemon/_add/th/tensoku/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tensoku[] = INCGFX_U32("graphics/pokemon/_add/th/tensoku/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tensoku[] = INCGFX_U16("graphics/pokemon/_add/th/tensoku/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tensoku[] = INCGFX_U8("graphics/pokemon/_add/th/tensoku/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tensoku[] = INCGFX_U8("graphics/pokemon/_add/th/tensoku/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_AngelVivit[] = INCGFX_U32("graphics/pokemon/_add/sh/vivit/angel/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_AngelVivit[] = INCGFX_U16("graphics/pokemon/_add/sh/vivit/angel/normal.pal", ".gbapal");
    const u32 gMonBackPic_AngelVivit[] = INCGFX_U32("graphics/pokemon/_add/sh/vivit/angel/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_AngelVivit[] = INCGFX_U16("graphics/pokemon/_add/sh/vivit/angel/shiny.pal", ".gbapal");
    const u8 gMonIcon_AngelVivit[] = INCGFX_U8("graphics/pokemon/_add/sh/vivit/angel/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_AngelVivit[] = INCGFX_U8("graphics/pokemon/_add/sh/vivit/angel/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TSendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TSendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TSendai[] = INCGFX_U32("graphics/pokemon/_add/th/sendai/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TSendai[] = INCGFX_U16("graphics/pokemon/_add/th/sendai/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TSendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TSendai[] = INCGFX_U8("graphics/pokemon/_add/th/sendai/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Tenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Tenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Tenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Tenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Tenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Tenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_STenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/speed/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_STenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/speed/normal.pal", ".gbapal");
    const u32 gMonBackPic_STenma[] = INCGFX_U32("graphics/pokemon/_add/th/tenma/speed/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_STenma[] = INCGFX_U16("graphics/pokemon/_add/th/tenma/speed/shiny.pal", ".gbapal");
    const u8 gMonIcon_STenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/speed/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_STenma[] = INCGFX_U8("graphics/pokemon/_add/th/tenma/speed/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAmelia[] = INCGFX_U32("graphics/pokemon/_add/etc/amelia/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CAmelia[] = INCGFX_U16("graphics/pokemon/_add/etc/amelia/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CAmelia[] = INCGFX_U32("graphics/pokemon/_add/etc/amelia/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CAmelia[] = INCGFX_U16("graphics/pokemon/_add/etc/amelia/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CAmelia[] = INCGFX_U8("graphics/pokemon/_add/etc/amelia/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAmelia[] = INCGFX_U8("graphics/pokemon/_add/etc/amelia/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Amelia[] = INCGFX_U32("graphics/pokemon/_add/etc/amelia/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Amelia[] = INCGFX_U16("graphics/pokemon/_add/etc/amelia/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Amelia[] = INCGFX_U32("graphics/pokemon/_add/etc/amelia/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Amelia[] = INCGFX_U16("graphics/pokemon/_add/etc/amelia/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Amelia[] = INCGFX_U8("graphics/pokemon/_add/etc/amelia/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Amelia[] = INCGFX_U8("graphics/pokemon/_add/etc/amelia/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CBijou[] = INCGFX_U32("graphics/pokemon/_add/etc/bijou/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CBijou[] = INCGFX_U16("graphics/pokemon/_add/etc/bijou/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CBijou[] = INCGFX_U32("graphics/pokemon/_add/etc/bijou/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CBijou[] = INCGFX_U16("graphics/pokemon/_add/etc/bijou/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CBijou[] = INCGFX_U8("graphics/pokemon/_add/etc/bijou/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CBijou[] = INCGFX_U8("graphics/pokemon/_add/etc/bijou/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Bijou[] = INCGFX_U32("graphics/pokemon/_add/etc/bijou/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Bijou[] = INCGFX_U16("graphics/pokemon/_add/etc/bijou/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Bijou[] = INCGFX_U32("graphics/pokemon/_add/etc/bijou/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Bijou[] = INCGFX_U16("graphics/pokemon/_add/etc/bijou/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Bijou[] = INCGFX_U8("graphics/pokemon/_add/etc/bijou/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Bijou[] = INCGFX_U8("graphics/pokemon/_add/etc/bijou/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Kronii[] = INCGFX_U32("graphics/pokemon/_add/etc/kronii/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Kronii[] = INCGFX_U16("graphics/pokemon/_add/etc/kronii/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Kronii[] = INCGFX_U32("graphics/pokemon/_add/etc/kronii/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Kronii[] = INCGFX_U16("graphics/pokemon/_add/etc/kronii/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Kronii[] = INCGFX_U8("graphics/pokemon/_add/etc/kronii/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Kronii[] = INCGFX_U8("graphics/pokemon/_add/etc/kronii/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Basiney[] = INCGFX_U32("graphics/pokemon/basiney/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Basiney[] = INCGFX_U16("graphics/pokemon/basiney/normal.pal", ".gbapal");
    const u32 gMonBackPic_Basiney[] = INCGFX_U32("graphics/pokemon/basiney/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Basiney[] = INCGFX_U16("graphics/pokemon/basiney/shiny.pal", ".gbapal");
    const u8 gMonIcon_Basiney[] = INCGFX_U8("graphics/pokemon/basiney/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Basiney[] = INCGFX_U8("graphics/pokemon/basiney/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Blissea[] = INCGFX_U32("graphics/pokemon/blissea/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Blissea[] = INCGFX_U16("graphics/pokemon/blissea/normal.pal", ".gbapal");
    const u32 gMonBackPic_Blissea[] = INCGFX_U32("graphics/pokemon/blissea/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Blissea[] = INCGFX_U16("graphics/pokemon/blissea/shiny.pal", ".gbapal");
    const u8 gMonIcon_Blissea[] = INCGFX_U8("graphics/pokemon/blissea/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Blissea[] = INCGFX_U8("graphics/pokemon/blissea/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSeiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSeiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSeiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSeiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSeiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSeiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Seiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Seiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Seiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Seiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Seiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Seiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_ASeiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/attack/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_ASeiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/attack/normal.pal", ".gbapal");
    const u32 gMonBackPic_ASeiran[] = INCGFX_U32("graphics/pokemon/_add/th/seiran/attack/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_ASeiran[] = INCGFX_U16("graphics/pokemon/_add/th/seiran/attack/shiny.pal", ".gbapal");
    const u8 gMonIcon_ASeiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/attack/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_ASeiran[] = INCGFX_U8("graphics/pokemon/_add/th/seiran/attack/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CRingo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CRingo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CRingo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CRingo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CRingo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CRingo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Ringo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Ringo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Ringo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Ringo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Ringo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Ringo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HRingo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/helper/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HRingo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/helper/normal.pal", ".gbapal");
    const u32 gMonBackPic_HRingo[] = INCGFX_U32("graphics/pokemon/_add/th/ringo/helper/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HRingo[] = INCGFX_U16("graphics/pokemon/_add/th/ringo/helper/shiny.pal", ".gbapal");
    const u8 gMonIcon_HRingo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/helper/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HRingo[] = INCGFX_U8("graphics/pokemon/_add/th/ringo/helper/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CDoremy[] = INCGFX_U32("graphics/pokemon/_add/th/doremy/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CDoremy[] = INCGFX_U16("graphics/pokemon/_add/th/doremy/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CDoremy[] = INCGFX_U32("graphics/pokemon/_add/th/doremy/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CDoremy[] = INCGFX_U16("graphics/pokemon/_add/th/doremy/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CDoremy[] = INCGFX_U8("graphics/pokemon/_add/th/doremy/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CDoremy[] = INCGFX_U8("graphics/pokemon/_add/th/doremy/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Doremy[] = INCGFX_U32("graphics/pokemon/_add/th/doremy/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Doremy[] = INCGFX_U16("graphics/pokemon/_add/th/doremy/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Doremy[] = INCGFX_U32("graphics/pokemon/_add/th/doremy/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Doremy[] = INCGFX_U16("graphics/pokemon/_add/th/doremy/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Doremy[] = INCGFX_U8("graphics/pokemon/_add/th/doremy/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Doremy[] = INCGFX_U8("graphics/pokemon/_add/th/doremy/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSagume[] = INCGFX_U32("graphics/pokemon/_add/th/sagume/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSagume[] = INCGFX_U16("graphics/pokemon/_add/th/sagume/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSagume[] = INCGFX_U32("graphics/pokemon/_add/th/sagume/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSagume[] = INCGFX_U16("graphics/pokemon/_add/th/sagume/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSagume[] = INCGFX_U8("graphics/pokemon/_add/th/sagume/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSagume[] = INCGFX_U8("graphics/pokemon/_add/th/sagume/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Sagume[] = INCGFX_U32("graphics/pokemon/_add/th/sagume/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Sagume[] = INCGFX_U16("graphics/pokemon/_add/th/sagume/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Sagume[] = INCGFX_U32("graphics/pokemon/_add/th/sagume/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Sagume[] = INCGFX_U16("graphics/pokemon/_add/th/sagume/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Sagume[] = INCGFX_U8("graphics/pokemon/_add/th/sagume/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Sagume[] = INCGFX_U8("graphics/pokemon/_add/th/sagume/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CClownpiece[] = INCGFX_U32("graphics/pokemon/_add/th/clownpiece/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CClownpiece[] = INCGFX_U16("graphics/pokemon/_add/th/clownpiece/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CClownpiece[] = INCGFX_U32("graphics/pokemon/_add/th/clownpiece/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CClownpiece[] = INCGFX_U16("graphics/pokemon/_add/th/clownpiece/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CClownpiece[] = INCGFX_U8("graphics/pokemon/_add/th/clownpiece/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS //P_FOOTPRINTS
    const u8 gMonFootprint_CClownpiece[] = INCGFX_U8("graphics/pokemon/_add/th/clownpiece/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Clownpiece[] = INCGFX_U32("graphics/pokemon/_add/th/clownpiece/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Clownpiece[] = INCGFX_U16("graphics/pokemon/_add/th/clownpiece/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Clownpiece[] = INCGFX_U32("graphics/pokemon/_add/th/clownpiece/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Clownpiece[] = INCGFX_U16("graphics/pokemon/_add/th/clownpiece/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Clownpiece[] = INCGFX_U8("graphics/pokemon/_add/th/clownpiece/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS //P_FOOTPRINTS
    const u8 gMonFootprint_Clownpiece[] = INCGFX_U8("graphics/pokemon/_add/th/clownpiece/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CJunko[] = INCGFX_U32("graphics/pokemon/_add/th/junko/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CJunko[] = INCGFX_U16("graphics/pokemon/_add/th/junko/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CJunko[] = INCGFX_U32("graphics/pokemon/_add/th/junko/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CJunko[] = INCGFX_U16("graphics/pokemon/_add/th/junko/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CJunko[] = INCGFX_U8("graphics/pokemon/_add/th/junko/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CJunko[] = INCGFX_U8("graphics/pokemon/_add/th/junko/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Junko[] = INCGFX_U32("graphics/pokemon/_add/th/junko/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Junko[] = INCGFX_U16("graphics/pokemon/_add/th/junko/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Junko[] = INCGFX_U32("graphics/pokemon/_add/th/junko/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Junko[] = INCGFX_U16("graphics/pokemon/_add/th/junko/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Junko[] = INCGFX_U8("graphics/pokemon/_add/th/junko/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Junko[] = INCGFX_U8("graphics/pokemon/_add/th/junko/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaOtherworld[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/otherworld/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHecatiaOtherworld[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/otherworld/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHecatiaOtherworld[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/otherworld/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaOtherworld[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/otherworld/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHecatiaOtherworld[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/otherworld/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaOtherworld[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/otherworld/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaOtherworld[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/otherworld/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HecatiaOtherworld[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/otherworld/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_HecatiaOtherworld[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/otherworld/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HecatiaOtherworld[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/otherworld/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_HecatiaOtherworld[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/otherworld/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaOtherworld[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/otherworld/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaEarth[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/earth/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHecatiaEarth[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/earth/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHecatiaEarth[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/earth/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaEarth[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/earth/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHecatiaEarth[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/earth/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaEarth[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/earth/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaEarth[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/earth/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HecatiaEarth[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/earth/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_HecatiaEarth[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/earth/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HecatiaEarth[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/earth/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_HecatiaEarth[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/earth/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaEarth[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/earth/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CHecatiaMoon[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/moon/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CHecatiaMoon[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/moon/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CHecatiaMoon[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/moon/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CHecatiaMoon[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/moon/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CHecatiaMoon[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/moon/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CHecatiaMoon[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/moon/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_HecatiaMoon[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/moon/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_HecatiaMoon[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/moon/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_HecatiaMoon[] = INCGFX_U32("graphics/pokemon/_add/th/hecatia/moon/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_HecatiaMoon[] = INCGFX_U16("graphics/pokemon/_add/th/hecatia/moon/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_HecatiaMoon[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/moon/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_HecatiaMoon[] = INCGFX_U8("graphics/pokemon/_add/th/hecatia/moon/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CEternity[] = INCGFX_U32("graphics/pokemon/_add/th/eternity/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CEternity[] = INCGFX_U16("graphics/pokemon/_add/th/eternity/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CEternity[] = INCGFX_U32("graphics/pokemon/_add/th/eternity/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CEternity[] = INCGFX_U16("graphics/pokemon/_add/th/eternity/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CEternity[] = INCGFX_U8("graphics/pokemon/_add/th/eternity/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CEternity[] = INCGFX_U8("graphics/pokemon/_add/th/eternity/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Eternity[] = INCGFX_U32("graphics/pokemon/_add/th/eternity/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Eternity[] = INCGFX_U16("graphics/pokemon/_add/th/eternity/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Eternity[] = INCGFX_U32("graphics/pokemon/_add/th/eternity/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Eternity[] = INCGFX_U16("graphics/pokemon/_add/th/eternity/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Eternity[] = INCGFX_U8("graphics/pokemon/_add/th/eternity/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Eternity[] = INCGFX_U8("graphics/pokemon/_add/th/eternity/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CAunn[] = INCGFX_U32("graphics/pokemon/_add/th/aunn/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CAunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CAunn[] = INCGFX_U32("graphics/pokemon/_add/th/aunn/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CAunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CAunn[] = INCGFX_U8("graphics/pokemon/_add/th/aunn/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CAunn[] = INCGFX_U8("graphics/pokemon/_add/th/aunn/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_CAunn[] = INCGFX_COMP("graphics/pokemon/_add/th/aunn/chibi/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_CAunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/chibi/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_CAunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/chibi/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_Aunn[] = INCGFX_U32("graphics/pokemon/_add/th/aunn/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Aunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Aunn[] = INCGFX_U32("graphics/pokemon/_add/th/aunn/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Aunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Aunn[] = INCGFX_U8("graphics/pokemon/_add/th/aunn/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Aunn[] = INCGFX_U8("graphics/pokemon/_add/th/aunn/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS
#if OW_POKEMON_OBJECT_EVENTS
    const u32 gObjectEventPic_Aunn[] = INCGFX_COMP("graphics/pokemon/_add/th/aunn/normal/overworld.png", ".4bpp", "-mwidth 4 -mheight 4");
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
    const u16 gOverworldPalette_Aunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/normal/overworld_normal.pal", ".gbapal");
    const u16 gShinyOverworldPalette_Aunn[] = INCGFX_U16("graphics/pokemon/_add/th/aunn/normal/overworld_shiny.pal", ".gbapal");
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

    const u32 gMonFrontPic_CNarumi[] = INCGFX_U32("graphics/pokemon/_add/th/narumi/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CNarumi[] = INCGFX_U16("graphics/pokemon/_add/th/narumi/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CNarumi[] = INCGFX_U32("graphics/pokemon/_add/th/narumi/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CNarumi[] = INCGFX_U16("graphics/pokemon/_add/th/narumi/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CNarumi[] = INCGFX_U8("graphics/pokemon/_add/th/narumi/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CNarumi[] = INCGFX_U8("graphics/pokemon/_add/th/narumi/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Narumi[] = INCGFX_U32("graphics/pokemon/_add/th/narumi/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Narumi[] = INCGFX_U16("graphics/pokemon/_add/th/narumi/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Narumi[] = INCGFX_U32("graphics/pokemon/_add/th/narumi/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Narumi[] = INCGFX_U16("graphics/pokemon/_add/th/narumi/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Narumi[] = INCGFX_U8("graphics/pokemon/_add/th/narumi/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Narumi[] = INCGFX_U8("graphics/pokemon/_add/th/narumi/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CSaki[] = INCGFX_U32("graphics/pokemon/_add/th/saki/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CSaki[] = INCGFX_U16("graphics/pokemon/_add/th/saki/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CSaki[] = INCGFX_U32("graphics/pokemon/_add/th/saki/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CSaki[] = INCGFX_U16("graphics/pokemon/_add/th/saki/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CSaki[] = INCGFX_U8("graphics/pokemon/_add/th/saki/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CSaki[] = INCGFX_U8("graphics/pokemon/_add/th/saki/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Saki[] = INCGFX_U32("graphics/pokemon/_add/th/saki/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Saki[] = INCGFX_U16("graphics/pokemon/_add/th/saki/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Saki[] = INCGFX_U32("graphics/pokemon/_add/th/saki/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Saki[] = INCGFX_U16("graphics/pokemon/_add/th/saki/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Saki[] = INCGFX_U8("graphics/pokemon/_add/th/saki/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Saki[] = INCGFX_U8("graphics/pokemon/_add/th/saki/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_CTakane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/chibi/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_CTakane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/chibi/normal.pal", ".gbapal");
    const u32 gMonBackPic_CTakane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/chibi/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_CTakane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/chibi/shiny.pal", ".gbapal");
    const u8 gMonIcon_CTakane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/chibi/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_CTakane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/chibi/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Takane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/normal/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Takane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/normal/normal.pal", ".gbapal");
    const u32 gMonBackPic_Takane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/normal/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_Takane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/normal/shiny.pal", ".gbapal");
    const u8 gMonIcon_Takane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/normal/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_Takane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/normal/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_TTakane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/tech/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_TTakane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/tech/normal.pal", ".gbapal");
    const u32 gMonBackPic_TTakane[] = INCGFX_U32("graphics/pokemon/_add/th/takane/tech/back.png", ".4bpp.smol");
    const u16 gMonShinyPalette_TTakane[] = INCGFX_U16("graphics/pokemon/_add/th/takane/tech/shiny.pal", ".gbapal");
    const u8 gMonIcon_TTakane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/tech/icon.png", ".4bpp");
#if P_FOOTPRINTS
    const u8 gMonFootprint_TTakane[] = INCGFX_U8("graphics/pokemon/_add/th/takane/tech/footprint.png", ".1bpp");
#endif //P_FOOTPRINTS

    const u32 gMonFrontPic_Egg[] = INCGFX_U32("graphics/pokemon/egg/anim_front.png", ".4bpp.smol");
    const u16 gMonPalette_Egg[] = INCGFX_U16("graphics/pokemon/egg/normal.pal", ".gbapal");
    const u8 gMonIcon_Egg[] = INCGFX_U8("graphics/pokemon/egg/icon.png", ".4bpp");
