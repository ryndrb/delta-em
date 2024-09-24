const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("This Pokémon's attacks without\na chance to flinch gain a 10%\nchance to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Rain Dance."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("This Pokémon's speed is raised\n1 stage at the end of each full\nturn on the field."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("This Pokémon cannot be struck\nby a critical hit and takes\n10% less damage."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING("If this Pokémon is at full HP,\nit survives one hit with at\nleast 1 HP; Immune to OHKO."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents the use of self-\n-destructing moves. Takes 1/2\ndamage from sound moves."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("This Pokémon cannot be\nparalyzed. Gaining this ability\nwhile paralyzed cures it."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING("If Sandstorm is active,\nthis Pokémon's evasiveness is\n1.25x; Immunity to Sandstorm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING("30% chance a Pokémon making\ncontact with this Pokémon will\nbe paralyzed."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING("This Pokémon heals 1/4 of it's\nmax HP when hit by Electric\nmoves; Electric immunity."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING("This Pokémon heals 1/4 of it's\nmax HP when hit by Water\nmoves; Water immunity."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING("This Pokémon cannot be\ninfatuated or taunted;\nImmune to Intimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING("While this Pokémon is active,\nthe effects of weather\nconditions are disabled."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Compound Eyes"),
        .description = COMPOUND_STRING("This Pokémon's moves have their\naccuracy multiplied by 1.3."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("This Pokémon cannot sleep.\nGaining this Ability while asleep\ncures it."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("This Pokémon's type changes to\nthe type of a move it's hit by,\nunless it has the type."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("This Pokémon cannot be\npoisoned. Receives 1/2 damage\nfrom Poison moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING("This Pokémon's Fire attacks do\n1.5x damage if hit by one Fire\nmove; Fire immunity."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING("This Pokémon is not affected\nby secondary effects and\nentry hazard damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("This Pokémon cannot be\nconfused; Immune to Intimidate."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("This Pokémon cannot be forced\nto switch out by another\nPokémon's attack or item."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nlowers the Attack of opponents\nby 1 stage."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING("Prevents foes from choosing to\nswitch unless they also have\nthis Ability."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon lose 1/8 of their\nmax HP."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("This Pokémon can only be\ndamaged by super-effective\nmoves and indirect damage."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING("This Pokémon is immune to\nGround. Gravity/Ingrain/Iron\nBall nullify it."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING("30% chance of poison/sleep/\nparalysis on others making\ncontact with this Pokémon."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("If another Pokémon poisons/\nburns/paralyzes this Pokémon,\nit also gets that status."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING("Prevents others from lowering\nthis Pokémon's stat stages."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("This Pokémon has its\nnon-volatile status condition\ncured when it switches out."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Lightning Rod"),
        .description = COMPOUND_STRING("This Pokémon draws Electric\nmoves to itself to raise its\nhigher attacking stat by 1."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING("This Pokémon's moves have\ntheir secondary effect chance\ndoubled."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING("If rain is active, this\nPokémon's Speed is doubled."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("If sun is active, this\nPokémon's Speed is doubled."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("This Pokémon receives 1/2\ndamage from Dark moves and\nboost accuracy by 1.2x."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("On switch-in, or when it can,\nthis Pokémon copies a random\nadjacent foe's ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("This Pokémon's Attack is\ndoubled."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING("30% chance a Pokémon making\ncontact with this Pokémon will\nbe poisoned."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING("This Pokémon cannot be made\nto flinch. Boost accuracy by\n1.1x; Immune to Intimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("This Pokémon cannot be frozen.\nReceives 30% less damage from\nWater- and Ice-type moves."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("This Pokémon cannot be frozen.\nReceives 30% less damage from\nWater- and Ice-type moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Prevents opposing Steel-type\nPokémon from choosing to switch\nout."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING("This Pokémon is immune to\nsound- based moves, unless it\nused the move."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING("If rain is active, this Pokémon\nheals 1/8 of its max HP each\nturn."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Sandstorm."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING("If this Pokémon is the target\nof a foe's move, that move\nloses one additional PP."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING("Fire-/Ice-type moves against\nthis Pokémon deal damage with\na halved offensive stat."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("This Pokémon's sleep counter\ndrops by 2 instead of 1."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING("30% chance a Pokémon making\ncontact with this Pokémon will\nbe burned."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING("This Pokémon can switch out\neven when trapped by another\nPokémon's ability."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING("This Pokémon's accuracy can't\nbe lowered by others; ignores\ntheir evasiveness stat."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Prevents other Pokémon from\nlowering this Pokémon's Attack\nstat stage."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING("May pick up items."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("This Pokémon skips every other\nturn instead of using a move,\nexcept Slack Off."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING("This Pokémon's Attack is 1.5x\nand accuracy of its physical\nattacks is 0.9x."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING("30% chance of infatuating\nPokémon of the opposite gender\nif they make contact."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("If an active ally has this\nAbility or the Minus Ability,\nthis Pokémon's Sp. Atk is 1.5x."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("If an active ally has this\nAbility or the Plus Ability,\nthis Pokémon's Sp. Atk is 1.5x."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Castform's type changes to the\ncurrent weather condition's\ntype, except Sandstorm."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("This Pokémon cannot lose its\nheld item due to another\nPokémon's Ability or attack."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING("This Pokémon has a 50% chance\nto have its status cured at\nthe end of each turn."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING("If this Pokémon is statused,\nits Attack is 1.5x; ignores\nburn halving physical damage."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("If this Pokémon has a non-\nvolatile status condition, all\ndefenses are multiplied by 1.5."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING("This Pokémon damages those\ndraining HP from it for as\nmuch as they would heal."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("At 1/3 or less of its max HP,\nthis Pokémon's Grass attacks\nis 1.5x, and 1.2x otherwise."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("At 1/3 or less of its max HP,\nthis Pokémon's Fire attacks\nis 1.5x, and 1.2x otherwise."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("At 1/3 or less of its max HP,\nthis Pokémon's Water attacks\nis 1.5x, and 1.2x otherwise."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("At 1/3 or less of its max HP,\nthis Pokémon's Bug attacks\nis 1.5x, and 1.2x otherwise."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("This Pokémon does not take\nrecoil damage besides Struggle\n/Life Orb/crash damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Sunny Day."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING("Prevents opposing Pokémon from\nchoosing to switch out unless\nthey are airborne."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("This Pokémon cannot sleep.\nGaining this Ability while asleep\ncures it."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Prevents others from lowering\nthis Pokémon's stat stages."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("This Pokémon's Attack is\ndoubled."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING("This Pokémon cannot be struck\nby a critical hit and takes\n10% less damage."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("While this Pokémon is active,\nthe effects of weather\nconditions are disabled."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tangled Feet"),
        .description = COMPOUND_STRING("This Pokémon's evasiveness is\ndoubled as long as it is\nconfused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motor Drive"),
        .description = COMPOUND_STRING("This Pokémon's Speed is raised\n1 stage if hit by an Electric\nmove; Electric immunity."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalry"),
        .description = COMPOUND_STRING("This Pokémon's attacks do\n1.25x on same gender targets."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Steadfast"),
        .description = COMPOUND_STRING("If this Pokémon flinches, its\nSpeed is raised by 2 stage."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Snow Cloak"),
        .description = COMPOUND_STRING("If Snow is active,\nthis Pokémon's evasiveness is\n1.25x."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gluttony"),
        .description = COMPOUND_STRING("This Pokémon eats Berries at\n1/2 max HP or less instead of\ntheir usual 1/4 max HP."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Anger Point"),
        .description = COMPOUND_STRING("If this Pokémon is struck by\na critical hit, its Attack is\nraised by 12 stages."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Unburden"),
        .description = COMPOUND_STRING("Speed is doubled on held item\nloss; boost is lost if it\nswitches, gets new item/Ability."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Heatproof"),
        .description = COMPOUND_STRING("The power of Fire-type attacks\nagainst this Pokémon is halved;\nburn damage halved."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("When one of this Pokémon's stat\nstages is raised or lowered,\nthe amount is doubled."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Dry Skin"),
        .description = COMPOUND_STRING("This Pokémon is healed 1/4 by\nWater, 1/8 by Rain; is hurt\n1.2x by Fire, 1/8 by Sun."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("On switch-in, Attack or Sp. Atk\nis raised 1 stage based on the\nfoes' weaker Defense."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Iron Fist"),
        .description = COMPOUND_STRING("This Pokémon's punch-based\nattacks have 1.3x power.\nSucker Punch is not boosted."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Poison Heal"),
        .description = COMPOUND_STRING("This Pokémon is healed by 1/8\nof its max HP each turn when\npoisoned; no HP loss."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptability"),
        .description = COMPOUND_STRING("This Pokémon's same-type\nattack bonus (STAB) is 2\ninstead of 1.5."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Skill Link"),
        .description = COMPOUND_STRING("This Pokémon's multi-hit attacks\nalways hit the maximum number\nof times."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("This Pokémon has its status\ncured at the end of each turn\nif rain is active."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solar Power"),
        .description = COMPOUND_STRING("If sun is active, this\nPokémon's Sp. Atk is 1.5x;\nloses 1/32 max HP per turn."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Quick Feet"),
        .description = COMPOUND_STRING("If this Pokémon is statused,\nits Speed is 1.5x; ignores\nSpeed drop from paralysis."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalize"),
        .description = COMPOUND_STRING("This Pokémon's moves are\nchanged to be Normal type\nand have 1.2x power."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("If this Pokémon strikes with a\ncritical hit, the damage is\nmultiplied by 2."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magic Guard"),
        .description = COMPOUND_STRING("This Pokémon can only be\ndamaged by direct attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("No Guard"),
        .description = COMPOUND_STRING("Every move used by or against\nthis Pokémon will always hit."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Stall"),
        .description = COMPOUND_STRING("This Pokémon moves last among\nPokémon using the same or\ngreater priority moves."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technician"),
        .description = COMPOUND_STRING("This Pokémon's moves of 60\npower or less have 1.5x power,\nincluding Struggle."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Leaf Guard"),
        .description = COMPOUND_STRING("If sun is active, this Pokémon\ncannot be statused and Rest\nwill fail for it."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Klutz"),
        .description = COMPOUND_STRING("This Pokémon's held item has no\neffect, except Macho Brace.\nFling cannot be used."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Mold Breaker"),
        .description = COMPOUND_STRING("This Pokémon's moves and their\neffects ignore the Abilities of\nother Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Super Luck"),
        .description = COMPOUND_STRING("This Pokémon's critical hit\nratio is raised by 1 stage."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Aftermath"),
        .description = COMPOUND_STRING("If this Pokémon is KOed with\nany move, that move's user\nloses 1/4 its max HP."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nshudders if any foe has a\nsuper-effective or OHKO move."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Forewarn"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon is\nalerted to the foes' move with\nthe highest power."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unaware"),
        .description = COMPOUND_STRING("This Pokémon ignores other\nPokémon's stat stages when\ntaking or doing damage."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Tinted Lens"),
        .description = COMPOUND_STRING("This Pokémon's attacks that\nare not very effective on a\ntarget deal double damage."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("This Pokémon receives 3/4\ndamage from super-effective\nattacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Slow Start"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon's\nSpeed is halved for 3 turns."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Scrappy"),
        .description = COMPOUND_STRING("Fighting, Normal moves hit\nGhost. Immune to Intimidate."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Storm Drain"),
        .description = COMPOUND_STRING("This Pokémon draws Water\nmoves to itself to raise its\nhigher attacking stat by 1."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Ice Body"),
        .description = COMPOUND_STRING("If Snow is active, this Pokémon\nheals 1/8 of its max HP each\nturn."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("This Pokémon receives 3/4\ndamage from super-effective\nattacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Snow Warning"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Snow."),
    #else
        .description = COMPOUND_STRING("Summons hail in battle."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honey Gather"),
        .description = COMPOUND_STRING("This Pokémon has a 25%\nchance to heal itself by 1/2\nof it's max HP per turn."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Frisk"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nidentifies the held items of all\nopposing Pokémon."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Reckless"),
        .description = COMPOUND_STRING("This Pokémon's attacks with\nrecoil or crash damage have\n1.2x power; not Struggle."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitype"),
        .description = COMPOUND_STRING("If this Pokémon is an Arceus,\nits type changes to match its\nheld Plate."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Flower Gift"),
        .description = COMPOUND_STRING("If user is Cherrim and sun is\nactive, it and allies' Sp. Atk\nand Sp. Def are 1.5x."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Bad Dreams"),
        .description = COMPOUND_STRING("Causes sleeping foes to lose\n1/8 of their max HP at the\nend of each turn."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING("If this Pokémon has no item\nand is hit by a contact move,\nit steals the attacker's item."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sheer Force"),
        .description = COMPOUND_STRING("This Pokémon's attacks with\nsecondary effects have 1.3x\npower; nullifies the effects."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contrary"),
        .description = COMPOUND_STRING("If this Pokémon has a stat\nstage raised it is lowered\ninstead, and vice versa."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Unnerve"),
        .description = COMPOUND_STRING("This Pokémon prevents opposing\nPokémon from using their\nBerries and Leftovers."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Defiant"),
        .description = COMPOUND_STRING("This Pokémon's Attack is raised\nby 2 for each of its stats that\nis lowered by a foe."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Defeatist"),
        .description = COMPOUND_STRING("While this Pokémon has 1/4 or\nless of its max HP, its Attack\nand Sp. Atk are halved."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cursed Body"),
        .description = COMPOUND_STRING("If this Pokémon is hit by an\nattack, there is a 30% chance\nthat move gets disabled."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Healer"),
        .description = COMPOUND_STRING("30% chance this Pokémon's\nally has its status cured at\nthe end of each turn."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Friend Guard"),
        .description = COMPOUND_STRING("This Pokémon's allies receive\n3/4 damage from other\nPokémon's attacks."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Weak Armor"),
        .description = COMPOUND_STRING("If a physical attack hits this\nPokémon, Defense is lowered\nby 1, Speed is raised by 2."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("This Pokémon's weight is\ndoubled."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("This Pokémon's weight is\nhalved."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiscale"),
        .description = COMPOUND_STRING("If this Pokémon is at full HP,\ndamage taken from attacks is\nhalved."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Toxic Boost"),
        .description = COMPOUND_STRING("While this Pokémon is poisoned,\nits Attack and Speed are\nmultiplied by 1.3x."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Flare Boost"),
        .description = COMPOUND_STRING("While this Pokémon is poisoned,\nits Sp. Attack and Speed are\nmultiplied by 1.3x."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Harvest"),
        .description = COMPOUND_STRING("If last item used is a Berry,\n50% chance to restore it each\nend of turn. 100% in Sun."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathy"),
        .description = COMPOUND_STRING("This Pokémon does not take\ndamage from attacks made by\nits allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Moody"),
        .description = COMPOUND_STRING("Boosts a random stat, except\naccuracy/evasion, by +2 and\nanother stat -1 every turn."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Overcoat"),
        .description = COMPOUND_STRING("This Pokémon is immune to\npowder moves, Sandstorm\ndamage, and Effect Spore."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("30% chance a Pokémon making\ncontact with this Pokémon will\nbe poisoned."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("This Pokémon restores 1/3\nof its max HP when it switches\nout."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Big Pecks"),
        .description = COMPOUND_STRING("Prevents other Pokémon from\nlowering the Def stat stage and\nboost Flying moves by 20%."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sand Rush"),
        .description = COMPOUND_STRING("If Sandstorm is active, this\nPokémon's Speed is doubled;\nimmunity to Sandstorm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wonder Skin"),
        .description = COMPOUND_STRING("Status moves with accuracy\nchecks are 50% accurate when\nused on this Pokémon."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analytic"),
        .description = COMPOUND_STRING("This Pokémon's attacks have\n1.3x power if it is the last to\nmove in a turn."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("This Pokémon appears as the\nlast Pokémon in the party until\nit takes direct damage."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposter"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nTransforms into the opposing\nPokémon that is facing it."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltrator"),
        .description = COMPOUND_STRING("Moves ignore substitutes and\nfoe's Reflect/Light Screen/\nSafeguard/Mist/Aurora Veil."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mummy"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon have their Ability\nchanged to Mummy."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Moxie"),
        .description = COMPOUND_STRING("This Pokémon's Attack is raised\nby 1 stage if it attacks and\nKOs another Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justified"),
        .description = COMPOUND_STRING("This Pokémon's Attack is raised\nby 1 stage after it is damaged\nby a Dark-type move."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Rattled"),
        .description = COMPOUND_STRING("Speed is raised 2 stage if hit\nby a Bug-, Dark-, or Ghost-\ntype attack, or Intimidated."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magic Bounce"),
        .description = COMPOUND_STRING("This Pokémon blocks certain\nStatus moves and bounces them\nback to the user."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Sap Sipper"),
        .description = COMPOUND_STRING("This Pokémon's higher attack\nstat is raised 1 stage if hit\nby a Grass move."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Prankster"),
        .description = COMPOUND_STRING("This Pokémon's Status moves\nhave priority raised by 1, but\nDark types are immune."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sand Force"),
        .description = COMPOUND_STRING("This Pokémon's Ground/Rock/\nSteel attacks do 1.3x in\nSandstorm; immunity to it."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon lose 1/8 of their\nmax HP."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Zen Mode"),
        .description = COMPOUND_STRING("If Darmanitan, at end of turn\nchanges Mode to Standard if\n> 1/2 max HP, else Zen."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victory Star"),
        .description = COMPOUND_STRING("This Pokémon and its allies'\nmoves have their accuracy\nmultiplied by 1.1."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("This Pokémon's moves and their\neffects ignore the Abilities of\nother Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("This Pokémon's moves and their\neffects ignore the Abilities of\nother Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma Veil"),
        .description = COMPOUND_STRING("Protects user/allies from\nAttract, Disable, Encore, Heal\nBlock, Taunt, and Torment."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flower Veil"),
        .description = COMPOUND_STRING("This side's Grass types can't\nhave stats lowered or status\ninflicted by other Pokémon."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Cheek Pouch"),
        .description = COMPOUND_STRING("If this Pokémon eats a Berry,\nit restores 1/3 of its max HP\nafter the Berry's effect."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protean"),
        .description = COMPOUND_STRING("This Pokémon's type changes\nto match the type of the move\nit is about to use."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fur Coat"),
        .description = COMPOUND_STRING("This Pokémon's Defense is\ndoubled."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("This Pokémon is immune to\nbullet moves."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Bulletproof"),
        .description = COMPOUND_STRING("This Pokémon's Sp. Atk is\nraised by 2 for each of its\nstats that is lowered by a foe."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Competitive"),
        .description = COMPOUND_STRING("This Pokémon's Sp. Atk is\nraised by 2 for each of its\nstats that is lowered by a foe."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Strong Jaw"),
        .description = COMPOUND_STRING("This Pokémon's bite-based\nattacks have 1.5x power.\nBug Bite is not boosted."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Refrigerate"),
        .description = COMPOUND_STRING("This Pokémon's Normal-type\nmoves become Ice type and\nhave 1.2x power."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("This Pokémon and its allies\ncannot fall asleep; those\nalready asleep do not wake up."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Stance Change"),
        .description = COMPOUND_STRING("If Aegislash, changes Forme\nto Blade before attacks and\nShield before King's Shield."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Gale Wings"),
        .description = COMPOUND_STRING("This Pokémon's Flying-type\nmoves have their priority\nincreased by 1."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Mega Launcher"),
        .description = COMPOUND_STRING("This Pokémon's pulse moves\nhave 1.5x power. Heal Pulse\nheals 3/4 target's max HP."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Grass Pelt"),
        .description = COMPOUND_STRING("If Grassy Terrain is active,\nthis Pokémon's Defense is\nmultiplied by 1.5."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiosis"),
        .description = COMPOUND_STRING("If an ally uses its item, this\nPokémon gives its item to that\nally immediately."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Tough Claws"),
        .description = COMPOUND_STRING("This Pokémon's contact moves\nhave their power multiplied\nby 1.3."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Pixilate"),
        .description = COMPOUND_STRING("This Pokémon's Normal-type\nmoves become Fairy type and\nhave 1.2x power."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Gooey"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon have their Speed\nlowered by 1 stage."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Aerilate"),
        .description = COMPOUND_STRING("This Pokémon's Normal-type\nmoves become Flying type and\nhave 1.2x power."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Parental Bond"),
        .description = COMPOUND_STRING("This Pokémon's damaging moves\nhit twice. The second hit has\nits damage quartered."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dark Aura"),
        .description = COMPOUND_STRING("While this Pokémon is active,\na Dark move used by any\nPokémon has 1.33x power."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Fairy Aura"),
        .description = COMPOUND_STRING("While this Pokémon is active,\na Fairy move used by any\nPokémon has 1.33x power."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Break"),
        .description = COMPOUND_STRING("While this Pokémon is active,\nthe Dark Aura and Fairy Aura\npower modifier is 0.75x."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Primordial Sea"),
        .description = COMPOUND_STRING("On switch-in, heavy rain begins\nuntil this Ability is not active\nin battle."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Desolate Land"),
        .description = COMPOUND_STRING("On switch-in, harsh sunlight\nbegins until this Ability is\nnot active in battle."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta Stream"),
        .description = COMPOUND_STRING("On switch-in, strong winds\nbegin until this Ability is not\nactive in battle."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Stamina"),
        .description = COMPOUND_STRING("This Pokémon's Defense is\nraised by 1 stage after it is\ndamaged by a move."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Wimp Out"),
        .description = COMPOUND_STRING("This Pokémon switches out\nwhen it reaches 1/2 or less\nof its maximum HP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Emergency Exit"),
        .description = COMPOUND_STRING("This Pokémon switches out\nwhen it reaches 1/2 or less\nof its maximum HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Water Compaction"),
        .description = COMPOUND_STRING("This Pokémon's Defense is\nraised by 2 and takes 1/2\ndamage when hit by Water."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Merciless"),
        .description = COMPOUND_STRING("This Pokémon's attacks are\ncritical hits if the target has\na status condition."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Shields Down"),
        .description = COMPOUND_STRING("If Minior, switch-in/end of\nturn it changes to Core at 1/2\nmax HP or less, else Meteor."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Stakeout"),
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis doubled against a target\nthat switched in this turn."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Water Bubble"),
        .description = COMPOUND_STRING("This Pokémon's Water power is\n2x; it can't be burned; Fire\npower against it is halved."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Steelworker"),
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis multiplied by 1.5 while\nusing a Steel-type attack."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Berserk"),
        .description = COMPOUND_STRING("This Pokémon's Sp. Atk is\nraised by 1 when it reaches\n1/2 or less of its max HP."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Slush Rush"),
        .description = COMPOUND_STRING("If Snow is active, this\nPokémon's Speed is doubled."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Long Reach"),
        .description = COMPOUND_STRING("This Pokémon's attacks do not\nmake contact with the target."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Liquid Voice"),
        .description = COMPOUND_STRING("This Pokémon's sound-based\nmoves become Water type and\nhave 1.2x power."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("This Pokémon's healing moves\nhave their priority increased\nby 3."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Galvanize"),
        .description = COMPOUND_STRING("This Pokémon's Normal-type\nmoves become Electric type\nand have 1.2x power."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surge Surfer"),
        .description = COMPOUND_STRING("If Electric Terrain is active,\nthis Pokémon's Speed is\ndoubled."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Schooling"),
        .description = COMPOUND_STRING("If Wishiwashi, changes to\nSchool Form if it has > 1/4\nmax HP, else Solo Form."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disguise"),
        .description = COMPOUND_STRING("The first hit this Pokémon\ntakes is blocked, and it\ntakes 1/8 HP damage instead."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Battle Bond"),
        .description = COMPOUND_STRING("After KOing a Pokémon:\nbecomes Ash-Greninja, Water\nShuriken: 20 power, hits 3x."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Power Construct"),
        .description = COMPOUND_STRING("If Zygarde 10%/50%, changes\nto Complete if at 1/2 max HP\nor less at end of turn."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING("This Pokémon can poison a\nfoe regardless of its typing.\nSuper-effective against Steel."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Comatose"),
        .description = COMPOUND_STRING("This Pokémon cannot be\nstatused, and is considered\nto be asleep."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Queenly Majesty"),
        .description = COMPOUND_STRING("This Pokémon and its allies\nare protected from opposing\npriority moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Innards Out"),
        .description = COMPOUND_STRING("If this Pokémon is KOed with\na move, that move's user\nloses an equal amount of HP."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Dancer"),
        .description = COMPOUND_STRING("After another Pokémon uses a\ndance move, this Pokémon uses\nthe same move."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Battery"),
        .description = COMPOUND_STRING("This Pokémon's allies have the\npower of their special attacks\nmultiplied by 1.3."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Fluffy"),
        .description = COMPOUND_STRING("This Pokémon takes 1/2 damage\nfrom contact moves, 2x damage\nfrom Fire moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("This Pokémon and its allies\nare protected from opposing\npriority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("This Pokémon's Special Attack\nis raised by 1 stage when\nanother Pokémon faints."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Tangling Hair"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon have their Speed\nlowered by 1 stage."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("This Pokémon copies the\nAbility of an ally that faints."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Power Of Alchemy"),
        .description = COMPOUND_STRING("This Pokémon's highest stat\nis raised by 1 if it attacks\nand KOes another Pokémon."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Beast Boost"),
        .description = COMPOUND_STRING("KOs boost best stat."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS System"),
        .description = COMPOUND_STRING("If this Pokémon is a Silvally,\nits type changes to match its\nheld Memory."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Electric Surge"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Electric Terrain."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psychic Surge"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Psychic Terrain."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Misty Surge"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Misty Terrain."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Grassy Surge"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\nsummons Grassy Terrain."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Full Metal Body"),
        .description = COMPOUND_STRING("Prevents others from lowering\nthis Pokémon's stat stages."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Shadow Shield"),
        .description = COMPOUND_STRING("If this Pokémon is at full HP,\ndamage taken from attacks is\nhalved."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("This Pokémon receives 3/4\ndamage from super-effective\nattacks."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Neuroforce"),
        .description = COMPOUND_STRING("This Pokémon's attacks that\nare super effective against\nthe target do 1.25x damage."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Intrepid Sword"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon's\nAttack is raised by 1 stage."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Dauntless Shield"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon's\nDefense is raised by 1 stage."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("This Pokémon's type changes\nto match the type of the move\nit is about to use."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ball Fetch"),
        .description = COMPOUND_STRING("Fetches failed Poké Ball."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Cotton Down"),
        .description = COMPOUND_STRING("If this Pokémon is hit, it\nlowers the Speed of all other\nPokémon on the field 1 stage."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Propeller Tail"),
        .description = COMPOUND_STRING("This Pokémon's moves cannot\nbe redirected to a different\ntarget by any effect."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Mirror Armor"),
        .description = COMPOUND_STRING("If this Pokémon's stat stages\nwould be lowered, the\nattacker's are lowered instead."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Gulp Missile"),
        .description = COMPOUND_STRING("When hit after Surf/Dive,\nattacker takes 1/4 max HP\nand -1 Defense or paralysis."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stalwart"),
        .description = COMPOUND_STRING("This Pokémon's moves cannot\nbe redirected to a different\ntarget by any effect."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Steam Engine"),
        .description = COMPOUND_STRING("This Pokémon's Speed is raised\nby 6 stages after it is\ndamaged by Fire/Water moves."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("This Pokémon receives 1/2\ndamage from sound moves. Its\nown have 1.3x power."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sand Spit"),
        .description = COMPOUND_STRING("When this Pokémon is hit by\nan attack, the effect of\nSandstorm begins."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Ice Scales"),
        .description = COMPOUND_STRING("This Pokémon receives 1/2\ndamage from special attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Ripen"),
        .description = COMPOUND_STRING("When this Pokémon eats\ncertain Berries, the effects\nare doubled."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Ice Face"),
        .description = COMPOUND_STRING("If Eiscue, the first physical\nhit it takes deals 0 damage.\nEffect is restored in Snow."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Power Spot"),
        .description = COMPOUND_STRING("This Pokémon's allies have\nthe power of their moves\nmultiplied by 1.3."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimicry"),
        .description = COMPOUND_STRING("This Pokémon's types change\nto match the Terrain. Type\nreverts when Terrain ends."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Screen Cleaner"),
        .description = COMPOUND_STRING("On switch-in, the effects of\nAurora Veil, Light Screen, and\nReflect end for both sides."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Steely Spirit"),
        .description = COMPOUND_STRING("This Pokémon and its allies'\nSteel-type moves have their\npower multiplied by 1.5."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Perish Body"),
        .description = COMPOUND_STRING("Making contact with this\nPokémon starts the Perish Song\neffect for it and the attacker."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Wandering Spirit"),
        .description = COMPOUND_STRING("Pokémon making contact with\nthis Pokémon have their Ability\nchanged to this one."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Gorilla Tactics"),
        .description = COMPOUND_STRING("This Pokémon's Attack is 1.5x,\nbut it can only select the\nfirst move it executes."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Neutralizing Gas"),
        .description = COMPOUND_STRING("While this Pokémon is active,\nAbilities have no effect."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastel Veil"),
        .description = COMPOUND_STRING("This Pokémon and its allies\ncannot be poisoned. On switch\n-in, cures poisoned allies."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Hunger Switch"),
        .description = COMPOUND_STRING("If Morpeko, it changes\nbetween Full Belly and Hangry\nMode at the end of each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Quick Draw"),
        .description = COMPOUND_STRING("This Pokémon has a 30% chance\nto move first in its priority\nbracket with attacking moves."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Unseen Fist"),
        .description = COMPOUND_STRING("This Pokémon's contact moves\nignore the target's protection."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Curious Medicine"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon's\nallies have their stat stages\nreset to 0."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis multiplied by 1.5 while using\nan Electric-type attack."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis multiplied by 1.5 while using\na Dragon-type attack."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Chilling Neigh"),
        .description = COMPOUND_STRING("This Pokémon's Attack is raised\nby 1 stage if it attacks and\nKOs another Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Grim Neigh"),
        .description = COMPOUND_STRING("This Pokémon's Sp. Atk is\nraised by 1 stage if it attacks\nand KOs another Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Combination of the Unnerve\nand Chilling Neigh Abilities."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Combination of the Unnerve\nand Grim Neigh Abilities."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Lingering Aroma"),
        .description = COMPOUND_STRING("Making contact with this\nPokémon has the attacker's\nAbility become Lingering Aroma."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Seed Sower"),
        .description = COMPOUND_STRING("When this Pokémon is hit by an\nattack, the effect of Grassy\nTerrain begins."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermal Exchange"),
        .description = COMPOUND_STRING("This Pokémon's Attack is raised\nby 1 when damaged by Fire\nmoves; can't be burned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Anger Shell"),
        .description = COMPOUND_STRING("At 1/2 or less of this\nPokémon's max HP: +1 Atk, Sp.\nAtk, Spe, and -1 Def, Sp. Def."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Purifying Salt"),
        .description = COMPOUND_STRING("Ghost damage to this Pokémon\ndealt with a halved offensive\nstat; can't be statused."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Well-Baked Body"),
        .description = COMPOUND_STRING("This Pokémon's Defense is\nraised 2 stages if hit by a\nFire move; Fire immunity."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Wind Rider"),
        .description = COMPOUND_STRING("Attack raised by 1 if hit by a\nwind move or Tailwind begins.\nWind move immunity."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Guard Dog"),
        .description = COMPOUND_STRING("Immune to Intimidate.\nIntimidated: +1 Attack. Cannot\nbe forced to switch out."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Rocky Payload"),
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis multiplied by 1.5 while\nusing a Rock-type attack."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Wind Power"),
        .description = COMPOUND_STRING("This Pokémon gains the Charge\neffect when hit by a wind move\nor Tailwind begins."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("If this Pokémon is a Palafin\nin Zero Form, switching out\nhas it change to Hero Form."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commander"),
        .description = COMPOUND_STRING("If ally is Dondozo: this\nPokémon cannot act or be hit,\n+2 to all Dondozo's stats."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Electromorphosis"),
        .description = COMPOUND_STRING("This Pokémon gains the\nCharge effect when it takes\na hit from an attack."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Protosynthesis"),
        .description = COMPOUND_STRING("If sun is active or Booster\nEnergy is used: highest stat\nis 1.3x, or 1.5x if Speed."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quark Drive"),
        .description = COMPOUND_STRING("Electric Terrain active or\nBooster Energy used: highest\nstat is 1.3x, or 1.5x if Speed."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("This Pokémon is immune to\nStatus moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Vessel of Ruin"),
        .description = COMPOUND_STRING("Active Pokémon without this\nAbility have their Special\nAttack multiplied by 0.75."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Sword of Ruin"),
        .description = COMPOUND_STRING("Active Pokémon without this\nAbility have their Defense\nmultiplied by 0.75."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Tablets of Ruin"),
        .description = COMPOUND_STRING("Active Pokémon without this\nAbility have their Attack\nmultiplied by 0.75."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Beads of Ruin"),
        .description = COMPOUND_STRING("Active Pokémon without this\nAbility have their Special\ndefense multiplied by 0.75."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalcum Pulse"),
        .description = COMPOUND_STRING("On switch-in, summons Sunny\nDay. During Sunny Day, Attack\nis 1.3333x."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadron Engine"),
        .description = COMPOUND_STRING("On switch-in, summons Electric\nTerrain. During Electric\nTerrain, Attack is 1.3333x."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportunist"),
        .description = COMPOUND_STRING("When an opposing Pokémon has\na stat stage raised, this\nPokémon copies the effect."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Cud Chew"),
        .description = COMPOUND_STRING("If this Pokémon eats a Berry,\nit will eat that Berry again at\nthe end of the next turn."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Sharpness"),
        .description = COMPOUND_STRING("This Pokémon's slicing moves\nhave their power multiplied\nby 1.5."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Supreme Overlord"),
        .description = COMPOUND_STRING("This Pokémon's moves have\n10% more power for each\nfainted ally, up to 5 allies."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Costar"),
        .description = COMPOUND_STRING("On switch-in, this Pokémon\ncopies all of its ally's stat\nstage changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Toxic Debris"),
        .description = COMPOUND_STRING("If this Pokémon is hit by a\nphysical attack, Toxic Spikes\nare set on the opposing side."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armor Tail"),
        .description = COMPOUND_STRING("This Pokémon and its allies\nare protected from opposing\npriority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Earth Eater"),
        .description = COMPOUND_STRING("This Pokémon heals 1/4 of\nits max HP when hit by Ground\nmoves; Ground immunity."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Mycelium Might"),
        .description = COMPOUND_STRING("This Pokémon's Status moves\ngo last in their priority\nbracket and ignore Abilities."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitality"),
        .description = COMPOUND_STRING("Restores ally's HP."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Speed."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Defense."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Toxic Chain"),
        .description = COMPOUND_STRING("Moves can poison."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Supersweet Syrup"),
        .description = COMPOUND_STRING("Lowers the foe's Evasion."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera Shift"),
        .description = COMPOUND_STRING("Terastallizes upon entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera Shell"),
        .description = COMPOUND_STRING("Resistant to types at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraform Zero"),
        .description = COMPOUND_STRING("Removes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Poison Puppeteer"),
        .description = COMPOUND_STRING("Confuses poisoned foes."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_PYROMANCY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Pyromancy"),
    #else
        .name = _("Pyromancy"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's Fire moves that\nburns are 5x more likely to\nhappen."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_FATAL_PRECISION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Fatal Precision"),
    #else
        .name = _("Fatal Precision"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's super-effective\nmoves cannot miss."),
        .aiRating = 5,
    },

    [ABILITY_ADRENALINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Adrenaline"),
    #else
        .name = _("Adrenaline"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's Atk and Spe are\nincreased by 1.2x and 1.5x,\nrespectively, on first turn."),
        .aiRating = 5,
    },

    [ABILITY_GROUNDED] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Grounded"),
    #else
        .name = _("Grounded"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's offensive stat\nis multiplied by 1.5 while\nusing a Ground-type attack."),
        .aiRating = 8,
    },

    [ABILITY_POISON_ABSORB] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Poison Absorb"),
    #else
        .name = _("Poison Absorb"),
    #endif
        .description = COMPOUND_STRING("This Pokémon heals 1/4 of it's\nmax HP when hit by Poison\nmoves; Poison immunity."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_STRIKER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Striker"),
    #else
        .name = _("Striker"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's kick-based\nattacks have 1.3x power."),
        .aiRating = 6,
    },

    [ABILITY_PSYCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Psych"),
    #else
        .name = _("Psych"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's Special Attack\nis doubled."),
        .aiRating = 10,
    },

    [ABILITY_SELF_SUFFICIENT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Self Sufficient"),
    #else
        .name = _("Self Sufficient"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's recovers 1/16\nof its max HP at the end of\nevery turn."),
        .aiRating = 8,
    },

    [ABILITY_CHLOROPLAST] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Chloroplast"),
    #else
        .name = _("Chloroplast"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's moves functions\nas if sun is active, regardless\nof the current weather."),
        .aiRating = 7,
    },

    [ABILITY_POWER_FIST] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Power Fist"),
    #else
        .name = _("Power Fist"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's punch-based\nattacks have 1.3x power and\ndeals special damage."),
        .aiRating = 6,
    },

    [ABILITY_BLITZ_BOXER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("Blitz Boxer"),
    #else
        .name = _("Blitz Boxer"),
    #endif
        .description = COMPOUND_STRING("This Pokémon's punch-based\nattacks receives +1 priority."),
        .aiRating = 7,
    },
};
