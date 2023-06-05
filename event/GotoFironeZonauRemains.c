-------- EventFlow: GotoFironeZonauRemains --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientAssistant003_K1
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Kakariko002_01
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoGate001
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void IdentifiedLocation_Npc_AncientAssistant003_K1_Near() {

    call Npc_AncientAssistant003_K1.Near()

}

void IdentifiedLocation_Npc_AncientAssistant003_K1_Talk() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Npc_Kakariko002_01.EventTriggerParticipateEvent()
    Npc_HatenoGate001.EventTriggerParticipateEvent()
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'DecipherTheIithograph', 'ChallengeName': 'GotoFironeZonauRemains', 'IgnoreShowedTarget': False}) {
        Npc_AncientAssistant003_K1.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'IsConfront': False, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins_Talk01', 'Index': -1}) {
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0016', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0015', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventTriggerRequestAutoSave()
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZN_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        } else {
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0019', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event22:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins_Talk01', 'Index': -1, 'Value': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins', 'Index': -1}) {
        Npc_AncientAssistant003_K1.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins_Talk01', 'Index': -1}) {
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0013', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
                Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0014', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 21, 'ChoiceLabel2': 22, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0011', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0012', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
                Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0014', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event22
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Tauro', 'Index': -1}) {
        Event9:
        Npc_AncientAssistant003_K1.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0010', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant003_K1.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003_K1:talk0041', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Tauro', 'Index': 0, 'Value': True})
        goto Event9
    }
}

void IdentifiedLocation_Npc_HatenoGate001_Talk() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    Npc_Kakariko002_01.EventTriggerParticipateEvent()
    Npc_AncientAssistant003_K1.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins', 'Index': -1}) {
        Npc_HatenoGate001.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0023', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_HatenoGate001.EventQueryIsOnRecentTalkFlag() {
        Npc_HatenoGate001.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0022', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Npc_HatenoGate001', 'Index': -1}) {
        Event88:
        Npc_HatenoGate001.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0021', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0024', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Npc_HatenoGate001', 'Index': 0, 'Value': True})
        goto Event88
    }
}

void ZonauRemains_ArriveObservatory_Npc_HatenoGate001_ZonauRemains_Near() {

    call Dm_ZN_0062.Balloon01()

}

void ZonauRemains_ArriveObservatory_Npc_HatenoGate001_ZonauRemains_Talk() {
    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0062', 'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
}

void ZonauRemains_TalkResearcher_Npc_HatenoGate001_ZonauRemains_Near() {

    call Dm_ZN_0062.Balloon02()

}

void ZonauRemains_TalkResearcher_Npc_HatenoGate001_ZonauRemains_Talk() {

    call Dm_ZN_0062.Talk02()

}

void ZonauRemains_ArriveObservatory_Npc_AncientAssistant003_K1_ZonauRemain2_Near() {
    Event45:

    call Dm_ZN_0063.Balloon01()

}

void ZonauRemains_ArriveObservatory_Npc_AncientAssistant003_K1_ZonauRemain2_Talk() {
    Event48:
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0063'})
}

void ZonauRemains_TalkResearcher_Npc_AncientAssistant003_K1_ZonauRemain2_Near() {
    goto Event45
}

void ZonauRemains_TalkResearcher_Npc_AncientAssistant003_K1_ZonauRemain2_Talk() {
    goto Event48
}

void ZonauRemains_AppearsSkyIsland_Npc_HatenoGate001_ZonauRemains_Near() {

    call Dm_ZN_0062.Balloon03()

}

void ZonauRemains_AppearsSkyIsland_Npc_HatenoGate001_ZonauRemains_Talk() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Dm_ZN_0062.Talk03()

}

void ZonauRemains_AppearsSkyIsland_Npc_AncientAssistant003_K1_ZonauRemain2_Near() {

    call Dm_ZN_0063.Balloon02()

}

void ZonauRemains_AppearsSkyIsland_Npc_AncientAssistant003_K1_ZonauRemain2_Talk() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Dm_ZN_0063.Talk02()

}

void GotoFironeZonauRemains_Event_AppearsSkyIsland() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventTriggerRequestAutoSave()

    call Dm_ZN_0066.Branch00()

}

void DecipherTheIithograph_Npc_Kakariko002_01_Talk() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_AncientAssistant003_K1.EventTriggerParticipateEvent()
    Npc_HatenoGate001.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EnteredRingRuins', 'Index': -1}) {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckLower': False}) {

            call Npc_Kakariko002_01.Naked()

            Event84:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})


            call Npc_Kakariko002_01.Yiga()

            goto Event84
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckLower': False}) {

        call Npc_Kakariko002_01.Naked2()

        Event58:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Paya', 'Index': -1}) {
            Event82:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0004:talk_0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Kakariko002_01.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko002:Talk0152', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_AfterDm_ZN_0004_Paya', 'Index': -1, 'Value': True})
            goto Event82
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})


        call Npc_Kakariko002_01.Yiga()

        goto Event58
    }
}

void Ready_Npc_HatenoGate001_Talk() {

    call Npc_HatenoGate001.Talk()

}

void Ready_Npc_AncientAssistant003_K1_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0004:near_0000', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0004:near_0000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_AncientAssistant003_K1_Talk() {
    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0004', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Ready_Npc_Kakariko002_01_Talk() {
    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0004', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}
