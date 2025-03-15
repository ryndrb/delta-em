#define IV_SPREAD_ZERO         TRAINER_PARTY_IVS(0,   0,  0,  0,  0,  0)
#define IV_SPREAD_MEDIUM       TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16)
#define IV_SPREAD_MAX          TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
#define IV_SPREAD_HP_DARK      TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31)
#define IV_SPREAD_HP_DRAGON    TRAINER_PARTY_IVS(30, 31, 31, 31, 31, 31)
#define IV_SPREAD_HP_ICE       TRAINER_PARTY_IVS(30, 31, 30, 31, 31, 31)
#define IV_SPREAD_HP_PSYCHIC   TRAINER_PARTY_IVS(30, 31, 31, 31, 31, 30)
#define IV_SPREAD_HP_ELECTRIC  TRAINER_PARTY_IVS(30, 31, 30, 31, 31, 30)
#define IV_SPREAD_HP_GRASS     TRAINER_PARTY_IVS(30, 31, 31, 30, 31, 31)
#define IV_SPREAD_HP_WATER     TRAINER_PARTY_IVS(31, 30, 30, 30, 31, 31)
#define IV_SPREAD_HP_FIRE      TRAINER_PARTY_IVS(31, 30, 31, 30, 31, 30)
#define IV_SPREAD_HP_STEEL     TRAINER_PARTY_IVS(31, 30, 30, 30, 31, 30)
#define IV_SPREAD_HP_GHOST     TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31)
#define IV_SPREAD_HP_BUG       TRAINER_PARTY_IVS(31, 30, 30, 31, 30, 31)
#define IV_SPREAD_HP_ROCK      TRAINER_PARTY_IVS(30, 30, 31, 31, 30, 30)
#define IV_SPREAD_HP_GROUND    TRAINER_PARTY_IVS(30, 30, 30, 31, 30, 30)
#define IV_SPREAD_HP_POISON    TRAINER_PARTY_IVS(30, 30, 31, 30, 30, 31)
#define IV_SPREAD_HP_FLYING    TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 31)
#define IV_SPREAD_HP_FIGHTING  TRAINER_PARTY_IVS(30, 30, 31, 30, 30, 30)

#define EV_SPREAD_0            TRAINER_PARTY_EVS(0,   0,  0,  0,  0,  0)
#define EV_SPREAD_20           TRAINER_PARTY_EVS(20, 20, 20, 20, 20, 20)
#define EV_SPREAD_40           TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40)
#define EV_SPREAD_60           TRAINER_PARTY_EVS(60, 60, 60, 60, 60, 60)
#define EV_SPREAD_80           TRAINER_PARTY_EVS(80, 80, 80, 80, 80, 80)

static const struct TrainerMon sParty_Sawyer1[] = {
    {
        .lvl = 42,
        .species = SPECIES_STONJOURNER,
        .ability = ABILITY_POWER_SPOT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_ROCK_POLISH}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
        .lvl = 58,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACUPRESSURE, MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
        .lvl = 60,
        .species = SPECIES_BARBARACLE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STONE_EDGE, MOVE_CROSS_CHOP, MOVE_RAZOR_SHELL, MOVE_SHELL_SMASH}
    },
    {
        .lvl = 61,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
        .lvl = 60,
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_LIMBER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
        .lvl = 62,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
        .lvl = 64,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
        .lvl = 63,
        .species = SPECIES_SCOLIPEDE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_TAIL, MOVE_BUG_BITE, MOVE_IRON_DEFENSE, MOVE_SCREECH}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
        .lvl = 64,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CROSS_POISON, MOVE_WING_ATTACK, MOVE_BITE}
    },
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
        .lvl = 55,
        .species = SPECIES_FLAREON,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLAZE_KICK, MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_CHARM}
    },
    {
        .lvl = 55,
        .species = SPECIES_ESPEON,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_MORNING_SUN, MOVE_CHARM, MOVE_FUTURE_SIGHT}
    },
    {
        .lvl = 55,
        .species = SPECIES_UMBREON,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_CONFUSE_RAY, MOVE_SNARL, MOVE_CHARM}
    },
    {
        .lvl = 55,
        .species = SPECIES_GLACEON,
        .ability = ABILITY_SLUSH_RUSH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTRASENSORY, MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_MIRROR_COAT}
    },
    {
        .lvl = 55,
        .species = SPECIES_VAPOREON,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_CALM,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTRASENSORY, MOVE_HYDRO_PUMP, MOVE_AURORA_BEAM, MOVE_HAZE}
    },
    {
        .lvl = 55,
        .species = SPECIES_SYLVEON,
        .ability = ABILITY_CUTE_CHARM,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_DRAINING_KISS, MOVE_SWIFT, MOVE_LIGHT_SCREEN}
    },
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
        .lvl = 10,
        .species = SPECIES_POOCHYENA,
        .ability = ABILITY_NONE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE, MOVE_TRAILBLAZE, MOVE_ROAR, MOVE_BITE}
    },
    {
        .lvl = 10,
        .species = SPECIES_HOUNDOUR,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_RASH,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EMBER, MOVE_SMOG, MOVE_TRAILBLAZE}
    },
};

static const struct TrainerMon sParty_Marcel[] = {
    {
        .lvl = 52,
        .species = SPECIES_GOLURK,
        .ability = ABILITY_POWER_FIST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGA_PUNCH, MOVE_HEAVY_SLAM, MOVE_HIGH_HORSEPOWER, MOVE_SHADOW_PUNCH}
    },
    {
        .lvl = 52,
        .species = SPECIES_FLYGON,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_LEECH_LIFE, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Alberto[] = {
    {
        .lvl = 52,
        .species = SPECIES_UNFEZANT,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_PLUCK, MOVE_QUICK_ATTACK, MOVE_DETECT}
    },
    {
        .lvl = 53,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HAZE, MOVE_CROSS_POISON, MOVE_PSYCHIC_FANGS, MOVE_WING_ATTACK}
    },
};

static const struct TrainerMon sParty_Ed[] = {
    {
        .lvl = 52,
        .species = SPECIES_SEVIPER,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_JAW_LOCK, MOVE_POISON_JAB, MOVE_HAZE, MOVE_COIL}
    },
    {
        .lvl = 52,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
        .lvl = 64,
        .species = SPECIES_EELEKTROSS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_THUNDER_WAVE, MOVE_CRUNCH, MOVE_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Declan[] = {
    {
        .lvl = 60,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
        .lvl = 15,
        .species = SPECIES_GRIMER_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_NAUGHTY,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
        .heldItem = ITEM_EXPERT_BELT,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_ICE_PUNCH, MOVE_SLUDGE}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
        .lvl = 48,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_TAIL, MOVE_TOXIC, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
    {
        .lvl = 49,
        .species = SPECIES_WHISCASH,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT, MOVE_SNORE}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
        .lvl = 49,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_YAWN, MOVE_SWAGGER, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
        .lvl = 48,
        .species = SPECIES_VILEPLUME,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRENGTH_SAP, MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_GIGA_DRAIN}
    },
    {
        .lvl = 49,
        .species = SPECIES_MABOSSTIFF,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_JAW_LOCK, MOVE_SWAGGER, MOVE_HEADBUTT, MOVE_REVERSAL}
    },
    {
        .lvl = 50,
        .species = SPECIES_OMASTAR,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_GEM, MOVE_BRINE, MOVE_MUD_SHOT}
    },
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
        .lvl = 25,
        .species = SPECIES_SNEASEL_HISUI,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_TRAILBLAZE, MOVE_LOW_KICK, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 26,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(0, 0, 128, 0, 128, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FELL_STINGER, MOVE_AQUA_JET, MOVE_ICY_WIND, MOVE_HAZE}
    },
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
        .lvl = 26,
        .species = SPECIES_CARVANHA,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_AQUA_JET, MOVE_ICE_FANG}
    },
    {
        .lvl = 27,
        .species = SPECIES_ARBOK,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
        .lvl = 63,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLACK_OFF, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH}
    },
};

static const struct TrainerMon sParty_MattMtPyre[] = {
    {
        .lvl = 60,
        .species = SPECIES_SAMUROTT_HISUI,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_AQUA_JET}
    },
    {
        .lvl = 60,
        .species = SPECIES_EMPOLEON,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_ROOST, MOVE_STEALTH_ROCK, MOVE_ICE_BEAM}
    },
    {
        .lvl = 61,
        .species = SPECIES_GOLISOPOD,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE}
    },
    {
        .lvl = 60,
        .species = SPECIES_SNEASLER,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_CHOICE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_THROAT_CHOP}
    },
    {
        .lvl = 61,
        .species = SPECIES_CHIEN_PAO,
        .ability = ABILITY_SWORD_OF_RUIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_SWORDS_DANCE, MOVE_ICE_SPINNER}
    },
    {
        .lvl = 62,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_FLIP_TURN}
    },
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
        .lvl = 57,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACUPRESSURE, MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_FELL_STINGER}
    },
    {
        .lvl = 58,
        .species = SPECIES_NIDOKING,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGAHORN, MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_FLATTER}
    },
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
        .lvl = 57,
        .species = SPECIES_BASCULIN,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_WAVE_CRASH, MOVE_PSYCHIC, MOVE_CRUNCH}
    },
    {
        .lvl = 58,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
        .lvl = 48,
        .species = SPECIES_BASCULIN,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_WAVE_CRASH, MOVE_CRUNCH, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
        .lvl = 61,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
        .lvl = 62,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WING_ATTACK, MOVE_PSYCHIC_FANGS, MOVE_HAZE, MOVE_CROSS_POISON}
    },
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
        .lvl = 54,
        .species = SPECIES_HITMONCHAN,
        .ability = ABILITY_BLITZ_BOXER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
        .lvl = 55,
        .species = SPECIES_MIENSHAO,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_U_TURN, MOVE_BOUNCE, MOVE_DETECT}
    },
};

static const struct TrainerMon sParty_Matt[] = {
    {
        .lvl = 65,
        .species = SPECIES_SAMUROTT_HISUI,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CEASELESS_EDGE, MOVE_RAZOR_SHELL, MOVE_KNOCK_OFF, MOVE_AQUA_JET}
    },
    {
        .lvl = 65,
        .species = SPECIES_EMPOLEON,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_ROOST, MOVE_STEALTH_ROCK, MOVE_ICE_BEAM}
    },
    {
        .lvl = 66,
        .species = SPECIES_GOLISOPOD,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_AQUA_JET, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE}
    },
    {
        .lvl = 66,
        .species = SPECIES_SNEASLER,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DIRE_CLAW, MOVE_CLOSE_COMBAT, MOVE_U_TURN, MOVE_THROAT_CHOP}
    },
    {
        .lvl = 66,
        .species = SPECIES_CHIEN_PAO,
        .ability = ABILITY_SWORD_OF_RUIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_CRUNCH, MOVE_SWORDS_DANCE, MOVE_ICE_SPINNER}
    },
    {
        .lvl = 67,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_ICE_PUNCH, MOVE_FLIP_TURN}
    },
};

static const struct TrainerMon sParty_Zander[] = {
    {
        .lvl = 57,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_DARKEST_LARIAT, MOVE_LIQUIDATION, MOVE_WHIRLWIND}
    },
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
        .lvl = 55,
        .species = SPECIES_EMPOLEON,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_FLASH_CANNON, MOVE_ROOST, MOVE_ROAR}
    },
    {
        .lvl = 54,
        .species = SPECIES_TOXAPEX,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER}
    },
    {
        .lvl = 55,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STICKY_HOLD,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_COVERT_CLOAK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTH_POWER, MOVE_YAWN, MOVE_RECOVER}
    },
    {
        .lvl = 54,
        .species = SPECIES_ALOMOMOLA,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_SASSY,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLIP_TURN, MOVE_WISH, MOVE_PROTECT, MOVE_SCALD}
    },
    {
        .lvl = 55,
        .species = SPECIES_TAPU_FINI,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 64, 0, 0, 192),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_DRAINING_KISS, MOVE_TAUNT}
    },
    {
        .lvl = 56,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SHARPEDONITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PROTECT, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern6[] = {
    {
        .lvl = 64,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_YAWN, MOVE_ICE_FANG}
    },
    {
        .lvl = 65,
        .species = SPECIES_BISHARP,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_NIGHT_SLASH, MOVE_FURY_CUTTER}
    },
};

static const struct TrainerMon sParty_Archie[] = {
    {
        .lvl = 72,
        .species = SPECIES_SLOWKING_GALAR,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 12, 144, 60, 44),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_SCALD}
    },
    {
        .lvl = 70,
        .species = SPECIES_SUICUNE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 36, 0, 44, 176),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_SCALD, MOVE_PROTECT, MOVE_TOXIC}
    },
    {
        .lvl = 71,
        .species = SPECIES_KINGAMBIT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(212, 252, 0, 0, 0, 44),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_IRON_HEAD, MOVE_KOWTOW_CLEAVE}
    },
    {
        .lvl = 70,
        .species = SPECIES_BAXCALIBUR,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LOADED_DICE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_ICICLE_SPEAR}
    },
    {
        .lvl = 70,
        .species = SPECIES_URSHIFU_SINGLE_STRIKE,
        .ability = ABILITY_UNSEEN_FIST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_BLACK_GLASSES,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_U_TURN, MOVE_CLOSE_COMBAT}
    },
    {
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_GYARADOSITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
        .lvl = 55,
        .species = SPECIES_SIGILYPH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_HYPNOSIS}
    },
};

static const struct TrainerMon sParty_Daisy[] = {
    {
        .lvl = 22,
        .species = SPECIES_MORELULL,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_CONFUSE_RAY, MOVE_ASTONISH}
    },
    {
        .lvl = 23,
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_POISON_STING}
    },
};

static const struct TrainerMon sParty_Rose1[] = {
    {
        .lvl = 30,
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_STING, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_TOXIC_SPIKES}
    },
    {
        .lvl = 30,
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_POISON_STING}
    },
};

static const struct TrainerMon sParty_Felix[] = {
    {
        .lvl = 72,
        .species = SPECIES_PORYGON_Z,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOPLE_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT}
    },
    {
        .lvl = 72,
        .species = SPECIES_MEDICHAM,
        .ability = ABILITY_PURE_POWER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH, MOVE_TRAILBLAZE}
    },
};

static const struct TrainerMon sParty_Violet[] = {
    {
        .lvl = 49,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_DANCER,
        .nature = NATURE_RASH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ENERGY_BALL, MOVE_ZEN_HEADBUTT, MOVE_HYDRO_PUMP, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 50,
        .species = SPECIES_VILEPLUME,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRENGTH_SAP, MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_GIGA_DRAIN}
    },
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
        .lvl = 46,
        .species = SPECIES_KABUTOPS,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_Chip[] = {
    {
        .lvl = 49,
        .species = SPECIES_CRUSTLE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE}
    },
    {
        .lvl = 49,
        .species = SPECIES_GARGANACL,
        .ability = ABILITY_PURIFYING_SALT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_RECOVER, MOVE_SALT_CURE}
    },
    {
        .lvl = 49,
        .species = SPECIES_STONJOURNER,
        .ability = ABILITY_POWER_SPOT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_ROCK_POLISH, MOVE_STEALTH_ROCK}
    },
};

static const struct TrainerMon sParty_Foster[] = {
    {
        .lvl = 47,
        .species = SPECIES_STONJOURNER,
        .ability = ABILITY_POWER_SPOT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_ROCK_POLISH, MOVE_STEALTH_ROCK}
    },
    {
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLASH, MOVE_BRICK_BREAK, MOVE_BULLDOZE, MOVE_FURY_CUTTER}
    },
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
//route 111
static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 17,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
        .lvl = 22,
        .species = SPECIES_MANTYKE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_PULSE, MOVE_WING_ATTACK}
    },
    {
        .lvl = 23,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BOUNCE, MOVE_WATER_GUN, MOVE_CHARM, MOVE_AQUA_TAIL}
    },
};

static const struct TrainerMon sParty_Austina[] = {
    {
        .lvl = 50,
        .species = SPECIES_PALOSSAND,
        .ability = ABILITY_SELF_SUFFICIENT,
        .nature = NATURE_CALM,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_IRON_DEFENSE}
    },
};

static const struct TrainerMon sParty_Gwen[] = {
    {
        .lvl = 50,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_RASH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_NASTY_PLOT, MOVE_ACROBATICS, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
        .lvl = 20,
        .species = SPECIES_FARFETCHD,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AERIAL_ACE, MOVE_FURY_CUTTER, MOVE_ROCK_SMASH, MOVE_CUT}
    },
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .lvl = 12,
    .species = SPECIES_AZURILL,
    },
    {
    .lvl = 12,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
        .lvl = 48,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_HASTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_TAILWIND}
    },
    {
        .lvl = 48,
        .species = SPECIES_TAUROS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_TRAILBLAZE, MOVE_ZEN_HEADBUTT, MOVE_RAGING_BULL}
    },
    {
        .lvl = 48,
        .species = SPECIES_GRAFAIAI,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PROTECT, MOVE_TOXIC, MOVE_KNOCK_OFF, MOVE_POISON_JAB}
    },
};

static const struct TrainerMon sParty_Parker[] = {
    {
        .lvl = 48,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TEETER_DANCE, MOVE_SUPERPOWER, MOVE_ZEN_HEADBUTT, MOVE_BODY_SLAM}
    },
    {
        .lvl = 48,
        .species = SPECIES_STANTLER,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_CONFUSE_RAY, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 48,
        .species = SPECIES_GIRAFARIG,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWAGGER, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS}
    },
};

static const struct TrainerMon sParty_George[] = {
    {
        .lvl = 48,
        .species = SPECIES_CHANSEY,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SOFT_BOILED, MOVE_DRAINING_KISS, MOVE_CALM_MIND, MOVE_REFLECT}
    },
    {
        .lvl = 48,
        .species = SPECIES_DUNSPARCE,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_THUNDER_WAVE, MOVE_BODY_SLAM, MOVE_SCALE_SHOT}
    },
    {
        .lvl = 48,
        .species = SPECIES_PORYGON2,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_RECOVER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Berke[] = {
    {
        .lvl = 48,
        .species = SPECIES_FEAROW,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_RUN, MOVE_NIGHT_SLASH, MOVE_DRILL_PECK, MOVE_STEEL_WING}
    },
    {
        .lvl = 48,
        .species = SPECIES_URSARING,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_CHOP, MOVE_HIGH_HORSEPOWER, MOVE_DRAGON_CLAW, MOVE_BODY_SLAM}
    },
    {
        .lvl = 48,
        .species = SPECIES_FARIGIRAF,
        .ability = ABILITY_ARMOR_TAIL,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RAZOR_WIND, MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Braxton[] = {
    {
        .lvl = 54,
        .species = SPECIES_FEAROW,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_DRILL_RUN, MOVE_NIGHT_SLASH, MOVE_DRILL_PECK}
    },
    {
        .lvl = 54,
        .species = SPECIES_COPPERAJAH,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_BULLDOZE, MOVE_ROCK_SMASH}
    },
    {
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 4, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FUTURE_SIGHT, MOVE_SLACK_OFF, MOVE_SURF, MOVE_YAWN}
    },
    {
        .lvl = 54,
        .species = SPECIES_SCYTHER,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_FURY_CUTTER, MOVE_QUICK_ATTACK, MOVE_SWORDS_DANCE}
    },
    {
        .lvl = 54,
        .species = SPECIES_EELEKTROSS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_COIL, MOVE_CRUNCH, MOVE_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Vincent[] = {
    {
        .lvl = 74,
        .species = SPECIES_MIENSHAO,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_U_TURN, MOVE_BOUNCE, MOVE_FAKE_OUT}
    },
    {
        .lvl = 74,
        .species = SPECIES_VIKAVOLT,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDERBOLT}
    },
    {
        .lvl = 74,
        .species = SPECIES_DARMANITAN_GALAR,
        .ability = ABILITY_GORILLA_TACTICS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Leroy[] = {
    {
        .lvl = 74,
        .species = SPECIES_MAWILE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_SUCKER_PUNCH}
    },
    {
        .lvl = 74,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_NEUROFORCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM}
    },
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
        .lvl = 38,
        .species = SPECIES_WATCHOG,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_FANG, MOVE_BULK_UP, MOVE_LOW_KICK, MOVE_CRUNCH}
    },
    {
        .lvl = 38,
        .species = SPECIES_LYCANROC_MIDDAY,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 4),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BULLDOZE, MOVE_ACCELEROCK, MOVE_SUCKER_PUNCH}
    },
    {
        .lvl = 38,
        .species = SPECIES_FALINKS,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_REVERSAL, MOVE_BULK_UP, MOVE_HEADBUTT, MOVE_FIRST_IMPRESSION}
    },
};

static const struct TrainerMon sParty_Edgar[] = {
    {
        .lvl = 72,
        .species = SPECIES_BRAVIARY_HISUI,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
        .lvl = 72,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .iv = IV_SPREAD_HP_FIRE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_WISE_GLASSES,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_SIGNAL_BEAM, MOVE_HIDDEN_POWER}
    },
};

static const struct TrainerMon sParty_Albert[] = {
    {
        .lvl = 70,
        .species = SPECIES_MANDIBUZZ,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 164, 0, 4, 96),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STEEL_WING, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_ROOST}
    },
    {
        .lvl = 70,
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_PSYSHOCK}
    },
};

