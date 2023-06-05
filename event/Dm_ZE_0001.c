-------- EventFlow: Dm_ZE_0001 --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': True, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0001/Dm_ZE_0001_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0001.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'Rotation': [0.0, 180.0, 0.0], 'Position': [0.0, 0.0, 3.0], 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: FldObj_DragonTears_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call ArmBlink()


    call ArmUp()


    call ReturnStart()

    Player.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_Player_RaulHandShain_DragonMemory_Loop', 'IsKill': False, 'ELinkKey': 'Dm_ZE_0001_Flash'})

    call Shizuku()


    call FadeOut()

    GameSystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
}

void ArmBlink() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Dm_ZE_0001_WaitSmall', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        Player.EventPlayerWarpToTargetActor({'YAngle': 180.0, 'TargetActorKind': 1, 'IsWaitEnd': True, 'PositionOffset': [0.0, 0.11599999666213989, 3.0], 'InstanceName': '', 'ActorName': 'FldObj_DragonTears_01', 'OffsetBase': 0, 'UseDemoWait': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.2699999809265137, 1.190000057220459, 0.9900000095367432], 'AtVector': [0.09000000357627869, 0.8399999737739563, -0.05000000074505806], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Dm_Locator[Pos].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'FldObj_DragonTears_01', 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 0})
    }

    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_Player_RaulHandShain_DragonMemory_Omen', 'ELinkKey': 'Dm_ZE_0001_Flash'})
    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 8})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Biyoon'})
    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 72})
    Player.EventTriggerEmitXLink({'SLinkKey': 'Dm_Player_RaulHandShain_DragonMemory_Loop', 'ELinkKey': ''})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LookHand', 'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName': 'DmF:WorldSEミュート(フェード長い)'})
    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void Ready() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    FldObj_DragonTears_01.EventTriggerParticipateEvent()
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
}

void ArmUp() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZE_0001', 'CommandLife': 2, 'IsReleaseDucking': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7799999713897705, 2.7899999618530273], 'AtVector': [0.0, 1.6200000047683716, 1.7999999523162842], 'TargetFovy': 20.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
}

void ReturnStart() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 95})
    } {
        FldObj_DragonTears_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0001_DragonTears_TearsDropReverse', 'SLinkKey': 'Dm_DragonTears_TearsDropReverse'})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [4.539999961853027, 3.549999952316284, 7.039999961853027], 'AtVector': [1.149999976158142, 0.949999988079071, 1.850000023841858], 'TargetFovy': 26.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void Shizuku() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C04-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Pos', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        FldObj_DragonTears_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0001_DragonTears_WhiteFade', 'SLinkKey': 'Dm_DragonTears_WhiteFade_EnterMemory'})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 8})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.0})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.0})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 122})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
    }

}

void FadeOut() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C05-1', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
    } {
        FldObj_DragonTears_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZE_0001_DragonTears_TearsDropReverse', 'SLinkKey': '', 'IsKill': False})
    }

}
