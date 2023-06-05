-------- EventFlow: Dm_ZE_0012 --------

Actor: Npc_Wanderer[GP01]
entrypoint: None()
actions: ['EventTalk', 'EventCancelFollowToTargetActor', 'EventFollowToTargetActor', 'EventTriggerWarpToAnchorActionInLoD', 'EventPlayAS', 'EventWarpToTargetActor', 'EventWait', 'EventWarpToTargetPosAndRot', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0012/Dm_ZE_0012_Npc_Shiekah_Impa_Wanderer/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0012_Npc_Shiekah_Impa_Wanderer.root.as', 'EquipmentUser_Weapon': 'Npc_Shiekah_Cane', 'IsBindNearestActor': False}

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Rotation': [20.0, 0.0, 0.0], 'Position': [0.0, 0.0, 0.0], 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventDoNothing', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerHorseGetOff']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0012/Dm_ZE_0012/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundBeginForbidDialogDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SpObj_BalloonEnvelope_A_04[GP01]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventWarpToTargetPosAndRot', 'EventTriggerErasePauseMask', 'EventTriggerBalloonOverWriteRaiseIntensity']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: AsbObj_BalloonEnvelopeBase_A_03[GP01]
entrypoint: None()
actions: ['EventTriggerErasePauseMask', 'EventWarpToSpecifyMatrixWithCombinedActor', 'EventTriggerPushPauseMask', 'EventTriggerCombinedActorDeleteExcept', 'EventWarpToTargetPosAndRot', 'EventTriggerCombinedActorConnectBondImmediate', 'EventTriggerRequestChemicalRequestIgnite']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Common.AirStartUP_Player()


    call Ready()


    call C01()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears01', 'Index': -1}) {

        call C02_Viewed()

        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PlayNum_MemoryOfTheDragon', 'Index': -1, 'Value': 11}) {

            call C03_Viewed()


            call C04_Viewed()


            call EndDemo()

        } else {

            call C03_Viewed_11th()


            call C04_Viewed_11th()


            call EndDemo()

        }
    } else {

        call C02_NoView()


        call C03__NoView()


        call C04_NoView()


        call EndDemo()

    }
}

void C02_Viewed() {
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GroundPaintingAir01', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})

    fork {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'OffsetBase': 1, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Wanderer[GP01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Impa_HatUp', 'IsWaitEnd': False, 'IsAnimeDriven': True})
        Npc_Wanderer[GP01].EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'GP01', 'Posture': 0, 'PositionOffset': [1.25, 0.5, 0.0], 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'XZDegOffset': -95.0})
        Npc_Wanderer[GP01].EventWait({'IsWaitEnd': True, 'Frames': 70})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_05', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C02-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }

}

void C03__NoView() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-1308.43994140625, 516.8499755859375, -824.3200073242188], 'AtVector': [-1309.0899658203125, 513.1699829101562, -824.9400024414062], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_06', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'MoveTime': 600, 'IsWaitEnd': False, 'PosVector': [-1308.449951171875, 528.3900146484375, -824.3300170898438], 'AtVector': [-1309.0899658203125, 524.7100219726562, -824.9400024414062], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZE_0012', 'IsUseSuspendFade': False})
}

