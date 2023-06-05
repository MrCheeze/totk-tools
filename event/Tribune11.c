-------- EventFlow: Tribune11 --------

Actor: Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerLookAtObject', 'EventAIScheduleMoveToAnchor', 'EventTriggerChangeEmotion', 'EventWait']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_LanayruRoad_AncientAssistant[Cavefront]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerLookAtObject', 'EventWait', 'EventTriggerChangeEmotion', 'EventAIScheduleMoveToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter[Cavefront_New]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_EventStarter[Cavefront]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_EventStarter[Toribune11_Comp_Ra]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_RidgeRoad_AncientAssistant_StableHostel[Toribune11_Comp]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerRollbackChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerMove', 'EventGoOffstageForUser', 'EventTriggerPlayerLookAtObject', 'EventPlayerHorseGetOff', 'EventPlayerClimbOff', 'EventTriggerPlayerClimbOff', 'EventPlayerUnequip', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AkkareRoad_AncientAssistant
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerLookAtObject']
queries: ['EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor', 'EventResetGimmick', 'EventTriggerCloseSimpleInfo']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerChangePouch', 'EventTriggerClearPouch']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCampSoldier_Hylia004_Pants
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Rito_Postman_013
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_VolcanicRoad_AncientAssistant_StableHostel
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Attacked_007_Pants
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Attacked_003_Pants
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventHorseWarpToNearAnchor', 'EventGoOffstageForUser', 'EventDoNothing']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Sanroku_LittleBird_01]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Sanroku_LittleBird_02]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Sanroku_LittleBird_03]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Sanroku_LittleBird_04]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

void Ready_Npc_Rito_Postman_013_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Tribune11:Near0001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
}

void Ready_Npc_Rito_Postman_013_Talk() {

    fork {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {

        call Order_Flee_LittleBird()

    }

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_DeathMountainHatago_Move()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_DeathMountainHatago_Return()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0082', 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_DeathMountainHatago_Move01()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0081', 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_DeathMountainHatago_Return()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0061', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if Player.EventQueryCheckPlayerState({'State': 0}) {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0057', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Tribune11', 'StepName': 'Step1', 'IsWaitEnd': True})
}

void Camera_DeathMountainHatago_Move() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_AkkareRoad_AncientAssistant.EventTriggerParticipateEvent()
    } {
        Npc_BaseCampSoldier_Hylia004_Pants.EventTriggerParticipateEvent()
    } {
        Npc_Attacked_007_Pants.EventTriggerParticipateEvent()
    }


    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': True, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 30, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2583.419921875, 256.44000244140625, -1153.3199462890625], 'AtVector': [2587.110107421875, 255.77000427246094, -1149.1700439453125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_DeathMountainHatago_Return() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': False, 'ActorName': 'Npc_Rito_Postman_013', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

}

void Step1_Npc_Rito_Postman_013_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Tribune11:Near0001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
}

