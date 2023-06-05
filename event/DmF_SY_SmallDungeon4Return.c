-------- EventFlow: DmF_SY_SmallDungeon4Return --------

Actor: EventCamera[EventCamera]
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_Small_Warpin_B_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChangeExitSmallDungeon', 'EventEventFadeOut', 'EventTriggerRequestAutoSave']
queries: ['EventQueryCheckCurrentBancWorkPath', 'EventQueryIsClearDungeon']
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

void DmF_SY_SmallDungeon4Return() {

    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': False})

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 2, 'IsForceFadeTime': True})
    EventCamera[EventCamera].EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    DgnObj_Small_Warpin_B_02.EventTriggerParticipateEvent()

    fork {
        Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': False, 'MoveSpeed': 0.0010000000474974513, 'DecSpeedDistance': 5.0, 'AnchorInstanceName': 'LeaveSmallDungeonPos'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.5, 'TargetFovy': 35.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': False, 'EndRecelerateRate': 0.10000000149011612, 'MoveTime': 50, 'PosVector': [0.0, 1.7999999523162842, 0.800000011920929], 'AtVector': [0.0, 1.7999999523162842, -4.5], 'Actor1ActorName': 'DgnObj_Small_Warpin_B_02', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        DgnObj_Small_Warpin_B_02.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_SmallDungeon4Return_WhiteFog'})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': True})

    call ChangePouch.ReturnNoVoice()

    if GameSystemActor.EventQueryIsClearDungeon() {

        call CheckReturnZonauMagic()

    }
    GameSystemActor.EventReserveBancChangeExitSmallDungeon({'IsWaitEnd': True, 'BootEventName': 'DmF_SY_SmallDungeon5Out'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void CheckReturnZonauMagic() {
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon060'}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Obj_UltraHand', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon061'}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Obj_Tooreroof', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    } else
    if !GameSystemActor.EventQueryCheckCurrentBancWorkPath({'BancWorkPath': 'SmallDungeon/Dungeon062'}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Obj_OneTouchBond', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    }
}
