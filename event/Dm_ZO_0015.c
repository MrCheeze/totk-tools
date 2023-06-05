-------- EventFlow: Dm_ZO_0015 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerSweepAround', 'EventTriggerRequestFullWet', 'EventTriggerParticipateEvent', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Dm_ZO_0015() {

    call AirStartUP_Player_ZO()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventCamera.EventTriggerCameraSavePoint()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageofZora_AncintFacility_WaterFlows03'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageofZora_AncintFacility_BreakRock03'})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_BuBuBu', 'Length': 12.699999809265137})
    }


    call Dm_ZO_0015_C01_Cam()


    call Dm_ZO_0015_C02_Cam()


    fork {

        call Dm_ZO_0015_C03_Cam()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    } {
        Player.EventPlayerSweepAround({'IsWaitEnd': True})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageofZora_AncintFacility_WaterFlows03', 'Value': False})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call Dm_ZO_0014.UnequipWepons()

    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player.EventTriggerRequestFullWet()

    call Dm_ZO_0014.PlayAS({'ASCommand': 'ShakeOffWater'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageofZora_AncintFacility_DeleteWood', 'Value': True})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call Dm_ZO_0014.PlayAS({'ASCommand': 'DemoWait'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void Dm_ZO_0015_C01_Cam() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3655.080078125, 114.4800033569336, -295.260009765625], 'AtVector': [3638.300048828125, 115.23999786376953, -310.69000244140625], 'TargetFovy': 50.0, 'MoveTime': 0, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.10000000149011612, 'ListenerPresetName': 'CameraFront_30m'})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3656.659912109375, 114.4800033569336, -294.2799987792969], 'AtVector': [3639.8701171875, 115.23999786376953, -309.7099914550781], 'TargetFovy': 50.0, 'MoveTime': 120, 'IsLinearMove': True, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
}

void Dm_ZO_0015_C02_Cam() {
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_70m', 'FadeTime': 0.10000000149011612})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3677.39990234375, 144.1999969482422, -256.0899963378906], 'AtVector': [3656.419921875, 114.08000183105469, -313.0199890136719], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3677.39990234375, 144.1999969482422, -256.0899963378906], 'AtVector': [3667.830078125, 114.51000213623047, -316.2200012207031], 'TargetFovy': 50.0, 'IsWaitEnd': False, 'IsLinearMove': True, 'MoveTime': 200, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
}

void Dm_ZO_0015_C03_Cam() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 0, 'PosVector': [3616.52001953125, 115.81999969482422, -320.9700012207031], 'AtVector': [3624.760009765625, 115.7699966430664, -321.70001220703125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.10000000149011612, 'ListenerPresetName': 'Normal'})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 200, 'IsLinearMove': True, 'PosVector': [3618.179931640625, 115.81999969482422, -321.1099853515625], 'AtVector': [3626.409912109375, 115.7699966430664, -321.8399963378906], 'TargetFovy': 50.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void AirStartUP_Player_ZO() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    }
}