static const struct TrainerMon sParty_Samuel[] = {
    {
        .lvl = 70,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_HONEY_GATHER,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STICKY_WEB, MOVE_MOONBLAST, MOVE_STUN_SPORE, MOVE_BUG_BUZZ}
    },
    {
        .lvl = 70,
        .species = SPECIES_TYRANTRUM,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_DANCE, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 70,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_THROAT_CHOP, MOVE_QUICK_ATTACK, MOVE_ZEN_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Vito[] = {
    {
        .lvl = 71,
        .species = SPECIES_BEWEAR,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAIN_PUNCH, MOVE_PLAY_ROUGH, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 71,
        .species = SPECIES_HAXORUS,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 71,
        .species = SPECIES_TINKATON,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_ENCORE, MOVE_PLAY_ROUGH, MOVE_GIGATON_HAMMER}
    },
    {
        .lvl = 71,
        .species = SPECIES_NINETALES_ALOLA,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_FREEZE_DRY, MOVE_DARK_PULSE}
    },
};

static const struct TrainerMon sParty_Owen[] = {
    {
        .lvl = 71,
        .species = SPECIES_DARMANITAN_GALAR,
        .ability = ABILITY_GORILLA_TACTICS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_U_TURN}
    },
    {
        .lvl = 71,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER}
    },
    {
        .lvl = 71,
        .species = SPECIES_NIDOKING,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
        .lvl = 65,
        .species = SPECIES_PYROAR,
        .ability = ABILITY_GRIM_NEIGH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_NOBLE_ROAR, MOVE_FLAMETHROWER}
    },
    {
        .lvl = 65,
        .species = SPECIES_GENGAR,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_CONFUSE_RAY, MOVE_SPITE}
    },
};

static const struct TrainerMon sParty_Mary[] = {
    {
        .lvl = 48,
        .species = SPECIES_FURRET,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_BODY_SLAM, MOVE_EXTREME_SPEED, MOVE_DIG}
    },
    {
        .lvl = 48,
        .species = SPECIES_BRAVIARY,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HONE_CLAWS, MOVE_CLOSE_COMBAT, MOVE_BRAVE_BIRD, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 48,
        .species = SPECIES_DELCATTY,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLASH, MOVE_CALM_MIND, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Alexia[] = {
    {
        .lvl = 48,
        .species = SPECIES_VIGOROTH,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 48,
        .species = SPECIES_FURFROU,
        .ability = ABILITY_FUR_COAT,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHARM, MOVE_ZEN_HEADBUTT, MOVE_SUCKER_PUNCH, MOVE_WILD_CHARGE}
    },
    {
        .lvl = 48,
        .species = SPECIES_SNORLAX,
        .ability = ABILITY_DOWNLOAD,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLACK_OFF, MOVE_CURSE, MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Jody[] = {
    {
        .lvl = 48,
        .species = SPECIES_SAWSBUCK,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_MEGAHORN, MOVE_HIGH_HORSEPOWER}
    },
    {
        .lvl = 48,
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_NOBLE_ROAR, MOVE_FLAMETHROWER, MOVE_ICE_BEAM}
    },
    {
        .lvl = 48,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRILL_PECK, MOVE_QUICK_ATTACK, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Wendy[] = {
    {
        .lvl = 53,
        .species = SPECIES_MAWILE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_CRUNCH}
    },
    {
        .lvl = 54,
        .species = SPECIES_PERRSERKER,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_IRON_HEAD, MOVE_SLASH, MOVE_SWAGGER}
    },
    {
        .lvl = 55,
        .species = SPECIES_TINKATON,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_SKITTER_SMACK, MOVE_PLAY_ROUGH, MOVE_GIGATON_HAMMER}
    },
};

static const struct TrainerMon sParty_Keira[] = {
    {
        .lvl = 74,
        .species = SPECIES_MAMOSWINE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_ICE_FANG, MOVE_TAKE_DOWN}
    },
    {
        .lvl = 74,
        .species = SPECIES_WHIMSICOTT,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_HURRICANE, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN}
    },
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
        .lvl = 37,
        .species = SPECIES_PERRSERKER,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 4),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_FEINT_ATTACK, MOVE_IRON_HEAD, MOVE_TAUNT}
    },
    {
        .lvl = 37,
        .species = SPECIES_SEVIPER,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_JAB, MOVE_GLARE, MOVE_PURSUIT, MOVE_HAZE}
    },
    {
        .lvl = 38,
        .species = SPECIES_BEWEAR,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HAMMER_ARM, MOVE_PLAY_ROUGH, MOVE_STRENGTH, MOVE_PAYBACK}
    },
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
        .lvl = 52,
        .species = SPECIES_SABLEYE,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_SHADOW_CLAW, MOVE_KNOCK_OFF, MOVE_SHADOW_SNEAK}
    },
};

static const struct TrainerMon sParty_Hope[] = {
    {
        .lvl = 70,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Shannon[] = {
    {
        .lvl = 70,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_SCORCHING_SANDS, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_Michelle[] = {
    {
        .lvl = 72,
        .species = SPECIES_POLITOED,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 8, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_PROTECT, MOVE_ENCORE, MOVE_EARTH_POWER}
    },
    {
        .lvl = 72,
        .species = SPECIES_HIPPOWDON,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 80, 0, 176, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_TOXIC, MOVE_THUNDER_FANG}
    },
    {
        .lvl = 72,
        .species = SPECIES_NINETALES_ALOLA,
        .ability = ABILITY_SNOW_WARNING,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_FREEZE_DRY, MOVE_DARK_PULSE}
    },
};

static const struct TrainerMon sParty_Caroline[] = {
    {
        .lvl = 71,
        .species = SPECIES_LUXRAY,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_CHOICE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_WILD_CHARGE, MOVE_ICE_FANG, MOVE_HIGH_HORSEPOWER}
    },
    {
        .lvl = 71,
        .species = SPECIES_YANMEGA,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_BOOMBURST}
    },
};

static const struct TrainerMon sParty_Julie[] = {
    {
        .lvl = 71,
        .species = SPECIES_STARAPTOR,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_CHOICE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_QUICK_ATTACK, MOVE_U_TURN, MOVE_CLOSE_COMBAT}
    },
    {
        .lvl = 71,
        .species = SPECIES_GENGAR,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEX, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_WILL_O_WISP}
    },
    {
        .lvl = 71,
        .species = SPECIES_REVAVROOM,
        .ability = ABILITY_FILTER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_GUNK_SHOT, MOVE_HIGH_HORSEPOWER}
    },
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
        .lvl = 69,
        .species = SPECIES_BANETTE,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 69,
        .species = SPECIES_MISMAGIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_POWER_GEM, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Kindra[] = {
    {
        .lvl = 55,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP}
    },
    {
        .lvl = 56,
        .species = SPECIES_FROSLASS,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_DRAINING_KISS, MOVE_FREEZE_DRY}
    },
};

static const struct TrainerMon sParty_Tammy[] = {
    {
        .lvl = 48,
        .species = SPECIES_BANETTE,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 48,
        .species = SPECIES_FROSLASS,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_DRAINING_KISS, MOVE_FREEZE_DRY}
    },
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
        .lvl = 58,
        .species = SPECIES_SABLEYE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FOUL_PLAY, MOVE_ZEN_HEADBUTT, MOVE_POWER_GEM, MOVE_DISABLE}
    },
};

static const struct TrainerMon sParty_Tasha[] = {
    {
        .lvl = 54,
        .species = SPECIES_BANETTE,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH, MOVE_SHADOW_SNEAK}
    },
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
        .lvl = 7,
        .species = SPECIES_MANKEY,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COVET, MOVE_SCRATCH}
    },
    {
        .lvl = 7,
        .species = SPECIES_YAMPER,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NUGGET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NUZZLE}
    },
};

static const struct TrainerMon sParty_Daphne[] = {
    {
        .lvl = 69,
        .species = SPECIES_LUMINEON,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ATTRACT}
    },
    {
        .lvl = 69,
        .species = SPECIES_HUNTAIL,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG, MOVE_PSYCHIC_FANGS}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
        .lvl = 63,
        .species = SPECIES_TURTONATOR,
        .ability = ABILITY_MAGMA_ARMOR,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_IRON_DEFENSE, MOVE_EXPLOSION}
    },
    {
        .lvl = 64,
        .species = SPECIES_CHARIZARD,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_AIR_SLASH}
    },
    {
        .lvl = 65,
        .species = SPECIES_KROOKODILE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_FOUL_PLAY}
    },
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
        .lvl = 69,
        .species = SPECIES_OCTILLERY,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_BEAM, MOVE_SNIPE_SHOT, MOVE_PSYBEAM, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
        .lvl = 43,
        .species = SPECIES_OCTILLERY,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALE_SHOT, MOVE_ICE_BEAM, MOVE_BULLET_SEED, MOVE_OCTAZOOKA}
    },
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 21,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
        .lvl = 49,
        .species = SPECIES_GRANBULL,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_BRICK_BREAK, MOVE_FIRE_FANG, MOVE_ICE_FANG}
    },
    {
        .lvl = 50,
        .species = SPECIES_SIRFETCHD,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SACRED_SWORD, MOVE_SLAM, MOVE_KNOCK_OFF, MOVE_DETECT}
    },
};

static const struct TrainerMon sParty_Connie[] = {
    {
        .lvl = 69,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Bridget[] = {
    {
        .lvl = 69,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Olivia[] = {
    {
        .lvl = 69,
        .species = SPECIES_HUNTAIL,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
        .lvl = 69,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH}
    },
    {
        .lvl = 69,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_DANCER,
        .nature = NATURE_NAUGHTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_ENERGY_BALL, MOVE_HYDRO_PUMP, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
        .lvl = 69,
        .species = SPECIES_SLOWKING,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLACK_OFF, MOVE_PSYCHIC, MOVE_SILVER_WIND, MOVE_POWER_GEM}
    },
    {
        .lvl = 69,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_SWAGGER}
    },
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
        .lvl = 10,
        .species = SPECIES_MEOWTH,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NUGGET,
        .ball = ITEM_POKE_BALL,
        .isShiny = TRUE,
        .moves = {MOVE_FAKE_OUT, MOVE_SCRATCH}
    },
};

static const struct TrainerMon sParty_Mollie[] = {
    {
        .lvl = 67,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_HONEY_GATHER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_STUN_SPORE}
    },
    {
        .lvl = 68,
        .species = SPECIES_ARCANINE_HISUI,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
        .lvl = 40,
        .species = SPECIES_RAMPARDOS,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SMASH, MOVE_HEADBUTT, MOVE_ASSURANCE}
    },
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
        .lvl = 52,
        .species = SPECIES_GLALIE,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_SHARD, MOVE_BITE, MOVE_PROTECT, MOVE_FREEZE_DRY}
    },
    {
        .lvl = 53,
        .species = SPECIES_CRYOGONAL,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_FREEZE_DRY, MOVE_ANCIENTPOWER, MOVE_HAZE}
    },
};

static const struct TrainerMon sParty_Mark[] = {
    {
        .lvl = 52,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_EARTH_POWER, MOVE_EXTRASENSORY, MOVE_ANCIENT_POWER}
    },
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
        .lvl = 43,
        .species = SPECIES_SALAZZLE,
        .ability = ABILITY_CORROSION,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_VENOSHOCK, MOVE_NASTY_PLOT, MOVE_KNOCK_OFF, MOVE_INCINERATE}
    },
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
        .lvl = 50,
        .species = SPECIES_KINGDRA,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SNIPE_SHOT, MOVE_DRAGON_PULSE, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Dominik[] = {
    {
        .lvl = 50,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX, MOVE_ACID_ARMOR}
    },
};

static const struct TrainerMon sParty_Douglas[] = {
    {
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX, MOVE_ACID_ARMOR}
    },
    {
        .lvl = 49,
        .species = SPECIES_MANTINE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_HYDRO_CANNON, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Darrin[] = {
    {
        .lvl = 45,
        .species = SPECIES_LUMINEON,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_WATER_PULSE, MOVE_GUST}
    },
    {
        .lvl = 46,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX, MOVE_ACID_ARMOR}
    },
    {
        .lvl = 47,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRINE, MOVE_AURORA_BEAM, MOVE_ENCORE, MOVE_SWAGGER}
    },
};

static const struct TrainerMon sParty_Tony1[] = {
    {
        .lvl = 46,
        .species = SPECIES_BRUXISH,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Jerome[] = {
    {
        .lvl = 48,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER}
    },
};

static const struct TrainerMon sParty_Matthew[] = {
    {
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWAGGER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_CUTTER}
    },
};

static const struct TrainerMon sParty_David[] = {
    {
        .lvl = 45,
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RAZOR_SHELL, MOVE_ICICLE_SPEAR, MOVE_ICE_SHARD, MOVE_SHELL_SMASH}
    },
    {
        .lvl = 45,
        .species = SPECIES_GOREBYSS,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_WATER_PULSE}
    },
};

static const struct TrainerMon sParty_Spencer[] = {
    {
        .lvl = 61,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX, MOVE_SLUDGE_WAVE}
    },
    {
        .lvl = 62,
        .species = SPECIES_ALOMOMOLA,
        .ability = ABILITY_HEALER,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_JET, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
        .lvl = 61,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX, MOVE_SLUDGE_WAVE}
    },
};

static const struct TrainerMon sParty_Stan[] = {
    {
        .lvl = 60,
        .species = SPECIES_KINGDRA,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_PULSE, MOVE_SNIPE_SHOT, MOVE_YAWN, MOVE_DRAGON_PULSE}
    },
};

static const struct TrainerMon sParty_Barry[] = {
    {
        .lvl = 61,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Dean[] = {
    {
        .lvl = 60,
        .species = SPECIES_CRAMORANT,
        .ability = ABILITY_GULP_MISSILE,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRILL_PECK, MOVE_AMNESIA}
    },
    {
        .lvl = 61,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
    {
        .lvl = 62,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_ACID_ARMOR}
    },
};

static const struct TrainerMon sParty_Rodney[] = {
    {
        .lvl = 63,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Richard[] = {
    {
        .lvl = 65,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_SUPERSONIC}
    },
};

static const struct TrainerMon sParty_Herman[] = {
    {
        .lvl = 62,
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_RAZOR_SHELL, MOVE_SHELL_SMASH}
    },
    {
        .lvl = 63,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_ACID_ARMOR}
    },
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
        .lvl = 67,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_KNOCK_OFF, MOVE_RAZOR_SHELL}
    },
};

static const struct TrainerMon sParty_Franklin[] = {
    {
        .lvl = 65,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLACK_OFF, MOVE_AURORA_BEAM, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Kevin[] = {
    {
        .lvl = 63,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLACK_OFF, MOVE_AURORA_BEAM, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Jack[] = {
    {
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
        .lvl = 57,
        .species = SPECIES_WHISCASH,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT}
    },
    {
        .lvl = 58,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_SLACK_OFF, MOVE_SURF, MOVE_AURORA_BEAM}
    },
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
        .lvl = 22,
        .species = SPECIES_MANKEY,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LOW_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_TOMB, MOVE_CROSS_CHOP}
    },
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
        .lvl = 65,
        .species = SPECIES_PRIMEAPE,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_RAGE_FIST, MOVE_CROSS_CHOP, MOVE_ASSURANCE}
    },
    {
        .lvl = 66,
        .species = SPECIES_MACHAMP,
        .ability = ABILITY_NO_GUARD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_CHOP, MOVE_STRENGTH, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
        .lvl = 68,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_DARKEST_LARIAT, MOVE_LIQUIDATION, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMon sParty_Koichi[] = {
    {
        .lvl = 45,
        .species = SPECIES_MACHOKE,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULK_UP, MOVE_DUAL_CHOP, MOVE_STRENGTH, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 46,
        .species = SPECIES_MACHAMP,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MACH_PUNCH, MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_STRENGTH}
    },
};

static const struct TrainerMon sParty_Nob1[] = {
    {
        .lvl = 41,
        .species = SPECIES_SAWK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRICK_BREAK, MOVE_BULK_UP, MOVE_ROCK_SMASH, MOVE_RETALIATE}
    },
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_LIQUIDATION}
    },
    {
        .lvl = 50,
        .species = SPECIES_SCRAFTY,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_BRICK_BREAK, MOVE_SWAGGER, MOVE_FACADE}
    },
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
        .lvl = 39,
        .species = SPECIES_SAWK,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRICK_BREAK, MOVE_BULK_UP, MOVE_ROCK_SMASH, MOVE_RETALIATE}
    },
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
        .lvl = 53,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_DARKEST_LARIAT, MOVE_LIQUIDATION, MOVE_WHIRLWIND}
    },
};

static const struct TrainerMon sParty_Kirk[] = {
    {
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 126, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWIFT, MOVE_CHARGE_BEAM, MOVE_EERIE_IMPULSE, MOVE_LIGHT_SCREEN}
    },
    {
        .lvl = 34,
        .species = SPECIES_ELECTRODE_HISUI,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 126, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ENERGY_BALL, MOVE_CHARGE_BEAM, MOVE_STUN_SPORE}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
        .lvl = 57,
        .species = SPECIES_VENOMOTH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_STUN_SPORE, MOVE_AIR_SLASH}
    },
    {
        .lvl = 58,
        .species = SPECIES_OCTILLERY,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SNIPE_SHOT}
    },
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
        .lvl = 62,
        .species = SPECIES_DRAPION,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_X_SCISSOR, MOVE_CROSS_POISON, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Shawn[] = {
    {
        .lvl = 33,
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(126, 0, 0, 126, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_EERIE_IMPULSE, MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE},
        .isShiny = TRUE,
    },
    {
        .lvl = 34,
        .species = SPECIES_BOLTUND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 126, 0, 0, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_ROAR, MOVE_SPARK, MOVE_NUZZLE},
        .isShiny = TRUE,
    },
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
        .lvl = 50,
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
    {
        .lvl = 51,
        .species = SPECIES_CHATOT,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_HYPER_VOICE}
    },
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
        .lvl = 30,
        .species = SPECIES_HELIOLISK,
        .ability = ABILITY_TRANSISTOR,
        .nature = NATURE_RASH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDERBOLT, MOVE_BULLDOZE, MOVE_PARABOLIC_CHARGE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 31,
        .species = SPECIES_ELECTABUZZ,
        .ability = ABILITY_POWER_FIST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_FORCE_PALM}
    },
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
        .lvl = 45,
        .species = SPECIES_MAGCARGO,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_GEM, MOVE_LAVA_PLUME, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER}
    },
};

static const struct TrainerMon sParty_Jeff[] = {
    {
        .lvl = 46,
        .species = SPECIES_MAGCARGO,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_GEM, MOVE_LAVA_PLUME, MOVE_EARTH_POWER}
    },
    {
        .lvl = 46,
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_WHITE_SMOKE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_LASH, MOVE_HONE_CLAWS, MOVE_BUG_BITE}
    },
};

static const struct TrainerMon sParty_Axle[] = {
    {
        .lvl = 45,
        .species = SPECIES_MAGMAR,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS}
    },
};

static const struct TrainerMon sParty_Jace[] = {
    {
        .lvl = 46,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_MEGAHORN, MOVE_POISON_JAB}
    },
};

static const struct TrainerMon sParty_Keegan[] = {
    {
        .lvl = 46,
        .species = SPECIES_DARMANITAN,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLARE_BLITZ, MOVE_HEADBUTT, MOVE_BITE, MOVE_WORK_UP}
    },
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
        .lvl = 40,
        .species = SPECIES_MILTANK,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_ZEN_HEADBUTT}
    },
    {
        .lvl = 40,
        .species = SPECIES_TAUROS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RAGING_BULL, MOVE_STOMPING_TANTRUM, MOVE_ZEN_HEADBUTT, MOVE_PAYBACK}
    },
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
        .lvl = 44,
        .species = SPECIES_ORTHWORM,
        .ability = ABILITY_EARTH_EATER,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_IRON_TAIL, MOVE_BULLDOZE, MOVE_SMACK_DOWN, MOVE_DIG}
    },
};

static const struct TrainerMon sParty_Beau[] = {
    {
        .lvl = 43,
        .species = SPECIES_MARACTUS,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COTTON_SPORE, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED}
    },
    {
        .lvl = 44,
        .species = SPECIES_TOEDSCRUEL,
        .ability = ABILITY_MYCELIUM_MIGHT,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEX, MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_SPORE}
    },
    {
        .lvl = 45,
        .species = SPECIES_DRAPION,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Larry[] = {
    {
        .lvl = 35,
        .species = SPECIES_DUBWOOL,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEADBUTT, MOVE_DOUBLE_KICK, MOVE_COPYCAT}
    },
};

static const struct TrainerMon sParty_Shane[] = {
    {
        .lvl = 39,
        .species = SPECIES_ELDEGOSS,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_SYNTHESIS, MOVE_COTTON_SPORE, MOVE_LEAF_TORNADO}
    },
    {
        .lvl = 40,
        .species = SPECIES_JYNX,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_POWDER_SNOW, MOVE_SWEET_KISS, MOVE_SING}
    },
};

static const struct TrainerMon sParty_Justin[] = {
    {
        .lvl = 38,
        .species = SPECIES_THIEVUL,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SNARL, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
        .lvl = 43,
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG}
    },
    {
        .lvl = 44,
        .species = SPECIES_BEWEAR,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_STRENGTH, MOVE_BRUTAL_SWING, MOVE_HAMMER_ARM}
    },
};

static const struct TrainerMon sParty_Autumn[] = {
    {
        .lvl = 43,
        .species = SPECIES_GOGOAT,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_BULK_UP, MOVE_SYNTHESIS}
    },
};

