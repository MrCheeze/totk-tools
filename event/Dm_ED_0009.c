-------- EventFlow: Dm_ED_0009 --------

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerRideDragon', 'EventPlayerPlayASForFlowchart', 'EventPlayerOnStopMode', 'EventPlayerWarpToTargetActor', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerModelBindWithDependency', 'EventGoOffstageForUser', 'EventPlayerHorseGetOff', 'EventTriggerClearModelBindAndDependency', 'EventPlayerWait']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0009/Dm_ED_0009_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0009_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerParticipateEvent', 'EventDragonEndRailMove', 'EventTriggerDragonLightRequestStraightMoveAction', 'EventDragonMoveToTargetPos', 'EventDragonWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0009/Dm_ED_0009_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0009_Dragon.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerReserveChangeConnectionTimingAfterEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [-584.0, 1161.0, -1084.0], 'IsBindNearestActor': False}

void OutOfDragonBattleArea() {

    call Ready()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_DragonBattleOutsideA'}) {

        call OutBelow()

    } else {

        call OutSide()

    }

    call End()


    fork {
        Enemy_Dragon_Light_002.EventDragonMoveToTargetPos({'IsWaitEnd': False, 'DecelerationStartDistance': 0.0, 'TargetPos': [-348.0, 2800.0, -18.0], 'StopWhenLeave': False, 'ASName': 'WaitRiseForRescueEvent', 'IsAllSlot': True, 'MoveSpeed': 26.0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Dragon_Light_002', 'PosVector': [-68.27999877929688, -20.549999237060547, -17.6200008392334], 'AtVector': [-23.31999969482422, -7.78000020980835, -7.849999904632568], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 1, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
    }

    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': True})
    Enemy_Dragon_Light_002.EventTriggerDragonLightRequestStraightMoveAction()
}

void OutBelow() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'IsReferenceRootOnce': False, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    } {
        Player.EventPlayerWarpToTargetActor({'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 34.5, -6.849999904632568], 'IsWaitEnd': False, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Down1', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsAllSlot': True})

        call Common.AirStartUP_Player()

        Player.EventPlayerHorseGetOff({'IsWaitEnd': False})
        Player.EventPlayerOnStopMode({'StopAnm': False})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'ASCommand': 'Down1', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'IsAllSlot': True})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 58})
        Player.EventTriggerModelBindWithDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': '', 'BoneName': 'Forehead_Link', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Enemy_Dragon_Light_002.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'IsWaitEnd': False, 'PositionOffset': [1.8136999607086182, -23.769899368286133, -26.7903995513916]})
        Enemy_Dragon_Light_002.EventPlayAS({'Partial': '', 'ASName': 'Get_Link', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0, 'Color': 1})
    Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': ''})
}

void End() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_DragonBattleOutsideA', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DefeatGanondorf_DragonBattleOutsideB'})
    Enemy_Dragon_Light_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'ASName': 'Dragon_Stop'})
    Player.EventTriggerModelBindWithDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': '', 'BoneName': 'Forehead_Link', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    Enemy_Dragon_Light_002.EventDragonWarpToStarterLinkAnchor({'InstanceName': 'DragonWarpDestination_Dm_ED_0009', 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor'})
    Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': ''})
    Player.EventPlayerRideDragon({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': '', 'IsWaitEnd': True, 'ASCommand': ''})
}

void Ready() {

    fork {
        Dm_Locator.EventTriggerParticipateEvent()
    } {
        Enemy_Dragon_Light_002.EventTriggerParticipateEvent()
        Enemy_Dragon_Light_002.EventDragonEndRailMove()
    } {
        Enemy_Dragon_Darkness.EventTriggerParticipateEvent()
    } {
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Event41:
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
            Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 4, 'EquipmentState': 2})
        } else
        if !Player.EventQueryCheckPlayerState({'State': 18}) {
            goto Event41
        } else {
            Player.EventPlayerWait({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            goto Event41
        }
    }

}

void OutSide() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'IsReferenceRootOnce': False, 'SceneName': 'C02-0', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 125})
    } {
        Enemy_Dragon_Light_002.EventWarpToTargetActor({'TargetActorKind': 1, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0, 'ActorName': 'Dm_Locator', 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False})
        Enemy_Dragon_Light_002.EventPlayAS({'Partial': '', 'IsAnimeDriven': True, 'ASName': 'scream', 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': 0.0})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0, 'Color': 1})
}
