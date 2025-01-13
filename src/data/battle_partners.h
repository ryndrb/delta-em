const struct Trainer gBattlePartners[] = {
    [PARTNER_NONE] =
    {
        .party = NULL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _(""),
        .items = {},
    },

    [PARTNER_MAY_METEOR_FALLS_TREECKO] =
    {
        .party = TRAINER_PARTY(sParty_MayMeteorFallsTreeckoPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },

    [PARTNER_MAY_METEOR_FALLS_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_MayMeteorFallsTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },

    [PARTNER_MAY_METEOR_FALLS_MUDKIP] =
    {
        .party = TRAINER_PARTY(sParty_MayMeteorFallsMudkipPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_MAY,
        .trainerName = _("May"),
    },

    [PARTNER_BRENDAN_METEOR_FALLS_TREECKO] =
    {
        .party = TRAINER_PARTY(sParty_BrendanMeteorFallsTreeckoPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },

    [PARTNER_BRENDAN_METEOR_FALLS_TORCHIC] =
    {
        .party = TRAINER_PARTY(sParty_BrendanMeteorFallsTorchicPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },

    [PARTNER_BRENDAN_METEOR_FALLS_MUDKIP] =
    {
        .party = TRAINER_PARTY(sParty_BrendanMeteorFallsMudkipPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _("Brendan"),
    },

    [PARTNER_STEVEN_SOUTHERN_ISLAND] =
    {
        .party = TRAINER_PARTY(sParty_StevenSouthernIslandPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("Steven"),
    },

    [PARTNER_STEVEN_MOSSDEEP_SPACE_CENTER] =
    {
        .party = TRAINER_PARTY(sParty_StevenMossdeepSpaceCenterPartner),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("Steven"),
    },
};