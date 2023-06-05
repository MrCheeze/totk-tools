-------- EventFlow: Dm_ZE_0002 --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0002/Dm_ZE_0002_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0002_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

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

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_DragonTears_01
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call Intro()


    call Player()


    call Shizuku()


    call Vanish()

}

void Ready() {
    Dm_Locator[Pos].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'FldObj_DragonTears_01', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Dm_ZE_0002_CloseEyes', 'ClothWarpMode': 0})
    EventWorldManagerController.Event_SetWindForFlowchart({'Azimuth': 90.0, 'Speed': 1.0, 'IsWaitEnd': False, 'Elevation': 0.0, 'IsImmTrans': False})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    GameSystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'Length': 2, 'IsWaitEnd': False})
}

void Intro() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'TargetFovy': 13.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [2.509999990463257, 2.700000047683716, 3.5899999141693115], 'AtVector': [0.0, 3.0, 0.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'MoveTime': 90, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [3.359999895095825, 2.5999999046325684, 4.809999942779541], 'TargetFovy': 13.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 3.0, 0.0], 'CameraCollisionMode': 1, 'StartAccelerateRate': 0.5, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        FldObj_DragonTears_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0002_DragonTears_WhiteFade', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        FldObj_DragonTears_01.EventTriggerEmitXLink({'SLinkKey': 'Dm_DragonTears_WhiteFade_ExitMemory', 'ELinkKey': ''})
    }

}

void Shizuku() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'IsLinearMove': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [2.7899999618530273, 2.6700000762939453, 3.990000009536743], 'AtVector': [2.2200000286102295, 2.740000009536743, 3.1700000762939453], 'TargetFovy': 13.899999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        FldObj_DragonTears_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0002_DragonTears_TearsDropForward', 'SLinkKey': 'Dm_DragonTears_TearsDropForward'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void Vanish() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [0.0, 3.75, 2.9000000953674316], 'AtVector': [0.0, 1.0770000219345093, -2.0]})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'StartAccelerateRate': 1.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 80, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [0.0, 3.75, 2.9000000953674316], 'AtVector': [0.0, 0.503000020980835, -2.0]})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName2': '', 'DuckingName': 'DmF:WorldSEミュート(フェード長い)'})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Player() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.6699999570846558, 2.369999885559082], 'AtVector': [0.0, 1.2999999523162842, -0.7300000190734863], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7200000286102295, 2.7899999618530273], 'AtVector': [0.0, 1.600000023841858, 1.7999999523162842], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'MoveTime': 75, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Dm_ZE_0002_OpenEyes', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 98})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV722_00'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
    }

}