static const struct TrainerMon sParty_Travis[] = {
    {
        .lvl = 35,
        .species = SPECIES_PRIMEAPE,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_CHOP, MOVE_ASSURANCE, MOVE_RAGE_FIST}
    },
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
        .lvl = 49,
        .species = SPECIES_SHIFTRY,
        .ability = ABILITY_WIND_RIDER,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_EXTRASENSORY, MOVE_HURRICANE}
    },
};

static const struct TrainerMon sParty_Donald[] = {
    {
        .lvl = 46,
        .species = SPECIES_ARIADOS,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_JAB, MOVE_PSYCHIC_FANGS, MOVE_FELL_STINGER, MOVE_SUCKER_PUNCH}
    },
    {
        .lvl = 47,
        .species = SPECIES_SPIDOPS,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_BUG_BITE, MOVE_HEADBUTT, MOVE_CIRCLE_THROW}
    },
    {
        .lvl = 47,
        .species = SPECIES_DURANT,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_X_SCISSOR, MOVE_DIG}
    },
};

static const struct TrainerMon sParty_Taylor[] = {
    {
        .lvl = 47,
        .species = SPECIES_BELLIBOLT,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_MUD_SHOT, MOVE_SLACK_OFF, MOVE_WATER_GUN}
    },
    {
        .lvl = 48,
        .species = SPECIES_HELIOLISK,
        .ability = ABILITY_TRANSISTOR,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_THUNDERBOLT, MOVE_PARABOLIC_CHARGE, MOVE_THUNDER_WAVE}
    },
    {
        .lvl = 49,
        .species = SPECIES_VIKAVOLT,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
        .lvl = 50,
        .species = SPECIES_BOMBIRDIER,
        .ability = ABILITY_ROCKY_PAYLOAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_WHIRLWIND, MOVE_PAYBACK}
    },
    {
        .lvl = 50,
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_UNBURDEN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_FAKE_OUT, MOVE_SUCKER_PUNCH, MOVE_TORMENT}
    },
    {
        .lvl = 50,
        .species = SPECIES_LOKIX,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_LUNGE, MOVE_LOW_KICK, MOVE_BOUNCE}
    },
};

static const struct TrainerMon sParty_Derek[] = {
    {
        .lvl = 31,
        .species = SPECIES_MOTHIM,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_NAUGHTY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_CONFUSION, MOVE_BUG_BITE, MOVE_GUST}
    },
    {
        .lvl = 32,
        .species = SPECIES_LEAVANNY,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FELL_STINGER, MOVE_RAZOR_LEAF, MOVE_BUG_BITE, MOVE_SLASH}
    },
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
        .lvl = 28,
        .species = SPECIES_GIRAFARIG,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_NAUGHTY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYBEAM, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Preston[] = {
    {
        .lvl = 65,
        .species = SPECIES_SIGILYPH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_Virgil[] = {
    {
        .lvl = 65,
        .species = SPECIES_MUSHARNA,
        .ability = ABILITY_SYNCHRONIZE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_PSYSHOCK}
    },
};

static const struct TrainerMon sParty_Blake[] = {
    {
        .lvl = 65,
        .species = SPECIES_SIGILYPH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_William[] = {
    {
        .lvl = 53,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_EARTH_POWER, MOVE_EXTRASENSORY, MOVE_ANCIENT_POWER}
    },
    {
        .lvl = 54,
        .species = SPECIES_ORBEETLE,
        .ability = ABILITY_SWARM,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_MIRROR_COAT}
    },
    {
        .lvl = 55,
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_TRACE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE}
    },
};

static const struct TrainerMon sParty_Joshua[] = {
    {
        .lvl = 69,
        .species = SPECIES_MR_MIME,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN}
    },
    {
        .lvl = 69,
        .species = SPECIES_ALAKAZAM,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_HYPNOSIS, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
        .lvl = 53,
        .species = SPECIES_SOLROCK,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ}
    },
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
        .lvl = 30,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_ENCORE, MOVE_COSMIC_POWER}
    },
};

static const struct TrainerMon sParty_Hannah[] = {
    {
        .lvl = 65,
        .species = SPECIES_BRONZONG,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_SPINNER, MOVE_ZEN_HEADBUTT, MOVE_GYRO_BALL}
    },
};

static const struct TrainerMon sParty_Samantha[] = {
    {
        .lvl = 65,
        .species = SPECIES_ORICORIO_PAU,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_REVELATION_DANCE, MOVE_ICY_WIND}
    },
};

static const struct TrainerMon sParty_Maura[] = {
    {
        .lvl = 65,
        .species = SPECIES_RAPIDASH_GALAR,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_ZEN_HEADBUTT, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH}
    },
};

static const struct TrainerMon sParty_Kayla[] = {
    {
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
    {
        .lvl = 57,
        .species = SPECIES_XATU,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_WISH}
    },
    {
        .lvl = 58,
        .species = SPECIES_COFAGRIGUS,
        .ability = ABILITY_MUMMY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_HAZE, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Alexis[] = {
    {
        .lvl = 69,
        .species = SPECIES_COFAGRIGUS,
        .ability = ABILITY_MUMMY,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_BALL, MOVE_DARK_PULSE, MOVE_WILL_O_WISP, MOVE_HAZE}
    },
    {
        .lvl = 69,
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_TRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}
    },
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
        .lvl = 51,
        .species = SPECIES_CHIMECHO,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_EXTRASENSORY, MOVE_OMINOUS_WIND, MOVE_YAWN}
    },
    {
        .lvl = 51,
        .species = SPECIES_ALAKAZAM,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_PSYSHOCK, MOVE_RECOVER, MOVE_HYPNOSIS}
    },
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
        .lvl = 49,
        .species = SPECIES_MANECTRIC,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_SNARL, MOVE_ROAR, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
        .lvl = 16,
        .species = SPECIES_ARON,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_RED_CARD,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROAR, MOVE_BULLDOZE, MOVE_STEALTH_ROCK, MOVE_ROCK_TOMB}
    },
    {
        .lvl = 16,
        .species = SPECIES_LILEEP,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_QUIET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_ORAN_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_INGRAIN, MOVE_ACID_SPRAY, MOVE_MEGA_DRAIN, MOVE_ROCK_TOMB}
    },
    {
        .lvl = 16,
        .species = SPECIES_ARCHEN,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_BERRY_JUICE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WING_ATTACK, MOVE_ROCK_TOMB, MOVE_HONE_CLAWS, MOVE_STEEL_WING}
    },
    {
        .lvl = 16,
        .species = SPECIES_NOSEPASS,
        .ability = ABILITY_SAND_FORCE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_FIRE_PUNCH, MOVE_ROCK_TOMB, MOVE_PAIN_SPLIT}
    },
};

static const struct TrainerMon sParty_Brawly1[] = {
    {
        .lvl = 24,
        .species = SPECIES_SNEASEL_HISUI,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_TRAILBLAZE, MOVE_TOXIC_SPIKES, MOVE_POISON_JAB}
    },
    {
        .lvl = 24,
        .species = SPECIES_PAWMO,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_PAYAPA_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NUZZLE, MOVE_MACH_PUNCH, MOVE_KNOCK_OFF, MOVE_SPARK}
    },
    {
        .lvl = 24,
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB}
    },
    {
        .lvl = 24,
        .species = SPECIES_HITMONCHAN,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_COBA_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}
    },
    {
        .lvl = 24,
        .species = SPECIES_HARIYAMA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
        .lvl = 36,
        .species = SPECIES_PINCURCHIN,
        .ability = ABILITY_ELECTRIC_SURGE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 0, 0),
        .heldItem = ITEM_ELECTRIC_SEED,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_SCALD, MOVE_SPIKES, MOVE_RECOVER, MOVE_THUNDERBOLT}
    },
    {
        .lvl = 36,
        .species = SPECIES_KILOWATTREL,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_ROOST}
    },
    {
        .lvl = 36,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_ADAMANT,
        .iv = IV_SPREAD_HP_WATER, // hp water
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 4),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 36,
        .species = SPECIES_ROTOM_WASH,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_VOLT_SWITCH, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_HYDRO_PUMP}
    },
    {
        .lvl = 36,
        .species = SPECIES_ELECTIVIRE,
        .ability = ABILITY_POWER_FIST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 0, 0, 252),
        .heldItem = ITEM_EXPERT_BELT,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH}
    },
    {
        .lvl = 37,
        .species = SPECIES_AMPHAROS,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .iv = IV_SPREAD_HP_STEEL, // hp steel
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_QUICK_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_HIDDEN_POWER, MOVE_DAZZLING_GLEAM}
    },
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
        .lvl = 49,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 36, 0, 224, 0),
        .heldItem = ITEM_HEAT_ROCK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LAVA_PLUME, MOVE_RAPID_SPIN, MOVE_STEALTH_ROCK, MOVE_CLEAR_SMOG}
    },
    {
        .lvl = 48,
        .species = SPECIES_TALONFLAME,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 8, 0, 0, 0, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_DEFOG, MOVE_BRAVE_BIRD, MOVE_TAUNT}
    },
    {
        .lvl = 48,
        .species = SPECIES_ROTOM_HEAT,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 104, 0, 0, 152),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_PAIN_SPLIT}
    },
    {
        .lvl = 49,
        .species = SPECIES_CERULEDGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BITTER_BLADE, MOVE_SHADOW_SNEAK, MOVE_IRON_HEAD}
    },
    {
        .lvl = 48,
        .species = SPECIES_SKELEDIRGE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 92, 0, 164, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TORCH_SONG, MOVE_HEX, MOVE_WILL_O_WISP, MOVE_SLACK_OFF}
    },
    {
        .lvl = 50,
        .species = SPECIES_VOLCARONA,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_HIDDEN_POWER}
    },
};

static const struct TrainerMon sParty_Norman1[] = {
    {
        .lvl = 50,
        .species = SPECIES_BRAVIARY,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DEFOG, MOVE_ROOST, MOVE_U_TURN}
    },
    {
        .lvl = 51,
        .species = SPECIES_PORYGON_Z,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_ICE_BEAM}
    },
    {
        .lvl = 50,
        .species = SPECIES_ZOROARK_HISUI,
        .ability = ABILITY_ILLUSION,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITTER_MALICE, MOVE_HYPER_VOICE, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}
    },
    {
        .lvl = 50,
        .species = SPECIES_BLISSEY,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SOFT_BOILED, MOVE_CHILLING_WATER, MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE}
    },
    {
        .lvl = 51,
        .species = SPECIES_URSALUNA,
        .ability = ABILITY_GUTS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_FLAME_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_BULK_UP}
    },
    {
        .lvl = 52,
        .species = SPECIES_SLAKING,
        .ability = ABILITY_TRUANT,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLACK_OFF, MOVE_EARTHQUAKE, MOVE_MEGA_PUNCH, MOVE_BULK_UP}
    },
};

static const struct TrainerMon sParty_Winona1[] = {
    {
        .lvl = 56,
        .species = SPECIES_SKARMORY,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 208, 0, 0, 48),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_SPIKES, MOVE_ROOST, MOVE_WHIRLWIND}
    },
    {
        .lvl = 56,
        .species = SPECIES_BRAVIARY_HISUI,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_HURRICANE, MOVE_ROOST, MOVE_HEAT_WAVE}
    },
    {
        .lvl = 57,
        .species = SPECIES_ARCHEOPS,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_U_TURN, MOVE_ROOST}
    },
    {
        .lvl = 57,
        .species = SPECIES_DRAGONITE,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_ROOST}
    },
    {
        .lvl = 56,
        .species = SPECIES_HAWLUCHA,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_WHITE_HERB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CLOSE_COMBAT, MOVE_TAUNT, MOVE_ACROBATICS}
    },
    {
        .lvl = 58,
        .species = SPECIES_ALTARIA,
        .ability = ABILITY_COTTON_DOWN,
        .nature = NATURE_JOLLY,
        .friendship = 255,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_ALTARIANITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_RETURN}
    },
};

static const struct TrainerMon sParty_TateAndLiza1[] = {
    {
        .lvl = 67,
        .species = SPECIES_ESPATHRA,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(152, 0, 252, 0, 0, 120),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_PROTECT, MOVE_STORED_POWER, MOVE_DAZZLING_GLEAM}
    },
    {
        .lvl = 67,
        .species = SPECIES_INDEEDEE_M,
        .ability = ABILITY_PSYCHIC_SURGE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXPANDING_FORCE, MOVE_DAZZLING_GLEAM, MOVE_ENCORE, MOVE_PROTECT}
    },
    {
        .lvl = 68,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_METEOR_MASH, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE}
    },
    {
        .lvl = 68,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_SCORCHING_SANDS, MOVE_ICE_BEAM}
    },
    {
        .lvl = 70,
        .species = SPECIES_MEDICHAM,
        .ability = ABILITY_TELEPATHY,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MEDICHAMITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_DRAIN_PUNCH, MOVE_PROTECT}
    },
    {
        .lvl = 70,
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_TRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_GARDEVOIRITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_ICY_WIND}
    },
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 41,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 43,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
        .lvl = 13,
        .species = SPECIES_ROOKIDEE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PECK, MOVE_HONE_CLAWS}
    },
};

static const struct TrainerMon sParty_Ted[] = {
    {
        .lvl = 30,
        .species = SPECIES_MR_MIME,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYBEAM, MOVE_FAIRY_WIND, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Paul[] = {
    {
        .lvl = 30,
        .species = SPECIES_OINKOLOGNE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WORK_UP, MOVE_HEADBUTT, MOVE_DIG}
    },
    {
        .lvl = 30,
        .species = SPECIES_PRIMEAPE,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ASSURANCE, MOVE_CROSS_CHOP, MOVE_SWAGGER, MOVE_LOW_KICK}
    },
    {
        .lvl = 30,
        .species = SPECIES_DUNSPARCE,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_RUN, MOVE_GLARE, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
        .lvl = 11,
        .species = SPECIES_SLOWPOKE_GALAR,
        .ability = ABILITY_QUICK_DRAW,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACID, MOVE_TACKLE}
    },
};

static const struct TrainerMon sParty_Georgia[] = {
    {
        .lvl = 30,
        .species = SPECIES_MARACTUS,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD}
    },
    {
        .lvl = 30,
        .species = SPECIES_JUMPLUFF,
        .ability = ABILITY_AERILATE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_QUICK_ATTACK, MOVE_BULLET_SEED, MOVE_SYNTHESIS}
    },
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
        .lvl = 50,
        .species = SPECIES_FURFROU,
        .ability = ABILITY_FUR_COAT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_COTTON_GUARD, MOVE_BITE, MOVE_HEADBUTT}
    },
    {
        .lvl = 50,
        .species = SPECIES_SLAKING,
        .ability = ABILITY_TRUANT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGA_KICK, MOVE_THROAT_CHOP, MOVE_ENCORE, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
        .lvl = 30,
        .species = SPECIES_DUGTRIO_ALOLA,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SANDSTORM, MOVE_SUCKER_PUNCH, MOVE_BULLDOZE, MOVE_NIGHT_SLASH}
    },
    {
        .lvl = 32,
        .species = SPECIES_GABITE,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_BULLDOZE, MOVE_DRAGON_BREATH}
    },
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
        .lvl = 33,
        .species = SPECIES_FURRET,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_COIL, MOVE_U_TURN, MOVE_DIG}
    },
    {
        .lvl = 33,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_FLIP_TURN}
    },
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
        .lvl = 25,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_NIGHT_SLASH, MOVE_FURY_CUTTER, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
        .lvl = 34,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_RAIN_DISH,
        .nature = NATURE_LONELY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ENERGY_BALL, MOVE_KNOCK_OFF, MOVE_HYDRO_PUMP, MOVE_ZEN_HEADBUTT}
    },
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
        .lvl = 51,
        .species = SPECIES_ALCREMIE,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_DAZZLING_GLEAM, MOVE_DRAINING_KISS, MOVE_SWEET_KISS}
    },
};

static const struct TrainerMon sParty_Bethany[] = {
    {
        .lvl = 69,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PECK, MOVE_MEGAHORN, MOVE_AQUA_JET, MOVE_WATERFALL}
    },
    {
        .lvl = 69,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
    {
        .lvl = 69,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_BOUNCE, MOVE_SLAM}
    },
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
        .lvl = 25,
        .species = SPECIES_PLUSLE,
        .ability = ABILITY_PLUS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_QUICK_ATTACK, MOVE_NUZZLE}
    },
    {
        .lvl = 25,
        .species = SPECIES_MINUN,
        .ability = ABILITY_MINUS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_QUICK_ATTACK, MOVE_NUZZLE}
    },
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
        .lvl = 49,
        .species = SPECIES_STOUTLAND,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_STOMPING_TANTRUM}
    },
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
        .lvl = 36,
        .species = SPECIES_DRUDDIGON,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_DRAGON_DANCE}
    },
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
        .lvl = 5,
        .species = SPECIES_MASCHIFF,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE, MOVE_LICK}
    },
};

static const struct TrainerMon sParty_Billy[] = {
    {
        .lvl = 5,
        .species = SPECIES_YUNGOOS,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
    {
        .lvl = 7,
        .species = SPECIES_TENTACOOL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_POISON_STING, MOVE_ACID}
    },
};

static const struct TrainerMon sParty_Josh[] = {
    {
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROLLOUT, MOVE_BULLDOZE, MOVE_ROCK_POLISH}
    },
    {
        .lvl = 14,
        .species = SPECIES_GEODUDE_ALOLA,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROLLOUT, MOVE_TACKLE, MOVE_SPARK}
    },
};

static const struct TrainerMon sParty_Tommy[] = {
    {
        .lvl = 13,
        .species = SPECIES_ROCKRUFF,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE, MOVE_LEER, MOVE_ROCK_THROW}
    },
    {
        .lvl = 14,
        .species = SPECIES_GEODUDE_ALOLA,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROLLOUT, MOVE_TACKLE, MOVE_SPARK}
    },
};

static const struct TrainerMon sParty_Joey[] = {
    {
        .lvl = 12,
        .species = SPECIES_RATTATA,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_BITE}
    },
};

static const struct TrainerMon sParty_Ben[] = {
    {
        .lvl = 33,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 126, 0, 0, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_ACROBATICS, MOVE_NUZZLE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 34,
        .species = SPECIES_BELLIBOLT,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(126, 0, 0, 126, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_MUD_SHOT, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Quincy[] = {
    {
        .lvl = 72,
        .species = SPECIES_MIMIKYU,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK}
    },
    {
        .lvl = 72,
        .species = SPECIES_SALAZZLE,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_WISE_GLASSES,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB, MOVE_DRAGON_PULSE}
    },
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
        .lvl = 72,
        .species = SPECIES_ZEBSTRIKA,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_NAIVE,
        .iv = IV_SPREAD_HP_ICE,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 4, 0, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_HIDDEN_POWER, MOVE_HIGH_HORSEPOWER, MOVE_BLAZE_KICK}
    },
    {
        .lvl = 72,
        .species = SPECIES_MAMOSWINE,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_SHARD, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_TRAILBLAZE}
    },
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
        .lvl = 39,
        .species = SPECIES_ARCTIBAX,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_BITE, MOVE_DRAGON_TAIL}
    },
};

static const struct TrainerMon sParty_Dillon[] = {
    {
        .lvl = 39,
        .species = SPECIES_NIDOKING,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_RASH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_SLUDGE_WAVE, MOVE_MEGAHORN, MOVE_DOUBLE_KICK}
    },
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
        .lvl = 29,
        .species = SPECIES_RATICATE,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_SWORDS_DANCE}
    },
    {
        .lvl = 29,
        .species = SPECIES_DIGGERSBY,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_DOUBLE_KICK, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Allen[] = {
    {
        .lvl = 5,
        .species = SPECIES_ROCKRUFF,
        .ability = ABILITY_STEADFAST,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
    {
        .lvl = 5,
        .species = SPECIES_PANSEAR,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH, MOVE_LEER}
    },
};

static const struct TrainerMon sParty_Timmy[] = {
    {
        .lvl = 24,
        .species = SPECIES_FLAAFFY,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COTTON_SPORE, MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_CHARGE}
    },
    {
        .lvl = 25,
        .species = SPECIES_DEDENNE,
        .ability = ABILITY_ELECTRIC_SURGE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_NUZZLE, MOVE_CHARGE, MOVE_DISARMING_VOICE}
    },
};

