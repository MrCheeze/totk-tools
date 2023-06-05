-------- EventFlow: Tribune05 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsFollowToTargetActor', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventEventCircleWipeFadeIn', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventClearActorsAroundAnchor', 'EventRequestSoulSageLightOrb', 'EventTriggerEraseActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_NorthHatelHatago001
entrypoint: None()
actions: ['EventCancelFollowToTargetActor', 'EventAIScheduleWarpToAnchor', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventFollowToTargetActor', 'EventTalk', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventDisableRecentTalkFlag', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerParticipateEvent', 'EventTriggerNPCChangePosture', 'EventWait', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsFollowToTargetActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerOnMotionTypeStatic', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerOffMotionTypeStatic']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventBasedOnLookAtCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_RaftWood_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_01]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_02]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_03]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_04]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_05]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_06]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_07]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_08]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_09]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_10]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Animal_LittleBird_G[Shitsugen_LittleBird_11]
entrypoint: None()
actions: ['EventTriggerQuadrupedCommonSetFlee']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Ready_Npc_Rito_Postman_007_Talk() {

    fork {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {

        call Order_Flee_LittleBird()

    }


    call Hello()

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Tribune05:talk0000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Tribune05', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Step1', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Ready_Npc_Rito_Postman_007_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Tribune05:Near_Ready_1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_NorthHatelHatago001_Talk() {
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Tribune05_IssoTalk', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0002', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0007', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Obj_RaftWood_A_01.EventTriggerParticipateEvent()
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCTurnToTarget({'Direction': 0.0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'WorldPos': [797.9000244140625, 116.5999984741211, 144.89999389648438], 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [797.9000244140625, 116.5999984741211, 144.89999389648438], 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [828.6699829101562, 117.63999938964844, 121.02999877929688], 'TargetFovy': 50.0, 'MoveTime': 30, 'PosVector': [833.2899780273438, 117.91999816894531, 118.02999877929688], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0028', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerTurnAndLook({'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'ActorName': 'Obj_RaftWood_A_01', 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.0, 0.5, 0.0], 'Actor1ActorName': 'Obj_RaftWood_A_01', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'PosVector': [833.2899780273438, 117.91999816894531, 118.02999877929688], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0005', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Tribune05', 'StepName': 'Carry', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_IssoTalk'})
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()
    }
}

void Step1_Npc_Rito_Postman_007_Talk() {
    Event382:

    fork {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } {

        call Order_Flee_LittleBird()

    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void GetOn() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsCutRope'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0072', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Tribune05', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Carry2', 'IsIgnoreChallengeProgressUI': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Tribune05_IsReset', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_CarryingNPC'})
    if Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_NorthHatelHatago001.EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': 0.0, 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'PositionOffset': [-1.1430000066757202, 0.843999981880188, 1.534000039100647]})
    Npc_NorthHatelHatago001.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void GetOff() {

    call Tribune05_ReadyReset()

}

void Carry_Npc_NorthHatelHatago001_Talk() {
    Event173:
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_ChairInArea'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0047', 'ChoiceLabel1': 7, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 8, 'ChoiceLabel2': 10, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Event101:

                call Camera_Tribune05Goal()

                Event175:
                Obj_RaftWood_A_01.EventTriggerErasePauseMask()
              case 1:
                Event104:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0057', 'IsNotOpenIfSkipedMostRecent': False})

                call GetOff()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0064', 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                Event75:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsCutRope'}) {
                    Event105:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0011', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event175
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_ChairInArea'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0075', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    goto Event105
                }
                goto Event175
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0047', 'ChoiceLabel1': 7, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 9, 'ChoiceLabel3': 8, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event101
              case 1:
                goto Event104
              case 2:
                goto Event75
            }
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsReset'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0061', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Tribune05_CheckSeats()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0062', 'IsNotOpenIfSkipedMostRecent': False})

                call GetOn()

                Event279:
                Obj_RaftWood_A_01.EventTriggerErasePauseMask()
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event279
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0012', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Tribune05_CheckSeats()

                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0008', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GetOn()

                goto Event279
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event279
            }
        }
    }
}

