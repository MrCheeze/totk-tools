-------- EventFlow: Dm_ZO_0014 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerRequestFullWet', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerStopInAir', 'EventTriggerParticipateEvent']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void DemoON() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_Zora_AncientFacilityWaterFall_A_02', 'KeyName': 'Always'})

    call AirStartUP_Player_ZO()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageofZora_AncintFacility_WaterFlows02'})

    fork {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [3706.989990234375, 117.05999755859375, -260.8699951171875], 'AtVector': [3731.85009765625, 101.31999969482422, -278.5299987792969], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageofZora_AncintFacility_WaterFallDelete'})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_BuBuBu', 'Length': 5.0})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'IsWaitEnd': False, 'PosVector': [3702.2099609375, 120.08999633789062, -257.4700012207031], 'AtVector': [3731.85009765625, 101.31999969482422, -278.5299987792969], 'TargetFovy': 50.0, 'MoveTime': 150, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_30m', 'FadeTime': 0.10000000149011612})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call UnequipWepons()

    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageofZora_AncintFacility_BreakRock02', 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageofZora_AncintFacility_WaterFlows02', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventTriggerRequestFullWet()

    call PlayAS({'ASCommand': 'ShakeOffWater'})

    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 0.10000000149011612, 'ListenerPresetName': 'Normal'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call PlayAS({'ASCommand': 'DemoWait'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void UnequipWepons() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }
}

void PlayAS() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
        } else {
            Player.EventTriggerParticipateEvent()
        }
    } else {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'ASCommand': 'ASCommand'})
    }
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
