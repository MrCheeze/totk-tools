-------- EventFlow: DmF_SY_FallDown --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerSweepAround', 'EventPlayerAbyss', 'EventPlayerDrown', 'EventPlayerPostAbyss']
queries: ['EventQueryCheckPlayerAbyssType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventRequestSageSkillCancel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventAbyssCamera', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerStartSpotBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_FallDown() {

    fork {
        if !Player.EventQueryCheckPlayerAbyssType({'AbyssType': 2}) {

            fork {
                Player.EventPlayerDrown({'IsWaitEnd': True})
            } {
                EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
            }

        } else {

            fork {
                Player.EventPlayerAbyss({'IsWaitEnd': True, 'InvalidDamage': False})
            } {
                if !Player.EventQueryCheckPlayerAbyssType({'AbyssType': 3}) {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    Event3:
                    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
                } else
                if !Player.EventQueryCheckPlayerAbyssType({'AbyssType': 4}) {
                    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
                } else {
                    goto Event3
                }
            }

        }
    } {

        call AbyssCamera()

    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmSpotミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    SoundSystemActor.EventTriggerStartSpotBgm({'SpotBgmControlType': 5})
    Player.EventPlayerPostAbyss({'IsWaitEnd': True, 'IsNoOffset': False})
    Player.EventPlayerSweepAround({'IsWaitEnd': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:BgmSpotミュート', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    GameSystemActor.EventRequestSageSkillCancel({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': True})
}

void AbyssCamera() {
    if !Player.EventQueryCheckPlayerAbyssType({'AbyssType': 3}) {
        EventCamera.EventDoNothing({'IsWaitEnd': False})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'PlayerDeath'}) {
        EventCamera.EventAbyssCamera({'IsWaitEnd': True, 'MinRadius': 1.0, 'Fovy': 65.0, 'JudgeTooCloseHeight': -0.30000001192092896, 'TargetApproachRate': 0.20000000298023224, 'FovyApproachRate': 0.10000000149011612})
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'GameOverReason', 'Value': 'OpenDoorFailure'}) {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    } else {
        EventCamera.EventDoNothing({'IsWaitEnd': False})
    }
}
