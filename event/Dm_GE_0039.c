-------- EventFlow: Dm_GE_0039 --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventWarpToTargetPosAndRot', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventTriggerModelBind', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0039/Dm_GE_0039_Npc_Gerudo_Queen_Young/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0039_Npc_Gerudo_Queen_Young.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[NPC_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [-4518.30810546875, 231.2154998779297, 3611.214111328125], 'Rotation': [0.0, 45.0, 0.0], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0039/Dm_GE_0039_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0039_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ElectricElevator_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0039/Dm_GE_0039_DgnObj_ElectricElevator_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0039_DgnObj_ElectricElevator_A.root.as', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventWait', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_GE_0039'}) {

        call short()

    } else {

        call Pre()


        call C01()


        call C02()


        call C03()


        call C04()


        call C05()


        call C06()


        call C07()


        call C08()


        call C09()


        call C10()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.3100000023841858, 1.8700000047683716, -5.599999904632568], 'AtVector': [0.019999999552965164, 1.7999999523162842, -0.3100000023841858], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    }
}

void Pre() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_Pyramid_LightSourceStop', 'Value': True})
    DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    DgnObj_ElectricElevator_A_01.EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetPosAndRot({'YAngle': 155.0, 'IsWaitEnd': True, 'Position': [-4518.0, 134.47000122070312, 3611.239990234375]})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerModelBind({'ActorName': 'DgnObj_ElectricElevator_A_01', 'InstanceName': '', 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Position1', 'RotOffset': [0.0, 200.0, 0.0]})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Dm_Locator[demo].EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'DgnObj_ElectricElevator_A_01', 'PosVector': [-1.100000023841858, 7.829999923706055, 10.069999694824219], 'AtVector': [-0.18000000715255737, 4.170000076293945, 3.4000000953674316], 'TargetFovy': 50.130001068115234, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'DgnObj_ElectricElevator_A_01', 'PosVector': [-1.1200000047683716, 7.929999828338623, 10.25], 'AtVector': [-0.18000000715255737, 4.170000076293945, 3.4000000953674316], 'TargetFovy': 50.130001068115234, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 90, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [-4516.419921875, 132.91000366210938, 3610.919921875], 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 0, 'ActorName': 'Npc_Gerudo_Queen_Young', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 30})

        fork {
            DgnObj_ElectricElevator_A_01.EventPlayAS({'ASName': 'On_All', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.0})
        }

    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [0.4000000059604645, 1.3300000429153442, 1.649999976158142], 'AtVector': [-0.14000000059604645, 1.3899999856948853, -0.44999998807907104], 'TargetFovy': 35.22999954223633, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_GE_0039:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ASName': 'Wait', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [-4516.85400390625, 136.1999969482422, 3609.264892578125], 'ResetArriveTransformFixed': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-4517.5, 135.97999572753906, 3604.840087890625], 'AtVector': [-4517.8798828125, 136.0, 3611.199951171875], 'TargetFovy': 50.130001068115234, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-4517.5, 135.97999572753906, 3604.8701171875], 'AtVector': [-4518.47021484375, 136.0, 3611.169921875], 'TargetFovy': 50.130001068115234, 'MoveTime': 70, 'StartAccelerateRate': 1.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-4517.97509765625, 134.4654998779297, 3609.424072265625], 'YAngle': -100.0, 'UseDemoWait': True, 'IsWaitEnd': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C03-Link-A-0_Walk_Ed', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 28})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 4, 'TurnFaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 20.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    } {
        DgnObj_ElectricElevator_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0039_ElectricElevator_Rise', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})

    fork {
        DgnObj_ElectricElevator_A_01.EventPlayAS({'ASName': 'C03-DgnObj_ElectricElevator_A-A-0', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        } {
            EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'Pattern': 1, 'ApplyType': 1, 'Power': 0.699999988079071, 'IsRumbleController': False})
        }

    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C03-Link-A-0_Surprise', 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'C03-Npc_Gerudo_Queen_Young-A-0_Surprise', 'IsAllSlot': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-4517.16015625, 134.52999877929688, 3597.3701171875], 'AtVector': [-4517.759765625, 135.72000122070312, 3602.949951171875], 'TargetFovy': 59.209999084472656, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': True, 'CameraCollisionMode': 0, 'MoveTime': 80, 'PosVector': [-4517.16015625, 134.32000732421875, 3597.35009765625], 'AtVector': [-4517.7001953125, 137.02999877929688, 3602.3798828125], 'TargetFovy': 59.209999084472656, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Demo_Large_BuBuBu'})
    } {
        Player.EventTriggerModelBindWithDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01', 'BoneName': 'PlayerPosition1', 'RotOffset': [0.0, 120.0, 0.0], 'TransOffset': [-0.30000001192092896, 0.0, 0.0]})
    }

}

