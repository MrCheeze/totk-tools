-------- EventFlow: Dm_BC_0014 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventWait', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFront', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor[CannonPurah]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Tool': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon']
queries: ['EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Cannon_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventEventFadeIn', 'EventTriggerLeaveGameSafetySection', 'EventEnterGameSafetySection']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_AllCanonSwith_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Assistant[WatchTower]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventWarpToTargetActor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_BC_0014/Dm_BC_0014_UMii_Hylia_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_BC_0014_UMii_Hylia_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: FldObj_CannonTerminal_A_01[BeforePoweredOn]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-291.95001220703125, 133.77999877929688, -136.55999755859375], 'AtVector': [-295.42999267578125, 132.19000244140625, -139.63999938964844], 'TargetFovy': 40.0, 'MoveTotargetPosType': 1, 'MoveTime': 20, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [-288.6199951171875, 131.82000732421875, -147.38999938964844], 'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'CannonPurah', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventTriggerPlayerRequestLookAtTheFront()
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_23', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [-293.1099853515625, 130.94000244140625, -137.14999389648438], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [-293.1099853515625, 130.94000244140625, -137.14999389648438], 'ActorName': ''})
    }

    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'MoveTime': 20, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-288.7900085449219, 134.4199981689453, -132.7899932861328], 'AtVector': [-290.94000244140625, 132.8699951171875, -134.9199981689453], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_28', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Indicate_Mild', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-293.1099853515625, 130.94000244140625, -137.14999389648438], 'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah'})
    } {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'WorldPos': [-293.1099853515625, 130.94000244140625, -137.14999389648438], 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'CannonPurah', 'PosVector': [-0.03999999910593033, 1.659999966621399, 2.009999990463257], 'AtVector': [0.029999999329447746, 1.5700000524520874, 1.090000033378601], 'TargetFovy': 35.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_21', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_29', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-269.1000061035156, 232.13999938964844, -135.72000122070312], 'AtVector': [-281.2300109863281, 228.1699981689453, -138.61000061035156], 'TargetFovy': 50.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-269.1000061035156, 172.7899932861328, -135.72000122070312], 'AtVector': [-281.2300109863281, 168.80999755859375, -138.61000061035156], 'TargetFovy': 50.0, 'MoveTime': 300, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'CannonPurah', 'PosVector': [-0.03999999910593033, 1.659999966621399, 2.009999990463257], 'AtVector': [0.029999999329447746, 1.5700000524520874, 1.090000033378601], 'TargetFovy': 35.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_30', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_36', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-286.8500061035156, 132.99000549316406, -130.5500030517578], 'AtVector': [-290.8800048828125, 132.3300018310547, -134.66000366210938], 'TargetFovy': 20.100000381469727, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Parasail'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'CannonPurah', 'PosVector': [0.2199999988079071, 1.6200000047683716, 1.8600000143051147], 'AtVector': [0.1599999964237213, 1.559999942779541, 1.100000023841858], 'TargetFovy': 35.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerCameraSavePoint()
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_25', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Indicate_Mild', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-298.8500061035156, 130.89999389648438, -142.6999969482422], 'ResetArriveTransformFixed': False})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-295.7300109863281, 133.35000610351562, -137.69000244140625], 'AtVector': [-296.1400146484375, 132.77000427246094, -138.6999969482422], 'TargetFovy': 41.29999923706055, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_31', 'ASName': 'TalkWait', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerRequestLookAtTheFront()
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-298.9963073730469, 130.8966064453125, -143.03680419921875]})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'WorldPos': [-254.1199951171875, 131.86000061035156, -150.91000366210938], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'WorldPos': [-254.1199951171875, 131.86000061035156, -150.91000366210938], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-298.95001220703125, 131.6999969482422, -138.2899932861328], 'AtVector': [-296.9800109863281, 131.83999633789062, -138.1300048828125], 'TargetFovy': 40.79999923706055, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_26', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor', 'Actor1InstanceName': 'CannonPurah', 'PosVector': [-0.03999999910593033, 1.659999966621399, 2.009999990463257], 'AtVector': [0.029999999329447746, 1.5700000524520874, 1.090000033378601], 'TargetFovy': 35.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [-254.1199951171875, 131.86000061035156, -150.91000366210938], 'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'WorldPos': [-254.1199951171875, 131.86000061035156, -150.91000366210938], 'Target': 2, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_5', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'UseCannon', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
}