void Step1_Npc_Rito_Postman_013_Talk() {
    GameSystemActor.EventTriggerRequestAutoSave()
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        fork {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 3})

        } {

            call Order_Flee_LittleBird()

        }

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0106', 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Move01()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0081', 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Return()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0061', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        fork {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        } {

            call Order_Flee_LittleBird()

        }

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Move()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Return()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0082', 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Move01()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0081', 'IsNotOpenIfSkipedMostRecent': False})

        call Camera_DeathMountainHatago_Return()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0061', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if Player.EventQueryCheckPlayerState({'State': 0}) {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0057', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Step1_Npc_AkkareRoad_AncientAssistant_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Tribune11:Near0002', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_AkkareRoad_AncientAssistant_Talk() {
    Event42:

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

    switch Npc_AkkareRoad_AncientAssistant.EventQueryCheckTerrorLevel() {
      case 0:
        Event43:
        Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0008', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 21, 'ASName': 'Act_Karate', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_AkkareRoad_AncientAssistant.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            GameSystemActor.EventTriggerRequestAutoSave()
            if !Player.EventQueryCheckPlayerState({'State': 0}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Event45:
                    Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0009', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'FaceControlType': 0, 'IsConfront': True, 'IsReleaseThreaten': False, 'WorldPos': [2589.0, 253.0, -1118.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_AkkareRoad_AncientAssistant.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                    Npc_AkkareRoad_AncientAssistant.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'ActorName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
                    Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Tribune11:talk0095', 'IsNotOpenIfSkipedMostRecent': False})
                } else
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1]:
                    Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Tribune11:talk0101', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event45
                  case [2, 3, 4]:
                    Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Tribune11:talk0100', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event45
                  case [5, 6, 7]:
                    Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Tribune11:talk0102', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event45
                }
            } else
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Tribune11:talk0103', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0063', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'FaceControlType': 0, 'IsConfront': True, 'IsReleaseThreaten': False, 'WorldPos': [2589.0, 253.0, -1118.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } else {
            Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0084', 'ASName': 'Act_Karate', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
        }
      case [1, 2, 3, 4, 5]:
        Npc_AkkareRoad_AncientAssistant.EventPlayAS({'ASName': 'Act_Karate', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
        goto Event43
    }
}