void Carry_Npc_Rito_Postman_007_Talk() {
    goto Event382
}

void Carry2_Npc_NorthHatelHatago001_Talk() {
    goto Event173
}

void Tribune05_Hand() {
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0034', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Obj_RaftWood_A_01.EventTriggerErasePauseMask()

    call CheckFaceUpCamera_Return()

}

void Tribune05_Tilt() {
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call Wipe()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0035', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0044', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune05_Reset() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_NorthHatelHatago001.EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''})
    Npc_NorthHatelHatago001.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_NorthHatelHatago001.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
    Npc_NorthHatelHatago001.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_NorthHatelHatago001.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_NorthHatelHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': 'Tribune05_isso', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerOnMotionTypeStatic()
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Tribune05_PlayerReset', 'UseDemoWait': True, 'NotChangeRot': False})

    call Tribune05_Warp()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsReset'}) {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Tribune05', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Carry', 'IsIgnoreChallengeProgressUI': True})
    }
    Npc_NorthHatelHatago001.EventTriggerErasePauseMask()
    Player.EventPlayerOffMotionTypeStatic()
    Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'FaceControlType': 1, 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NorthHatelHatago001', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [-4.610000133514404, 2.8499999046325684, -0.17000000178813934], 'AtVector': [-0.4699999988079071, 1.3799999952316284, 0.949999988079071], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Event117:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_Guide01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_Guide02'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_Guide03'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_IsCutRope'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_RopeReSpawn', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_ReSpawn'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Tribune05_CarryingNPC'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_RopeBroken', 'Value': False})
    GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Camera_Tribune05Goal() {
    Npc_NorthHatelHatago001.EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_Guide01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_Guide02'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_Guide03'}) {
                Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'ActorName': 'DesignateMatrixActor', 'OffsetBase': 1, 'FaceControlType': 0, 'Target': 5, 'InstanceName': 'Tribune05', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Player.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Tribune05', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                Event96:
                EventCamera.EventTriggerCameraSavePoint()
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'AtVectorSetType': 3, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_NorthHatelHatago001', 'Actor1InstanceName': '', 'PosVector': [0.0, 4.0, 0.0], 'AtVector': [0.0, 4.0, 4.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0042', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_NorthHatelHatago001.EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 2, 'XZDegOffset': 0.0, 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'PositionOffset': [-1.1430000066757202, 0.843999981880188, 1.534000039100647]})
                Npc_NorthHatelHatago001.EventPlayAS({'ASName': 'Act_SitChair_Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                Npc_NorthHatelHatago001.EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 1, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'ResetArriveTransformFixed': False})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_NorthHatelHatago001', 'InstanceName': '', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0043', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'ActorName': 'DesignateMatrixActor', 'OffsetBase': 1, 'FaceControlType': 0, 'Target': 5, 'InstanceName': 'Tribune05_sub03', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Player.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Tribune05_sub03', 'KeepTalkWait': True, 'OffsetBase': 0})
                goto Event96
            }
        } else {
            Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'ActorName': 'DesignateMatrixActor', 'OffsetBase': 1, 'FaceControlType': 0, 'Target': 5, 'InstanceName': 'Tribune05_sub02', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Player.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Tribune05_sub02', 'KeepTalkWait': True, 'OffsetBase': 0})
            goto Event96
        }
    } else {
        Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'ActorName': 'DesignateMatrixActor', 'OffsetBase': 1, 'FaceControlType': 0, 'Target': 5, 'InstanceName': 'Tribune05_sub01', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Tribune05_sub01', 'KeepTalkWait': True, 'OffsetBase': 0})
        goto Event96
    }
}

void Carry2_Npc_Rito_Postman_007_Talk() {
    goto Event382
}

