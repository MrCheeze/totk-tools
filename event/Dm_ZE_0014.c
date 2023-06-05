-------- EventFlow: Dm_ZE_0014 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundChangeListenerPreset', 'EventWait', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventDragonMoveToTargetPos', 'EventWarpToTargetActor', 'EventTriggerParticipateEvent', 'EventPlayAS', 'EventDragonBeginRailMove', 'EventWarpToTargetPosAndRot', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerDragonCancelProhibitDropItem', 'EventTriggerDragonChangeEnableTailBone']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0014/Dm_ZE_0014_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0014_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerTurnAndLook', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0014/Dm_ZE_0014_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0014_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void Ready() {
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Enemy_Dragon_Light_001'})
    Player.EventTriggerParticipateEvent()
    Enemy_Dragon_Light_001.EventTriggerParticipateEvent()
    Enemy_Dragon_Light_001.EventTriggerDragonCancelProhibitDropItem()
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [4534.68017578125, 106.56890106201172, -2141.090087890625], 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Ready_Link', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    GameSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C01() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZE_0014', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Player', 'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C01-0', 'RootType': 3, 'IsLoop': False, 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01_Link', 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV727_00', 'ELinkKey': ''})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02_Enemy_Dragon_Light_Ready', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 166})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZE_0014_DragonLight_Voice_Cry', 'IsIgnoreDucking': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 2.0})
    }

}

void C05() {
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Enemy_Dragon_Light_001.EventDragonMoveToTargetPos({'IsWaitEnd': False, 'DecelerationStartDistance': 0.0, 'TargetPos': [3531.02490234375, 1551.1429443359375, 588.2449951171875], 'ASName': 'Wait', 'IsAllSlot': False, 'MoveSpeed': 5.0, 'StopWhenLeave': True})
    Enemy_Dragon_Light_001.EventTriggerDragonChangeEnableTailBone({'IsEnable': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4535.16015625, 111.61000061035156, -2143.389892578125], 'AtVector': [4535.18017578125, 114.62999725341797, -2139.4599609375], 'TargetFovy': 32.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [3909.781982421875, 569.05517578125, 569.05517578125], 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [4535.759765625, 107.1500015258789, -2144.2900390625], 'AtVector': [4534.68017578125, 108.30999755859375, -2141.10009765625], 'TargetFovy': 50.58000183105469, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 165, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MemoryOfTheDragon', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    Enemy_Dragon_Light_001.EventDragonBeginRailMove()
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    Enemy_Dragon_Light_001.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}

void C04() {
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.029999999329447746})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.5799999833106995, 1.350000023841858, 1.2000000476837158], 'AtVector': [0.7400000095367432, 1.2200000286102295, -0.9300000071525574], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C04_Link', 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsWaitEnd': True, 'ClothWarpMode': 0})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C04_Enemy_Dragon_Light_Move'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C04_Enemy_Dragon_Light_Move', 'ForceFadeInFrame': 30.0})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0]})
        Enemy_Dragon_Light_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': True, 'ASName': 'C02_Enemy_Dragon_Light'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Enemy_Dragon_Light_001.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード長い)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void C03() {
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_70m', 'FadeTime': 0.029999999329447746})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Enemy_Dragon_Light_001', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'SceneName': 'C03-0', 'IsLoop': False, 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventWarpToTargetPosAndRot({'YAngle': -53.19116973876953, 'Position': [4568.0, 371.00518798828125, -1814.9730224609375], 'IsWaitEnd': False})
        Enemy_Dragon_Light_001.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ASName': 'C03_Enemy_Dragon_Light', 'ForceFadeInFrame': 0.0})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [4534.68017578125, 106.56890106201172, -2141.090087890625], 'UseDemoWait': True, 'YAngle': -130.0})
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ASCommand': 'C04_Link_PreLoop', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

}
