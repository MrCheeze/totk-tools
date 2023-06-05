-------- EventFlow: DmF_SY_SmallDungeon2Go --------

Actor: DgnObj_ZonauShrineEntrance_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerMoveToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventEventFadeOut', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_SmallDungeon2Go() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': False})

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsLinearMove': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'StartAccelerateRate': 0.5, 'MoveTime': 50, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 1, 'EndRecelerateRate': 0.10000000149011612, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'AtVector': [0.0, 1.7999999523162842, -4.5], 'PosVector': [0.0, 1.7999999523162842, 0.800000011920929], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'EnterSmallDungeonPos', 'IsWaitEnd': False, 'MoveSpeed': 0.0010000000474974513, 'DecSpeedDistance': 5.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [-2.0, 10.0, 26.5], 'NextBanc': 'NextBanc', 'BootEventName': 'DmF_SY_SmallDungeon3Arrive', 'NextStartRot': [0.0, 0.0, 0.0], 'NextStartPos': 'OnElevator', 'IsStartOnEvent': False, 'FadePattern': 0})
    GameSystemActor.EventTriggerRequestAutoSave()
}
