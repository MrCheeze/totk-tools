-------- EventFlow: SageOfGerudo_PyramidSwitchOn2 --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventSoundStartSound', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_PyramidSwitchCount', 'Index': -1, 'Value': 3}) {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'DuckingName2': 'DmF:Bgm下げ', 'CommandLife': 0})
    } else {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    }
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4601.72021484375, 156.75999450683594, 3528.530029296875], 'AtVector': [-4604.66015625, 156.97999572753906, 3525.469970703125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerParticipateEvent()
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    fork {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4579.1201171875, 157.91000366210938, 3544.179931640625], 'AtVector': [-4583.39990234375, 155.8699951171875, 3541.72998046875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_SageOfGerudo_PyramidSwitchOn2_00', 'IsIgnoreDucking': False})
    }

    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_SageOfGerudo_PyramidSwitchOn2_01', 'IsIgnoreDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4524.81005859375, 145.10000610351562, 3605.360107421875], 'AtVector': [-4527.52001953125, 140.50999450683594, 3602.669921875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-4516.77001953125, 145.10000610351562, 3613.3701171875], 'AtVector': [-4519.47998046875, 140.50999450683594, 3610.679931640625], 'TargetFovy': 50.0, 'MoveTime': 35, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})

    call SageOfGerudo_PyramidLiftConsole.EntryPoint0()

}
