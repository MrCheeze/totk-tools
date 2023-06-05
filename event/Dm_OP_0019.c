-------- EventFlow: Dm_OP_0019 --------

Actor: Dm_Locator[Dm_Locator_position]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [83.18000030517578, 22.600000381469727, -130.9600067138672], 'IsGrounding': False, 'Rotation': [0.0, 0.0, 0.0], 'IsBindNearestActor': False}

Actor: Npc_Zelda_Opening
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget', 'EventWarpToTargetActor', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventPlayASWithClothWarp', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetForceInvalidLookIKWhenPostTalk', 'EventTriggerTalk']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0019/Dm_OP_0019_Npc_Zelda_Search_Improve/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0019_Npc_Zelda_Search_Improve.root.as', 'EquipmentUser_Weapon': 'Weapon_Sword_043_SetFire', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Accessory1': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerWait', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0019/Dm_OP_0019_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0019_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventCloseMessageDialog', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_077
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False, 'IsGrounding': False}

Actor: GameSystemActor[zelda]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void EntryPoint0() {
    if !Npc_Zelda_Opening.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {

        call Arrive()

    } else {

        call NotArrive()

    }

    call Dm_OP_0019_C01()


    call Dm_OP_0019_C02()


    call Dm_OP_0019_C03()


    call Dm_OP_0019_C04()


    call Dm_OP_0019_C05()


    call Dm_OP_0019_C06()


    call Dm_OP_0019_C07()


    call Dm_OP_0019_C08()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void NotArrive() {
    Player.EventPlayerWait({'IsWaitEnd': False})
    Weapon_Sword_077.EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Zelda_Opening.EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zelda_Opening.EventTriggerTalk({'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_00', 'EndDialogOption': 3, 'NotPlayLipSyncAnim': True, 'IsEndDialogOptionAuto': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void Arrive() {
    Dm_Locator.EventTriggerParticipateEvent()
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Zelda_Opening', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': True})
    Weapon_Sword_077.EventTriggerParticipateEvent()
    Player.EventPlayerWait({'IsWaitEnd': False})
    Npc_Zelda_Opening.EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_00', 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
}

void Dm_OP_0019_C01() {
    Dm_Locator[Dm_Locator_position].EventTriggerParticipateEvent()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void Dm_OP_0019_C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Dm_Locator_position', 'PosVector': [-2.0799999237060547, 1.6799999475479126, 3.700000047683716], 'AtVector': [-0.3799999952316284, 1.440000057220459, 2.619999885559082], 'TargetFovy': 29.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Opening.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_position', 'OffsetBase': 0, 'YAngle': -10.0, 'PositionOffset': [-0.009999999776482582, -0.019999999552965164, 0.03999999910593033]})
        Npc_Zelda_Opening.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Dm_Locator_position', 'OffsetBase': 0, 'YAngle': -10.0, 'PositionOffset': [-0.009999999776482582, -0.019999999552965164, 0.03999999910593033]})
        Npc_Zelda_Opening.EventTriggerRequestLookAtTheFront()
        Npc_Zelda_Opening.EventPlayAS({'IsWaitEnd': True, 'ASName': 'C02-Npc_Zelda_Walk', 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_06', 'ASName': 'C02-Npc_Zelda_Wait_Loop', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -12.342920303344727, 'Position': [81.04000091552734, 22.549999237060547, -124.79000091552734], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Weapon_Sword_077.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OP_0019_Unequip'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
    }

}

void Dm_OP_0019_C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.05000000074505806, 1.1299999952316284, -2.390000104904175], 'AtVector': [0.0, 1.2899999618530273, 0.029999999329447746], 'TargetFovy': 36.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.009999999776482582, 1.1299999952316284, -2.0], 'AtVector': [-0.029999999329447746, 1.3600000143051147, 0.41999998688697815], 'TargetFovy': 36.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 100, 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -12.342920303344727, 'Position': [81.69999694824219, 22.54483985900879, -127.54000091552734], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'C03-Link-A-0_LookBack', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
    } {
        Npc_Zelda_Opening.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [83.69000244140625, 22.59600067138672, -128.29100036621094]})
        Npc_Zelda_Opening.EventNPCTurnToTarget({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 69})
        Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-Npc_Zelda_Wait_Loop', 'ForceFadeInFrame': 20.0})
    }

}

