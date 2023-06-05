-------- EventFlow: LargeDungeonWind_OpenBosss --------

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch0]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch1]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch2]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch3]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch4]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch5]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerEnableAreaCulling', 'EventTriggerDisableAreaCulling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventNpcRitoLand', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Access() {
    GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'LargeDungeonWind_ClearTerminal'}) {
        SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False})

        fork {

            call AuthenticationCommon.Authentication()

        } {
            Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
            Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoLand({'LandingHeight': 2.0, 'FallSpped': 2.0, 'IsWaitEnd': True, 'FlagOnly': False, 'IsChangePhysicsSettingDynamic': False})
            Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }


        call GearOn()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'SageOfWind_BossBattle'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'LargeDungeonWind_OpenBossDoor', 'Index': -1})
        GameSystemActor.EventTriggerRequestAutoSave()
        GameSystemActor.EventTriggerDisableAreaCulling()
    } else {
        GameSystemActor.EventTriggerDisableAreaCulling()
        if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_SageOfWind', 'Value': 'CheckTerminal', 'Index': -1}) {
            SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False})

            call SageOfWind.SageOfWind_CheckTerminal()

        } else {
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0042'})
        }
    }
}

void Access_Alone() {

    call AuthenticationCommon.Failure()

}

void GearOn() {

    fork {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch0].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    } {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch1].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    } {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    } {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch3].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    } {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch4].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    } {
        DgnObj_LargeDungeonWind_HatchGear_A_01[FanAroundHatch5].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Open', 'IsWaitEnd': False})
    }

}
