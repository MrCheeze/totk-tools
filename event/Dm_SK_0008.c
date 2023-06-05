-------- EventFlow: Dm_SK_0008 --------

Actor: Dm_Locator[Pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetActor', 'EventGoOffstageForUser', 'EventDragonEndRailMove', 'EventDragonWarpToTargetPosAndRot', 'EventDragonRotateFixHorizontal', 'EventTriggerDragonChangeEnableTailBone']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0008/Dm_SK_0008_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0008_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerSwitchEquipment', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventWaitCreationFinishedEquipment', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0008/Dm_SK_0008_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0008_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0008/Dm_SK_0008/workspace.pp__ModelProject.gyml', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Pre()


    call Land()


    call UI()


    call Challenge()

}

void GetMasterSword() {

    call GetPouchContent.OpenGetWindowByActorName({'ActorName': 'Weapon_Sword_070', 'IsSuccess': True, 'IsEnableOpenPouch': False})


    call GetPouchContent.WaitCloseGetWindow()

}

void Land() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Dm_SK_0008_Land', 'IsAllSlot': True, 'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 44})
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_SK_0008_Player_Land', 'SLinkKey': 'Dm_FootStep_Land'})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.5})
    }

}

void UI() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'UI', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Pos', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsReferenceRootOnce': False, 'IsLoop': False, 'CalcUpInInterpolate': False})

        call GetMasterSword()

    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsWaitEnd': True, 'ASName': 'Dm_SK_0008_Jump', 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 650})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 3.5})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Wait', 'IsAllSlot': True})
        Enemy_Dragon_Light_001.EventDragonRotateFixHorizontal()
        Enemy_Dragon_Light_001.EventDragonWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -145.0, 'Position': [200.0, 1700.0, -140.0]})
        Enemy_Dragon_Light_001.EventTriggerDragonChangeEnableTailBone({'IsEnable': True})
    }

}

void Pre() {
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 7, 'TimeMin': 0})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Dm_Locator[Pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -20.0, 'Position': [454.43670654296875, 1578.001953125, 632.6528930664062]})
    Enemy_Dragon_Light_001.EventTriggerParticipateEvent()
    Enemy_Dragon_Light_001.EventDragonEndRailMove()

    call GetPouchContent.GetPouchContentByActorNameImpl({'ActorName': 'Weapon_Sword_070'})


    call GetPouchContent.PostGetWindowByActorName({'ActorName': 'Weapon_Sword_070'})


    call GetPouchContent.EquipWeaponByActorName({'EquipmentActorName': 'Weapon_Sword_070'})

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070', 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'IsWaitEnd': True})
    Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Enemy_Dragon_Light_001.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'OffsetBase': 1, 'PositionOffset': [30.67639923095703, 7.945099830627441, -12.56980037689209], 'YAngle': 227.48500061035156})
    Enemy_Dragon_Light_001.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Pos', 'PosVector': [-2.190000057220459, 1.7400000095367432, -1.7999999523162842], 'AtVector': [-0.47999998927116394, 0.8899999856948853, 0.14000000059604645], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Pos', 'IsWaitEnd': True, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 220.0, 'UseDemoWait': True})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False})
}

void Challenge() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetMasterSword_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'GetMasterSword', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Event38:

        call DragonMemoryCommonFlow.OpenPlayButton({'OpenCondition': 35})

    } else {
        goto Event38
    }
}