static const struct TrainerMon sParty_Wallace[] = {
    {
        .lvl = 72,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_COVERT_CLOAK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_RECOVER, MOVE_STEALTH_ROCK, MOVE_ICE_BEAM}
    },
    {
        .lvl = 74,
        .species = SPECIES_LAPRAS,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 200, 0, 0),
        .heldItem = ITEM_QUICK_CLAW,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHILLING_WATER, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_RECOVER}
    },
    {
        .lvl = 73,
        .species = SPECIES_GRENINJA_BOND,
        .ability = ABILITY_BATTLE_BOND,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_WISE_GLASSES,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_DARK_PULSE, MOVE_SLUDGE_WAVE, MOVE_ICE_BEAM}
    },
    {
        .lvl = 72,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(184, 252, 0, 0, 0, 72),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_POWER_WHIP}
    },
    {
        .lvl = 75,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 108, 0, 148, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_SCALD, MOVE_RECOVER, MOVE_HAZE}
    },
    {
        .lvl = 74,
        .species = SPECIES_BLASTOISE,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_BLASTOISINITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_DARK_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_Andrew[] = {
    {
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_PULSE, MOVE_POISON_STING, MOVE_WRAP, MOVE_SCREECH}
    },
    {
        .lvl = 25,
        .species = SPECIES_SEEL,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_SHARD, MOVE_ICY_WIND, MOVE_HEADBUTT, MOVE_ENCORE}
    },
    {
        .lvl = 26,
        .species = SPECIES_BASCULIN,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_AQUA_JET, MOVE_HEADBUTT, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Ivan[] = {
    {
        .lvl = 10,
        .species = SPECIES_STARYU,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_CONFUSE_RAY}
    },
    {
        .lvl = 10,
        .species = SPECIES_FINNEON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN}
    },
    {
        .lvl = 10,
        .species = SPECIES_CLAUNCHER,
        .ability = ABILITY_MEGA_LAUNCHER,
        .nature = NATURE_BRAVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sParty_Claude[] = {
    {
        .lvl = 38,
        .species = SPECIES_MAGIKARP,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPLASH}
    },
    {
        .lvl = 38,
        .species = SPECIES_CORPHISH,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}
    },
    {
        .lvl = 38,
        .species = SPECIES_BASCULIN,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
        .lvl = 12,
        .species = SPECIES_MAGIKARP,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPLASH}
    },
    {
        .lvl = 13,
        .species = SPECIES_SHELLDER,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_SHARD, MOVE_WATER_GUN}
    },
    {
        .lvl = 14,
        .species = SPECIES_WAILMER,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_ASTONISH}
    },
};

static const struct TrainerMon sParty_Ned[] = {
    {
        .lvl = 12,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_NONE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_AGILITY}
    },
};

static const struct TrainerMon sParty_Dale[] = {
    {
        .lvl = 27,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAINING_KISS, MOVE_WATER_PULSE, MOVE_MOONLIGHT, MOVE_CHARM}
    },
    {
        .lvl = 28,
        .species = SPECIES_FRILLISH,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_ABSORB, MOVE_HEX, MOVE_WATER_PULSE}
    },
    {
        .lvl = 29,
        .species = SPECIES_WAILMER,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAVY_SLAM, MOVE_WATER_PULSE, MOVE_ASTONISH}
    },
    {
        .lvl = 30,
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_PROPELLER_TAIL,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_AQUA_JET, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_Nolan[] = {
    {
        .lvl = 40,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Barny[] = {
    {
        .lvl = 47,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH}
    },
    {
        .lvl = 48,
        .species = SPECIES_TATSUGIRI,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAUNT, MOVE_NASTY_PLOT, MOVE_MUDDY_WATER, MOVE_MIRROR_COAT}
    },
};

static const struct TrainerMon sParty_Wade[] = {
    {
        .lvl = 50,
        .species = SPECIES_DONDOZO,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ORDER_UP, MOVE_AQUA_TAIL, MOVE_BODY_SLAM, MOVE_BODY_SLAM}
    },
};

static const struct TrainerMon sParty_Carter[] = {
    {
        .lvl = 50,
        .species = SPECIES_CORSOLA_GALAR,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_GEM, MOVE_STRENGTH_SAP, MOVE_HEX}
    },
    {
        .lvl = 50,
        .species = SPECIES_BRUXISH,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_CRUNCH}
    },
    {
        .lvl = 66,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_ICE_FANG}
    },
    {
        .lvl = 67,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_ROOST}
    },
    {
        .lvl = 68,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_ICE_FANG}
    },
    {
        .lvl = 69,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_CRUNCH, MOVE_WATERFALL, MOVE_ICE_FANG}
    },
    {
        .lvl = 70,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Jacob[] = {
    {
        .lvl = 28,
        .species = SPECIES_PIKACHU,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDER_SHOCK, MOVE_NUZZLE, MOVE_CHARM}
    },
    {
        .lvl = 29,
        .species = SPECIES_VOLTORB_HISUI,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHARGE_BEAM, MOVE_STUN_SPORE, MOVE_ENERGY_BALL, MOVE_SELF_DESTRUCT}
    },
    {
        .lvl = 30,
        .species = SPECIES_PONYTA,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_FLAME_CHARGE, MOVE_STOMP, MOVE_AGILITY}
    },
};

static const struct TrainerMon sParty_Anthony[] = {
    {
        .lvl = 29,
        .species = SPECIES_PONYTA,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_FLAME_CHARGE}
    },
    {
        .lvl = 30,
        .species = SPECIES_PACHIRISU,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NUZZLE, MOVE_SPARK, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
        .lvl = 31,
        .species = SPECIES_PAWMO,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_DIG, MOVE_ARM_THRUST, MOVE_SPARK}
    },
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
        .lvl = 30,
        .species = SPECIES_STUNFISK,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_REVENGE, MOVE_MUD_SHOT, MOVE_SUCKER_PUNCH, MOVE_THUNDER_SHOCK}
    },
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
        .lvl = 28,
        .species = SPECIES_MAGNEMITE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_GYRO_BALL}
    },
    {
        .lvl = 29,
        .species = SPECIES_LUXIO,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_ICE_FANG}
    },
    {
        .lvl = 30,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_NUZZLE, MOVE_ACROBATICS, MOVE_SPARK}
    },
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
        .lvl = 31,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_TRI_ATTACK, MOVE_PLUCK, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
        .lvl = 31,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_AGILITY, MOVE_BULLDOZE, MOVE_PLUCK}
    },
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
        .lvl = 62,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HURRICANE, MOVE_AIR_SLASH, MOVE_WATER_PULSE, MOVE_TAILWIND}
    },
    {
        .lvl = 63,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
        .lvl = 52,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAKE_DOWN, MOVE_COVET, MOVE_HONE_CLAWS, MOVE_HEADBUTT}
    },
    {
        .lvl = 53,
        .species = SPECIES_BOLTUND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ROAR, MOVE_CHARGE}
    },
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
        .lvl = 62,
        .species = SPECIES_BARBARACLE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_CHOP, MOVE_STONE_EDGE, MOVE_RAZOR_SHELL, MOVE_HONE_CLAWS}
    },
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
        .lvl = 60,
        .species = SPECIES_MANTINE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_AIR_SLASH}
    },
    {
        .lvl = 61,
        .species = SPECIES_POLIWRATH,
        .ability = ABILITY_IRON_FIST,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_JET_PUNCH, MOVE_BODY_SLAM, MOVE_STORM_THROW}
    },
};

static const struct TrainerMon sParty_Chase[] = {
    {
        .lvl = 60,
        .species = SPECIES_BASCULIN,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_WAVE_CRASH, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH}
    },
    {
        .lvl = 61,
        .species = SPECIES_KINGDRA,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SNIPE_SHOT, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
        .lvl = 59,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_NEUROFORCE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM}
    },
};

static const struct TrainerMon sParty_Donny[] = {
    {
        .lvl = 58,
        .species = SPECIES_CLAWITZER,
        .ability = ABILITY_MEGA_LAUNCHER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MUDDY_WATER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE}
    },
    {
        .lvl = 59,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_POWER_GEM}
    },
};

static const struct TrainerMon sParty_Talia[] = {
    {
        .lvl = 60,
        .species = SPECIES_BASCULEGION_F,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
        .lvl = 63,
        .species = SPECIES_OCTILLERY,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_BEAM, MOVE_SNIPE_SHOT, MOVE_AURORA_BEAM, MOVE_PSYBEAM}
    },
};

static const struct TrainerMon sParty_Allison[] = {
    {
        .lvl = 58,
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_AQUA_TAIL, MOVE_YAWN}
    },
    {
        .lvl = 59,
        .species = SPECIES_ALOMOMOLA,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_JET, MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_POUND}
    },
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
        .lvl = 66,
        .species = SPECIES_SALAMENCE,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_CRUNCH, MOVE_DRAGON_CLAW, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Perry[] = {
    {
        .lvl = 52,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EXTREME_SPEED, MOVE_ENDEAVOR}
    },
};

static const struct TrainerMon sParty_Hugh[] = {
    {
        .lvl = 48,
        .species = SPECIES_XATU,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_CONFUSE_RAY, MOVE_ESPER_WING, MOVE_TAILWIND}
    },
    {
        .lvl = 49,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_WHIRLWIND, MOVE_MAGICAL_LEAF}
    },
};

static const struct TrainerMon sParty_Phil[] = {
    {
        .lvl = 49,
        .species = SPECIES_FEAROW,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_WING_ATTACK}
    },
};

static const struct TrainerMon sParty_Jared[] = {
    {
        .lvl = 54,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_FRISK,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_WATER_PULSE, MOVE_AIR_SLASH}
    },
    {
        .lvl = 54,
        .species = SPECIES_UNFEZANT,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_PLUCK, MOVE_ROOST, MOVE_SWAGGER}
    },
    {
        .lvl = 54,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SYNTHESIS, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MAGICAL_LEAF}
    },
};

static const struct TrainerMon sParty_Humberto[] = {
    {
        .lvl = 54,
        .species = SPECIES_VIVILLON,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HURRICANE, MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_DRAINING_KISS}
    },
};

static const struct TrainerMon sParty_Presley[] = {
    {
        .lvl = 62,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SYNTHESIS, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MAGICAL_LEAF}
    },
    {
        .lvl = 63,
        .species = SPECIES_HONCHKROW,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_WING_ATTACK, MOVE_HAZE, MOVE_FOUL_PLAY}
    },
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
        .lvl = 54,
        .species = SPECIES_TOUCANNON,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_ROOST, MOVE_BODY_SLAM}
    },
    {
        .lvl = 54,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_ACUPRESSURE}
    },
};

static const struct TrainerMon sParty_Colin[] = {
    {
        .lvl = 51,
        .species = SPECIES_NOCTOWL,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_OBLIVION_WING, MOVE_ESPER_WING, MOVE_ROOST, MOVE_UPROAR}
    },
    {
        .lvl = 52,
        .species = SPECIES_KILOWATTREL,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_ROOST, MOVE_UPROAR, MOVE_DUAL_WINGBEAT}
    },
};

static const struct TrainerMon sParty_Robert1[] = {
    {
        .lvl = 48,
        .species = SPECIES_ALTARIA,
        .ability = ABILITY_COTTON_DOWN,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_DRAGON_PULSE}
    },
};

static const struct TrainerMon sParty_Benny[] = {
    {
        .lvl = 58,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL}
    },
    {
        .lvl = 58,
        .species = SPECIES_XATU,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_TAILWIND, MOVE_CONFUSE_RAY}
    },
    {
        .lvl = 58,
        .species = SPECIES_TOUCANNON,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_ROOST, MOVE_BODY_SLAM}
    },
};

static const struct TrainerMon sParty_Chester[] = {
    {
        .lvl = 46,
        .species = SPECIES_PIDGEOT,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_HARDY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_WING_ATTACK, MOVE_TRI_ATTACK, MOVE_VACUUM_WAVE}
    },
    {
        .lvl = 47,
        .species = SPECIES_HONCHKROW,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_WING_ATTACK, MOVE_SWAGGER}
    },
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
        .lvl = 66,
        .species = SPECIES_BOMBIRDIER,
        .ability = ABILITY_ROCKY_PAYLOAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_WHIRLWIND}
    },
    {
        .lvl = 67,
        .species = SPECIES_AERODACTYL,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_STONE_EDGE}
    },
};

static const struct TrainerMon sParty_Beck[] = {
    {
        .lvl = 66,
        .species = SPECIES_HAWLUCHA,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLYING_PRESS, MOVE_ROOST, MOVE_WING_ATTACK, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Yasu[] = {
    {
        .lvl = 52,
        .species = SPECIES_ACCELGOR,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Takashi[] = {
    {
        .lvl = 51,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BUG_BITE, MOVE_SLASH, MOVE_METAL_CLAW}
    },
    {
        .lvl = 52,
        .species = SPECIES_WEEZING,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_TOXIC}
    },
};

static const struct TrainerMon sParty_Dianne[] = {
    {
        .lvl = 72,
        .species = SPECIES_MAGMORTAR,
        .ability = ABILITY_MAGMA_ARMOR,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_WISE_GLASSES,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_BLAST, MOVE_SCORCHING_SANDS, MOVE_THUNDERBOLT, MOVE_PSYCHIC}
    },
    {
        .lvl = 72,
        .species = SPECIES_ELECTIVIRE,
        .ability = ABILITY_POWER_FIST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ICE_PUNCH, MOVE_PLASMA_FISTS, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Jani[] = {
    {
        .lvl = 53,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP}
    },
};

static const struct TrainerMon sParty_Lao1[] = {
    {
        .lvl = 37,
        .species = SPECIES_WEEZING,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_HAZE, MOVE_HEAT_WAVE, MOVE_POISON_GAS}
    },
    {
        .lvl = 38,
        .species = SPECIES_GRAFAIAI,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_U_TURN, MOVE_POISON_JAB, MOVE_FLATTER, MOVE_SLASH}
    },
    {
        .lvl = 39,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_JAB, MOVE_PIN_MISSILE, MOVE_BRINE, MOVE_FELL_STINGER}
    },
};

static const struct TrainerMon sParty_Lung[] = {
    {
        .lvl = 38,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_METAL_CLAW, MOVE_BUG_BITE, MOVE_AERIAL_ACE}
    },
    {
        .lvl = 38,
        .species = SPECIES_DIGGERSBY,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAKE_DOWN, MOVE_BULLDOZE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK}
    },
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
        .lvl = 22,
        .species = SPECIES_MEDITITE,
        .ability = ABILITY_PURE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_UP_PUNCH, MOVE_BULLET_PUNCH, MOVE_QUICK_GUARD, MOVE_PSYBEAM}
    },
};

static const struct TrainerMon sParty_Laura[] = {
    {
        .lvl = 22,
        .species = SPECIES_SCRAGGY,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEADBUTT, MOVE_LOW_KICK, MOVE_PAYBACK}
    },
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
        .lvl = 40,
        .species = SPECIES_ORICORIO_SENSU,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_REVELATION_DANCE, MOVE_AIR_SLASH, MOVE_ROOST, MOVE_FEATHER_DANCE}
    },
    {
        .lvl = 41,
        .species = SPECIES_POLIWRATH,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_JET_PUNCH, MOVE_STOMPING_TANTRUM, MOVE_STORM_THROW, MOVE_BODY_SLAM}
    },
};

static const struct TrainerMon sParty_Cora[] = {
    {
        .lvl = 50,
        .species = SPECIES_TOXICROAK,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT, MOVE_SWAGGER, MOVE_TAUNT}
    },
};

static const struct TrainerMon sParty_Paula[] = {
    {
        .lvl = 50,
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FORCE_PALM, MOVE_LEECH_SEED, MOVE_SPORE, MOVE_SEED_BOMB}
    },
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
        .lvl = 39,
        .species = SPECIES_SCOVILLAIN,
        .ability = ABILITY_MOODY,
        .nature = NATURE_NAIVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_ZEN_HEADBUTT, MOVE_CRUNCH, MOVE_BULLET_SEED}
    },
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
        .lvl = 52,
        .species = SPECIES_FEAROW,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_RUN, MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_WING_ATTACK}
    },
    {
        .lvl = 53,
        .species = SPECIES_FROSLASS,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILL_O_WISP, MOVE_HEX, MOVE_DRAINING_KISS, MOVE_FREEZE_DRY}
    },
};

static const struct TrainerMon sParty_Angelica[] = {
    {
        .lvl = 52,
        .species = SPECIES_CASTFORM,
        .ability = ABILITY_FORECAST,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_BLIZZARD}
    },
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
        .lvl = 44,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PECK, MOVE_WATERFALL, MOVE_AQUA_JET}
    },
    {
        .lvl = 45,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG}
    },
};

static const struct TrainerMon sParty_Imani[] = {
    {
        .lvl = 50,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_BOUNCE}
    },
};

static const struct TrainerMon sParty_Kyla[] = {
    {
        .lvl = 46,
        .species = SPECIES_LAPRAS,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_RECOVER, MOVE_BRINE}
    },
};

static const struct TrainerMon sParty_Denise[] = {
    {
        .lvl = 49,
        .species = SPECIES_QWILFISH,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_TAIL, MOVE_POISON_JAB, MOVE_FELL_STINGER, MOVE_TOXIC_SPIKES}
    },
    {
        .lvl = 50,
        .species = SPECIES_OVERQWIL,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_BARB_BARRAGE, MOVE_REVENGE, MOVE_FELL_STINGER}
    },
};

static const struct TrainerMon sParty_Beth[] = {
    {
        .lvl = 49,
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_RAZOR_SHELL, MOVE_SHELL_SMASH}
    },
};

static const struct TrainerMon sParty_Tara[] = {
    {
        .lvl = 49,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
        .lvl = 50,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_BOUNCE}
    },
};

static const struct TrainerMon sParty_Missy[] = {
    {
        .lvl = 50,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_QUICK_ATTACK, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_Alice[] = {
    {
        .lvl = 48,
        .species = SPECIES_SWANNA,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAILWIND, MOVE_ROOST, MOVE_AIR_SLASH, MOVE_FEATHER_DANCE}
    },
    {
        .lvl = 49,
        .species = SPECIES_OCTILLERY,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SNIPE_SHOT, MOVE_ICE_BEAM}
    },
    {
        .lvl = 50,
        .species = SPECIES_GOLISOPOD,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_BUG_BITE}
    },
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
        .lvl = 59,
        .species = SPECIES_WAILORD,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_HEAVY_SLAM, MOVE_NOBLE_ROAR, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_Grace[] = {
    {
        .lvl = 63,
        .species = SPECIES_GOREBYSS,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_LEECH_LIFE}
    },
};

static const struct TrainerMon sParty_Tanya[] = {
    {
        .lvl = 62,
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_PROPELLER_TAIL,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_THROAT_CHOP}
    },
};

static const struct TrainerMon sParty_Sharon[] = {
    {
        .lvl = 58,
        .species = SPECIES_DONDOZO,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAVY_SLAM, MOVE_AQUA_TAIL, MOVE_BODY_SLAM, MOVE_ORDER_UP}
    },
};

static const struct TrainerMon sParty_Nikki[] = {
    {
        .lvl = 62,
        .species = SPECIES_BRUXISH,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
    {
        .lvl = 63,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_SPARKLING_ARIA, MOVE_DRAGON_BREATH, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
        .lvl = 60,
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SHELL_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_RAZOR_SHELL, MOVE_SHELL_SMASH}
    },
    {
        .lvl = 61,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_SOUL_HEART,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_LOVELY_KISS, MOVE_HYDRO_PUMP, MOVE_MOONLIGHT}
    },
};

static const struct TrainerMon sParty_Susie[] = {
    {
        .lvl = 64,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Kara[] = {
    {
        .lvl = 61,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ENERGY_BALL, MOVE_HYDRO_PUMP, MOVE_MEGA_DRAIN, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Dana[] = {
    {
        .lvl = 67,
        .species = SPECIES_ARAQUANID,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Sienna[] = {
    {
        .lvl = 60,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LOVELY_KISS, MOVE_HYDRO_PUMP, MOVE_DAZZLING_GLEAM, MOVE_MOONLIGHT}
    },
    {
        .lvl = 61,
        .species = SPECIES_GOREBYSS,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_LEECH_LIFE}
    },
};

static const struct TrainerMon sParty_Debra[] = {
    {
        .lvl = 69,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_HORN_ATTACK}
    },
};

static const struct TrainerMon sParty_Linda[] = {
    {
        .lvl = 67,
        .species = SPECIES_DURANT,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_CRUNCH, MOVE_DIG}
    },
    {
        .lvl = 68,
        .species = SPECIES_KINGDRA,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_SNIPE_SHOT, MOVE_HYDRO_PUMP}
    },
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
        .lvl = 65,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LOVELY_KISS, MOVE_HYDRO_PUMP, MOVE_DAZZLING_GLEAM, MOVE_MOONLIGHT}
    },
    {
        .lvl = 66,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_SOUL_HEART,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LOVELY_KISS, MOVE_HYDRO_PUMP, MOVE_DAZZLING_GLEAM, MOVE_MOONLIGHT}
    },
};

static const struct TrainerMon sParty_Carlee[] = {
    {
        .lvl = 62,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_AQUA_JET, MOVE_HORN_ATTACK}
    },
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
        .lvl = 45,
        .species = SPECIES_MARACTUS,
        .ability = ABILITY_GRASSY_SURGE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_COTTON_SPORE, MOVE_SYNTHESIS, MOVE_GROWTH}
    },
    {
        .lvl = 45,
        .species = SPECIES_LEAVANNY,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_SLASH}
    },
};

static const struct TrainerMon sParty_Becky[] = {
    {
        .lvl = 45,
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_BRICK_BREAK, MOVE_CRUSH_CLAW, MOVE_FURY_CUTTER}
    },
    {
        .lvl = 46,
        .species = SPECIES_RABSCA,
        .ability = ABILITY_MOTOR_DRIVE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_EXTRASENSORY, MOVE_SPEED_SWAP}
    },
};

static const struct TrainerMon sParty_Carol[] = {
    {
        .lvl = 36,
        .species = SPECIES_CHATOT,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_AIR_SLASH, MOVE_TAUNT, MOVE_CHATTER}
    },
    {
        .lvl = 37,
        .species = SPECIES_TOXTRICITY,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_NOBLE_ROAR, MOVE_ACID_SPRAY, MOVE_SWAGGER}
    },
};

static const struct TrainerMon sParty_Nancy[] = {
    {
        .lvl = 38,
        .species = SPECIES_LIEPARD,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, MOVE_ASSURANCE, MOVE_FURY_SWIPES}
    },
    {
        .lvl = 39,
        .species = SPECIES_ALTARIA,
        .ability = ABILITY_COTTON_DOWN,
        .nature = NATURE_NAIVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_DISARMING_VOICE, MOVE_COTTON_GUARD, MOVE_PLUCK}
    },
};