void C04_NoView() {

    fork {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_33', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C04-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'ForceFadeFrame': 20.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_Wanderer[GP01].EventPlayAS({'ASName': 'Impa_HatDown', 'ForceFadeInFrame': 10.0, 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GroundPaintingAir01', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Search', 'IsWaitEnd': True})
}

void Ready() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event169:
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerCombinedActorDeleteExcept({'InstanceName': 'GP01'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GroundPaintingAir01_BalloonGenerate', 'Index': -1, 'Value': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'SpObj_BalloonEnvelope_A_04', 'InstanceName': 'GP01'})
        SpObj_BalloonEnvelope_A_04[GP01].EventTriggerBalloonOverWriteRaiseIntensity({'RaiseIntensity': 0.5})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        SpObj_BalloonEnvelope_A_04[GP01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-1310.176025390625, 501.7037048339844, -826.2017822265625]})
        Dm_Locator[Pos].EventWarpToTargetPosAndRot({'Position': [-1310.176025390625, 499.4036865234375, -826.2017822265625], 'IsWaitEnd': True, 'YAngle': 140.0})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        SpObj_BalloonEnvelope_A_04[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            AsbObj_BalloonEnvelopeBase_A_03[GP01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-1310.176025390625, 499.4036865234375, -826.2017822265625]})
        } {
            SpObj_BalloonEnvelope_A_04[GP01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-1310.176025390625, 501.7037048339844, -826.2017822265625]})
        } {
            Npc_Wanderer[GP01].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-1308.676025390625, 499.9036865234375, -826.2017822265625], 'YAngle': 0.0})
        }

        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerCombinedActorConnectBondImmediate({'InstanceName': 'GP01', 'OtherPos': [0.0, 2.2200000286102295, 0.0], 'ActorName': 'SpObj_BalloonEnvelope_A_04'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventWarpToSpecifyMatrixWithCombinedActor({'IsWaitEnd': True, 'RotAxis': 2, 'RotAngle': 0.0, 'Pos': [-1310.176025390625, 499.4036865234375, -826.2017822265625]})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventWarpToSpecifyMatrixWithCombinedActor({'IsWaitEnd': True, 'Pos': [-1310.176025390625, 499.4036865234375, -826.2017822265625], 'RotAngle': 0.0, 'RotAxis': 0})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventWarpToSpecifyMatrixWithCombinedActor({'IsWaitEnd': True, 'Pos': [-1310.176025390625, 499.4036865234375, -826.2017822265625], 'RotAxis': 1, 'RotAngle': 140.0})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': -136.75729370117188, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'PositionOffset': [0.7459999918937683, 0.09359999746084213, 1.052299976348877], 'UseDemoWait': True})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerRequestChemicalRequestIgnite()
        Npc_Wanderer[GP01].EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'GP01', 'Posture': 0, 'PositionOffset': [1.25, 0.5, 0.0], 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'XZDegOffset': 70.0})
        EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'IsImmTrans': True, 'Azimuth': 0.0, 'Speed': 5.0, 'Elevation': 5.0})
    } else {
        goto Event169
    }
}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'PosVector': [-1303.9200439453125, 518.6300048828125, -827.6300048828125], 'AtVector': [-1308.5699462890625, 500.2300109863281, -829.8099975585938], 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Direction': -90.0, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Npc_Wanderer', 'InstanceName': 'GP01', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 20.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_Wanderer[GP01].EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': 80.06700134277344, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'PositionOffset': [1.2999999523162842, 0.5099999904632568, 0.0]})
        Npc_Wanderer[GP01].EventPlayAS({'ASName': 'Impa_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZE_0012', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_29', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Wait', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Wanderer[GP01].EventCancelFollowToTargetActor({'InstanceName': 'GP01', 'ASName': 'Impa_Wait', 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'IsWaitEnd': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 600, 'CameraCollisionLookAtActor': 0, 'PosVector': [-1302.8599853515625, 521.2999877929688, -828.8900146484375], 'AtVector': [-1308.0699462890625, 500.2300109863281, -830.9199829101562], 'TargetFovy': 50.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C02_NoView() {

    fork {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'OffsetBase': 1, 'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Wanderer[GP01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Impa_HatUp', 'IsAnimeDriven': True})
        Npc_Wanderer[GP01].EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'GP01', 'Posture': 0, 'PositionOffset': [1.25, 0.5, 0.0], 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'XZDegOffset': -95.0})
        Npc_Wanderer[GP01].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_05', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C02-0', 'InterpolateFrame': -1.0, 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }

}

void C03_Viewed() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C03-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    } {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_08', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_Surprise_First', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_61', 'ASName': 'Impa_Talk_Think', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_62', 'ASName': 'Impa_Talk_Surprise', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_63', 'ASName': 'Impa_Talk_ReturnHatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZE_0012', 'IsUseSuspendFade': False})
}

void C03_Viewed_11th() {

    fork {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MemoryOfTheDragon_IsCompleted_Exp'}) {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'ASName': 'Impa_Talk_ReturnHatUp', 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_67', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'ASName': 'Impa_Talk_ReturnHatUp', 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_73', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_17', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_Surprise_First', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_64', 'ASName': 'Impa_Talk_Think', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_65', 'ASName': 'Impa_Talk_Surprise', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_66', 'IsAnimeDriven': True, 'ASName': 'Impa_Talk_ReturnHatUp', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C03-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZE_0012', 'IsUseSuspendFade': False})
}

void C04_Viewed() {

    fork {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_34', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C04-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'ForceFadeFrame': 20.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_Wanderer[GP01].EventPlayAS({'ASName': 'Impa_HatDown', 'ForceFadeInFrame': 10.0, 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MemoryOfTheDragon', 'StepName': 'GoTemple', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void C04_Viewed_11th() {

    fork {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_34', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Impa_Talk_HatUp', 'IsAnimeDriven': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorInstanceName': 'GP01', 'IsWaitEnd': False, 'SceneName': 'C04-0', 'IsLoop': True, 'TargetActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CalcUpInInterpolate': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'ForceFadeFrame': 20.0, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    } {
        Npc_Wanderer[GP01].EventPlayAS({'ASName': 'Impa_HatDown', 'ForceFadeInFrame': 10.0, 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': False, 'IsAnimeDriven': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MemoryOfTheDragon_IsCompleted_Exp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NotClear_GroundPaintingAir01_HavePlayedAllDragonTearEvent', 'Index': -1, 'Value': True})
        ChallengeSystemActor.EventDoNothing({'IsWaitEnd': True})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MemoryOfTheDragon', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step2', 'IsWaitEnd': True})
    }
}

void EndDemo() {

    fork {
        EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7599999904632568, -5.079999923706055], 'AtVector': [0.0, 1.7599999904632568, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Wanderer[GP01].EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'GP01', 'Posture': 0, 'PositionOffset': [1.25, 0.5, 0.0], 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'XZDegOffset': -95.0})
        Npc_Wanderer[GP01].EventTriggerWarpToAnchorActionInLoD()
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
        SpObj_BalloonEnvelope_A_04[GP01].EventTriggerErasePauseMask()
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 10.0})
        GameSystemActor.EventTriggerRequestAutoSave()
    }

}