void Camera_DeathMountainHatago_Move01() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'WorldPos': [2555.0, 253.0, -1151.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Rito_Postman_013.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'WorldPos': [2555.0, 253.0, -1163.0], 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 30, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2573.89990234375, 256.80999755859375, -1151.550048828125], 'AtVector': [2568.18994140625, 255.77000427246094, -1152.22998046875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Step2_Npc_AkkareRoad_AncientAssistant_Talk() {
    goto Event42
}

void Step2_Npc_Rito_Postman_013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0012', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if Player.EventQueryCheckPlayerState({'State': 0}) {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 4, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/Tribune11:talk0064', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step3_Npc_NewVolcanicRoad_AncientAssistant_Near() {
    Event81:
    Npc_EventStarter[Cavefront_New].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Tribune11:Near0006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
}

void Step3_Npc_NewVolcanicRoad_AncientAssistant_Talk() {
    Event87:

    call Tribune11_CaveFront_New()

}

void Step3_Npc_VolcanicRoad_AncientAssistant_Near() {
    Event90:
    Npc_EventStarter[Cavefront].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Tribune11:Near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
}

void Step3_Npc_VolcanicRoad_AncientAssistant_Talk() {
    Event82:

    call Tribune11_CaveFront()

}

void Step3_Npc_Rito_Postman_013_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0079', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0023', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0064', 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune11_CaveFront() {
    Event83:

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker1InstanceName': 'Cavefront_New', 'Spearker2ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker2InstanceName': 'Cavefront', 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Cavefront_New"), 'Actor2': ActorIdentifier(name="Npc_LanayruRoad_AncientAssistant", sub_name="Cavefront")})

    GameSystemActor.EventTriggerRequestAutoSave()
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_GuardWait_Naked', 'IsWaitEnd': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0088', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0089', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0091', 'ChoiceNumber': 1, 'ChoiceLabel1': 7, 'IsNotOpenIfSkipedMostRecent': False})
        Event84:

        fork {
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0092', 'ASName': 'TalkSurprised', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 4})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
        }


        fork {
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        } {
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Tribune11_Step4_interruption', 'Index': -1}) {
            Event96:
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 15, 'MessageId': 'EventFlowMsg/Tribune11:talk0069', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0024', 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0026', 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            Event106:
            if !GameSystemActor.EventQueryTalkChoice2() {

                fork {
                    if !Player.EventQueryCheckPlayerState({'State': 0}) {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0028', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Tribune11:talk0071', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } {
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 20})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
                }

                if !GameSystemActor.EventQueryTalkChoice2() {
                    if !Player.EventQueryCheckPlayerState({'State': 0}) {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Tribune11:talk0030', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Tribune11:talk0072', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Event240:
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    PouchSystemActor.EventTriggerChangePouch({'ChangeType': 1})
                    GameSystemActor.EventTriggerCloseSimpleInfo()
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                    fork {
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
                    } {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
                    }

                    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
                        Event501:
                        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2278.174072265625, 264.35101318359375, -1517.0150146484375], 'UseDemoWait': True})
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2274.909912109375, 265.4410095214844, -1518.91796875], 'Target': 2, 'FaceControlType': 1, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2277.05908203125, 265.4410095214844, -1520.1610107421875], 'Target': 2, 'FaceControlType': 1, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Player.EventPlayerTurnAndLook({'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'Target': 0, 'TurnFaceControlType': 0, 'WorldPos': [2275.85498046875, 264.51300048828125, -1519.6300048828125], 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [2281.330078125, 266.760009765625, -1512.8599853515625], 'AtVector': [2277.81005859375, 266.30999755859375, -1517.239990234375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune11_CaveWeaponRevive', 'Value': True})
                        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'InstanceName': 'Cavefront'})
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0031', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                        Player.EventTriggerPlayerLookAtObject({'InstanceName': 'Cavefront_New', 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'TurnFaceControlType': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0032', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 0, 'FaceControlType': 0, 'WorldPos': [2274.751953125, 264.9360046386719, -1518.35205078125], 'IsWaitEnd': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        } {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                            Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 0, 'FaceControlType': 0, 'WorldPos': [2276.777099609375, 264.9360046386719, -1519.862060546875], 'IsWaitEnd': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        }

                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Tribune11', 'StepName': 'Step4'})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    } else {
                        Player.EventPlayerClimbOff({'IsWaitEnd': True})
                        goto Event501
                    }
                } else {

                    fork {
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventWait({'IsWaitEnd': True, 'Frames': 5})
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
                    } {
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0029', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    }

                    Event193:
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'FaceControlType': 0, 'ActorName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1520.010009765625], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1520.0059814453125], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                }
            } else {
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'InstanceName': 'Cavefront', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0027', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event193
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            goto Event96
        } else
        if !Player.EventQueryCheckPlayerState({'State': 0}) {
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0022', 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0068', 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0024', 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0025', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0026', 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event106
    } else {
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_GuardWait_Naked', 'IsWaitEnd': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0020', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0021', 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0096', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerLookAtObject({'Target': 3, 'InstanceName': 'Cavefront', 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0090', 'ChoiceLabel1': 7, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event84
    }
}

void Tribune11_CaveFront_New() {
    goto Event83
}

void Step4_Npc_NewVolcanicRoad_AncientAssistant_Cavefront_New_Talk() {

    call Tribune11_CaveFront_New1()

}

void Step4_Npc_VolcanicRoad_AncientAssistant_Cavefront_Talk() {

    call Tribune11_CaveFront_New1()

}

void Tribune11_CaveFront_New1() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 3, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker1InstanceName': 'Cavefront_New', 'Spearker2ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker2InstanceName': 'Cavefront', 'Actor1': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Cavefront_New"), 'Actor2': ActorIdentifier(name="Npc_LanayruRoad_AncientAssistant", sub_name="Cavefront")})

    Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'WorldPos': [2276.864013671875, 265.4410095214844, -1516.0059814453125], 'ActorName': '', 'IsWaitEnd': True, 'FaceControlType': 0, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0033', 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0093', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0029', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0036', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        PouchSystemActor.EventTriggerChangePouch({'ChangeType': 0})
        PouchSystemActor.EventTriggerClearPouch({'ClearType': 1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Tribune11_Step4_interruption', 'Index': -1, 'Value': True})
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
            Event409:
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2281.25390625, 262.5060119628906, -1512.8070068359375], 'UseDemoWait': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 3, 'KeepTalkWait': True, 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'InstanceName': 'Cavefront', 'OffsetBase': 0})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'FaceControlType': 0, 'ActorName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1518.0059814453125], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_CaveWeaponRevive'})
            GameSystemActor.EventTriggerCloseSimpleInfo()
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Tribune11:talk0097', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1520.0059814453125], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune11_Enemy01', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy02'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy03'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy04'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy05'})
            ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Tribune11', 'ChallengeStep': 'Step1', 'IsIgnoreChallengeProgressUI': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
            goto Event409
        }
    } else {
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0032', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step5_Npc_NewVolcanicRoad_AncientAssistant_Cavefront_New_Talk() {

    call Tribune11_CaveFront_New2()

}