void Step1_Npc_NorthHatelHatago001_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Tribune05:talk0048', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Hello() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0045', 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0046', 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0050', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0051', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ClearEventTalk() {

    call Common.AirStartUP_Player()


    call GoalCheck()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Npc_NorthHatelHatago001.EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'SitGetUp', 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_ClearEventSpawn02'})
    Obj_RaftWood_A_01.EventTriggerCombinedActorDeleteAll()
    Player.EventPlayerOnMotionTypeStatic()
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Player_Tribune05', 'UseDemoWait': True, 'NotChangeRot': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerOffMotionTypeStatic()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Tribune05_ArrivalTalkNext'})
}

void Guide01_Near() {
    Npc_NorthHatelHatago001.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Tribune05:talk0036', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Guide02_Near() {
    Npc_NorthHatelHatago001.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Tribune05:talk0037', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Guide03_Near() {
    Npc_NorthHatelHatago001.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Tribune05:talk0040', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Guide04_Near() {
    Npc_NorthHatelHatago001.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Tribune05:talk0038', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'DisplayFrame': 180, 'NotOverriddenByInterestBalloon': False})
}

void Tribune05_OutChallenge() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0063', 'IsNotOpenIfSkipedMostRecent': False})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0078', 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune05_CutRope() {

    call CheckRaft()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'Tribune05_CutRopeContent', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
}

void Tribune05_InWater() {
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call Wipe()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0066', 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0044', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune05_ReadyReset() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event192:
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        call Tribune05_Reset()

    } else {
        goto Event192
    }
}

void Tribune05_CheckSeats() {
    Obj_RaftWood_A_01.EventTriggerParticipateEvent()
    if !Obj_RaftWood_A_01.EventQueryCheckNoObjectDirY({'Radius': 0.4000000059604645, 'Length': 1.5, 'Offest': [-1.1430000066757202, 1.434000015258789, 1.2339999675750732]}) {
        Event147:
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCTurnToTarget({'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerTurnAndLook({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': True, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'PosVectorSetType': 1, 'MoveTotargetPosType': 1, 'PosVector': [0.0, 1.0, 0.0], 'AtVector': [0.0, -0.5, 0.0], 'Actor1ActorName': 'Obj_RaftWood_A_01', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0052', 'IsNotOpenIfSkipedMostRecent': False})
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !Obj_RaftWood_A_01.EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {
        goto Event147
    }
}

void Tribune05_FallEvent() {
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call Wipe()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0065', 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0044', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune05_Warp() {
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Tribune05_RaftReset', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': True, 'IsDeleteActor': True, 'Radius': 4.0, 'Height': 3.0})
    GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'Height': 5.0, 'IsEraseNPC': False, 'Radius': 10.0, 'AnchorInstanceName': 'Tribune05_EraseActors'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsDestroyed'}) {
        Event162:
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_ReSpawn'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsBurned'}) {
        Event109:
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()
        Obj_RaftWood_A_01.EventTriggerCombinedActorDeleteAll()
        goto Event162
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_ReserveReset'}) {
        goto Event109
    } else
    if !Obj_RaftWood_A_01.EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, -47.43000030517578, 0.0], 'IsEnableHitPlayer': True, 'IsEnableFailDelete': True, 'BasePos': [826.594970703125, 115.05899810791016, 115.75599670410156]}) {
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_RopeReSpawn', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_ReserveReset'})
    } else {
        goto Event109
    }
}

void Carry_Npc_NorthHatelHatago001_Near() {
    Event19:
    if Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''}) {
        Npc_NorthHatelHatago001.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Tribune05:talk0049', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Carry2_Npc_NorthHatelHatago001_Near() {
    goto Event19
}

void Wipe() {

    fork {
        Npc_NorthHatelHatago001.EventTriggerRequestLookAtTheFront()
        Npc_NorthHatelHatago001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Notice'})
    } {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'ToleranceDistance': 1.0, 'TargetActorName': 'Npc_NorthHatelHatago001', 'TargetActorInstanceName': '', 'ToleranceYUpwardAngle': 0.0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceXZAngle': 0.0, 'CameraCollisionMode': 0, 'IdealDistance': 1.2000000476837158, 'TargetOffset': [-0.029999999329447746, 1.4500000476837158, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 4})
    } {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    }

}

