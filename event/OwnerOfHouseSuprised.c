-------- EventFlow: OwnerOfHouseSuprised --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventPlayerWait', 'EventPlayerHorseGetOff', 'EventPlayerClimbOff']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage010[Init_OwnerOfHouseSurprised(Npc)]
entrypoint: Init_OwnerOfHouseSurprised(Npc)
actions: ['EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag']
queries: []
params: None

void Init_OwnerOfHouseSurprised() {

    fork {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    } {
        Npc_UMiiVillage010[Init_OwnerOfHouseSurprised(Npc)].EventTriggerParticipateEvent()
        Npc_UMiiVillage010[Init_OwnerOfHouseSurprised(Npc)].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            }
            Event19:
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
            goto Event19
        }
    }

    Npc_UMiiVillage010[Init_OwnerOfHouseSurprised(Npc)].EventTriggerSetHaveTalked({'IsReflectWhenSleep': False, 'value': True})
    Npc_UMiiVillage010[Init_OwnerOfHouseSurprised(Npc)].EventTriggerSetRecentTalkFlag({'IsReflectWhenSleep': False, 'value': True})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'AbsenceTalk_CameraAngle', 'Index': -1, 'Value': 0})
}

void Staging_OwnerOfHouseSurprised() {
    Event32:
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc', 'InstanceName': 'InstanceName'})

    call Camera({'Actor2ActorName': 'Npc', 'Actor2InstanceName': 'InstanceName'})

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void Staging_OwnerOfHouseSurprised_NoSurprise() {
    Event43:
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc', 'InstanceName': 'InstanceName'})

    call Camera({'Actor2ActorName': 'Npc', 'Actor2InstanceName': 'InstanceName'})

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void Staging_OwnerOfHouseSurprised0() {
    goto Event32
}

void Staging_OwnerOfHouseSurprised_NoSurprise0() {
    goto Event43
}

void Camera() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'AbsenceTalk_IsPlayerHide', 'Index': -1}) {
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }
    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'AbsenceTalk_CameraAngle', 'Index': -1, 'Value': 1}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'LatShiftRange': 30.0, 'LongShiftRange': 90.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'AbsenceTalk_CameraAnchor', 'PosVector': [0.0, 1.600000023841858, -3.200000047683716], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'Actor2ActorName': 'Actor2ActorName', 'Actor2InstanceName': 'Actor2InstanceName', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 0, 'LatShiftRange': 30.0, 'LongShiftRange': 90.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'AbsenceTalk_CameraAnchor', 'PosVector': [0.0, 1.2000000476837158, -3.200000047683716], 'AtVector': [0.0, 0.8999999761581421, 0.0], 'Actor2ActorName': 'Actor2ActorName', 'Actor2InstanceName': 'Actor2InstanceName', 'PosVectorSetType': 3, 'AtVectorSetType': 4, 'EnableCameraAlpha': False})
    }
}