void Step5_Npc_VolcanicRoad_AncientAssistant_Cavefront_Talk() {

    call Tribune11_CaveFront_New2()

}

void Tribune11_CaveFront_New2() {
    Event452:
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 5}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
        Event121:

        call InitTalk.InitTalk_Pair({'Arg_Turn': 3, 'Actor1': ActorIdentifier(name="Npc_LanayruRoad_AncientAssistant", sub_name="Cavefront"), 'Actor2': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Cavefront_New"), 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker1InstanceName': 'Cavefront', 'Spearker2ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker2InstanceName': 'Cavefront_New'})

        Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'WorldPos': [2276.864013671875, 265.4410095214844, -1516.0059814453125], 'ActorName': '', 'IsWaitEnd': True, 'FaceControlType': 0, 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 16, 'MessageId': 'EventFlowMsg/Tribune11:talk0037', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event125:
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0038', 'ChoiceLabel1': 17, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 17, 'MessageId': 'EventFlowMsg/Tribune11:talk0039', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventTriggerPlayerLookAtObject({'InstanceName': 'Cavefront_New', 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'TurnFaceControlType': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 16, 'MessageId': 'EventFlowMsg/Tribune11:talk0040', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            PouchSystemActor.EventTriggerChangePouch({'ChangeType': 0})
            PouchSystemActor.EventTriggerClearPouch({'ClearType': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune11_Step5_Comp'})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameSystemActor.EventTriggerCloseSimpleInfo()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Road_034_GenerationManagement', 'Value': False, 'Index': -1})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Tribune11', 'StepName': 'Step6'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event121
    }
}

void Step6_Npc_Rito_Postman_013_Talk() {
    Event199:
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Tribune11_Comp'})
}

void Step6_Npc_VolcanicRoad_AncientAssistant_Toribune11_Comp_Vo_Talk() {
    goto Event199
}

void Step6_Npc_VolcanicRoad_AncientAssistant_Toribune11_Comp_Vo_Near() {
    ;
}

void Step6_Npc_NewVolcanicRoad_AncientAssistant_Toribune11_Comp_NewVo_Talk() {
    goto Event199
}

void Step6_Npc_RidgeRoad_AncientAssistant_Talk() {
    goto Event199
}

void Step6_Npc_LanayruRoad_AncientAssistant_Toribune11_Comp_Ra_Talk() {
    goto Event199
}

void Step6_Npc_AkkareRoad_AncientAssistant_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Tribune11:Near0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True, 'IsChallenge': True})
}

void Step6_Npc_AkkareRoad_AncientAssistant_Talk() {
    goto Event199
}

