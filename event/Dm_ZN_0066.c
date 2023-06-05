-------- EventFlow: Dm_ZN_0066 --------

Actor: Npc_AncientAssistant003_K1[ZonauRemain4]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker', 'EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoGate001[ZonauRemain3]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToObjectGreeting', 'EventTalk', 'EventNPCTurnToTarget', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerTalk', 'EventTriggerPlayerRequestLookAtTheFront', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventWait', 'EventPlayerWait', 'EventPlayerWarpToNearAnchor', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeOut', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: FldObj_OfferingStand_A_02[Dm_ZN_0066]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWeatherForFlowchart', 'Event_ResetWeatherForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_ZN_0066() {
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [657.0670166015625, 124.42040252685547, 2733.068115234375], 'UseDemoWait': True})
    Player.EventPlayerTurnAndLook({'Target': 0, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1, 'WorldPos': [675.2329711914062, 132.00770568847656, 2745.60498046875], 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventWorldManagerController.Event_ResetWeatherForFlowchart({'IsImmTrans': True})

    fork {
        Player.EventTriggerParticipateEvent()
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [664.1599731445312, 130.17999267578125, 2740.139892578125], 'AtVector': [666.77001953125, 133.55999755859375, 2742.320068359375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_HatenoGate001[ZonauRemain3].EventTriggerParticipateEvent()
        Npc_HatenoGate001[ZonauRemain3].EventTriggerBecomeSpeaker()
        Npc_HatenoGate001[ZonauRemain3].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_AncientAssistant003_K1[ZonauRemain4].EventTriggerParticipateEvent()
        Npc_AncientAssistant003_K1[ZonauRemain4].EventTriggerBecomeSpeaker()
        Npc_AncientAssistant003_K1[ZonauRemain4].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'InstanceName': 'Dm_ZN_0066', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [653.9600219726562, 125.47000122070312, 2732.8798828125], 'AtVector': [658.010009765625, 127.2699966430664, 2734.7099609375], 'TargetFovy': 50.0, 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

    call Branch01()

}

void Branch01() {

    fork {
        Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_000', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'WorldPos': [794.8834228515625, 127.04129791259766, 2787.373046875], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [655.9442749023438, 124.42040252685547, 2732.72998046875], 'UseDemoWait': True})
    Npc_HatenoGate001[ZonauRemain3].EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 3, 'IsWaitEnd': True})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 10, 'InstanceName': 'ZonauRemain4', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': False})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_AncientAssistant003_K1', 'InstanceName': 'ZonauRemain4', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [653.75, 125.75, 2733.9599609375], 'AtVector': [658.989990234375, 126.19999694824219, 2732.580078125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_AncientAssistant003_K1', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_HatenoGate001', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    GameSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call Branch02()

}

void Branch02() {

    fork {
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        Player.EventTriggerPlayerRequestLookAtTheFront()
    } {
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    }

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_ZonauRemains_ArriveObservatory_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_ZonauRemains_TalkResearcher_Exp'}) {
            Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_001', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_002', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event52:
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'TalkingL', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_013', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event36:

            call Blanch03()

        } else {
            Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_011', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_012', 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event52
        }
    } else {
        Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_010', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_002', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'TalkingL', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_013', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event36
    }
}

void Blanch03() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientAssistant003_K1', 'Actor1InstanceName': 'ZonauRemain4', 'PosVector': [-0.20999999344348907, 1.9600000381469727, 3.1600000858306885], 'AtVector': [-1.340000033378601, 1.559999942779541, 0.05999999865889549], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_HatenoGate001[ZonauRemain3].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'IsConfront': False, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'Npc_AncientAssistant003_K1', 'InstanceName': 'ZonauRemain4', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': False, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_003', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_004', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_005', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_006', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_HatenoGate001[ZonauRemain3].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_AncientAssistant003_K1', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_HatenoGate001', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    }

    Npc_AncientAssistant003_K1[ZonauRemain4].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_HatenoGate001', 'IsConfront': False, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'InstanceName': 'ZonauRemain3', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_007', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoGate001[ZonauRemain3].EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'IsConfront': False, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': 'Npc_AncientAssistant003_K1', 'InstanceName': 'ZonauRemain4', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_008', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain4].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_009', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_017', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoGate001[ZonauRemain3].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0066:Talk_018', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

    call Blanch04()

}

void Blanch04() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_WentBack_BaseCamp'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_WentBackCannon'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerTurnAndLook({'Target': 0, 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [658.780029296875, 124.41999816894531, 2733.739990234375], 'TurnFaceControlType': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()

    call Blanch05()

}

void Blanch05() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_OpenedTheDoor', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfSoul_HatchOpened', 'Index': -1}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GotoFironeZonauRemains', 'StepName': 'Complete', 'IsWaitEnd': True})
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GotoFironeZonauRemains', 'StepName': 'ZonauRemains_TouchTheHead', 'IsWaitEnd': True})
        }
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'ZonauRemains_OpenedTheDoor', 'ChallengeName': 'GotoFironeZonauRemains', 'IsWaitEnd': True})
    }
}

void Branch00() {
    FldObj_OfferingStand_A_02[Dm_ZN_0066].EventTriggerParticipateEvent()

    fork {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        FldObj_OfferingStand_A_02[Dm_ZN_0066].EventPlayAS({'ASName': 'Light_On', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        FldObj_OfferingStand_A_02[Dm_ZN_0066].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Light_On_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call Common.AirStartUP_Player()

    Player.EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ZN_0065'})
    FldObj_OfferingStand_A_02[Dm_ZN_0066].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Light_Off', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Shrine01', 'UseDemoWait': True})
    Player.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [1365.2979736328125, 534.0, 3281.1640625], 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.10999999940395355, 1.1799999475479126, -2.4000000953674316], 'AtVector': [0.0, 1.6799999475479126, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ZonauRemains_AppearsSkyIsland'})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        EventWorldManagerController.Event_SetWeatherForFlowchart({'IsImmTrans': True, 'WeatherType': 0})
        EventSystemActor.EventWait({'Frames': 2, 'IsWaitEnd': True})
        Event95:
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0066'})
    } else {
        goto Event95
    }
}
