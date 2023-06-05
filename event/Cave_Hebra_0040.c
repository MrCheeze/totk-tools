-------- EventFlow: Cave_Hebra_0040 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_RuinStatueOwl_A_03[Cave_Hebra_0040]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void StatueMove() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Cave_Hebra_0040_BirdStatue', 'PosVector': [0.6100000143051147, 11.880000114440918, 30.139999389648438], 'AtVector': [0.05000000074505806, 1.9700000286102295, -13.880000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MedohArmor_StatueMoved', 'Index': -1, 'Value': True})
    FldObj_RuinStatueOwl_A_03[Cave_Hebra_0040].EventTriggerEmitXLink({'ELinkKey': 'Cave_Hebra_0040_BreakWall_Obj_RuinStatueOwl_WaterSplash', 'SLinkKey': 'Cave_Hebra_0040_BreakWall_Obj_RuinStatueOwl_WaterSplash'})

    call VibrationCommon.OnetimeLarge()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    call VibrationCommon.ContinuousMiddle()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call VibrationCommon.OnetimeMiddle()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Cave_Hebra_0040_BirdStatue', 'PosVector': [0.4399999976158142, 3.319999933242798, 16.979999542236328], 'AtVector': [0.05000000074505806, -1.940000057220459, -13.880000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
}

void BreakWall() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    EventCamera.EventTriggerCameraSavePoint()

    call Common.AirStartUP_Player()

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Cave_Hebra_0040_Wall', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 4.889999866485596, -12.3100004196167], 'AtVector': [0.0, -3.0299999713897705, 4.789999961853027], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 45, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'Cave_Hebra_0040_BirdStatue', 'PosVector': [11.5600004196167, 21.540000915527344, 23.989999771118164], 'AtVector': [-9.460000038146973, -24.25, 7.940000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MedohArmor_WaterMovedCount', 'Value': 3}) {
      case 0:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'MedohArmor_WaterMovedCount', 'Value': 1})
        Event11:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MedohArmor_WaterMovedCount', 'Value': 3}) {
          case 0:
            Event8:
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
          case [1, 2]:

            call StatueMove()

            goto Event8
        }
      case [1, 2]:
        goto Event11
    }
}
