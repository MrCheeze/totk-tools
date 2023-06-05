-------- EventFlow: Unlock_TBoxMinusEnemy --------

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Miasma
entrypoint: None()
actions: ['EventTriggerTreasureBoxUnlocked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TBox_Field_Enemy_Miasma[Impl(TBoxActorID)]
entrypoint: Impl(TBoxActorID)
actions: []
queries: []
params: None

void Unlock_TBoxMinusEnemy() {

    call Impl({'TboxActor': 'TBox_Field_Enemy_Miasma', 'TBoxActorID': ActorIdentifier(name="TBox_Field_Enemy_Miasma")})

}

void Impl() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:拠点全滅宝箱デモ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

    call Common.AirStartUP_Player()

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'PosVector': [-3.412597894668579, 3.0074920654296875, 8.476539611816406], 'AtVectorSetType': 3, 'AtVector': [-0.6534420251846313, 1.1872860193252563, 1.7441710233688354], 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TboxActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [-3.189574956893921, 2.8603670597076416, 7.9323811531066895], 'AtVector': [-1.117676019668579, 1.493468999862671, 2.876671075820923], 'MoveTime': 30, 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TboxActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        TBox_Field_Enemy_Miasma.EventTriggerTreasureBoxUnlocked()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 1.5, 4.5], 'AtVector': [0.0, 0.5, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'TboxActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 13})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 0.5, 0.0], 'PosVector': [0.0, 1.0, 3.0], 'MoveTime': 7, 'Actor1ActorName': 'TboxActor', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}