void C05() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Gerudo_Queen_Young', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [0.949999988079071, 0.6499999761581421, 3.5299999713897705], 'AtVector': [0.9900000095367432, 1.3700000047683716, -0.07000000029802322], 'TargetFovy': 42.61000061035156, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Npc_Gerudo_Queen_Young', 'TargetActorInstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CameraName': '', 'SceneName': 'C06-0', 'RootType': 3, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 76})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfGerudo_PyramidLiftOpenShutter', 'Index': -1, 'Value': True})
        Dm_Locator[demo].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0039_BossBattleRoomDoor_Open', 'SLinkKey': ''})
    }

}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4520.89013671875, 198.94000244140625, 3612.830078125], 'AtVector': [-4519.47998046875, 218.39999389648438, 3612.47998046875], 'TargetFovy': 40.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [-4520.64990234375, 202.30999755859375, 3612.77001953125], 'AtVector': [-4519.47998046875, 218.39999389648438, 3612.47998046875], 'TargetFovy': 40.0, 'MoveTime': 80, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 2.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        SoundSystemActor.EventWait({'Frames': 44, 'IsWaitEnd': True})
        DgnObj_ElectricElevator_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_GE_0039_BossBattleRoomDoor_OpenEnd'})
    }

    EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'ChangeSpeed': 4, 'IsWaitEnd': False, 'EnvTimeTableName': '', 'EnvPaletteName': 'Gerudo_Dungeon_Boss'})
    EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'PosVector': [-4515.0, 233.5500030517578, 3610.6201171875], 'AtVector': [-4522.08984375, 234.25999450683594, 3610.219970703125], 'TargetFovy': 36.20000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_ElectricElevator_A_01.EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -45.0, 'Position': [-4518.55419921875, 228.76600646972656, 3611.56201171875]})
        DgnObj_ElectricElevator_A_01.EventPlayAS({'Partial': '', 'ASName': 'C03-DgnObj_ElectricElevator_End', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': False, 'IsWaitEnd': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C08-Npc_Gerudo_Queen_Young-A-0_LookAround', 'IsAnimeDriven': False, 'IsAllSlot': True})
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 2})
    } {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C08-Link-A-0_LookAround', 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 600, 'PosVector': [-4514.68994140625, 233.5500030517578, 3610.639892578125], 'AtVector': [-4521.77978515625, 234.25999450683594, 3610.239990234375], 'TargetFovy': 36.20000076293945, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        DgnObj_ElectricElevator_A_01.EventPlayAS({'ASName': 'Off_All', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Player.EventTriggerClearModelBindAndDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01'})
        Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ASCommand': 'C08-Link-A-0_Turn', 'IsWaitEnd': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait_FooIKOff', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Dm_GE_0039:Talk_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 0.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C09() {
    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.0, 'ListenerPresetName': 'CameraFront_10m'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4516.56982421875, 234.6300048828125, 3608.669921875], 'TargetFovy': 50.0, 'AtVector': [-4512.89990234375, 235.05999755859375, 3605.1298828125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'MoveTime': 120, 'IsLinearMove': True, 'PosVector': [-4512.25, 235.19000244140625, 3604.52001953125], 'AtVector': [-4503.009765625, 236.4499969482422, 3595.610107421875], 'TargetFovy': 43.849998474121094, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerModelUnbind()
        EventSystemActor[NPC_wait].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4518.0, 232.52549743652344, 3611.2451171875], 'YAngle': 155.0})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void C10() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4505.89990234375, 236.10000610351562, 3598.5400390625], 'AtVector': [-4494.16015625, 238.35000610351562, 3587.070068359375], 'TargetFovy': 27.610000610351562, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.5, 'IsWaitEnd': True, 'MoveTime': 55, 'PosVector': [-4504.1201171875, 236.44000244140625, 3596.81005859375], 'AtVector': [-4494.16015625, 238.35000610351562, 3587.070068359375], 'TargetFovy': 27.610000610351562, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidLiftArrive'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_Pyramid_LightSourceStop', 'Value': False})
    DgnObj_ElectricElevator_A_01.EventWarpToTargetPosAndRot({'Position': [-4518.55419921875, 230.67999267578125, 3611.56201171875], 'YAngle': -45.0, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.0})
}

void short() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfGerudo_PyramidLiftOpenShutter', 'Value': True, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerModelBindWithDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01', 'BoneName': 'PlayerPosition1', 'RotOffset': [0.0, 120.0, 0.0], 'TransOffset': [-0.30000001192092896, 0.0, 0.0]})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerModelBind({'ActorName': 'DgnObj_ElectricElevator_A_01', 'InstanceName': '', 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Position1', 'RotOffset': [0.0, 200.0, 0.0]})
    DgnObj_ElectricElevator_A_01.EventPlayAS({'Partial': '', 'ASName': 'C03-DgnObj_ElectricElevator_End', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsAllSlot': False, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    Player.EventTriggerClearModelBindAndDependency({'InstanceName': '', 'ActorName': 'DgnObj_ElectricElevator_A_01'})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerModelUnbind()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
}
