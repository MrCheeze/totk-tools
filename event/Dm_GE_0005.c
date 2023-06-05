-------- EventFlow: Dm_GE_0005 --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[Training]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerChangeEmotion', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0005/Dm_GE_0005_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0005_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser', 'EventDoNothing', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_SmallOasis013
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventTalk', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0005/Dm_GE_0005_UMii_Gerudo_BodyS_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0005_UMii_Gerudo_BodyS_W_000.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsWorld': True, 'Position': [-3787.25, 138.0, 2701.719970703125], 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_SunazarashiSP_C_NoMove[Practice]
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0005_Sunazarashi_Chief.root.as', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call Joy()


    call AncientCall()


    call AfterAncientCall()


    call Soldier()


    call RougeAnswer()


    call Go()


    call End()

}

void Ready() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Gerudo_Queen_Young'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_SmallOasis013'})
    Dm_Locator[Pos].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'Position': [-3782.587890625, 137.9833984375, 2639.200927734375], 'IsWaitEnd': False})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'OffsetBase': 1, 'YAngle': 90.0, 'PositionOffset': [-2.0, 0.0, 0.0], 'IsWaitEnd': False, 'UseDemoWait': True})
    Dm_Locator[Pos].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'Position': [-3782.587890625, 137.9833984375, 2639.200927734375], 'IsWaitEnd': False})
    Npc_SmallOasis013.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Animal_SunazarashiSP_C_NoMove[Practice].EventTriggerParticipateEvent()
}

void AfterAncientCall() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Training', 'PosVector': [1.4800000190734863, 1.4299999475479126, 2.0799999237060547], 'AtVector': [0.8899999856948853, 1.409999966621399, 1.2799999713897705], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Animal_SunazarashiSP_C_NoMove[Practice].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_SmallOasis013.EventTriggerRequestLookAtTheFront()
    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_04', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'DemoLookAround', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gerudo_Queen_Young[Training].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, -1.0, 0.0], 'ActorName': '', 'ResetArriveTransformFixed': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Training', 'TurnFaceControlType': 1})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_14', 'ASName': '', 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gerudo_Queen_Young[Training].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'ResetArriveTransformFixed': False})
    Npc_Gerudo_Queen_Young[Training].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'TalkWait', 'ForceFadeInFrame': 20.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_05', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis013.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'YAngle': 0.0, 'OffsetBase': 1, 'IsWaitEnd': True, 'PositionOffset': [-1.0, 0.0, -20.0]})

    fork {
        Npc_SmallOasis013.EventTalk({'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_06', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Npc_Gerudo_Queen_Young[Training].EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_SmallOasis013', 'ResetArriveTransformFixed': False})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_SmallOasis013', 'TurnFaceControlType': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

}

void Soldier() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [-4.139999866485596, 3.950000047683716, -2.6500000953674316], 'AtVector': [-1.2300000190734863, 1.1299999952316284, -0.5400000214576721], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTotargetPosType': 1, 'MoveTime': 30, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [-4.139999866485596, 3.950000047683716, -2.6500000953674316], 'AtVector': [-1.0800000429153442, 0.8899999856948853, -1.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_SmallOasis013.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [-1.0, 0.0, -6.800000190734863], 'IsWaitEnd': True})

        fork {
            Npc_SmallOasis013.EventPlayAS({'ASName': 'In', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'Frames': 18, 'IsWaitEnd': True})
            Npc_SmallOasis013.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0005_Npc_SmallOasis013_LandSand'})
            EventSystemActor.EventWait({'Frames': 18, 'IsWaitEnd': True})
        } {
            Npc_Gerudo_Queen_Young[Training].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'IsWaitEnd': False, 'FaceControlType': 1, 'IsConfront': True, 'ActorName': 'Npc_SmallOasis013', 'OffsetBase': 1, 'PosOffset': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': 'Npc_SmallOasis013', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

    }

    Npc_SmallOasis013.EventTalk({'IsAnimeDriven': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_07', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'In', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis013.EventTalk({'ASName': 'In', 'IsAnimeDriven': True, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_08', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void RougeAnswer() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [-3.619999885559082, 0.949999988079071, -3.569999933242798], 'AtVector': [-0.6399999856948853, 0.9900000095367432, -0.7099999785423279], 'TargetFovy': 35.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3781.087890625, 138.03529357910156, 2639.202880859375], 'YAngle': 1.0017900466918945, 'UseDemoWait': True})
    }

    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_09', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gerudo_Queen_Young[Training].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'ResetArriveTransformFixed': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Training', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
}

void AncientCall() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-1.2999999523162842, 2.0799999237060547, -0.8999999761581421], 'AtVector': [-0.75, 1.75, -0.14000000059604645], 'TargetFovy': 45.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': True, 'ASName': 'Noutou2', 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    }

    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_03', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'CommandLife': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
    CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0005_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'DemoLookAround2nd', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTriggerRequestLookAtTheFront()
        Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'DemoLookAround', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'IsImmediately': False, 'IsClearRefCount': False})
    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_GE_0005_AncientCall'})
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void End() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventDoNothing({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void Joy() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Training', 'PosVector': [-1.0199999809265137, 1.0499999523162842, 2.069999933242798], 'AtVector': [0.07000000029802322, 1.3600000143051147, -0.019999999552965164], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Training].EventWarpToTargetPosAndRot({'YAngle': 180.0, 'IsWaitEnd': False, 'Position': [-3782.587890625, 137.9833984375, 2639.200927734375]})
        Npc_Gerudo_Queen_Young[Training].EventTriggerRequestLookAtTheFront()
        Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_02', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Joy', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 270.0, 'Position': [-3780.587890625, 137.9833984375, 2639.200927734375], 'UseDemoWait': True})
        SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'Training', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    } {
        Animal_SunazarashiSP_C_NoMove[Practice].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': 90.0, 'Position': [-3792.587890625, 137.9833984375, 2638.200927734375]})
        Animal_SunazarashiSP_C_NoMove[Practice].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'DemoWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'Swing', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_Gerudo_Queen_Young[Training].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0005_ThunderSword', 'SLinkKey': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Npc_Gerudo_Queen_Young', 'TargetActorInstanceName': 'Training', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C01-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_Byeen'})
    }

    Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_12', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'Swing', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Noutou1', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
}

void Go() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'Training', 'PosVector': [1.2000000476837158, 1.409999966621399, 1.3200000524520874], 'AtVector': [-0.1899999976158142, 1.4700000286102295, -0.25999999046325684], 'TargetFovy': 28.700000762939453, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_10', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 0, 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Gerudo_Queen_Young[Training].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_GE_0005:Dm_GE_0005_11', 'ASName': 'Wait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Gerudo_Queen_Young[Training].EventTriggerRequestLookAtTheFront()
    Npc_Gerudo_Queen_Young[Training].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'ASName': 'RunSt', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