static const struct TrainerMon sParty_Martha[] = {
    {
        .lvl = 38,
        .species = SPECIES_GOGOAT,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_SYNTHESIS, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 38,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_COSMIC_POWER, MOVE_MOONLIGHT, MOVE_STORED_POWER}
    },
};

static const struct TrainerMon sParty_Diana1[] = {
    {
        .lvl = 42,
        .species = SPECIES_CHERRIM,
        .ability = ABILITY_FLOWER_GIFT,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEECH_SEED, MOVE_MAGICAL_LEAF, MOVE_TAKE_DOWN, MOVE_MORNING_SUN}
    },
    {
        .lvl = 43,
        .species = SPECIES_JUMPLUFF,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_NAUGHTY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_TRI_ATTACK, MOVE_GIGA_DRAIN, MOVE_BULLET_SEED}
    },
    {
        .lvl = 44,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED}
    },
};

static const struct TrainerMon sParty_Cedric[] = {
    {
        .lvl = 58,
        .species = SPECIES_ESPATHRA,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_LUMINA_CRASH, MOVE_UPROAR}
    },
};

static const struct TrainerMon sParty_Irene[] = {
    {
        .lvl = 34,
        .species = SPECIES_SCYTHER,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DUAL_WINGBEAT, MOVE_WING_ATTACK, MOVE_QUICK_ATTACK, MOVE_FURY_ATTACK}
    },
    {
        .lvl = 34,
        .species = SPECIES_SIGILYPH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYBEAM, MOVE_AIR_CUTTER, MOVE_HYPNOSIS}
    },
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
        .lvl = 25,
        .species = SPECIES_ILLUMISE,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAINING_KISS, MOVE_STRUGGLE_BUG, MOVE_CHARM, MOVE_MOONLIGHT}
    },
    {
        .lvl = 25,
        .species = SPECIES_VOLBEAT,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_BUG_BITE, MOVE_CONFUSE_RAY, MOVE_MOONLIGHT}
    },
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
        .lvl = 11,
        .species = SPECIES_SEEDOT,
        .ability = ABILITY_EARLY_BIRD,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_FRIEND_BALL,
        .moves = {MOVE_TACKLE, MOVE_ABSORB, MOVE_ASTONISH}
    },
    {
        .lvl = 11,
        .species = SPECIES_LOTAD,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_FRIEND_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_ABSORB, MOVE_ASTONISH}
    },
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
        .lvl = 52,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_INFILTRATOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WING_ATTACK, MOVE_PSYCHIC_FANGS, MOVE_HAZE, MOVE_CROSS_POISON}
    },
    {
        .lvl = 52,
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_POISON_JAB, MOVE_TOXIC}
    },
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
        .lvl = 18,
        .species = SPECIES_CRABRAWLER,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SMASH, MOVE_BUBBLE_BEAM}
    },
    {
        .lvl = 19,
        .species = SPECIES_POLIWHIRL,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_MUD_SHOT, MOVE_BUBBLE_BEAM}
    },
};

static const struct TrainerMon sParty_Edmond[] = {
    {
        .lvl = 19,
        .species = SPECIES_CARVANHA,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_POISON_FANG, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
        .lvl = 59,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HURRICANE, MOVE_ROOST, MOVE_WATER_PULSE, MOVE_TAILWIND}
    },
    {
        .lvl = 60,
        .species = SPECIES_MACHAMP,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_CHOP, MOVE_STRENGTH, MOVE_KNOCK_OFF, MOVE_MACH_PUNCH}
    },
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .lvl = 11,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 11,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 11,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
        .lvl = 52,
        .species = SPECIES_WHISCASH,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT}
    },
    {
        .lvl = 53,
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PARABOLIC_CHARGE, MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE}
    },
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
        .lvl = 46,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(126, 0, 0, 252, 4, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LAVA_PLUME, MOVE_SLACK_OFF, MOVE_EARTH_POWER, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Annika[] = {
    {
        .lvl = 69,
        .species = SPECIES_BRUXISH,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_AQUA_TAIL, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
    {
        .lvl = 69,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
        .lvl = 48,
        .species = SPECIES_ABSOL,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_NIGHT_SLASH, MOVE_KNOCK_OFF, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_Jonas[] = {
    {
        .lvl = 56,
        .species = SPECIES_ACCELGOR,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Kayley[] = {
    {
        .lvl = 52,
        .species = SPECIES_QUAGSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_AQUA_TAIL, MOVE_HAZE}
    },
};

static const struct TrainerMon sParty_Auron[] = {
    {
        .lvl = 62,
        .species = SPECIES_BELLIBOLT,
        .ability = ABILITY_ELECTROMORPHOSIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_MUD_SHOT, MOVE_SLACK_OFF, MOVE_WEATHER_BALL}
    },
    {
        .lvl = 63,
        .species = SPECIES_LUXRAY,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_JAW_LOCK, MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG}
    },
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
        .lvl = 68,
        .species = SPECIES_ARAQUANID,
        .ability = ABILITY_WATER_BUBBLE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEECH_LIFE, MOVE_LIQUIDATION, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
    {
        .lvl = 69,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP}
    },
};

static const struct TrainerMon sParty_Marley[] = {
    {
        .lvl = 69,
        .species = SPECIES_BEWEAR,
        .ability = ABILITY_FLUFFY,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_BRUTAL_SWING, MOVE_PLAY_ROUGH, MOVE_PAIN_SPLIT}
    },
};

static const struct TrainerMon sParty_Reyna[] = {
    {
        .lvl = 65,
        .species = SPECIES_CONKELDURR,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STONE_EDGE, MOVE_ROCK_SLIDE, MOVE_SLAM, MOVE_LOW_KICK}
    },
    {
        .lvl = 66,
        .species = SPECIES_POLIWRATH,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_JET_PUNCH, MOVE_BODY_SLAM, MOVE_STORM_THROW}
    },
};

static const struct TrainerMon sParty_Hudson[] = {
    {
        .lvl = 70,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Conor[] = {
    {
        .lvl = 67,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SYNTHESIS, MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MAGICAL_LEAF}
    },
    {
        .lvl = 68,
        .species = SPECIES_COPPERAJAH,
        .ability = ABILITY_HEAVY_METAL,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STRENGTH}
    },
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
        .lvl = 26,
        .species = SPECIES_OINKOLOGNE_F,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEADBUTT, MOVE_DISARMING_VOICE, MOVE_DIG}
    },
    {
        .lvl = 27,
        .species = SPECIES_KOMALA,
        .ability = ABILITY_COMATOSE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_YAWN, MOVE_SLAM, MOVE_RAPID_SPIN}
    },
};

static const struct TrainerMon sParty_Hector[] = {
    {
        .lvl = 41,
        .species = SPECIES_SEVIPER,
        .ability = ABILITY_MERCILESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_GLARE, MOVE_HAZE}
    },
    {
        .lvl = 41,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_TabithaMeteorFalls[] = {
    {
        .lvl = 42,
        .species = SPECIES_ARCANINE_HISUI,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = IV_SPREAD_HP_GRASS,
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_PASSHO_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 43,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHARCOAL,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_ENERGY_BALL, MOVE_HEAT_WAVE, MOVE_AURA_SPHERE}
    },
    {
        .lvl = 44,
        .species = SPECIES_OKIDOGI,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(240, 252, 0, 0, 0, 16),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
        .lvl = 74,
        .species = SPECIES_GARCHOMP,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 200, 56),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_DRAGON_TAIL}
    },
    {
        .lvl = 75,
        .species = SPECIES_SNEASLER,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_CHOICE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CLOSE_COMBAT, MOVE_DIRE_CLAW, MOVE_THROAT_CHOP, MOVE_U_TURN}
    },
    {
        .lvl = 74,
        .species = SPECIES_PRIMARINA,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(80, 0, 0, 252, 0, 176),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_SCALD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS}
    },
    {
        .lvl = 74,
        .species = SPECIES_MANDIBUZZ,
        .ability = ABILITY_OVERCOAT,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 164, 0, 0, 96),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_DEFOG, MOVE_ROOST, MOVE_U_TURN}
    },
    {
        .lvl = 75,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .iv = IV_SPREAD_HP_FIRE,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 76,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_GALLADITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SACRED_SWORD, MOVE_PSYCHO_CUT, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
        .lvl = 5,
        .species = SPECIES_TREECKO,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POUND},
    },
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
        .lvl = 31,
        .species = SPECIES_CORVISQUIRE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAUNT, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_U_TURN}
    },
    {
        .lvl = 31,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_CALM_MIND}
    },
    {
        .lvl = 31,
        .species = SPECIES_CERULEDGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_PASSHO_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAME_CHARGE, MOVE_SHADOW_SNEAK, MOVE_SHADOW_CLAW, MOVE_BULK_UP}
    },
    {
        .lvl = 31,
        .species = SPECIES_MAREANIE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_VENOSHOCK, MOVE_RECOVER, MOVE_WATER_PULSE}
    },
    {
        .lvl = 31,
        .species = SPECIES_GROVYLE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_NAUGHTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_ROCK_TOMB, MOVE_GIGA_DRAIN}
    },
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
        .lvl = 55,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 55,
        .species = SPECIES_BAXCALIBUR,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LOADED_DICE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_CLAW, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
        .lvl = 55,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_SOFT_BOILED, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 55,
        .species = SPECIES_CERULEDGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_BITTER_BLADE, MOVE_IRON_HEAD}
    },
    {
        .lvl = 55,
        .species = SPECIES_TOXAPEX,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_BLACK_SLUDGE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER}
    },
    {
        .lvl = 57,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SCEPTILITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
        .lvl = 5,
        .species = SPECIES_TORCHIC,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH}
    },
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
        .lvl = 31,
        .species = SPECIES_CORVISQUIRE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAUNT, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_U_TURN}
    },
    {
        .lvl = 31,
        .species = SPECIES_GABITE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAINING_KISS, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_CALM_MIND}
    },
    {
        .lvl = 31,
        .species = SPECIES_TOGETIC,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAINING_KISS, MOVE_AIR_CUTTER, MOVE_ROOST, MOVE_LIGHT_SCREEN}
    },
    {
        .lvl = 31,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_NEUROFORCE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_BRINE}
    },
    {
        .lvl = 31,
        .species = SPECIES_COMBUSKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_PUNCH, MOVE_BULK_UP, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK}
    },
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
        .lvl = 55,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 55,
        .species = SPECIES_GARCHOMP,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_ROSELI_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_FIRE_FANG}
    },
    {
        .lvl = 55,
        .species = SPECIES_TOGEKISS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_ROOST}
    },
    {
        .lvl = 55,
        .species = SPECIES_AMOONGUSS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 36, 0),
        .heldItem = ITEM_BLACK_SLUDGE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_FOUL_PLAY}
    },
    {
        .lvl = 55,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER}
    },
    {
        .lvl = 57,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_BLAZIKENITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BLAZE_KICK, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT}
    },
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
        .lvl = 5,
        .species = SPECIES_MUDKIP,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
        .lvl = 31,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_HONEY_GATHER,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_COBA_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POLLEN_PUFF, MOVE_STICKY_WEB, MOVE_DRAINING_KISS, MOVE_STUN_SPORE}
    },
    {
        .lvl = 31,
        .species = SPECIES_CORVISQUIRE,
        .ability = ABILITY_UNNERVE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAUNT, MOVE_DUAL_WINGBEAT, MOVE_ROOST, MOVE_U_TURN}
    },
    {
        .lvl = 31,
        .species = SPECIES_FERROSEED,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_RELAXED,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_IRON_HEAD, MOVE_SPIKES, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
    {
        .lvl = 31,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .heldItem = ITEM_PASSHO_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 31,
        .species = SPECIES_MARSHTOMP,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_BULLDOZE, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
        .lvl = 55,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 55,
        .species = SPECIES_KOMMO_O,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_ROAR}
    },
    {
        .lvl = 55,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .heldItem = ITEM_COVERT_CLOAK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_ROOST, MOVE_STICKY_WEB}
    },
    {
        .lvl = 55,
        .species = SPECIES_FERROTHORN,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_LEECH_SEED, MOVE_BODY_PRESS, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 55,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_ENERGY_BALL, MOVE_FIRE_BLAST}
    },
    {
        .lvl = 57,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_STONE_EDGE}
    },
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
{
        .lvl = 5,
        .species = SPECIES_TREECKO,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
        .lvl = 31,
        .species = SPECIES_GLIGAR,
        .ability = ABILITY_HYPER_CUTTER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_ROOST}
    },
    {
        .lvl = 31,
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TOXIC_SPIKES, MOVE_BULLDOZE, MOVE_HAZE, MOVE_POISON_JAB}
    },
    {
        .lvl = 31,
        .species = SPECIES_METANG,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_BULLET_PUNCH, MOVE_BULLDOZE, MOVE_BRICK_BREAK}
    },
    {
        .lvl = 31,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 31,
        .species = SPECIES_GROVYLE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_NAUGHTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_ROCK_TOMB, MOVE_GIGA_DRAIN}
    },
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
        .lvl = 55,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 55,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 55,
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 176, 0, 84, 0),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_STEALTH_ROCK, MOVE_RECOVER}
    },
    {
        .lvl = 55,
        .species = SPECIES_GENGAR,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_THUNDER_WAVE}
    },
    {
        .lvl = 55,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(200, 252, 0, 0, 0, 56),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 57,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SCEPTILITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
        .lvl = 5,
        .species = SPECIES_TORCHIC,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH}
    },
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
        .lvl = 31,
        .species = SPECIES_GLIGAR,
        .ability = ABILITY_HYPER_CUTTER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_ROOST}
    },
    {
        .lvl = 31,
        .species = SPECIES_DRAGONAIR,
        .ability = ABILITY_MARVEL_SCALE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_TAIL, MOVE_THUNDER_WAVE, MOVE_IRON_HEAD, MOVE_HAZE}
    },
    {
        .lvl = 31,
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC_SPIKES, MOVE_VENOSHOCK, MOVE_EXTRASENSORY}
    },
    {
        .lvl = 31,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_WACAN_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_DRAINING_KISS, MOVE_WATER_PULSE, MOVE_CALM_MIND}
    },
    {
        .lvl = 31,
        .species = SPECIES_COMBUSKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_PUNCH, MOVE_BULK_UP, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK}
    },
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
        .lvl = 55,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 55,
        .species = SPECIES_DRAGONITE,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_ROOST}
    },
    {
        .lvl = 55,
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_RECOVER}
    },
    {
        .lvl = 55,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_FIRE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_DAZZLING_GLEAM}
    },
    {
        .lvl = 55,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_MOONBLAST, MOVE_ICE_BEAM}
    },
    {
        .lvl = 57,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_BLAZIKENITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BLAZE_KICK, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT}
    },
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
        .lvl = 5,
        .species = SPECIES_MUDKIP,
        .ability = ABILITY_TORRENT,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
        .lvl = 31,
        .species = SPECIES_GLIGAR,
        .ability = ABILITY_HYPER_CUTTER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_ROOST}
    },
    {
        .lvl = 31,
        .species = SPECIES_MIMIKYU,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DRAIN_PUNCH, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW}
    },
    {
        .lvl = 31,
        .species = SPECIES_TANGROWTH,
        .ability = ABILITY_SELF_SUFFICIENT,
        .nature = NATURE_RELAXED,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_OCCA_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_GIGA_DRAIN, MOVE_STOMPING_TANTRUM, MOVE_STUN_SPORE}
    },
    {
        .lvl = 31,
        .species = SPECIES_PONYTA,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_EVIOLITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAME_CHARGE, MOVE_LOW_KICK, MOVE_SPARK, MOVE_SMART_STRIKE}
    },
    {
        .lvl = 31,
        .species = SPECIES_MARSHTOMP,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_ICE_PUNCH, MOVE_BULLDOZE, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
        .lvl = 55,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 55,
        .species = SPECIES_GOODRA_HISUI,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE}
    },
    {
        .lvl = 55,
        .species = SPECIES_MIMIKYU,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW}
    },
    {
        .lvl = 55,
        .species = SPECIES_TANGROWTH,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_SASSY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 12, 0, 252, 0),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 55,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH}
    },
    {
        .lvl = 57,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_STONE_EDGE}
    },
};

static const struct TrainerMon sParty_Isaac1[] = {
    {
        .lvl = 28,
        .species = SPECIES_BIBAREL,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_TAUNT, MOVE_HEADBUTT}
    },
    {
        .lvl = 28,
        .species = SPECIES_WATCHOG,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_LOW_KICK, MOVE_CONFUSE_RAY}
    },
    {
        .lvl = 29,
        .species = SPECIES_GUMSHOOS,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUPER_FANG, MOVE_FIRE_FANG, MOVE_ICE_FANG, MOVE_THUNDER_FANG}
    },
    {
        .lvl = 29,
        .species = SPECIES_GREEDENT,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_STUFF_CHEEKS, MOVE_BITE}
    },
    {
        .lvl = 30,
        .species = SPECIES_FURRET,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLAM, MOVE_COIL, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 30,
        .species = SPECIES_MAUSHOLD,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_BULLET_SEED, MOVE_SUPER_FANG, MOVE_ENCORE}
    },
};

static const struct TrainerMon sParty_Davis[] = {
    {
        .lvl = 47,
        .species = SPECIES_PINSIR,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SUBMISSION, MOVE_STRENGTH, MOVE_X_SCISSOR, MOVE_STORM_THROW}
    },
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
        .lvl = 72,
        .species = SPECIES_EXCADRILL,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_IRON_HEAD, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 72,
        .species = SPECIES_ARCANINE_HISUI,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_THUNDER_FANG}
    },
};

static const struct TrainerMon sParty_Isaac2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Isaac3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Isaac5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
        .lvl = 29,
        .species = SPECIES_PLUSLE,
        .ability = ABILITY_TRANSISTOR,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_NUZZLE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 29,
        .species = SPECIES_MINUN,
        .ability = ABILITY_TRANSISTOR,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_NUZZLE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 29,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACROBATICS, MOVE_QUICK_ATTACK, MOVE_NUZZLE, MOVE_THUNDER_SHOCK}
    },
    {
        .lvl = 30,
        .species = SPECIES_DEDENNE,
        .ability = ABILITY_ELECTRIC_SURGE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_VOLT_SWITCH, MOVE_PARABOLIC_CHARGE, MOVE_DISARMING_VOICE, MOVE_NUZZLE}
    },
    {
        .lvl = 30,
        .species = SPECIES_MORPEKO,
        .ability = ABILITY_HUNGER_SWITCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_BITE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 30,
        .species = SPECIES_PIKACHU_HOENN,
        .ability = ABILITY_STATIC,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_LIGHT_BALL,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHARM, MOVE_NUZZLE, MOVE_SPARK, MOVE_IRON_TAIL}
    },
};

static const struct TrainerMon sParty_Halle[] = {
    {
        .lvl = 72,
        .species = SPECIES_MUK_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_FANG, MOVE_DRAIN_PUNCH, MOVE_PROTECT}
    },
    {
        .lvl = 72,
        .species = SPECIES_LUCARIO,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLASH_CANNON, MOVE_AURA_SPHERE, MOVE_VACUUM_WAVE, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_Garrison[] = {
    {
        .lvl = 53,
        .species = SPECIES_DONPHAN,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}
    },
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
        .lvl = 52,
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MACH_PUNCH, MOVE_FORCE_PALM, MOVE_SPORE, MOVE_SEED_BOMB}
    },
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
        .lvl = 50,
        .species = SPECIES_SWOOBAT,
        .ability = ABILITY_SIMPLE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_CALM_MIND, MOVE_PSYCHIC}
    },
    {
        .lvl = 51,
        .species = SPECIES_JUMPLUFF,
        .ability = ABILITY_AERILATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_GIGA_DRAIN, MOVE_COTTON_SPORE, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 52,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_AURORA_BEAM, MOVE_SWAGGER, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
        .lvl = 58,
        .species = SPECIES_CACTURNE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_HARDY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH, MOVE_COTTON_SPORE, MOVE_PAYBACK}
    },
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
        .lvl = 46,
        .species = SPECIES_GOGOAT,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_SYNTHESIS, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 47,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGA_DRAIN, MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_POISON_STING}
    },
};

static const struct TrainerMon sParty_Jenna[] = {
    {
        .lvl = 49,
        .species = SPECIES_SAWSBUCK_SPRING,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HORN_LEECH, MOVE_MEGAHORN, MOVE_LEECH_SEED}
    },
    {
        .lvl = 49,
        .species = SPECIES_BOLTUND,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_CRUNCH, MOVE_ROAR, MOVE_BITE}
    },
    {
        .lvl = 49,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_ACUPRESSURE}
    },
};

