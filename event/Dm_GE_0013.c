-------- EventFlow: Dm_GE_0013 --------

Actor: Npc_Gerudo_Queen_Young[Underground]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait', 'EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerMove', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()

}

void C01() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Gerudo_Queen_Young[Underground].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Gerudo_Queen_Young[Underground].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0013:Dm_GE_0013_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C02() {

    fork {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [-3917.68994140625, 142.8300018310547, 2997.919921875]})
        Player.EventPlayerMove({'WorldPos': [-3915.327880859375, 140.3719940185547, 2995.527099609375], 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'MoveSpeed': 0.4000000059604645, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVector': [-3912.18994140625, 140.85000610351562, 2990.89990234375], 'AtVector': [-3915.110107421875, 141.7899932861328, 2993.8798828125], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 45.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'PosVector': [-3912.530029296875, 140.9600067138672, 2991.260009765625], 'AtVector': [-3915.1201171875, 141.7899932861328, 2993.89990234375], 'CameraCollisionMode': 0, 'TargetFovy': 45.0, 'MoveTime': 1500, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_Gerudo_Queen_Young[Underground].EventNPCTurnToTarget({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'WorldPos': [-3919.030029296875, 143.16000366210938, 2996.5400390625], 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'WorldPos': [-3917.68994140625, 142.8300018310547, 2997.919921875], 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_Gerudo_Queen_Young[Underground].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0013:Dm_GE_0013_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Underground', 'PosVector': [-1.1699999570846558, 1.5700000524520874, 2.0899999141693115], 'AtVector': [-0.05000000074505806, 1.3200000524520874, 0.30000001192092896], 'TargetFovy': 39.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidBoot'}) {
        Npc_Gerudo_Queen_Young[Underground].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0013:Dm_GE_0013_03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Underground', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Underground', 'PosVector': [-1.2300000190734863, 1.5700000524520874, 2.049999952316284], 'AtVector': [0.10999999940395355, 1.3200000524520874, 0.4300000071525574], 'TargetFovy': 39.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'MoveTime': 40, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsWaitEnd': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'TalkingS', 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_Gerudo_Queen_Young[Underground].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Gerudo_Queen_Young[Underground].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Gerudo_Queen_Young[Underground].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 20.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Gerudo_Queen_Young[Underground].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0013:Dm_GE_0013_05', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidBootTalk'})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfGerudo', 'StepName': 'DungeonFind', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerWait({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfGerudo', 'ChallengeStep': 'DungeonFind'})
        GameSystemActor.EventTriggerRequestAutoSave()
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    } else {

        fork {
            Npc_Gerudo_Queen_Young[Underground].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GE_0013:Dm_GE_0013_03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Gerudo_Queen_Young[Underground].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Underground', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        }

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfGerudo', 'StepName': 'DungeonSearch', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        GameSystemActor.EventTriggerRequestAutoSave()
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
    }
}
