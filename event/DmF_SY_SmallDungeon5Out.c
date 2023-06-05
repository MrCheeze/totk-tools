-------- EventFlow: DmF_SY_SmallDungeon5Out --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsWorld': False, 'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [0.0, 0.0, 0.0], 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntrance_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerClearIsNeedOpenAtRequest']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': True, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_SmallDungeon5Out/DmF_SY_SmallDungeon5Out_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_SmallDungeon5Out_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'Position': [0.0, 0.0, 0.0], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera[EventCamera]
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void DmF_SY_SmallDungeon5Out() {
    EventCamera[EventCamera].EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    Dm_Locator[Pos].EventDoNothing({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerParticipateEvent()
    DgnObj_WarpPoint_Zonau_A_01.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerClearIsNeedOpenAtRequest({'Category': 6})

    fork {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'OffsetBase': 1, 'YAngle': 0.0, 'InstanceName': 'Pos', 'PositionOffset': [0.0, 0.0, -2.6440000534057617], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C01-Link-A-0', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 0, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 1.7999999523162842, -4.300000190734863], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 70, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventCamera[EventCamera].EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventTriggerRequestAutoSave()
}