void Tribune05_OutChallengeWarning() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck()


    call CheckFaceUpCamera()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0073', 'IsNotOpenIfSkipedMostRecent': False})
    Obj_RaftWood_A_01.EventTriggerErasePauseMask()

    call CheckFaceUpCamera_Return()

}

void Tribune05_Warning() {
    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 5, 6, 7]:

        call AirCheck_NoTurn()


        call RopeCheck()

        Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_NorthHatelHatago001.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2, 'ActorName': ''})

        call CheckFaceUpCamera()

        Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0074', 'IsNotOpenIfSkipedMostRecent': False})
        Obj_RaftWood_A_01.EventTriggerErasePauseMask()

        call CheckFaceUpCamera_Return()

      case 8:
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Burned'})
      case 9:
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Destroyed'})
    }
}

void Tribune05_Drifting() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()


    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_NorthHatelHatago001")})

    } {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Latitude': 0.0, 'TargetActorName': 'Npc_NorthHatelHatago001', 'TargetActorInstanceName': '', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'TargetOffset': [0.0, -0.20000000298023224, 1.0], 'Longitude': 0.0})
    }

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0079', 'IsNotOpenIfSkipedMostRecent': False})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0078', 'IsNotOpenIfSkipedMostRecent': False})
}

void Tribune05_Burned() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck_NoTurn()

    if !Npc_NorthHatelHatago001.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': ''}) {

        call Wipe()

        Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0077', 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
        Event202:

        call Tribune05_ReadyReset()

        Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0078', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_NorthHatelHatago001.EventNPCTurnToTarget({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call CheckFaceUpCamera()

        Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0077', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event202
    }
}

void Tribune05_Destroyed() {
    Npc_NorthHatelHatago001.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_CarryingNPC'}) {

        call Common.AirStartUP_Player()

        Npc_NorthHatelHatago001.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

        fork {
            Npc_NorthHatelHatago001.EventCancelFollowToTargetActor({'ActorName': 'Obj_RaftWood_A_01', 'InstanceName': '', 'IsWaitEnd': False, 'ASName': 'SitGetUp'})
            Npc_NorthHatelHatago001.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_NorthHatelHatago001.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
            Npc_NorthHatelHatago001.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_NorthHatelHatago001.EventPlayAS({'ASName': 'Crouch', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        }

        Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0080', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_NorthHatelHatago001.EventTriggerErasePauseMask()
        Event345:
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventTriggerParticipateEvent()
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Event323:
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_NorthHatelHatago001.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
            Npc_NorthHatelHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': 'Tribune05_isso', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Player.EventPlayerOnMotionTypeStatic()
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Tribune05_PlayerReset', 'UseDemoWait': True, 'NotChangeRot': False})
            GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Tribune05_RaftReset', 'Radius': 4.0, 'Height': 3.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
            GameSystemActor.EventTriggerEraseActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsExcludePlacedAroundAnchor': True, 'AnchorInstanceName': 'Tribune05_PlayerReset', 'Radius': 6.0, 'Height': 5.0, 'IsEraseNPC': False})
            GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
            Npc_NorthHatelHatago001.EventTriggerErasePauseMask()
            Player.EventPlayerOffMotionTypeStatic()
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_ReSpawn'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsReset'}) {
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Tribune05', 'IsIgnoreCompletedChallenge': False, 'StepName': 'Carry', 'IsIgnoreChallengeProgressUI': True})
            }
            Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
            Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'FaceControlType': 1, 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Player', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Player', 'PosVector': [-4.610000133514404, 2.8499999046325684, -0.17000000178813934], 'AtVector': [-0.4699999988079071, 1.3799999952316284, 0.949999988079071], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_NorthHatelHatago001', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

            call FlagReset()

            Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0078', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event323
        }
    } else {

        call AirCheck_NoTurn()


        call CheckFaceUpCamera()

        Npc_NorthHatelHatago001.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 5, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0080', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event345
    }
}

