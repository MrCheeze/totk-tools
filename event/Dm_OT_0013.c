-------- EventFlow: Dm_OT_0013 --------

Actor: SkyObj_TempleOfTimeDoor_A_01[Entrance]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerRequestEnduringCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    SkyObj_TempleOfTimeDoor_A_01[Entrance].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'SkyObj_TempleOfTimeDoor_A_01', 'PosVector': [2.440000057220459, 1.100000023841858, 3.4800000190734863], 'AtVector': [1.7400000095367432, 1.1299999952316284, 2.7699999809265137], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': 'Entrance', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Active', 'ActorName': 'SkyObj_TempleOfTimeDoor_A_01'})
        SkyObj_TempleOfTimeDoor_A_01[Entrance].EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0013_TimeDoor_Authentication', 'SLinkKey': 'Dm_Zonau_Authentication'})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'SkyObj_TempleOfTimeDoor_A_01', 'OffsetBase': 0, 'InstanceName': 'Entrance', 'YAngle': 178.0, 'PositionOffset': [0.020800000056624413, 0.09000000357627869, 1.7200000286102295], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'OpenCDungeonGate', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Byeen'})
    }

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventTriggerRequestEnduringCameraShake({'ApplyType': 1, 'Pattern': 3, 'Power': 0.10000000149011612, 'IsRumbleController': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'SkyObj_TempleOfTimeDoor_A_01', 'Actor1InstanceName': 'Entrance', 'PosVector': [0.0, 0.25999999046325684, 7.489999771118164], 'AtVector': [0.0, 0.6100000143051147, 6.550000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'SkyObj_TempleOfTimeDoor_A_01', 'Actor1InstanceName': 'Entrance', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 0.5299999713897705, 10.020000457763672], 'AtVector': [0.0, 1.2400000095367432, 8.130000114440918], 'MoveTime': 280, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 15.0})
    } {
        SkyObj_TempleOfTimeDoor_A_01[Entrance].EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0013_TimeDoor_Open', 'SLinkKey': ''})
        SkyObj_TempleOfTimeDoor_A_01[Entrance].EventPlayAS({'ASName': 'Slide', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 9.199999809265137})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 293})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