void Tribune11_Comp() {

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_Rito_Postman_013', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker2InstanceName': 'Toribune11_Comp_NewVo', 'Spearker3ActorName': 'Npc_AkkareRoad_AncientAssistant', 'Spearker3InstanceName': '', 'Spearker4ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'Spearker4InstanceName': 'Toribune11_Comp', 'Actor1': ActorIdentifier(name="Npc_Rito_Postman_013"), 'Actor2': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Toribune11_Comp_NewVo"), 'Actor3': ActorIdentifier(name="Npc_RidgeRoad_AncientAssistant_StableHostel", sub_name="Toribune11_Comp"), 'Actor4': ActorIdentifier(name="Npc_AkkareRoad_AncientAssistant"), 'Arg_Turn': 0})


    fork {
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventTriggerParticipateEvent()
    } {
        Npc_Attacked_003_Pants.EventTriggerParticipateEvent()
    } {
        Npc_Attacked_007_Pants.EventTriggerParticipateEvent()
    } {
        Npc_BaseCampSoldier_Hylia004_Pants.EventTriggerParticipateEvent()
    } {
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventTriggerParticipateEvent()
    }


    fork {
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0041', 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Toribune11_Comp_NewVo', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Rito_Postman_013.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0052', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_BaseCampSoldier_Hylia004_Pants.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_RidgeRoad_AncientAssistant_StableHostel[Toribune11_Comp].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Attacked_007_Pants.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Attacked_003_Pants.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0042', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventCamera.EventTriggerCameraSavePoint()

    call Npc_RidgeRoad_AncientAssistant_BustUpCam()


    call Npc_RidgeRoad_AncientAssistant_BustUpCam_retarn()


    fork {
        Npc_Rito_Postman_013.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'InstanceName': 'Toribune11_Comp', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Attacked_007_Pants.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Attacked_003_Pants.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_BaseCampSoldier_Hylia004_Pants.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'InstanceName': 'Toribune11_Comp', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Speaker4SetType': 1, 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker4InstanceName': '', 'Spearker3ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker1ActorName': 'Npc_AkkareRoad_AncientAssistant', 'Spearker2ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker3InstanceName': 'Toribune11_Comp_Ra', 'Spearker4ActorName': 'Npc_Rito_Postman_013', 'Spearker2InstanceName': 'Toribune11_Comp_NewVo'})
    }


    fork {
        Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_RidgeRoad_AncientAssistant_StableHostel[Toribune11_Comp].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'IsWaitEnd': True, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_RidgeRoad_AncientAssistant_StableHostel[Toribune11_Comp].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0046', 'NotPlayLipSyncAnim': False, 'ASName': 'Surprised', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0047', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        Npc_AkkareRoad_AncientAssistant.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        Npc_Attacked_003_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        Npc_BaseCampSoldier_Hylia004_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        Npc_Attacked_007_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
        Npc_Rito_Postman_013.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Surprised'})
    }

    Npc_AkkareRoad_AncientAssistant.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'IsWaitEnd': True, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Toribune11_Comp_NewVo', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0048', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AkkareRoad_AncientAssistant.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0099', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    } {
        Npc_BaseCampSoldier_Hylia004_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_BaseCampSoldier_Hylia004_Pants.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    } {
        Npc_Attacked_007_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_Attacked_007_Pants.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'IsWaitEnd': True, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Rito_Postman_013.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
        Npc_Rito_Postman_013.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
        Npc_Attacked_003_Pants.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
        Npc_Attacked_003_Pants.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_AkkareRoad_AncientAssistant', 'InstanceName': '', 'ResetArriveTransformFixed': False})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune11_AncinetAssistantDelete'})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'HorseWarp_Tribune11Clear'})
        Event483:
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2591.653076171875, 253.49099731445312, -1162.7030029296875], 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Rito_Postman_013', 'InstanceName': '', 'OffsetBase': 0})
        Npc_Rito_Postman_013.EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'FaceControlType': 1, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Rito_Postman_013', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Rito_Postman_013.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0050', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call TribuneReward.GetReward_TribuneChallenge({'Npc_EventStarter': ActorIdentifier(name="Npc_Rito_Postman_013")})

        Npc_Rito_Postman_013.EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0051', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [1.7200000286102295, 1.5700000524520874, 3.7699999809265137], 'AtVector': [-1.3300000429153442, 1.659999966621399, 0.20999999344348907], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Rito_Postman_013', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
                LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            }
        }

        Npc_Rito_Postman_013.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk_Salabird', 'MessageId': 'EventFlowMsg/Tribune11:talk0075', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Rito_Postman_013.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk_Salabird_Ed', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune11_PostmanDelete'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune11_Enemy01', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy02'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy03'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy04'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune11_Enemy05'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Road_034_GenerationManagement', 'Value': True, 'Index': -1})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Tribune11', 'StepName': 'Complete'})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event483
    }
}