void Dm_OP_0019_C04() {
    Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C02-Npc_Zelda_Wait_Loop', 'ForceFadeInFrame': 20.0})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C04', 'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 7})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_01', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C02-Npc_Zelda_Wait_Loop', 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        } {
            Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C05-Npc_Zelda', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        }

    }

}

void Dm_OP_0019_C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [82.7699966430664, 24.079999923706055, -133.86000061035156], 'AtVector': [82.69999694824219, 23.979999542236328, -127.69999694824219], 'TargetFovy': 40.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsLinearMove': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'PosVector': [82.12000274658203, 24.06999969482422, -133.1999969482422], 'AtVector': [82.69999694824219, 23.979999542236328, -127.69999694824219], 'TargetFovy': 40.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 500, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Opening.EventWarpToTargetPosAndRot({'Position': [83.68940734863281, 22.580150604248047, -128.29150390625], 'IsWaitEnd': False, 'YAngle': -76.0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        Npc_Zelda_Opening.EventTriggerLookAtObject({'Target': 0, 'WorldPos': [80.27999877929688, 24.270000457763672, -120.56999969482422], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        fork {
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_04', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C05-Npc_Zelda_Loop', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'ASCommand': 'C03-Link-A-0_LookBack_Ed', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }


        fork {
            Npc_Zelda_Opening.EventTriggerRequestLookAtTheFront()
            Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_02', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C05-Npc_Zelda_Loop', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_Zelda_Opening', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        }

    }

}

void Dm_OP_0019_C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [79.33999633789062, 23.8799991607666, -128.25], 'AtVector': [80.08999633789062, 23.8799991607666, -128.13999938964844], 'TargetFovy': 26.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsPosVectorReferenceActorPosOnce': False, 'IsLinearMove': True, 'IsWaitEnd': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 600, 'PosVector': [79.31999969482422, 23.8799991607666, -128.14999389648438], 'TargetFovy': 26.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'AtVector': [80.08000183105469, 23.8799991607666, -128.13999938964844]})
    } {
        Npc_Zelda_Opening.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'ASName': 'C06-Npc_Zelda_Loop', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ClothWarpMode': 3})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_03', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'C06-Npc_Zelda_Loop', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zelda_Opening.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0, 'ASName': 'C06-Npc_Zelda_Loop'})
    } {
        Weapon_Sword_077.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_OP_0019_MasterSwordGlowBack', 'IsKill': False, 'SLinkKey': 'Dm_MasterSwordScabbardGrowing'})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsMasterSwordTrueForm', 'Index': 1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void Dm_OP_0019_C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [82.48999786376953, 24.1299991607666, -128.24000549316406], 'AtVector': [84.55999755859375, 24.020000457763672, -128.27000427246094], 'TargetFovy': 41.400001525878906, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Opening.EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 6})
        Npc_Zelda_Opening.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ClothWarpMode': 3, 'ASName': 'C07-Npc_Zelda_Wait'})
        GameSystemActor[zelda].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Zelda_Opening.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_OP_0019:talk_05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ASName': 'C07-Npc_Zelda_Wait', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

}

void Dm_OP_0019_C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [82.87000274658203, 24.350000381469727, -132.7100067138672], 'AtVector': [81.69999694824219, 24.350000381469727, -127.54000091552734], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Opening.EventPlayASWithClothWarp({'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C05-Npc_Zelda_Loop', 'ClothWarpMode': 3})
        GameSystemActor[zelda].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Zelda_Opening.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'WorldPos': [80.05999755859375, 22.850000381469727, -118.88999938964844], 'Target': 0, 'ActorName': '', 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C08-Link-Turn', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    Npc_Zelda_Opening.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
    Npc_Zelda_Opening.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    Npc_Zelda_Opening.EventTriggerAIScheduleSetForceInvalidLookIKWhenPostTalk()
}
