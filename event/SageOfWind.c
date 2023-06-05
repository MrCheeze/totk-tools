-------- EventFlow: SageOfWind --------

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForDynamicSagePresence', 'EventTriggerCloseCompanionLifeGauge']
queries: ['EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGMwithInput']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void SageOfWind_GoDungeon() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call SageOfWind_Sub002.SageOfWind_GoDungeon_Sub()

}

void SageOfWind_BossBattle() {

    call SageOfWind_Sub003.SageOfWind_BossBattle_Sub()

    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Rito', 'ControlType2': 0})
}

void SageOfWind_DefeatBoss() {
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call SageOfWind_Sub003.SageOfWind_DefeatBoss_Sub()

}

void SageOfWind_ChangeBoss() {

    call BossBattle_Common.StopLowLayerBgm()


    call SageOfWind_Sub003.SageOfWind_ChangeBoss_Sub()

}

void SageOfWind_ColdAreaLv2() {
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()

    call SageOfWind_Sub002.SageOfWind_ColdAreaLv2_Sub()

}

void GoToHebra_Npc_Tulin_Sage_SageOfWind_GoToHebraTalk_Near() {

    call SageOfWind_Sub002.SageOfWind_GoToHebraTalk_Near_Sub()

}

void GoToHebra_Npc_Tulin_Sage_SageOfWind_GoToHebraTalk_Talk() {

    call SageOfWind_Sub002.SageOfWind_GoToHebra_Talk_Sub()

}

void LetTulinParticipate() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Index': -1})
    && !GameSystemActor.EventQueryExistActor({'ActorName': 'Npc_Tulin_Sage', 'IsCheckLife': False, 'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
        GameSystemActor.EventWaitForDynamicSagePresence({'SageType': 4, 'IsWaitEnd': True})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void TouchSecretStone_Npc_Tulin_Sage_TouchSecretStone_Talk() {

    call SageOfWind_Sub003.SageOfWind_TouchSecretStone_Sub()

}

void TouchSecretStone_Npc_Tulin_Sage_TouchSecretStone_Near() {

    call SageOfWind_Sub003.TouchSecretStone_Npc_Tulin_Sage_TouchSecretStone_Near_Sub()

}

void SageOfWind_GrandFinale() {

    call SageOfWind_Sub003.SageOfWind_GrandFinale_Sub()

}

void SageOfWind_Ready() {
    Event80:

    call SageOfWind_Sub001.SageOfWind_Ready_Sub()

}

void MountainHut_Npc_HighMountain009_hut_Near() {

    call SageOfWind_Sub001.MountainHut_Npc_HighMountain009_hut_Near_Sub()

}

void MountainHut_Npc_HighMountain009_hut_Talk() {

    call SageOfWind_Sub001.MountainHut_Npc_HighMountain009_hut_Talk_Sub()

}

void Ready_Npc_Tulin_Sage_Ready_Near() {
    Event83:

    call SageOfWind_Sub001.Ready_Npc_Tulin_Sage_Ready_Near_Sub()

}

void GoToCave_Npc_HighMountain037_GoToCave_Near() {

    call SageOfWind_Sub001.GoToCave_Npc_HighMountain037_GoToCave_Near_Sub()

}

void GoToCave_Npc_HighMountain037_GoToCave_Talk() {

    call SageOfWind_Sub001.GoToCave_Npc_HighMountain037_GoToCave_Talk_Sub()

}

void IpponSugi_Npc_Tulin_Sage_Near() {

    call SageOfWind_Sub001.IpponSugi_Npc_Tulin_Sage_Near_Sub()

}

void IpponSugi_Npc_Tulin_Sage_Talk() {

    call SageOfWind_Sub001.IpponSugi_Npc_Tulin_Sage_Talk_Sub()

}

void SageOfWind_GetBack() {

    call SageOfWind_Sub001.SageOfWind_GetBack_Sub()

}

void SageOfWind_DefeatEnemy() {
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()

    call SageOfWind_Sub001.SageOfWind_DefeatEnemy_Sub()

}

void SageOfWind_GoToCave() {

    call SageOfWind_Sub001.SageOfWind_GoToCave_Sub()

}

void SageOfWind_CheckTerminal() {

    call SageOfWind_Sub002.SageOfWind_CheckTerminal_Sub()

}

void CheckTerminal_Npc_Tulin_Sage_DynamicGenerateSage_Talk() {

    call SageOfWind_Sub002.CheckTerminal_Npc_Tulin_Sage_DynamicGenerateSage_Talk_Sub()

}

void SageOfWind_GoToHebra() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call SageOfWind_Sub002.SageOfWind_GoToHebra_Sub()

}

void SageOfWind_GoDungeonAir() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call SageOfWind_Sub002.SageOfWind_GoDungeonAir_Sub()

}

void SageOfWind_TurnBack_Exe() {

    call SageOfWind_Sub002.SageOfWind_TurnBack_Exe_Sub()

}

void SageOfWind_GoToHebra_Area() {

    call SageOfWind_Sub002.SageOfWind_GoToHebra_Area_Sub()

}

void SageOfWind_GoToHebra2() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call SageOfWind_Sub002.SageOfWind_GoToHebra2_Sub()

}

void SageOfWind_GoToHebra3() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call SageOfWind_Sub002.SageOfWind_GoToHebra3_Sub()

}

void FoundTulin_Npc_Tulin_Sage_Talk() {

    call SageOfWind_Sub001.FoundTulin_Npc_Tulin_Sage_Talk_Sub()

}

void FoundTulin_Npc_Tulin_Sage_Near() {

    call SageOfWind_Sub001.FoundTulin_Npc_Tulin_Sage_Near_Sub0()

}

void NearActorsTalk() {
    goto Event80
}

void NearActorsNear() {
    goto Event83
}