void Step3_Npc_AkkareRoad_AncientAssistant_Talk() {
    goto Event42
}

void Step4_Step5_ExitErea() {

    call Common.AirStartUP_Player()

    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'FaceControlType': 0, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0053', 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
        Event515:
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2277.69091796875, 264.51300048828125, -1517.447998046875], 'UseDemoWait': True})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'KeepTalkWait': True, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'OffsetBase': 0})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventAIScheduleMoveToAnchor({'AnchorType': 2, 'IsAlignAnchorPos': True, 'InstanceName': 'Cavefront', 'IsWaitEnd': True, 'ASName': '', 'IsTurnToAnchorRot': False, 'DesiredGear': 1, 'ActionType': 0, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventAIScheduleMoveToAnchor({'AnchorType': 2, 'InstanceName': 'Cavefront_New', 'IsAlignAnchorPos': True, 'IsWaitEnd': True, 'ASName': '', 'IsTurnToAnchorRot': False, 'DesiredGear': 1, 'ActionType': 0, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
        Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune11_Step4_Comp'}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [2281.260009765625, 266.19000244140625, -1513.6700439453125], 'AtVector': [2277.68994140625, 266.30999755859375, -1517.449951171875], 'TargetFovy': 50.0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0054', 'ChoiceLabel2': 20, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 1, 'ChoiceLabel1': 16, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Step5_ExitArea02()

            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [2281.659912109375, 266.1099853515625, -1513.219970703125], 'AtVector': [2278.300048828125, 265.9700012207031, -1516.780029296875], 'TargetFovy': 40.0})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0054', 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event515
    }
}

