-------- EventFlow: BreakawayFromSage --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTalkWithSpeakerName', 'EventTriggerRequestAutoSave', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerPlayerKeepRideOnGolem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventRequestSageBreakAway']
queries: ['EventQueryInputSageType', 'EventQueryIsSageInCamera']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventSetSageWarpPauseMask', 'EventResetSageWarpPauseMask']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: []
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveNoActorVoiceType']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerReserveChangeConnectionTimingAfterEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Tulin_Sage[BreakawayFromSagePause(Sage_Actor)]
entrypoint: BreakawayFromSagePause(Sage_Actor)
actions: ['EventTriggerParticipateEvent', 'EventSetSageWarpPauseMask', 'EventResetSageWarpPauseMask']
queries: []
params: None

Actor: Npc_Tulin_Sage[RemoveSage(Sage_Actor)]
entrypoint: RemoveSage(Sage_Actor)
actions: ['EventResetSageWarpPauseMask']
queries: []
params: None

Actor: Npc_Tulin_Sage[BreakawayFromSage(Sage_Actor)]
entrypoint: BreakawayFromSage(Sage_Actor)
actions: ['EventTriggerParticipateEvent', 'EventSetSageWarpPauseMask']
queries: []
params: None

void BreakawayNoticeFromSageWater() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSagePause({'SpeakerActor': 'Npc_Zora_Prince_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_00', 'SageType': 1, 'Sage_Actor': ActorIdentifier(name="Npc_Zora_Prince_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 179})


    call AutoSave()

}

void BreakawayFromSageWater() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage({'SpeakerActor': 'Npc_Zora_Prince_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_01', 'SageType': 1, 'Sage_Actor': ActorIdentifier(name="Npc_Zora_Prince_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 179})


    call RemoveSage({'SageType': 1, 'Sage_Actor': ActorIdentifier(name="Npc_Zora_Prince_Sage", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayWarpFromSageWater() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage({'SpeakerActor': 'Npc_Zora_Prince_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_02', 'SageType': 1, 'Sage_Actor': ActorIdentifier(name="Npc_Zora_Prince_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 179})

    EventSystemActor.EventTransition({'EventName': 'DmF_SY_WarpIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'PlayerStatus.Companion.Water.JoiningCondition', 'Index': -1, 'Value': 'Breakaway'})

    call AutoSave()

}

void BreakawayNoticeFromSageWind() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayNoticeFromSageWindSubFlow()


    call AutoSave()

}

void BreakawayFromSageWind() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSageWindSubFlow()


    call RemoveSage({'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayWarpFromSageWind() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayWarpFromSageWindSubFlow()

    EventSystemActor.EventTransition({'EventName': 'DmF_SY_WarpIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Breakaway'})

    call AutoSave()

}

void BreakawayNoticeFromSageFire() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSagePause({'SpeakerActor': 'Npc_Goron_Yunbo_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_20', 'SageType': 2, 'Sage_Actor': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 176})


    call AutoSave()

}

void BreakawayFromSageFire() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage({'SpeakerActor': 'Npc_Goron_Yunbo_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_21', 'SageType': 2, 'Sage_Actor': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 176})


    call RemoveSage({'SageType': 2, 'Sage_Actor': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayWarpFromSageFire() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage({'SpeakerActor': 'Npc_Goron_Yunbo_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_22', 'SageType': 2, 'Sage_Actor': ActorIdentifier(name="Npc_Goron_Yunbo_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 176})

    EventSystemActor.EventTransition({'EventName': 'DmF_SY_WarpIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.JoiningCondition', 'Value': 'Breakaway'})

    call AutoSave()

}

void BreakawayNoticeFromSageElectric() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSagePause({'SpeakerActor': 'Npc_Gerudo_Queen_Young', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_30', 'SageType': 3, 'VoiceType': 177, 'Sage_Actor': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayFromSageElectric() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage({'SpeakerActor': 'Npc_Gerudo_Queen_Young', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_31', 'SageType': 3, 'VoiceType': 177, 'Sage_Actor': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage")})


    call RemoveSage({'SageType': 3, 'Sage_Actor': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayWarpFromSageElectric() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_DungeonBossFindAgain', 'Index': -1}) {

        call BreakawayFromSage({'SpeakerActor': 'Npc_Gerudo_Queen_Young', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_35', 'SageType': 3, 'Sage_Actor': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage"), 'VoiceType': 177})

    } else {

        call BreakawayFromSage({'SpeakerActor': 'Npc_Gerudo_Queen_Young', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_32', 'SageType': 3, 'Sage_Actor': ActorIdentifier(name="Npc_Gerudo_Queen_Young", sub_name="DynamicGenerateSage"), 'VoiceType': 177})

    }
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_WarpIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Electric.JoiningCondition', 'Value': 'Breakaway'})

    call AutoSave()

}

void BreakawayNoticeFromSageSoul() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage2({'MessageId_000': 'EventFlowMsg/ChangeSageFollow:talk_40', 'MessageId_001': 'EventFlowMsg/ChangeSageFollow:talk_45', 'SpeakerActor': 'Npc_RaumiGolem_Sage'})


    call AutoSave()

}

void BreakawayFromSageSoul() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage3({'MessageId_000': 'EventFlowMsg/ChangeSageFollow:talk_41', 'MessageId_001': 'EventFlowMsg/ChangeSageFollow:talk_48', 'MessageId_002': 'EventFlowMsg/ChangeSageFollow:talk_49', 'SpeakerActor': 'Npc_RaumiGolem_Sage'})


    call RemoveSage({'SageType': 5, 'Sage_Actor': ActorIdentifier(name="Npc_RaumiGolem_Sage", sub_name="DynamicGenerateSage")})


    call AutoSave()

}

void BreakawayWarpFromSageSoul() {
    GameSystemActor.EventTriggerPlayerKeepRideOnGolem()

    call BreakawayFromSage3({'MessageId_000': 'EventFlowMsg/ChangeSageFollow:talk_42', 'MessageId_001': 'EventFlowMsg/ChangeSageFollow:talk_46', 'MessageId_002': 'EventFlowMsg/ChangeSageFollow:talk_47', 'SpeakerActor': 'Npc_RaumiGolem_Sage'})

    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventResetSageWarpPauseMask()
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_WarpIn', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Soul.JoiningCondition', 'Value': 'Breakaway'})

    call AutoSave()

}

void BreakawayFromSagePause() {
    Npc_Tulin_Sage[BreakawayFromSagePause(Sage_Actor)].EventTriggerParticipateEvent()
    Npc_Tulin_Sage[BreakawayFromSagePause(Sage_Actor)].EventSetSageWarpPauseMask()
    VoicePlayActor.EventReserveNoActorVoiceType({'IsWaitEnd': True, 'VoiceType': 'VoiceType'})
    switch ChallengeSystemActor.EventQueryInputSageType({'SageType': 'SageType'}) {
      case [0, 1, 2, 3, 5]:
        GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'MessageId', 'SpeakerActor': 'SpeakerActor'})
        Event73:
        Npc_Tulin_Sage[BreakawayFromSagePause(Sage_Actor)].EventResetSageWarpPauseMask()
      case 4:
        goto Event73
    }
}

void BreakawayNoticeFromSageWindSubFlow() {
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_IpponSugi_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_GetBack_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_DefeatEnemy_Exp'}) {
                Event10:

                call BreakawayFromSagePause({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_10', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            } else {

                call BreakawayFromSagePause({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_19', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            }
        } else {

            call BreakawayFromSagePause({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_15', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

        }
    } else {
        goto Event10
    }
}

void BreakawayFromSageWindSubFlow() {
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_IpponSugi_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_GetBack_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_DefeatEnemy_Exp'}) {
                Event11:

                call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_11', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            } else {

                call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_25', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            }
        } else {

            call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_16', 'SageType': 4, 'VoiceType': 181, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage")})

        }
    } else {
        goto Event11
    }
}

void BreakawayWarpFromSageWindSubFlow() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_IpponSugi_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_GetBack_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_DefeatEnemy_Exp'}) {
                Event12:

                call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_12', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            } else {

                call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_26', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

            }
        } else {

            call BreakawayFromSage({'SpeakerActor': 'Npc_Tulin_Sage', 'MessageId': 'EventFlowMsg/ChangeSageFollow:talk_17', 'SageType': 4, 'Sage_Actor': ActorIdentifier(name="Npc_Tulin_Sage", sub_name="DynamicGenerateSage"), 'VoiceType': 181})

        }
    } else {
        goto Event12
    }
}

void BreakawayFromSage3() {
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSetSageWarpPauseMask()
    VoicePlayActor.EventReserveNoActorVoiceType({'IsWaitEnd': True, 'VoiceType': 188})
    GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'MessageId_000', 'SpeakerActor': 'SpeakerActor'})
    GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'SpeakerActor': 'SpeakerActor', 'MessageId': 'MessageId_001'})
    GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'SpeakerActor': 'SpeakerActor', 'MessageId': 'MessageId_002'})
}

void BreakawayFromSage2() {
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventSetSageWarpPauseMask()
    VoicePlayActor.EventReserveNoActorVoiceType({'IsWaitEnd': True, 'VoiceType': 188})
    GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'MessageId_000', 'SpeakerActor': 'SpeakerActor'})
    GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'SpeakerActor': 'SpeakerActor', 'MessageId': 'MessageId_001'})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventResetSageWarpPauseMask()
}

void AutoSave() {
    GameSystemActor.EventTriggerRequestAutoSave()
}

void RemoveSage() {
    if !ChallengeSystemActor.EventQueryIsSageInCamera({'SageType': 'SageType'}) {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Tulin_Sage[RemoveSage(Sage_Actor)].EventResetSageWarpPauseMask()
        ChallengeSystemActor.EventRequestSageBreakAway({'SageType': 'SageType'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }
}

void BreakawayFromSage() {
    Npc_Tulin_Sage[BreakawayFromSage(Sage_Actor)].EventTriggerParticipateEvent()
    Npc_Tulin_Sage[BreakawayFromSage(Sage_Actor)].EventSetSageWarpPauseMask()
    VoicePlayActor.EventReserveNoActorVoiceType({'IsWaitEnd': True, 'VoiceType': 'VoiceType'})
    if ChallengeSystemActor.EventQueryInputSageType({'SageType': 'SageType'}) in [0, 1, 2, 3, 5] {
        GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'MessageId', 'SpeakerActor': 'SpeakerActor'})
    }
}
