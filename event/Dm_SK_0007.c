-------- EventFlow: Dm_SK_0007 --------

Actor: EventSystemActor[Npc_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventPlayAS', 'EventDragonRotateFixHorizontal']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0007/Dm_SK_0007_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0007_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False, 'IsGrounding': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerModelBindWithDependency', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0007/Dm_SK_0007_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0007_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_Hair
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting', 'EventDisableXLinkLowGravity']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    EventEffectEmitter.EventDisableXLinkLowGravity()
    GameSystemActor.EventTriggerRequestAutoSave()

    call Ready()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()

}

void C01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Dm_Locator', 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'demo', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Link', 'IsAllSlot': True, 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    }

}

void Ready() {
    Player.EventTriggerModelBindWithDependency({'ActorName': 'Enemy_Dragon_Light_001', 'BoneName': 'Forehead_Link', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, -0.07000000029802322, 0.0]})
    EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'Elevation': 0.0, 'IsImmTrans': False, 'Azimuth': 180.0, 'Speed': 5.0})

    call Common.AirStartUP_Player()

    Enemy_Dragon_Light_001.EventDragonRotateFixHorizontal()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Dragon_Wait_HeadStop'})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Dm_Locator[demo].EventWarpToTargetPosAndRot({'Position': [1074.0, 3403.69189453125, 1373.656005859375], 'YAngle': -3.0, 'IsWaitEnd': True})
    CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_SK_0007_RayShaft', 'SLinkKey': ''})
    Weapon_Sword_070_ForGrabEvent.EventTriggerParticipateEvent()
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
    GameSystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Length': 1})
}

void C02() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SK_0007', 'CommandLife': 2, 'IsReleaseDucking': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C02-0', 'TargetActorName': 'Dm_Locator', 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'demo', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 14})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV727_00', 'ELinkKey': ''})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorInstanceName': '', 'SceneName': 'C03-0', 'TargetActorName': 'Enemy_Dragon_Light_001', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Dragon_Wait_HeadStop'})
    } {
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'DemoWait_FooIKOff', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Weapon_Sword_070_ForGrabEvent', 'AtVector': [0.0, 0.23000000417232513, -0.1599999964237213], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, -1.909999966621399, 0.8299999833106995], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'StartAccelerateRate': 0.0, 'MoveTime': 100, 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'Weapon_Sword_070_ForGrabEvent', 'PosVector': [0.0, -1.909999966621399, 0.8299999833106995], 'AtVector': [0.0, 0.2800000011920929, 0.27000001072883606], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Stop', 'ForceFadeInFrame': -1.0})
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 200})
        Enemy_Dragon_Light_Hair.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hair_Anm'})
        Enemy_Dragon_Light_Hair.EventTriggerEmitXLink({'SLinkKey': 'Dm_SK_0007_Hair_Untied', 'ELinkKey': ''})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': 'Dm_SK_0007_MasterSword_Under_Restoration', 'SLinkKey': ''})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.07000000029802322, 0.6800000071525574, 4.889999866485596], 'AtVector': [0.05000000074505806, 0.7200000286102295, 3.7899999618530273], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Hair_Enemy_Dragon_Light-A-0_Wait'})
    } {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
        Weapon_Sword_070_ForGrabEvent.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SK_0007_MasterSword_Under_Restoration', 'SLinkKey': '', 'IsKill': False})
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'MoveTime': 90, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.07999999821186066, 0.5099999904632568, 6.010000228881836], 'AtVector': [0.05999999865889549, 0.550000011920929, 5.010000228881836], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
}