void Before_Step3_CaveIn() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'Type': 5, 'IsRidingAny': False}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Tribune11_Step3_CaveInChack', 'Index': -1, 'Value': True})
        Event508:
        Player.EventTriggerPlayerClimbOff()
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune11_IsAfter_Ready_Exp'}) {

            call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker1InstanceName': 'Cavefront_New', 'Spearker2ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker2InstanceName': 'Cavefront', 'Actor1': ActorIdentifier(name="Npc_LanayruRoad_AncientAssistant", sub_name="Cavefront"), 'Actor2': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Cavefront_New")})

            GameSystemActor.EventTriggerRequestAutoSave()
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 2})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 2})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_GuardWait_Naked', 'IsWaitEnd': False})
            Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_GuardWait_Naked', 'IsWaitEnd': False})
            if !Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventQueryIsOnRecentTalkFlag() {
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0088', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0089', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0091', 'ChoiceNumber': 1, 'ChoiceLabel1': 7, 'IsNotOpenIfSkipedMostRecent': False})
                Event233:

                fork {
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0092', 'IsAnimeDriven': False, 'ASName': 'TalkSurprised', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                } {
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 4})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'ASName': 'Surprised', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
                }


                fork {
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                } {
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                }

                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Tribune11_Step4_interruption', 'Index': -1}) {
                    Event359:
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 15, 'MessageId': 'EventFlowMsg/Tribune11:talk0069', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0024', 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0026', 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                    Event365:
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        fork {
                            if !Player.EventQueryCheckPlayerState({'State': 0}) {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0028', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Tribune11:talk0071', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } {
                            Npc_LanayruRoad_AncientAssistant[Cavefront].EventWait({'IsWaitEnd': True, 'Frames': 20})
                            Npc_LanayruRoad_AncientAssistant[Cavefront].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
                            Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
                        }

                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !Player.EventQueryCheckPlayerState({'State': 0}) {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Tribune11:talk0030', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Tribune11:talk0030', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                            }

                            call AreaInPlayer()

                        } else {

                            fork {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventWait({'IsWaitEnd': True, 'Frames': 5})
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
                            } {
                                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0029', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Tribune11:talk0097', 'IsNotOpenIfSkipedMostRecent': False})
                            }

                            Event372:

                            fork {
                                Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1520.0059814453125], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            } {
                                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'FaceControlType': 0, 'ActorName': '', 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [2276.864013671875, 265.4410095214844, -1520.0059814453125], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            }

                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune11_Step3_CaveInChack'}) {
                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Tribune11_Step3_CaveInChack', 'Value': False, 'Index': -1})
                                Event571:
                                Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2281.90087890625, 262.09600830078125, -1512.8719482421875], 'UseDemoWait': True})
                                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Cavefront_New', 'TurnFaceControlType': 3, 'KeepTalkWait': True, 'OffsetBase': 0})
                                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                                EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                            } else
                            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                                LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
                                goto Event571
                            } else {
                                Player.EventPlayerClimbOff({'IsWaitEnd': True})
                                Player.EventPlayerMove({'IsWaitEnd': True, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'MoveSpeed': 0.5, 'DecSpeedDistance': 1.0, 'WorldPos': [2281.25390625, 262.5060119628906, -1512.8070068359375]})
                            }
                        }
                    } else {
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Tribune11:talk0097', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'Target': 3, 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'InstanceName': 'Cavefront', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0027', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event372
                    }
                } else
                if !Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventQueryIsOnRecentTalkFlag() {
                    goto Event359
                } else
                if !Player.EventQueryCheckPlayerState({'State': 0}) {
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0022', 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0068', 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceLabel1': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0024', 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0025', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0026', 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event365
            } else {
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0020', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Tribune11:talk0021', 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'InstanceName': 'Cavefront_New', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_LanayruRoad_AncientAssistant[Cavefront].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 7, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0096', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTriggerLookAtObject({'Target': 3, 'InstanceName': 'Cavefront', 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune11:talk0090', 'ChoiceLabel1': 7, 'ChoiceNumber': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event233
            }
        } else {

            call InitTalk.InitTalk_Pair({'Arg_Turn': 3, 'Arg_Greeting': 3, 'Actor1': ActorIdentifier(name="Npc_LanayruRoad_AncientAssistant", sub_name="Cavefront"), 'Actor2': ActorIdentifier(name="Npc_NewVolcanicRoad_AncientAssistant", sub_name="Cavefront_New"), 'Spearker1ActorName': 'Npc_LanayruRoad_AncientAssistant', 'Spearker1InstanceName': 'Cavefront', 'Spearker2ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'Spearker2InstanceName': 'Cavefront_New'})

            Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0055', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
                Event488:
                Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [2281.90087890625, 262.09600830078125, -1512.8719482421875], 'UseDemoWait': True})

                fork {
                    Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NewVolcanicRoad_AncientAssistant', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Cavefront_New', 'TurnFaceControlType': 3, 'KeepTalkWait': True, 'OffsetBase': 0})
                } {
                    Npc_LanayruRoad_AncientAssistant[Cavefront].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 2, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                }

                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_NewVolcanicRoad_AncientAssistant[Cavefront_New].EventTalk({'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 8, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Tribune11:talk0058', 'ChoiceNumber': 0, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Player.EventPlayerClimbOff({'IsWaitEnd': True})
                goto Event488
            }
        }
    } else {
        goto Event508
    }
}

void Step6_Npc_Attacked_007_Pants_Talk() {
    goto Event199
}

void Step6_Npc_Attacked_003_Pants_Talk() {
    goto Event199
}

void Step6_Npc_BaseCampSoldier_Hylia004_Pants_Talk() {
    goto Event199
}

