-------- EventFlow: FocusOnGimmick_Vibration --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_RuinStoneWall_A_30_Shutter
entrypoint: None()
actions: ['EventTriggerShutterFenceRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_RuinStoneWall_A_20_Shutter
entrypoint: None()
actions: ['EventTriggerShutterFenceRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Wait120NoPlayer() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': -10.0, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    FldObj_RuinStoneWall_A_30_Shutter.EventTriggerShutterFenceRequestCameraShake()
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}

void Wait120CameraFront() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'LookAtVectorY': 1, 'ToleranceYUpwardAngle': 10.0, 'ToleranceYDownwardAngle': -10.0, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    FldObj_RuinStoneWall_A_20_Shutter.EventTriggerShutterFenceRequestCameraShake()
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 255})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}

void Wait120Vibration() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    FldObj_RuinStoneWall_A_30_Shutter.EventTriggerShutterFenceRequestCameraShake()
    GameSystemActor.EventTriggerRequestAutoSave()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 165})
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
}