static const struct TrainerMon sParty_Sophia[] = {
    {
        .lvl = 58,
        .species = SPECIES_ORICORIO_POM_POM,
        .ability = ABILITY_DANCER,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_REVELATION_DANCE, MOVE_ROOST}
    },
    {
        .lvl = 58,
        .species = SPECIES_MUDSDALE,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_SLACK_OFF, MOVE_MEGA_KICK}
    },
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Julio[] = {
    {
        .lvl = 44,
        .species = SPECIES_CYCLIZAR,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHIFT_GEAR, MOVE_DRAGON_CLAW, MOVE_U_TURN, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
        .lvl = 64,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_POWER_GEM}
    },
    {
        .lvl = 65,
        .species = SPECIES_CLOYSTER,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICICLE_CRASH, MOVE_ICICLE_SPEAR, MOVE_RAZOR_SHELL, MOVE_ICE_SHARD}
    },
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
        .lvl = 57,
        .species = SPECIES_ARIADOS,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_POISON, MOVE_PSYCHIC_FANGS, MOVE_FELL_STINGER, MOVE_SHADOW_SNEAK}
    },
    {
        .lvl = 58,
        .species = SPECIES_WAILORD,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYPER_VOICE, MOVE_HEAVY_SLAM, MOVE_NOBLE_ROAR}
    },
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
        .lvl = 58,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_THUNDER_FANG}
    },
    {
        .lvl = 58,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_Marc[] = {
    {
        .lvl = 13,
        .species = SPECIES_BINACLE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH, MOVE_WITHDRAW, MOVE_FURY_CUTTER}
    },
    {
        .lvl = 14,
        .species = SPECIES_ROCKRUFF,
        .ability = ABILITY_VITAL_SPIRIT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_THROW, MOVE_LEER}
    },
};

static const struct TrainerMon sParty_Brenden[] = {
    {
        .lvl = 22,
        .species = SPECIES_FARFETCHD_GALAR,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FURY_CUTTER, MOVE_DUAL_WINGBEAT, MOVE_STEEL_WING, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Lilith[] = {
    {
        .lvl = 22,
        .species = SPECIES_MACHOP,
        .ability = ABILITY_GUTS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_LOW_SWEEP, MOVE_ROCK_TOMB}
    },
};

static const struct TrainerMon sParty_Cristian[] = {
    {
        .lvl = 22,
        .species = SPECIES_MAKUHITA,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FAKE_OUT, MOVE_FORCE_PALM, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
        .lvl = 65,
        .species = SPECIES_EXEGGUTOR,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYSHOCK, MOVE_SLUDGE_BOMB, MOVE_ANCIENT_POWER}
    },
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
        .lvl = 59,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Athena[] = {
    {
        .lvl = 61,
        .species = SPECIES_LINOONE_GALAR,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEADBUTT, MOVE_NIGHT_SLASH, MOVE_TAUNT, MOVE_COUNTER}
    },
    {
        .lvl = 62,
        .species = SPECIES_HERACROSS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MEGAHORN, MOVE_CLOSE_COMBAT, MOVE_THROAT_CHOP, MOVE_AERIAL_ACE}
    },
};

static const struct TrainerMon sParty_Harrison[] = {
    {
        .lvl = 58,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_SCREECH}
    },
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
        .lvl = 43,
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_FLASH_FIRE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_LASH, MOVE_LICK, MOVE_SLASH, MOVE_HONE_CLAWS}
    },
};

static const struct TrainerMon sParty_Clarence[] = {
    {
        .lvl = 58,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_TAIL, MOVE_WATERFALL, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
        .lvl = 65,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON}
    },
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
        .lvl = 65,
        .species = SPECIES_SLOWBRO,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_Clifford[] = {
    {
        .lvl = 65,
        .species = SPECIES_GIRAFARIG,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG}
    },
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
        .lvl = 65,
        .species = SPECIES_WYRDEER,
        .ability = ABILITY_FUR_COAT,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HORN_LEECH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_WILD_CHARGE}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
        .lvl = 63,
        .species = SPECIES_DONPHAN,
        .ability = ABILITY_STURDY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
    {
        .lvl = 63,
        .species = SPECIES_ABSOL,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONLIGHT, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
        .lvl = 64,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_EXTRASENSORY, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
        .lvl = 65,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLAZE_KICK, MOVE_BULK_UP, MOVE_DOUBLE_KICK, MOVE_BRAVE_BIRD}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
        .lvl = 65,
        .species = SPECIES_MUK_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_DISABLE, MOVE_TOXIC}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
        .lvl = 65,
        .species = SPECIES_LOKIX,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_LUNGE, MOVE_LOW_KICK, MOVE_BOUNCE}
    },
};

static const struct TrainerMon sParty_Macey[] = {
    {
        .lvl = 65,
        .species = SPECIES_XATU,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_GIGA_DRAIN, MOVE_SHADOW_BALL}
    },
};

static const struct TrainerMon sParty_BrendanMeteorFallsTreecko[] = {
    {
        .lvl = 42,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_BLAZE_KICK, MOVE_BRICK_BREAK}
    },
    {
        .lvl = 42,
        .species = SPECIES_TOGEKISS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_NASTY_PLOT, MOVE_MOONBLAST, MOVE_FLAMETHROWER}
    },
    {
        .lvl = 42,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_NEUROFORCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 4, 0, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_BrendanMeteorFallsMudkip[] = {
    {
        .lvl = 42,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALE_SHOT, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_DRAIN_PUNCH}
    },
    {
        .lvl = 42,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 4, 0, 0, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_MOONLIGHT, MOVE_FLAMETHROWER}
    },
    {
        .lvl = 42,
        .species = SPECIES_TOXAPEX,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 152, 0, 108, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_TOXIC, MOVE_HAZE}
    },
};

static const struct TrainerMon sParty_Paxton[] = {
    {
        .lvl = 68,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BOOMBURST, MOVE_AIR_SLASH}
    },
    {
        .lvl = 69,
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MACH_PUNCH, MOVE_FORCE_PALM, MOVE_HEADBUTT, MOVE_SPORE}
    },
};

static const struct TrainerMon sParty_Isabella[] = {
    {
        .lvl = 61,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_POWER_GEM}
    },
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
        .lvl = 50,
        .species = SPECIES_GLALIE,
        .ability = ABILITY_MOODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FREEZE_DRY, MOVE_BITE, MOVE_ICE_SHARD, MOVE_PROTECT}
    },
    {
        .lvl = 51,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WING_ATTACK, MOVE_PSYCHIC_FANGS, MOVE_HAZE, MOVE_CROSS_POISON}
    },
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
        .lvl = 45,
        .species = SPECIES_GRIMMSNARL,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LIGHT_CLAY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_THUNDER_WAVE, MOVE_SPIRIT_BREAK}
    },
    {
        .lvl = 45,
        .species = SPECIES_ARCANINE_HISUI,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_STEALTH_ROCK}
    },
    {
        .lvl = 45,
        .species = SPECIES_MAGMORTAR,
        .ability = ABILITY_MAGMA_ARMOR,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 45,
        .species = SPECIES_OKIDOGI,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(240, 252, 0, 0, 0, 16),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_GUNK_SHOT, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 46,
        .species = SPECIES_STEELIX,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_FANG, MOVE_EARTHQUAKE, MOVE_COIL, MOVE_IRON_HEAD}
    },
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
        .lvl = 66,
        .species = SPECIES_EXCADRILL,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_METAL_CLAW}
    },
    {
        .lvl = 67,
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_SOUNDPROOF,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
};

static const struct TrainerMon sParty_BrendanMeteorFallsTorchic[] = {
    {
        .lvl = 42,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 42,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_HONEY_GATHER,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POLLEN_PUFF, MOVE_STICKY_WEB, MOVE_DRAINING_KISS, MOVE_PROTECT}
    },
    {
        .lvl = 42,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),    
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .heldItem = ITEM_WEAKNESS_POLICY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_MYSTICAL_FIRE, MOVE_ENDURE, MOVE_MYSTICAL_FIRE}
    },
};

static const struct TrainerMon sParty_MayMeteorFallsMudkip[] = {
    {
        .lvl = 42,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALE_SHOT, MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_DRAIN_PUNCH}
    },
    {
        .lvl = 42,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 248, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BULLDOZE, MOVE_FACADE, MOVE_PROTECT}
    },
    {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
        .lvl = 65,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 52, 0, 100, 112),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_U_TURN, MOVE_ROOST}
    },
    {
        .lvl = 63,
        .species = SPECIES_HEATRAN,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 236, 0, 0, 20),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_TAUNT}
    },
    {
        .lvl = 64,
        .species = SPECIES_VOLCARONA,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_FLAMETHROWER, MOVE_MORNING_SUN, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 63,
        .species = SPECIES_ZARUDE,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_U_TURN, MOVE_DRAIN_PUNCH}
    },
    {
        .lvl = 63,
        .species = SPECIES_VOLCANION,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_STEAM_ERUPTION, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB}
    },
    {
        .lvl = 66,
        .species = SPECIES_GARCHOMP,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_GARCHOMPITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD}
    },
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
        .lvl = 47,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 52, 0, 100, 112),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_U_TURN, MOVE_ROOST}
    },
    {
        .lvl = 48,
        .species = SPECIES_REVAVROOM,
        .ability = ABILITY_FILTER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHIFT_GEAR, MOVE_IRON_HEAD, MOVE_HIGH_HORSEPOWER, MOVE_GUNK_SHOT}
    },
    {
        .lvl = 47,
        .species = SPECIES_ROTOM_HEAT,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_GRASS, // hp grass
        .ev = TRAINER_PARTY_EVS(252, 0, 104, 0, 0, 152),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_VOLT_SWITCH, MOVE_TOXIC, MOVE_HIDDEN_POWER}
    },
    {
        .lvl = 47,
        .species = SPECIES_CACTURNE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB}
    },
    {
        .lvl = 48,
        .species = SPECIES_VOLCANION,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_CHOICE_SPECS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_STEAM_ERUPTION, MOVE_EARTH_POWER, MOVE_SLUDGE_BOMB}
    },
    {
        .lvl = 48,
        .species = SPECIES_GARCHOMP,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_ROSELI_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD}
    },
};

static const struct TrainerMon sParty_Tiana[] = {
    {
        .lvl = 5,
        .species = SPECIES_SHINX,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE, MOVE_THUNDER_SHOCK}
    },
    {
        .lvl = 6,
        .species = SPECIES_SPEAROW,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PECK}
    },
};

static const struct TrainerMon sParty_Haley1[] = {
    {
        .lvl = 10,
        .species = SPECIES_STARLY,
        .ability = ABILITY_KEEN_EYE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 10,
        .species = SPECIES_SLOWPOKE_GALAR,
        .ability = ABILITY_QUICK_DRAW,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sParty_Janice[] = {
    {
        .lvl = 13,
        .species = SPECIES_MARILL,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CHARM, MOVE_BUBBLE_BEAM, MOVE_SLAM}
    },
};

static const struct TrainerMon sParty_Vivi[] = {
    {
        .lvl = 34,
        .species = SPECIES_TINKATUFF,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK, MOVE_METAL_CLAW, MOVE_PLAY_ROUGH}
    },
    {
        .lvl = 34,
        .species = SPECIES_KILOWATTREL,
        .ability = ABILITY_WIND_POWER,
        .nature = NATURE_LONELY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 56, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_VOLT_SWITCH, MOVE_THUNDERBOLT, MOVE_AIR_SLASH}
    },
    {
        .lvl = 35,
        .species = SPECIES_VELUZA,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 0, 0, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_JET, MOVE_PSYCHIC_FANGS, MOVE_AQUA_CUTTER, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
        .lvl = 29,
        .species = SPECIES_KLANG,
        .ability = ABILITY_STEELWORKER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_AUTOTOMIZE, MOVE_METAL_SOUND}
    },
};

static const struct TrainerMon sParty_Robin[] = {
    {
        .lvl = 29,
        .species = SPECIES_SNEASEL,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_QUICK_ATTACK, MOVE_TAUNT}
    },
    {
        .lvl = 29,
        .species = SPECIES_KADABRA,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_PSYBEAM, MOVE_DISABLE, MOVE_REFLECT}
    },
    {
        .lvl = 29,
        .species = SPECIES_DELCATTY,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_CHARM, MOVE_ATTRACT}
    },
};

static const struct TrainerMon sParty_Andrea[] = {
{
        .lvl = 69,
        .species = SPECIES_SEISMITOAD,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_RASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_MUDDY_WATER, MOVE_HYPER_VOICE, MOVE_MUD_SHOT}
    },
};

static const struct TrainerMon sParty_Crissy[] = {
    {
        .lvl = 69,
        .species = SPECIES_SEAKING,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PECK, MOVE_MEGAHORN, MOVE_AQUA_JET, MOVE_WATERFALL}
    },
    {
        .lvl = 69,
        .species = SPECIES_WAILORD,
        .ability = ABILITY_WATER_VEIL,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYPER_VOICE, MOVE_NOBLE_ROAR, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMon sParty_Rick[] = {
    {
        .lvl = 4,
        .species = SPECIES_SPINARAK,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_STING, MOVE_CONSTRICT}
    },
    {
        .lvl = 5,
        .species = SPECIES_JOLTIK,
        .ability = ABILITY_STATIC,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FURY_CUTTER, MOVE_ABSORB}
    },
};

static const struct TrainerMon sParty_Lyle[] = {
    {
        .lvl = 5,
        .species = SPECIES_SPINARAK,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_ABSORB}
    },
    {
        .lvl = 6,
        .species = SPECIES_SPINARAK,
        .ability = ABILITY_SNIPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_ABSORB}
    },
    {
        .lvl = 7,
        .species = SPECIES_KRICKETOT,
        .ability = ABILITY_SHED_SKIN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRUGGLE_BUG}
    },
    {
        .lvl = 8,
        .species = SPECIES_TAROUNTULA,
        .ability = ABILITY_INSOMNIA,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_ASSURANCE}
    },
};

static const struct TrainerMon sParty_Jose[] = {
    {
        .lvl = 10,
        .species = SPECIES_NINCADA,
        .ability = ABILITY_COMPOUND_EYES,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH, MOVE_FALSE_SWIPE}
    },
    {
        .lvl = 11,
        .species = SPECIES_DWEBBLE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SMACK_DOWN, MOVE_FURY_CUTTER}
    },
};

static const struct TrainerMon sParty_Doug[] = {
    {
        .lvl = 47,
        .species = SPECIES_VENOMOTH,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_PSYBEAM}
    },
    {
        .lvl = 48,
        .species = SPECIES_ORBEETLE,
        .ability = ABILITY_SWARM,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_BUG_BUZZ, MOVE_CONFUSE_RAY}
    },
};

static const struct TrainerMon sParty_Greg[] = {
    {
        .lvl = 51,
        .species = SPECIES_CRUSTLE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SHELL_SMASH}
    },
    {
        .lvl = 52,
        .species = SPECIES_SCOLIPEDE,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_TAIL, MOVE_PROTECT, MOVE_BUG_BITE, MOVE_TAKE_DOWN}
    },
};

static const struct TrainerMon sParty_Kent[] = {
    {
        .lvl = 51,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLASH, MOVE_BUG_BITE, MOVE_EXTREME_SPEED, MOVE_METAL_CLAW}
    },
};

static const struct TrainerMon sParty_James1[] = {
    {
        .lvl = 8,
        .species = SPECIES_VENIPEDE,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POISON_STING, MOVE_ROLLOUT}
    },
    {
        .lvl = 9,
        .species = SPECIES_KARRABLAST,
        .ability = ABILITY_SWARM,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FURY_CUTTER}
    },
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Brice[] = {
    {
        .lvl = 36,
        .species = SPECIES_LUNATONE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_MOONLIGHT}
    },
    {
        .lvl = 37,
        .species = SPECIES_CENTISKORCH,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COIL, MOVE_BUG_BITE, MOVE_FLAME_WHEEL, MOVE_BITE}
    },
};

static const struct TrainerMon sParty_Trent1[] = {
    {
        .lvl = 36,
        .species = SPECIES_TURTONATOR,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_PROTECT, MOVE_IRON_DEFENSE}
    },
    {
        .lvl = 37,
        .species = SPECIES_WYRDEER,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HORN_LEECH, MOVE_PSYSHIELD_BASH, MOVE_TAKE_DOWN}
    },
    {
        .lvl = 38,
        .species = SPECIES_GOGOAT,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULK_UP, MOVE_SEED_BOMB, MOVE_BULLDOZE, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sParty_Lenny[] = {
    {
        .lvl = 40,
        .species = SPECIES_KLAWF,
        .ability = ABILITY_ANGER_SHELL,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_BLAST, MOVE_ROCK_SMASH, MOVE_METAL_CLAW}
    },
    {
        .lvl = 41,
        .species = SPECIES_HAWLUCHA,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROOST, MOVE_BRICK_BREAK, MOVE_WING_ATTACK}
    },
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
        .lvl = 40,
        .species = SPECIES_SUDOWOODO,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_BRAVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH, MOVE_WOOD_HAMMER, MOVE_HAMMER_ARM}
    },
    {
        .lvl = 40,
        .species = SPECIES_DURANT,
        .ability = ABILITY_DEFIANT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_X_SCISSOR, MOVE_METAL_CLAW, MOVE_DIG}
    },
};

static const struct TrainerMon sParty_Alan[] = {
    {
        .lvl = 38,
        .species = SPECIES_SHUCKLE,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PAIN_SPLIT, MOVE_BUG_BITE, MOVE_ROCK_THROW, MOVE_WRAP}
    },
    {
        .lvl = 38,
        .species = SPECIES_MINIOR,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER, MOVE_POWER_GEM, MOVE_SWIFT}
    },
    {
        .lvl = 38,
        .species = SPECIES_CRUSTLE,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_BLAST, MOVE_ROCK_SLIDE, MOVE_SLASH}
    },
};

static const struct TrainerMon sParty_Clark[] = {
    {
        .lvl = 11,
        .species = SPECIES_BINACLE,
        .ability = ABILITY_TOUGH_CLAWS,
        .nature = NATURE_NAUGHTY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCRATCH, MOVE_WATER_GUN}
    },
};

static const struct TrainerMon sParty_Eric[] = {
    {
        .lvl = 42,
        .species = SPECIES_GRAVELER_ALOLA,
        .ability = ABILITY_STURDY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_BLAST, MOVE_THUNDER_PUNCH, MOVE_ROCK_POLISH}
    },
    {
        .lvl = 42,
        .species = SPECIES_CRUSTLE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_SMACK_DOWN}
    },
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
        .lvl = 31,
        .species = SPECIES_BOLDORE,
        .ability = ABILITY_STURDY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_GEM, MOVE_STEALTH_ROCK, MOVE_IRON_DEFENSE, MOVE_MUD_SLAP}
    },
    {
        .lvl = 31,
        .species = SPECIES_MINIOR,
        .ability = ABILITY_SHIELDS_DOWN,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_SWIFT, MOVE_ROCK_POLISH, MOVE_CONFUSE_RAY}
    },
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_GEODUDE,
    },
    {
    .lvl = 16,
    .species = SPECIES_MACHOP,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
        .lvl = 52,
        .species = SPECIES_HATTERENE,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM}
    },
    {
        .lvl = 52,
        .species = SPECIES_GRIMMSNARL,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIRIT_BREAK, MOVE_LIGHT_SCREEN, MOVE_SWAGGER, MOVE_SUCKER_PUNCH}
    },
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
        .lvl = 54,
        .species = SPECIES_VOLBEAT,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_ZING_ZAP, MOVE_LEECH_LIFE, MOVE_MOONLIGHT}
    },
    {
        .lvl = 54,
        .species = SPECIES_ILLUMISE,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_DAZZLING_GLEAM, MOVE_DRAINING_KISS}
    },
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .lvl = 13,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Gerald[] = {
    {
        .lvl = 45,
        .species = SPECIES_SIMISEAR,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_MILD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_BLAST, MOVE_ACROBATICS, MOVE_CRUNCH, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Vivian[] = {
    {
        .lvl = 33,
        .species = SPECIES_PACHIRISU,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(126, 126, 0, 0, 0, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_NUZZLE, MOVE_CHARM, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 34,
        .species = SPECIES_TOGEDEMARU,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_FELL_STINGER, MOVE_NUZZLE}
    },
};

static const struct TrainerMon sParty_Danielle[] = {
    {
        .lvl = 45,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_POISON_JAB, MOVE_MEGAHORN}
    },
};

static const struct TrainerMon sParty_Hideo[] = {
    {
        .lvl = 49,
        .species = SPECIES_WEEZING,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_TOXIC}
    },
    {
        .lvl = 50,
        .species = SPECIES_KOMALA,
        .ability = ABILITY_COMATOSE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WOOD_HAMMER, MOVE_SUCKER_PUNCH, MOVE_YAWN, MOVE_SLAM}
    },
};

static const struct TrainerMon sParty_Keigo[] = {
    {
        .lvl = 53,
        .species = SPECIES_WEEZING,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SLUDGE_BOMB, MOVE_HEAT_WAVE, MOVE_TOXIC}
    },
    {
        .lvl = 54,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_METAL_CLAW}
    },
};

static const struct TrainerMon sParty_Riley[] = {
    {
        .lvl = 53,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_METAL_CLAW}
    },
    {
        .lvl = 54,
        .species = SPECIES_ACCELGOR,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Flint[] = {
    {
        .lvl = 54,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BRAVE_BIRD, MOVE_ENDEAVOR}
    },
    {
        .lvl = 54,
        .species = SPECIES_MOTHIM,
        .ability = ABILITY_TINTED_LENS,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(126, 0, 0, 252, 4, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_BUG_BITE}
    },
};