void Tribune05_Capsize() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_NorthHatelHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [828.0, 117.0, 117.0], 'ActorName': '', 'InstanceName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_NorthHatelHatago001")})

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [833.6199951171875, 118.68000030517578, 117.13999938964844], 'AtVector': [828.739990234375, 117.30999755859375, 117.11000061035156], 'TargetFovy': 50.0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0059', 'IsNotOpenIfSkipedMostRecent': False})

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0060', 'IsNotOpenIfSkipedMostRecent': False})
}

void GoalCheck() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Tribune05_CarryEnd'})
    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IrregularGoal'}) {

        call AirCheck()


        call CheckFaceUpCamera()

        Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Tribune05:talk0082', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void FlagReset() {
    goto Event117
}

void AirCheck() {

    call Common.AirStartUP_Player()

    Npc_NorthHatelHatago001.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_NorthHatelHatago001.EventTriggerBecomeSpeaker()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_NorthHatelHatago001', 'InstanceNameB': ''}) {
        if Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_NorthHatelHatago001")})

        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
        if !Npc_NorthHatelHatago001.EventQueryIsFollowToTargetActor({'InstanceName': '', 'ActorName': 'Obj_RaftWood_A_01'}) {
            Npc_NorthHatelHatago001.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        } else {
            Npc_NorthHatelHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }
    }
}

void CheckRaft() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsDestroyed'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Destroyed'})
        Event239:
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsBurned'}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Burned'})
        goto Event239
    }
}

void RopeCheck() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsCutRope'}) {

        call Tribune05_CutRope()

        goto Event239
    }
}

void JoinEvent() {
    Npc_NorthHatelHatago001.EventTriggerParticipateEvent()
    Obj_RaftWood_A_01.EventTriggerParticipateEvent()
}

void Tribune05_CutRopeContent() {

    call JoinEvent()

    Obj_RaftWood_A_01.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call AirCheck_NoTurn()

    Npc_NorthHatelHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_NorthHatelHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call CheckFaceUpCamera()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Tribune05_IsReset'}) {
        Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0069', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0068', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Tribune05_ReadyReset()

    Npc_NorthHatelHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Tribune05:talk0070', 'IsNotOpenIfSkipedMostRecent': False})
}

void Order_Flee_LittleBird() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive01', 'Index': -1}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_01].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive02', 'Index': -1}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_02].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LittleBirdAlive03', 'Index': -1}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_03].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive04'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_04].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive05'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_05].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive06'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_06].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive07'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_07].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive08'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_08].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive09'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_09].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive10'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_10].EventTriggerQuadrupedCommonSetFlee()
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LittleBirdAlive11'}) {
        Animal_LittleBird_G[Shitsugen_LittleBird_11].EventTriggerQuadrupedCommonSetFlee()
    }
}

void CheckFaceUpCamera() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_NorthHatelHatago001', 'InstanceNameB': ''}) {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionMode': 0, 'MoveTime': 0, 'Latitude': 0.0, 'TargetActorName': 'Npc_NorthHatelHatago001', 'TargetActorInstanceName': '', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'TargetOffset': [0.0, -0.20000000298023224, 1.0], 'Longitude': 0.0})
    }
}

void CheckFaceUpCamera_Return() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_NorthHatelHatago001', 'InstanceNameB': ''}) {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }
}

void AirCheck_NoTurn() {

    call Common.AirStartUP_Player()

    Npc_NorthHatelHatago001.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_NorthHatelHatago001.EventTriggerBecomeSpeaker()
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_NorthHatelHatago001', 'InstanceNameB': ''}) {
        if Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_NorthHatelHatago001")})

        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
    }
}