void EntryPoint1() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    fork {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_EventStarter.EventQueryNeedEquipWeapon() {
            Npc_EventStarter.EventUnequipWeapon({'IsWaitEnd': True})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-295.54998779296875, 132.13999938964844, -139.99000549316406], 'AtVector': [-295.30999755859375, 132.86000061035156, -143.49000549316406], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call Assistant_Setup()

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 120, 'PosVector': [-295.5400085449219, 132.1699981689453, -140.1199951171875], 'AtVector': [-295.30999755859375, 132.86000061035156, -143.49000549316406], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_1', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MainChallenge_MoveSwitch', 'Index': -1, 'Value': True})
        FldObj_CannonTerminal_A_01[BeforePoweredOn].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'PlayerCloseIn'})
        FldObj_CannonTerminal_A_01[BeforePoweredOn].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'PlayerCloseInWait'})
        Npc_AncientDoctor[CannonPurah].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        ChallengeSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_AncientDoctor[CannonPurah].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'TalkWait', 'ForceFadeInFrame': 30.0})
        ChallengeSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_2', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Normal_S', 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_AncientDoctor[CannonPurah].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'Target': 2, 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'FaceControlType': 2, 'OffsetBase': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_35', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'PosVector': [-293.95001220703125, 132.52000427246094, -136.8300018310547], 'AtVector': [-294.3299865722656, 132.27999877929688, -139.3800048828125], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-293.9100036621094, 130.88999938964844, -139.77000427246094], 'YAngle': -116.6447982788086, 'UseDemoWait': False})
    }

    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_22', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-293.8999938964844, 132.49000549316406, -139.80999755859375], 'AtVector': [-294.6199951171875, 132.41000366210938, -140.41000366210938], 'TargetFovy': 39.599998474121094, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_AncientDoctor[CannonPurah].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_AncientDoctor[CannonPurah].EventPlayAS({'ASName': 'Talk_Normal_S', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 15.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-289.32000732421875, 135.0500030517578, -139.2100067138672], 'AtVector': [-286.44000244140625, 135.6999969482422, -139.8800048828125], 'TargetFovy': 45.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-289.32000732421875, 135.0500030517578, -139.2100067138672], 'AtVector': [-286.44000244140625, 135.6999969482422, -139.8800048828125], 'TargetFovy': 40.0, 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_BaseCamp_Assistant', 'InstanceName': 'WatchTower', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_27', 'ASName': 'Act_CallFar', 'IsNotOpenIfSkipedMostRecent': False})
    }


    call SwichON()

    Npc_BaseCamp_Assistant[WatchTower].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 16, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    EventSystemActor.EventTransition({'EventName': 'Dm_BC_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-243.05999755859375, 144.41000366210938, -150.8300018310547], 'AtVector': [-238.60000610351562, 145.52000427246094, -151.8699951171875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        FldObj_Cannon_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'OnWait'})
    } {
        Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Lookfar', 'IsAllSlot': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MainChallenge_CannonReady', 'Index': -1, 'Value': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-2089.0, 318.0, -1409.0], 'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah', 'ResetArriveTransformFixed': False})
    } {
        ChallengeSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-243.05999755859375, 144.41000366210938, -150.8300018310547], 'AtVector': [-238.60000610351562, 145.52000427246094, -151.8699951171875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_AncientDoctor[CannonPurah].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_BaseCamp_Assistant', 'InstanceName': 'WatchTower', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_AncientDoctor[CannonPurah].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_AncientDoctor[CannonPurah].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    }

    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'ASName': 'Act_Lookfar', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-297.5199890136719, 131.5, -137.58999633789062], 'AtVector': [-294.5, 132.17999267578125, -138.2899932861328], 'TargetFovy': 40.0, 'MoveTotargetPosType': 1, 'MoveTime': 75, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_4', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Indicate_Mild', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'InstanceName': '', 'WorldPos': [-295.54998779296875, 130.88999938964844, -141.9199981689453], 'ActorName': ''})
    } {
        Npc_AncientDoctor[CannonPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [-295.54998779296875, 130.88999938964844, -141.9199981689453], 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-295.1700134277344, 132.47000122070312, -138.91000366210938], 'AtVector': [-295.6700134277344, 131.4499969482422, -142.17999267578125], 'TargetFovy': 40.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_AncientDoctor[CannonPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'ASName': 'Act_Indicate', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_3_6', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MainChallenge_MoveSwitch', 'Index': -1, 'Value': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'UseTerminal', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    GameSystemActor.EventEnterGameSafetySection({'GameSafetySetting': 'HyruleCastleIncident_UseTerminal', 'IsWaitEnd': True})
}

void SwichON() {
    Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Act_Touting', 'IsWaitEnd': False, 'IsAllSlot': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Touting_Dm_BC_0014', 'IsAllSlot': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'PosVector': [-245.22999572753906, 144.86000061035156, -148.49000549316406], 'AtVector': [-243.6300048828125, 145.11000061035156, -148.91000366210938], 'TargetFovy': 22.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'TwnObj_AllCanonSwith_A_01', 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {
        Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Demo_AllCanonSwith', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
        Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False})
    } {
        TwnObj_AllCanonSwith_A_01.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Demo_AllCanonSwith', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Assistant_Setup() {
    Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_BaseCamp_Assistant[WatchTower].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'TwnObj_AllCanonSwith_A_01', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': -90.0, 'PositionOffset': [0.0, 0.0, -1.2000000476837158]})
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerLookAtObject({'OffsetBase': 0, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'CannonPurah', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ResetArriveTransformFixed': False})
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': True})
}