static const struct TrainerMon sParty_Ashley[] = {
    {
        .lvl = 54,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_HARDY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_NASTY_PLOT, MOVE_ACROBATICS, MOVE_NUZZLE}
    },
    {
        .lvl = 54,
        .species = SPECIES_XATU,
        .ability = ABILITY_MAGIC_BOUNCE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_CONFUSE_RAY}
    },
    {
        .lvl = 54,
        .species = SPECIES_FLAMIGO,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THROAT_CHOP, MOVE_MEGA_KICK, MOVE_WING_ATTACK, MOVE_LOW_KICK}
    },
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
        .lvl = 27,
        .species = SPECIES_KIRLIA,
        .ability = ABILITY_TRACE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYBEAM, MOVE_DRAINING_KISS}
    },
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
        .lvl = 58,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 58,
        .species = SPECIES_BAXCALIBUR,
        .ability = ABILITY_THERMAL_EXCHANGE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LOADED_DICE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_CLAW, MOVE_GLAIVE_RUSH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
        .lvl = 58,
        .species = SPECIES_CLEFABLE,
        .ability = ABILITY_MAGIC_GUARD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STEALTH_ROCK, MOVE_MOONBLAST, MOVE_SOFT_BOILED, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 58,
        .species = SPECIES_CERULEDGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_SNEAK, MOVE_BITTER_BLADE, MOVE_IRON_HEAD}
    },
    {
        .lvl = 58,
        .species = SPECIES_TOXAPEX,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_BLACK_SLUDGE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_TOXIC, MOVE_HAZE, MOVE_RECOVER}
    },
    {
        .lvl = 60,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SCEPTILITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
        .lvl = 58,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 58,
        .species = SPECIES_GARCHOMP,
        .ability = ABILITY_ROUGH_SKIN,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_ROSELI_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_FIRE_FANG}
    },
    {
        .lvl = 58,
        .species = SPECIES_TOGEKISS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 8, 0, 0, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_ROOST}
    },
    {
        .lvl = 58,
        .species = SPECIES_AMOONGUSS,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 220, 0, 36, 0),
        .heldItem = ITEM_BLACK_SLUDGE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_FOUL_PLAY}
    },
    {
        .lvl = 58,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER}
    },
    {
        .lvl = 60,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_BLAZIKENITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BLAZE_KICK, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT}
    },
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
        .lvl = 58,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 252, 0, 8, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DEFOG, MOVE_U_TURN, MOVE_ROOST, MOVE_BODY_PRESS}
    },
    {
        .lvl = 58,
        .species = SPECIES_KOMMO_O,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 200, 0, 0, 56),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK, MOVE_ROAR}
    },
    {
        .lvl = 58,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .heldItem = ITEM_COVERT_CLOAK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_ROOST, MOVE_STICKY_WEB}
    },
    {
        .lvl = 58,
        .species = SPECIES_FERROTHORN,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_LEECH_SEED, MOVE_BODY_PRESS, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 58,
        .species = SPECIES_ARMAROUGE,
        .ability = ABILITY_WEAK_ARMOR,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_FOCUS_SASH,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_CALM_MIND, MOVE_ENERGY_BALL, MOVE_FIRE_BLAST}
    },
    {
        .lvl = 60,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_STONE_EDGE}
    },
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
        .lvl = 58,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 58,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_MUSCLE_BAND,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 58,
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(248, 0, 176, 0, 84, 0),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_STEALTH_ROCK, MOVE_RECOVER}
    },
    {
        .lvl = 58,
        .species = SPECIES_GENGAR,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COLBUR_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_THUNDER_WAVE}
    },
    {
        .lvl = 58,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(200, 252, 0, 0, 0, 56),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 60,
        .species = SPECIES_SCEPTILE,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SCEPTILITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_LEECH_SEED, MOVE_PROTECT}
    },
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
        .lvl = 58,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 58,
        .species = SPECIES_DRAGONITE,
        .ability = ABILITY_MULTISCALE,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 4, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED, MOVE_ROOST}
    },
    {
        .lvl = 58,
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 4),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_RECOVER}
    },
    {
        .lvl = 58,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_FIRE,
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_HIDDEN_POWER, MOVE_DAZZLING_GLEAM}
    },
    {
        .lvl = 58,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_MOONBLAST, MOVE_ICE_BEAM}
    },
    {
        .lvl = 60,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_BLAZIKENITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_BLAZE_KICK, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT}
    },
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
        .lvl = 58,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_POISON_HEAL,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 252, 0, 16, 0),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPIKES, MOVE_EARTHQUAKE, MOVE_ROOST, MOVE_KNOCK_OFF}
    },
    {
        .lvl = 58,
        .species = SPECIES_GOODRA_HISUI,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_DRAGON_PULSE}
    },
    {
        .lvl = 58,
        .species = SPECIES_MIMIKYU,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_TOXIC_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW}
    },
    {
        .lvl = 58,
        .species = SPECIES_TANGROWTH,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_SASSY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 12, 0, 252, 0),
        .heldItem = ITEM_ASSAULT_VEST,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE}
    },
    {
        .lvl = 58,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_HIGH_HORSEPOWER, MOVE_PLAY_ROUGH}
    },
    {
        .lvl = 60,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_SWAMPERTITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATERFALL, MOVE_EARTHQUAKE, MOVE_ICE_PUNCH, MOVE_STONE_EDGE}
    },
};

static const struct TrainerMon sParty_Jonah[] = {
    {
        .lvl = 59,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_SCREECH}
    },
    {
        .lvl = 60,
        .species = SPECIES_LUMINEON,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAILWIND, MOVE_WATER_PULSE, MOVE_QUIVER_DANCE, MOVE_GUST}
    },
    {
        .lvl = 61,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_Henry[] = {
    {
        .lvl = 58,
        .species = SPECIES_LUMINEON,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAILWIND, MOVE_WATER_PULSE, MOVE_QUIVER_DANCE, MOVE_GUST}
    },
    {
        .lvl = 59,
        .species = SPECIES_JELLICENT,
        .ability = ABILITY_CURSED_BODY,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_STRENGTH_SAP}
    },
};

static const struct TrainerMon sParty_Roger[] = {
    {
        .lvl = 58,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_SCREECH}
    },
    {
        .lvl = 58,
        .species = SPECIES_CLAWITZER,
        .ability = ABILITY_MEGA_LAUNCHER,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MUDDY_WATER, MOVE_AURA_SPHERE, MOVE_DRAGON_PULSE, MOVE_DARK_PULSE}
    },
    {
        .lvl = 58,
        .species = SPECIES_GYARADOS,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_DANCE, MOVE_WATERFALL, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Alexa[] = {
    {
        .lvl = 59,
        .species = SPECIES_VILEPLUME,
        .ability = ABILITY_THICK_FAT,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MOONBLAST, MOVE_GIGA_DRAIN, MOVE_STRENGTH_SAP}
    },
    {
        .lvl = 60,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_SLACK_OFF, MOVE_CHARM}
    },
};

static const struct TrainerMon sParty_Ruben[] = {
    {
        .lvl = 59,
        .species = SPECIES_SHIFTRY,
        .ability = ABILITY_WIND_RIDER,
        .nature = NATURE_HARDY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH, MOVE_EXTRASENSORY, MOVE_HURRICANE}
    },
    {
        .lvl = 60,
        .species = SPECIES_MABOSSTIFF,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_JAW_LOCK, MOVE_HEADBUTT, MOVE_ROAR, MOVE_REVERSAL}
    },
};

static const struct TrainerMon sParty_Koji1[] = {
    {
        .lvl = 61,
        .species = SPECIES_CONKELDURR,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STONE_EDGE, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_SLAM}
    },
};

static const struct TrainerMon sParty_Wayne[] = {
    {
        .lvl = 59,
        .species = SPECIES_WHISCASH,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT, MOVE_SNORE}
    },
    {
        .lvl = 59,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_KNOCK_OFF, MOVE_RAZOR_SHELL}
    },
    {
        .lvl = 59,
        .species = SPECIES_LAPRAS,
        .ability = ABILITY_ICE_SCALES,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Aidan[] = {
    {
        .lvl = 62,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_EXTREME_SPEED, MOVE_ENDEAVOR}
    },
    {
        .lvl = 63,
        .species = SPECIES_TOUCANNON,
        .ability = ABILITY_SKILL_LINK,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_BODY_SLAM, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Reed[] = {
    {
        .lvl = 61,
        .species = SPECIES_DREDNAW,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_BODY_SLAM, MOVE_JAW_LOCK, MOVE_ROCK_TOMB}
    },
    {
        .lvl = 62,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Tisha[] = {
    {
        .lvl = 62,
        .species = SPECIES_LANTURN,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TAIL_GLOW, MOVE_PARABOLIC_CHARGE, MOVE_HYDRO_PUMP, MOVE_THUNDER_WAVE}
    },
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
        .lvl = 39,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_NAIVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_PSYBEAM}
    },
    {
        .lvl = 39,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_CONTRARY,
        .nature = NATURE_NAIVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_UPROAR, MOVE_SUCKER_PUNCH, MOVE_BODY_SLAM, MOVE_PSYBEAM}
    },
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
        .lvl = 61,
        .species = SPECIES_MUK_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GUNK_SHOT, MOVE_ACID_ARMOR, MOVE_KNOCK_OFF, MOVE_DISABLE}
    },
    {
        .lvl = 61,
        .species = SPECIES_DRAMPA,
        .ability = ABILITY_FRIEND_GUARD,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_GLARE, MOVE_DRAGON_PULSE, MOVE_EXTRASENSORY}
    },
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
        .lvl = 40,
        .species = SPECIES_KANGASKHAN,
        .ability = ABILITY_SCRAPPY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_HEADBUTT, MOVE_FAKE_OUT}
    },
    {
        .lvl = 40,
        .species = SPECIES_GLISCOR,
        .ability = ABILITY_HYPER_CUTTER,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_X_SCISSOR, MOVE_ACROBATICS, MOVE_KNOCK_OFF, MOVE_FIRE_FANG}
    },
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
        .lvl = 48,
        .species = SPECIES_DUSTOX,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_MOONBLAST, MOVE_BUG_BUZZ, MOVE_VENOSHOCK}
    },
    {
        .lvl = 48,
        .species = SPECIES_BEAUTIFLY,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_AIR_SLASH}
    },
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
        .lvl = 60,
        .species = SPECIES_SEISMITOAD,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_QUIET,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_HYDRO_PUMP, MOVE_MUD_SHOT, MOVE_HYPER_VOICE}
    },
    {
        .lvl = 60,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
        .lvl = 57,
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PARABOLIC_CHARGE, MOVE_EERIE_IMPULSE, MOVE_CONFUSE_RAY}
    },
    {
        .lvl = 57,
        .species = SPECIES_FLOATZEL,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
        .lvl = 48,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_WATER_PULSE, MOVE_PROTECT, MOVE_AIR_SLASH}
    },
    {
        .lvl = 48,
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_Chris[] = {
    {
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_PULSE, MOVE_AIR_SLASH, MOVE_TAILWIND}
    },
    {
        .lvl = 46,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
    {
        .lvl = 46,
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_AQUA_JET, MOVE_THROAT_CHOP}
    },
    {
        .lvl = 46,
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_CUTTER, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_AQUA_JET}
    },
};

static const struct TrainerMon sParty_Dawson[] = {
    {
        .lvl = 13,
        .species = SPECIES_SNUBBULL,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_FIRE_FANG, MOVE_BITE}
    },
    {
        .lvl = 14,
        .species = SPECIES_EEVEE,
        .ability = ABILITY_NONE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_QUICK_ATTACK, MOVE_HELPING_HAND}
    },
};

static const struct TrainerMon sParty_Sarah[] = {
    {
        .lvl = 13,
        .species = SPECIES_MANKEY,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LOW_KICK, MOVE_COVET}
    },
    {
        .lvl = 14,
        .species = SPECIES_MEOWTH_ALOLA,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FEINT, MOVE_SCRATCH, MOVE_FAKE_OUT, MOVE_PAY_DAY}
    },
};

static const struct TrainerMon sParty_Darian[] = {
    {
        .lvl = 9,
        .species = SPECIES_MAGIKARP,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPLASH}
    },
};

static const struct TrainerMon sParty_Hailey[] = {
    {
        .lvl = 19,
        .species = SPECIES_BUIZEL,
        .ability = ABILITY_COMPETITIVE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_QUICK_ATTACK, MOVE_BITE}
    },
};

static const struct TrainerMon sParty_Chandler[] = {
    {
        .lvl = 22,
        .species = SPECIES_KRABBY,
        .ability = ABILITY_HUSTLE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METAL_CLAW, MOVE_BUBBLE_BEAM, MOVE_MUD_SHOT}
    },
    {
        .lvl = 23,
        .species = SPECIES_CORPHISH,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_BUBBLE_BEAM, MOVE_TAUNT}
    },
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
        .lvl = 25,
        .species = SPECIES_MINUN,
        .ability = ABILITY_MINUS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_QUICK_ATTACK, MOVE_NUZZLE}
    },
    {
        .lvl = 25,
        .species = SPECIES_PLUSLE,
        .ability = ABILITY_PLUS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ELECTRO_BALL, MOVE_ENCORE, MOVE_QUICK_ATTACK, MOVE_NUZZLE}
    },
};

static const struct TrainerMon sParty_Joseph[] = {
    {
        .lvl = 26,
        .species = SPECIES_EMOLGA,
        .ability = ABILITY_STATIC,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACROBATICS, MOVE_NUZZLE, MOVE_THUNDER_SHOCK}
    },
    {
        .lvl = 27,
        .species = SPECIES_CHARJABUG,
        .ability = ABILITY_BATTERY,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_BITE, MOVE_BUG_BITE, MOVE_MUD_SLAP}
    },
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
        .lvl = 28,
        .species = SPECIES_ZEBSTRIKA,
        .ability = ABILITY_ADRENALINE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPARK, MOVE_FLAME_CHARGE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE}
    },
};

static const struct TrainerMon sParty_Marcos[] = {
    {
        .lvl = 27,
        .species = SPECIES_PAWMO,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BITE, MOVE_DIG, MOVE_ARM_THRUST, MOVE_SPARK}
    },
};

static const struct TrainerMon sParty_Rhett[] = {
    {
        .lvl = 27,
        .species = SPECIES_MONFERNO,
        .ability = ABILITY_POWER_FIST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MACH_PUNCH, MOVE_FLAME_WHEEL, MOVE_TAUNT, MOVE_FEINT}
    },
};

static const struct TrainerMon sParty_Tyron[] = {
    {
        .lvl = 30,
        .species = SPECIES_KROKOROK,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_DIG, MOVE_HONE_CLAWS, MOVE_SCARY_FACE}
    },
};

static const struct TrainerMon sParty_Celina[] = {
    {
        .lvl = 30,
        .species = SPECIES_VICTREEBEL,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_POWER_WHIP, MOVE_STOCKPILE, MOVE_SPIT_UP, MOVE_SWALLOW}
    },
};

static const struct TrainerMon sParty_Bianca[] = {
    {
        .lvl = 30,
        .species = SPECIES_SHIINOTIC,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRENGTH_SAP, MOVE_MEGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SLEEP_POWDER}
    },
};

static const struct TrainerMon sParty_Hayden[] = {
    {
        .lvl = 30,
        .species = SPECIES_SIRFETCHD,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_PECK, MOVE_FIRST_IMPRESSION, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Sophie[] = {
    {
        .lvl = 38,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TRI_ATTACK, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE, MOVE_BULLDOZE}
    },
    {
        .lvl = 39,
        .species = SPECIES_STOUTLAND,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_STOMPING_TANTRUM}
    },
};

static const struct TrainerMon sParty_Coby[] = {
    {
        .lvl = 38,
        .species = SPECIES_TALONFLAME,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_U_TURN, MOVE_ACROBATICS, MOVE_FLARE_BLITZ, MOVE_QUICK_ATTACK}
    },
    {
        .lvl = 39,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_PECK, MOVE_TAUNT, MOVE_STEEL_WING, MOVE_IRON_DEFENSE}
    },
};

static const struct TrainerMon sParty_Lawrence[] = {
    {
        .lvl = 38,
        .species = SPECIES_MR_MIME,
        .ability = ABILITY_MISTY_SURGE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYBEAM, MOVE_FAIRY_WIND, MOVE_PROTECT}
    },
    {
        .lvl = 38,
        .species = SPECIES_POLIWRATH,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_WAVE_CRASH, MOVE_JET_PUNCH, MOVE_STORM_THROW}
    },
};

static const struct TrainerMon sParty_Wyatt[] = {
    {
        .lvl = 37,
        .species = SPECIES_SKARMORY,
        .ability = ABILITY_FULL_METAL_BODY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_PAYBACK, MOVE_AGILITY}
    },
    {
        .lvl = 38,
        .species = SPECIES_COALOSSAL,
        .ability = ABILITY_STEAM_ENGINE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_INCINERATE, MOVE_ANCIENT_POWER, MOVE_TAR_SHOT, MOVE_ROCK_POLISH}
    },
};

static const struct TrainerMon sParty_Angelina[] = {
    {
        .lvl = 40,
        .species = SPECIES_CLODSIRE,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_YAWN, MOVE_POISON_TAIL, MOVE_MEGAHORN, MOVE_MUD_BOMB}
    },
    {
        .lvl = 40,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_BOUNCE, MOVE_AQUA_TAIL, MOVE_SLAM}
    },
};

static const struct TrainerMon sParty_Kai[] = {
    {
        .lvl = 40,
        .species = SPECIES_DONDOZO,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_SLEEP_TALK, MOVE_AQUA_TAIL}
    },
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .lvl = 19,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
        .lvl = 29,
        .species = SPECIES_RATICATE,
        .ability = ABILITY_STRONG_JAW,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}
    },
    {
        .lvl = 30,
        .species = SPECIES_BIBAREL,
        .ability = ABILITY_MOODY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_HEADBUTT, MOVE_YAWN, MOVE_AQUA_JET}
    },
    {
        .lvl = 31,
        .species = SPECIES_DIGGERSBY,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BULLDOZE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
        .lvl = 58,
        .species = SPECIES_CROBAT,
        .ability = ABILITY_INNER_FOCUS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_POISON, MOVE_PSYCHIC_FANGS, MOVE_WING_ATTACK, MOVE_BITE}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
        .lvl = 56,
        .species = SPECIES_HIPPOWDON,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
        .lvl = 55,
        .species = SPECIES_SKUNTANK,
        .ability = ABILITY_AFTERMATH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_SLASH, MOVE_CROSS_POISON, MOVE_SUCKER_PUNCH, MOVE_SCREECH}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
        .lvl = 56,
        .species = SPECIES_DUGTRIO,
        .ability = ABILITY_ARENA_TRAP,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_NIGHT_SLASH, MOVE_TRI_ATTACK}
    },
    {
        .lvl = 57,
        .species = SPECIES_THIEVUL,
        .ability = ABILITY_STAKEOUT,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SNARL, MOVE_PARTING_SHOT, MOVE_FOUL_PLAY, MOVE_QUICK_ATTACK}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
        .lvl = 58,
        .species = SPECIES_MUK,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GUNK_SHOT, MOVE_DISABLE, MOVE_ACID_ARMOR, MOVE_SCREECH}
    },
    {
        .lvl = 59,
        .species = SPECIES_MUK_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_DISABLE, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
        .lvl = 57,
        .species = SPECIES_HIPPOWDON,
        .ability = ABILITY_SAND_STREAM,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_THUNDER_FANG}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
        .lvl = 58,
        .species = SPECIES_GARBODOR,
        .ability = ABILITY_GOOEY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GUNK_SHOT, MOVE_METAL_CLAW, MOVE_PAIN_SPLIT, MOVE_BODY_SLAM}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
        .lvl = 58,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLACK_OFF, MOVE_HEAT_CRASH, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
        .lvl = 58,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_SASSY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_RAPID_SPIN, MOVE_CLEAR_SMOG}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
        .lvl = 56,
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_WHITE_SMOKE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_LASH, MOVE_BUG_BITE, MOVE_SLASH, MOVE_HONE_CLAWS}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
        .lvl = 60,
        .species = SPECIES_TURTONATOR,
        .ability = ABILITY_DAUNTLESS_SHIELD,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_IRON_DEFENSE, MOVE_FLAIL}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
        .lvl = 60,
        .species = SPECIES_DARMANITAN,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_PUNCH, MOVE_HEADBUTT, MOVE_BITE, MOVE_WORK_UP}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
        .lvl = 60,
        .species = SPECIES_NIDOKING,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_NAIVE,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MEGAHORN, MOVE_SLUDGE_WAVE, MOVE_DOUBLE_KICK}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
        .lvl = 59,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
        .lvl = 60,
        .species = SPECIES_CENTISKORCH,
        .ability = ABILITY_FLAME_BODY,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LUNGE, MOVE_FIRE_LASH, MOVE_CRUNCH, MOVE_COIL}
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
        .lvl = 58,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_EXTRASENSORY, MOVE_EARTH_POWER, MOVE_ANCIENT_POWER}
    },
};

static const struct TrainerMon sParty_GruntMagmaMossdeep[] = {
    {
        .lvl = 68,
        .species = SPECIES_TAUROS_PALDEA_BLAZE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 56, 200),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_PROTECT, MOVE_BULLDOZE}
    },
    {
        .lvl = 68,
        .species = SPECIES_MUK_ALOLA,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_KNOCK_OFF, MOVE_POISON_FANG, MOVE_PROTECT, MOVE_DRAIN_PUNCH}
    },
    {
        .lvl = 68,
        .species = SPECIES_TYPHLOSION_HISUI,
        .ability = ABILITY_BLAZE,
        .nature = NATURE_MODEST,
        .iv = IV_SPREAD_HP_GRASS,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAT_WAVE, MOVE_SHADOW_BALL, MOVE_FOCUS_BLAST, MOVE_HIDDEN_POWER}
    },
};