void Step6_Npc_LanayruRoad_AncientAssistant_Toribune11_Comp_Ra_Near() {
    Npc_EventStarter[Toribune11_Comp_Ra].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Tribune11:Near0009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True, 'IsChallenge': True})
}

void Step1_Npc_NewVolcanicRoad_AncientAssistant_Near() {
    goto Event81
}

void Step1_Npc_NewVolcanicRoad_AncientAssistant_Talk() {
    goto Event87
}

void Step1_Npc_VolcanicRoad_AncientAssistant_Near() {
    goto Event90
}

void Step1_Npc_VolcanicRoad_AncientAssistant_Talk() {
    goto Event82
}

void Step2_Npc_NewVolcanicRoad_AncientAssistant_Near() {
    goto Event81
}

void Step2_Npc_NewVolcanicRoad_AncientAssistant_Talk() {
    goto Event87
}

void Step2_Npc_VolcanicRoad_AncientAssistant_Near() {
    goto Event90
}

void Step2_Npc_VolcanicRoad_AncientAssistant_Talk() {
    goto Event82
}

void Step5_ExitErea() {

    call Common.AirStartUP_Player()

    goto Event452
}

void AreaInPlayer() {
    goto Event240
}

void Step5_ExitArea02() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': False, 'ActorFileName': '', 'Type': 5}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseWarp', 'IsWaitEnd': True})
        Event521:
        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_LanayruRoad_AncientAssistant', 'InstanceName': 'Cavefront'})
        goto Event125
    } else {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
        goto Event521
    }
}

void Order_Flee_LittleBird() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive01', 'Index': -1}) {
        Animal_LittleBird_G[Sanroku_LittleBird_01].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive02', 'Index': -1}) {
        Animal_LittleBird_G[Sanroku_LittleBird_02].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive03', 'Index': -1}) {
        Animal_LittleBird_G[Sanroku_LittleBird_03].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive04', 'Index': -1}) {
        Animal_LittleBird_G[Sanroku_LittleBird_04].EventTriggerQuadrupedCommonSetFlee()
    }
}

void Npc_RidgeRoad_AncientAssistant_BustUpCam() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'Actor1InstanceName': 'Toribune11_Comp', 'PosVector': [0.3400000035762787, 1.4800000190734863, 1.2799999713897705], 'TargetFovy': 51.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-0.4339999854564667, 1.2400000095367432, -1.4249999523162842], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
    } {
        if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
            LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }
    }


    fork {
        Npc_RidgeRoad_AncientAssistant_StableHostel[Toribune11_Comp].EventTalk({'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceLabel2': 14, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 18, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune11:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Rito_Postman_013.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'InstanceName': 'Toribune11_Comp', 'ResetArriveTransformFixed': False})
        Npc_LanayruRoad_AncientAssistant[Toribune11_Comp_Ra].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
    } {
        Npc_VolcanicRoad_AncientAssistant_StableHostel.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'InstanceName': 'Toribune11_Comp', 'ResetArriveTransformFixed': False})
        Npc_Attacked_007_Pants.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
    } {
        Npc_NewVolcanicRoad_AncientAssistant[Toribune11_Comp_NewVo].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
        Npc_BaseCampSoldier_Hylia004_Pants.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
    } {
        Npc_Attacked_003_Pants.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
        Npc_AkkareRoad_AncientAssistant.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Toribune11_Comp', 'ActorName': 'Npc_RidgeRoad_AncientAssistant_StableHostel', 'ResetArriveTransformFixed': False})
    }

}

void Npc_RidgeRoad_AncientAssistant_BustUpCam_retarn() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    } {

        fork {
            Player.EventDoNothing({'IsWaitEnd': False})
        } {
            if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
                LastRiddenAnimal_ForEvent.EventDoNothing({'IsWaitEnd': False})
            }
        }

    }

}