static const struct TrainerMon sParty_Darcy[] = {
    {
        .lvl = 69,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREMESPEED, MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_SMART_STRIKE}
    },
    {
        .lvl = 70,
        .species = SPECIES_FLORGES,
        .ability = ABILITY_DAZZLING,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_LEECH_SEED, MOVE_GRASS_KNOT, MOVE_SYNTHESIS}
    },
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
        .lvl = 68,
        .species = SPECIES_ARCANINE_HISUI,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .heldItem = ITEM_CHOICE_SCARF,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAD_SMASH, MOVE_FLARE_BLITZ, MOVE_EXTREME_SPEED, MOVE_ROCK_SLIDE}
    },
    {
        .lvl = 69,
        .species = SPECIES_OKIDOGI,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 160, 96),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 71,
        .species = SPECIES_STEELIX,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_STEELIXITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_THUNDER_FANG, MOVE_HIGH_HORSEPOWER, MOVE_COIL, MOVE_IRON_HEAD}
    },
};

static const struct TrainerMon sParty_Pete[] = {
    {
        .lvl = 47,
        .species = SPECIES_TENTACRUEL,
        .ability = ABILITY_POISON_TOUCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_VENOSHOCK, MOVE_HEX}
    },
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
        .lvl = 47,
        .species = SPECIES_BASCULIN_RED_STRIPED,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WAVE_CRASH, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_Andres1[] = {
    {
        .lvl = 49,
        .species = SPECIES_CORSOLA,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_POWER_GEM, MOVE_BUBBLE_BEAM}
    },
    {
        .lvl = 50,
        .species = SPECIES_KLAWF,
        .ability = ABILITY_ANGER_SHELL,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}
    },
};

static const struct TrainerMon sParty_Josue[] = {
    {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLING, MOVE_AIR_SLASH, MOVE_WATER_PULSE, MOVE_TAILWIND}
    },
    {
        .lvl = 44,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_MAGICAL_LEAF, MOVE_AIR_SLASH, MOVE_WHIRLWIND}
    },
};

static const struct TrainerMon sParty_Camron[] = {
    {
        .lvl = 49,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Cory1[] = {
    {
        .lvl = 48,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_WATER_PULSE, MOVE_AIR_SLASH, MOVE_TAILWIND}
    },
    {
        .lvl = 49,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_REGENERATOR,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
    {
        .lvl = 50,
        .species = SPECIES_DONDOZO,
        .ability = ABILITY_UNAWARE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_AQUA_TAIL, MOVE_BODY_SLAM, MOVE_NOBLE_ROAR, MOVE_ORDER_UP}
    },
};

static const struct TrainerMon sParty_Carolina[] = {
    {
        .lvl = 48,
        .species = SPECIES_SAWSBUCK_SUMMER,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HORN_LEECH, MOVE_MEGAHORN, MOVE_LEECH_SEED}
    },
    {
        .lvl = 49,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MAGICAL_LEAF, MOVE_GROWTH}
    },
    {
        .lvl = 50,
        .species = SPECIES_WHIMSICOTT,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_COTTON_GUARD, MOVE_HURRICANE, MOVE_MOONBLAST, MOVE_STUN_SPORE}
    },
};

static const struct TrainerMon sParty_Elijah[] = {
    {
        .lvl = 46,
        .species = SPECIES_HAWLUCHA,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROOST, MOVE_FLYING_PRESS, MOVE_BRICK_BREAK}
    },
    {
        .lvl = 47,
        .species = SPECIES_CONKELDURR,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SLAM, MOVE_HAMMER_ARM, MOVE_LOW_KICK, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_Celia[] = {
    {
        .lvl = 44,
        .species = SPECIES_ELDEGOSS,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HYPER_VOICE, MOVE_SYNTHESIS, MOVE_COTTON_SPORE, MOVE_LEAF_TORNADO}
    },
    {
        .lvl = 45,
        .species = SPECIES_AZUMARILL,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_BOUNCE}
    },
};

static const struct TrainerMon sParty_Bryan[] = {
    {
        .lvl = 45,
        .species = SPECIES_SUDOWOODO,
        .ability = ABILITY_ROCK_HEAD,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_WOOD_HAMMER}
    },
    {
        .lvl = 46,
        .species = SPECIES_GOLEM,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_SMACK_DOWN, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMon sParty_Branden[] = {
    {
        .lvl = 44,
        .species = SPECIES_UNFEZANT,
        .ability = ABILITY_SUPER_LUCK,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PLUCK, MOVE_QUICK_ATTACK, MOVE_TAUNT}
    },
    {
        .lvl = 45,
        .species = SPECIES_PARASECT,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRENGTH_SAP, MOVE_SHADOW_CLAW, MOVE_CRABHAMMER, MOVE_CROSS_POISON}
    },
};

static const struct TrainerMon sParty_Bryant[] = {
    {
        .lvl = 37,
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_WHITE_SMOKE,
        .nature = NATURE_IMPISH,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FIRE_LASH, MOVE_SLASH, MOVE_LICK}
    },
    {
        .lvl = 37,
        .species = SPECIES_SCRAFTY,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWAGGER, MOVE_BRICK_BREAK, MOVE_PAYBACK, MOVE_LOW_KICK}
    },
};

static const struct TrainerMon sParty_Shayla[] = {
    {
        .lvl = 36,
        .species = SPECIES_BELLOSSOM,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_PETAL_BLIZZARD}
    },
    {
        .lvl = 37,
        .species = SPECIES_LILLIGANT,
        .ability = ABILITY_NATURAL_CURE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_STUN_SPORE}
    },
    {
        .lvl = 38,
        .species = SPECIES_TOGEKISS,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_AURA_SPHERE, MOVE_AIR_SLASH, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Kyra[] = {
    {
        .lvl = 44,
        .species = SPECIES_DODRIO,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_ACUPRESSURE, MOVE_ENDEAVOR}
    },
    {
        .lvl = 44,
        .species = SPECIES_ZEBSTRIKA,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLAZE_KICK, MOVE_SPARK, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE}
    },
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
        .lvl = 47,
        .species = SPECIES_NINJASK,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTREME_SPEED, MOVE_BUG_BITE, MOVE_AERIAL_ACE, MOVE_METAL_CLAW}
    },
    {
        .lvl = 48,
        .species = SPECIES_ACCELGOR,
        .ability = ABILITY_TOXIC_DEBRIS,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BUG_BUZZ, MOVE_RECOVER, MOVE_GIGA_DRAIN, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Alix[] = {
    {
        .lvl = 49,
        .species = SPECIES_STARMIE,
        .ability = ABILITY_ILLUMINATE,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_POWER_GEM, MOVE_PSYCHIC}
    },
    {
        .lvl = 50,
        .species = SPECIES_GOTHITELLE,
        .ability = ABILITY_SHADOW_TAG,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DARK_PULSE, MOVE_PSYSHOCK, MOVE_NASTY_PLOT, MOVE_HYPNOSIS}
    },
};

static const struct TrainerMon sParty_Helene[] = {
    {
        .lvl = 49,
        .species = SPECIES_HITMONCHAN,
        .ability = ABILITY_BLITZ_BOXER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH}
    },
    {
        .lvl = 50,
        .species = SPECIES_MEDICHAM,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLAZE_KICK, MOVE_ACUPRESSURE, MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK}
    },
};

static const struct TrainerMon sParty_Marlene[] = {
    {
        .lvl = 40,
        .species = SPECIES_DUNSPARCE,
        .ability = ABILITY_GROUNDED,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRAGON_RUSH, MOVE_SCALE_SHOT, MOVE_ROOST, MOVE_DRILL_RUN}
    },
    {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BLAZE_KICK, MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Devan[] = {
    {
        .lvl = 10,
        .species = SPECIES_ROGGENROLA,
        .ability = ABILITY_NONE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_TACKLE}
    },
    {
        .lvl = 11,
        .species = SPECIES_NACLI,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SMACK_DOWN, MOVE_ROCK_THROW, MOVE_MUD_SHOT}
    },
};

static const struct TrainerMon sParty_Johnson[] = {
    {
        .lvl = 10,
        .species = SPECIES_LOTAD,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WATER_GUN, MOVE_ASTONISH, MOVE_ABSORB}
    },
    {
        .lvl = 11,
        .species = SPECIES_PANSAGE,
        .ability = ABILITY_OVERGROW,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_VINE_WHIP, MOVE_LICK}
    },
};

static const struct TrainerMon sParty_Melina[] = {
    {
        .lvl = 31,
        .species = SPECIES_ELDEGOSS,
        .ability = ABILITY_EFFECT_SPORE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SYNTHESIS, MOVE_COTTON_SPORE, MOVE_LEAF_TORNADO, MOVE_RAPID_SPIN}
    },
};

static const struct TrainerMon sParty_Brandi[] = {
    {
        .lvl = 31,
        .species = SPECIES_MEOWSTIC_F,
        .ability = ABILITY_PSYCH,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYBEAM, MOVE_CHARGE_BEAM, MOVE_DISARMING_VOICE, MOVE_FAKE_OUT}
    },
};

static const struct TrainerMon sParty_Aisha[] = {
    {
        .lvl = 31,
        .species = SPECIES_MEDITITE,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_FORCE_PALM, MOVE_PSYCH_UP}
    },
};

static const struct TrainerMon sParty_Makayla[] = {
    {
        .lvl = 68,
        .species = SPECIES_ROSERADE,
        .ability = ABILITY_POISON_POINT,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TOXIC}
    },
    {
        .lvl = 69,
        .species = SPECIES_MEDICHAM,
        .ability = ABILITY_HUGE_POWER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ACUPRESSURE, MOVE_ZEN_HEADBUTT, MOVE_BLAZE_KICK, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Fabian[] = {
    {
        .lvl = 54,
        .species = SPECIES_TOXTRICITY,
        .ability = ABILITY_PUNK_ROCK,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHIFT_GEAR, MOVE_BOOMBURST, MOVE_OVERDRIVE, MOVE_SWAGGER}
    },
};

static const struct TrainerMon sParty_Dayton[] = {
    {
        .lvl = 50,
        .species = SPECIES_BRONZONG,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_BOLD,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EXTRASENSORY, MOVE_GYRO_BALL, MOVE_CONFUSE_RAY, MOVE_METAL_SOUND}
    },
    {
        .lvl = 51,
        .species = SPECIES_RAMPARDOS,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_ZEN_HEADBUTT, MOVE_ROCK_SMASH, MOVE_ASSURANCE}
    },
};

static const struct TrainerMon sParty_Rachel[] = {
    {
        .lvl = 48,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_RAZOR_SHELL, MOVE_NIGHT_SLASH}
    },
};

static const struct TrainerMon sParty_Leonel[] = {
    {
        .lvl = 52,
        .species = SPECIES_MANECTRIC,
        .ability = ABILITY_LIGHTNING_ROD,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DISCHARGE, MOVE_ROAR, MOVE_SNARL, MOVE_THUNDER_WAVE}
    },
};

static const struct TrainerMon sParty_Callie[] = {
    {
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
        .ability = ABILITY_WATER_ABSORB,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BODY_SLAM, MOVE_FLIP_TURN, MOVE_EARTH_POWER}
    },
    {
        .lvl = 48,
        .species = SPECIES_PRIMEAPE,
        .ability = ABILITY_ANGER_POINT,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_CLOSE_COMBAT, MOVE_RAGE_FIST, MOVE_ASSURANCE}
    },
};

static const struct TrainerMon sParty_Cale[] = {
    {
        .lvl = 50,
        .species = SPECIES_ARIADOS,
        .ability = ABILITY_MERCILESS,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CROSS_POISON, MOVE_PSYCHIC_FANGS, MOVE_SHADOW_SNEAK, MOVE_FELL_STINGER}
    },
    {
        .lvl = 51,
        .species = SPECIES_PINSIR,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_X_SCISSOR, MOVE_STORM_THROW}
    },
};

static const struct TrainerMon sParty_Myles[] = {
    {
        .lvl = 48,
        .species = SPECIES_BRELOOM,
        .ability = ABILITY_TECHNICIAN,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SPORE, MOVE_FORCE_PALM, MOVE_MACH_PUNCH, MOVE_LEECH_SEED}
    },
    {
        .lvl = 48,
        .species = SPECIES_CONKELDURR,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STONE_EDGE, MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_SLAM}
    },
    {
        .lvl = 50,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_SWAGGER, MOVE_SCREECH}
    },
    {
        .lvl = 50,
        .species = SPECIES_EXCADRILL,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_DRILL_RUN, MOVE_ROCK_SLIDE, MOVE_METAL_CLAW, MOVE_RAPID_SPIN}
    },
    {
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_BATTLE_ARMOR,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRICK_BREAK, MOVE_BULLDOZE, MOVE_FURY_CUTTER, MOVE_CRUSH_CLAW}
    },
    {
        .lvl = 52,
        .species = SPECIES_DONPHAN,
        .ability = ABILITY_STURDY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_THUNDER_FANG, MOVE_FIRE_FANG}
    },
};

static const struct TrainerMon sParty_Pat[] = {
    {
        .lvl = 48,
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_TIMID,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NIGHT_DAZE, MOVE_FLAME_BURST, MOVE_CHARGE_BEAM, MOVE_NASTY_PLOT}
    },
    {
        .lvl = 48,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAT_CRASH, MOVE_SLACK_OFF}
    },
    {
        .lvl = 50,
        .species = SPECIES_GOGOAT,
        .ability = ABILITY_SAP_SIPPER,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HORN_LEECH, MOVE_SYNTHESIS, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE}
    },
    {
        .lvl = 50,
        .species = SPECIES_LEAVANNY,
        .ability = ABILITY_SHARPNESS,
        .nature = NATURE_JOLLY,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_LEAF_BLADE, MOVE_FELL_STINGER}
    },
    {
        .lvl = 52,
        .species = SPECIES_GASTRODON,
        .ability = ABILITY_STORM_DRAIN,
        .nature = NATURE_MODEST,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_MUDDY_WATER, MOVE_RECOVER}
    },
    {
        .lvl = 52,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_ADAPTABILITY,
        .nature = NATURE_ADAMANT,
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_KNOCK_OFF}
    },
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
        .lvl = 52,
        .species = SPECIES_DURANT,
        .ability = ABILITY_SWARM,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CRUNCH, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_AGILITY}
    },
    {
        .lvl = 52,
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_TRACE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_MYSTICAL_FIRE}
    },
};

static const struct TrainerMon sParty_MayMeteorFallsTreecko[] = {
    {
        .lvl = 42,
        .species = SPECIES_BLAZIKEN,
        .ability = ABILITY_SPEED_BOOST,
        .nature = NATURE_ADAMANT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_BLAZE_KICK, MOVE_BRICK_BREAK}
    },
    {
        .lvl = 42,
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 196, 0, 0, 60),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_RECOVER, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_DAZZLING_GLEAM}
    },
    {
        .lvl = 42,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_SERENE_GRACE,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 128, 0, 128, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SCALD, MOVE_RECOVER, MOVE_MOONBLAST, MOVE_ICE_BEAM}
    },
};

static const struct TrainerMon sParty_MayMeteorFallsTorchic[] = {
    {
        .lvl = 42,
        .species = SPECIES_SWAMPERT,
        .ability = ABILITY_STAMINA,
        .nature = NATURE_CAREFUL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 252, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LIQUIDATION, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_ICE_PUNCH}
    },
    {
        .lvl = 42,
        .species = SPECIES_MIMIKYU,
        .ability = ABILITY_DISGUISE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DRAIN_PUNCH, MOVE_PLAY_ROUGH, MOVE_SHADOW_CLAW}
    },
    {
        .lvl = 42,
        .species = SPECIES_TANGROWTH,
        .ability = ABILITY_SELF_SUFFICIENT,
        .nature = NATURE_RELAXED,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 4, 0),
        .heldItem = ITEM_ROCKY_HELMET,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_STUN_SPORE, MOVE_BULLDOZE}
    },
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
        .lvl = 33,
        .species = SPECIES_VOLBEAT,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_NAUGHTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 126, 0, 0, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_SPARK, MOVE_CONFUSE_RAY, MOVE_BUG_BITE},
        .isShiny = TRUE,
    },
    {
        .lvl = 34,
        .species = SPECIES_ILLUMISE,
        .ability = ABILITY_PRANKSTER,
        .nature = NATURE_NAUGHTY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 126, 0, 126),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_STRUGGLE_BUG, MOVE_DRAINING_KISS, MOVE_ENCORE, MOVE_CHARM},
        .isShiny = TRUE,
    },
};

static const struct TrainerMon sParty_Darius[] = {
    {
        .lvl = 54,
        .species = SPECIES_SWANNA,
        .ability = ABILITY_MOODY,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_ROOST, MOVE_AIR_SLASH, MOVE_WATER_PULSE, MOVE_PROTECT}
    },
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
        .lvl = 69,
        .species = SPECIES_CHIMECHO,
        .ability = ABILITY_LEVITATE,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BOOMBURST, MOVE_EXTRASENSORY, MOVE_OMINOUS_WIND, MOVE_YAWN}
    },
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
        .lvl = 69,
        .species = SPECIES_SLOWBRO,
        .ability = ABILITY_OBLIVIOUS,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_SLACK_OFF, MOVE_SURF}
    },
    {
        .lvl = 69,
        .species = SPECIES_FARIGIRAF,
        .ability = ABILITY_ARMOR_TAIL,
        .nature = NATURE_HARDY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_NASTY_PLOT, MOVE_STOMP, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Everett[] = {
    {
        .lvl = 69,
        .species = SPECIES_BEHEEYEM,
        .ability = ABILITY_NEUROFORCE,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_IMPRISON}
    },
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

static const struct TrainerMon sParty_GruntMagmaMeteorFalls[] = {
    {
        .lvl = 42,
        .species = SPECIES_NINETALES,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
        .heldItem = ITEM_COVERT_CLOAK,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_PSYSHOCK, MOVE_HEAT_WAVE, MOVE_ENERGY_BALL, MOVE_SCORCHING_SANDS}
    },
    {
        .lvl = 42,
        .species = SPECIES_TALONFLAME,
        .ability = ABILITY_GALE_WINGS,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 4, 0, 0, 0, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_BRAVE_BIRD, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_ROOST}
    },
    {
        .lvl = 42,
        .species = SPECIES_SCOVILLAIN,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_TIMID,
        .iv = IV_SPREAD_HP_ICE, // hp ice
        .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 0, 252),
        .heldItem = ITEM_EXPERT_BELT,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_WILL_O_WISP, MOVE_HIDDEN_POWER},
    },
};

static const struct TrainerMon sParty_GruntMagmaSouthernIsland[] = {
    {
        .lvl = 52,
        .species = SPECIES_NINETALES,
        .ability = ABILITY_DROUGHT,
        .nature = NATURE_TIMID,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_HEAT_WAVE, MOVE_ENCORE, MOVE_PROTECT, MOVE_ENERGY_BALL}
    },
    {
        .lvl = 52,
        .species = SPECIES_RAPIDASH,
        .ability = ABILITY_MOXIE,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_POWER_HERB,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_WILD_CHARGE, MOVE_BLAZE_KICK, MOVE_SOLAR_BLADE, MOVE_PLAY_ROUGH}
    },
    {
        .lvl = 52,
        .species = SPECIES_SCOVILLAIN,
        .ability = ABILITY_CHLOROPHYLL,
        .nature = NATURE_MODEST,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 4, 252),
        .heldItem = ITEM_COBA_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_WORRY_SEED, MOVE_GROWTH}
    },
};

static const struct TrainerMon sParty_CourtneySouthernIsland[] = {
    {
        .lvl = 52,
        .species = SPECIES_ARCANINE,
        .ability = ABILITY_INTIMIDATE,
        .nature = NATURE_CALM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(244, 0, 188, 0, 76, 0),
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_WILL_O_WISP, MOVE_PROTECT}
    },
    {
        .lvl = 53,
        .species = SPECIES_EXCADRILL,
        .ability = ABILITY_MOLD_BREAKER,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_IRON_HEAD}
    },
    {
        .lvl = 54,
        .species = SPECIES_FEZANDIPITI,
        .ability = ABILITY_TOXIC_CHAIN,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 56, 0, 0, 200),
        .heldItem = ITEM_NONE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_CALM_MIND, MOVE_ROOST, MOVE_MOONBLAST, MOVE_SLUDGE_BOMB}
    },
};

static const struct TrainerMon sParty_StevenSouthernIsland[] = {
    {
        .lvl = 52,
        .species = SPECIES_FERROTHORN,
        .ability = ABILITY_IRON_BARBS,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 92, 0, 164, 0),
        .heldItem = ITEM_LEFTOVERS,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_LEECH_SEED, MOVE_KNOCK_OFF, MOVE_POWER_WHIP, MOVE_BULLDOZE}
    },
    {
        .lvl = 52,
        .species = SPECIES_GHOLDENGO,
        .ability = ABILITY_GOOD_AS_GOLD,
        .nature = NATURE_BOLD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 196, 0, 0, 60),
        .heldItem = ITEM_AIR_BALLOON,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_FLASH_CANNON, MOVE_RECOVER}
    },
    {
        .lvl = 52,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_FATAL_PRECISION,
        .nature = NATURE_JOLLY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 4, 252),
        .heldItem = ITEM_METAGROSSITE,
        .ball = ITEM_POKE_BALL,
        .moves = {MOVE_METEOR_MASH, MOVE_ICE_PUNCH, MOVE_ROCK_SLIDE, MOVE_STOMPING_TANTRUM}
    },
};