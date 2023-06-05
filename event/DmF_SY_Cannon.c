-------- EventFlow: DmF_SY_Cannon --------

Actor: EventSystemActor[player]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[dm]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventLaunchCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerShowHUD', 'EventTriggerSetTraverseBasePosByActorPos', 'EventTriggerRequestAutoSave', 'EventTriggerOneShotRequestInvokeTraverse', 'EventTriggerControllerRumble']
queries: ['EventQueryIsOpenCannon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonLauncher_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: ['EventQueryIsSameCannonNo']
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_Cannon/DmF_SY_Cannon_FldObj_CannonLauncher_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_Cannon_FldObj_CannonLauncher_A.root.as', 'IsBindNearestActor': False}

Actor: FldObj_CannonBellows_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_Cannon/DmF_SY_Cannon_FldObj_CannonBellows_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_Cannon_FldObj_CannonBellows_A.root.as', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Demo_Guardian_Leg
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_Cannon/DmF_SY_Cannon_Obj_CannonLauncher_Guardian_Leg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_Cannon_Obj_CannonLauncher_Guardian_Leg.root.as', 'Position': [0.0, -10.0, 0.0], 'IsBindNearestActor': False}

Actor: Demo_Reel
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerModelBind', 'EventGoOffstageForUser', 'EventReelSyncEndAnm']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_Cannon/DmF_SY_Cannon_Item_CannonReel/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_Cannon_Item_CannonReel.root.as', 'Position': [0.0, -5.0, 0.0], 'IsBindNearestActor': False}

Actor: FldObj_Cannon_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerClearModelBindAndDependency', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerModelBindWithDependency', 'EventPlayerLaunch', 'EventPlayerWarpToTargetActor', 'EventPlayerOnStopMode', 'EventTriggerPlayerRequestGlide', 'EventPlayerOffStopMode', 'EventPlayerGlide', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_Cannon/DmF_SY_Cannon_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_Cannon_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[Con]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[con]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectCloudDisplayOff', 'EventForceCloudSeaAppear']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[kaze]
entrypoint: None()
actions: ['EventClothRequestExtraWind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Ready()

    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 1}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 1}) {

            call Camera_Right()

        } else {

            call Camera_Right_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 2}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 2}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 3}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 3}) {

            call Camera_UpLeft()

        } else {

            call Camera_UpLeft_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 4}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 4}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 5}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 5}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 6}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 6}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 7}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 7}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 8}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 8}) {

            call Camera_UpLeft()

        } else {

            call Camera_UpLeft_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 9}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 9}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 10}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 10}) {

            call Camera_UpRight()

        } else {

            call Camera_Cannon10()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 11}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 11}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 12}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 12}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 13}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 13}) {

            call Camera_UpLeft()

        } else {

            call Camera_UpLeft_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 14}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 14}) {

            call Camera_UpLeft()

        } else {

            call Camera_UpLeft_1st()

        }
    } else
    if !FldObj_CannonLauncher_A_01.EventQueryIsSameCannonNo({'TowerNo': 15}) {
        if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 15}) {

            call Camera_UpRight()

        } else {

            call Camera_UpRight_1st()

        }
    }
}

void Ready() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'FadeType': 2, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    FldObj_CannonLauncher_A_01.EventTriggerParticipateEvent()
    FldObj_CannonBellows_A_01.EventTriggerParticipateEvent()
    DgnObj_WarpPoint_A_01.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerSetTraverseBasePosByActorPos({'Actor': 'PreTraversePos', 'Instance': 'pretraversepos', 'Index': 0})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    EventEffectEmitter.EventForceCloudSeaAppear({'PrepareState': True, 'AppearState': False})
}

void C01_1st() {

    fork {
        FldObj_CannonBellows_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Expand', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {

        call C01_Setting()

    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C13_00_Bellows_Swell'})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'dm', 'PosVector': [0.0, 1.75, 8.220000267028809], 'AtVector': [0.0, 0.9599999785423279, 0.30000001192092896], 'TargetFovy': 29.770000457763672, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'Frames': 29, 'IsWaitEnd': True})
    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_CannonLauncher_Omen', 'SLinkKey': 'DmF_SY_Cannon_C14_00_Launcher_Rattle'})
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C13_00_Bellows_Swell'})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C02', 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'Demo_LockOnWait', 'ClothWarpMode': 0})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_Cannon_Revisited', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 1.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'SceneName': 'C02-0', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-1'})
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        GameSystemActor[con].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_CannonLauncher_Launch', 'SLinkKey': 'DmF_SY_Cannon_C16_00_Launcher_Launch'})
    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C15_00_Bellows_Shrink'})
    }

}

void End() {

    fork {
        Player.EventPlayerLaunch({'IsWaitEnd': True, 'InstanceName': 'ArrivalPoint', 'ActorName': 'DestinationAnchor', 'MoveAnmName': 'CannonJump', 'ReachFrame': 160.0, 'WorldOffset': [0.0, 46.0, 0.0], 'EndAnmName': 'CannonJumpEndToGlide'})
    } {

        call End_Common()


        fork {
            EventCamera.EventLaunchCamera({'EnableControle': True, 'IsWaitEnd': False, 'OffsetFrame': 0, 'TurnbackOffsetRate': 0.30000001192092896, 'Offset': [0.0, -1.5, 0.0]})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameSystemActor.EventTriggerShowHUD()
            EventEffectEmitter.EventForceCloudSeaAppear({'AppearState': True, 'PrepareState': False})
        }

    } {
        EventSystemActor.EventWait({'Frames': 160, 'IsWaitEnd': True})
        GameSystemActor[kaze].EventClothRequestExtraWind({'ActorName': 'Player', 'InstanceName': '', 'IsWaitEnd': False, 'Elevation': 85.0, 'Azimuth': 150.0, 'Speed': 25.0})
    }

    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    EventWorldManagerController.Event_ResetWindForFlowchart({'IsImmTrans': False, 'IsWaitEnd': False})
    Player.EventPlayerOffStopMode()
    Player.EventPlayerGlide({'IsWaitEnd': True, 'ASCommand': 'CannonJumpToGlide_NoPad'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player.EventTriggerPlayerRequestGlide()
}

void C03() {

    fork {
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'SceneName': 'C03-0', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C03', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C03', 'ForceFadeInFrame': -1.0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C03', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 1.7999999523162842})
    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C17_00_Launcher_Up'})
    }

}

void Camera_Right() {

    call C01_Setting()

    Event494:
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call C02()


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'IsReferenceRootOnce': False, 'SceneName': 'C05-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {

        call C05()

    }

    Event519:
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'IsWaitEnd': False, 'InstanceName': '', 'ActorName': 'FldObj_Cannon_A_01', 'PositionOffset': [0.0, 165.60400390625, 0.0], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C05', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Event190:

        call End()

    } else {
        goto Event190
    }
}

void Camera_UpLeft() {

    call C01_Setting()

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call C02()


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'SceneName': 'C05-0', 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {

        call C05()

    }

    goto Event519
}

void Camera_UpRight() {

    call C01_Setting()

    goto Event494
}

void C05() {

    fork {
        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'FldObj_CannonLauncher_A_01', 'InstanceName': ''})
        Player.EventPlayerOnStopMode({'StopAnm': False})
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'FldObj_CannonLauncher_A_01', 'OffsetBase': 1, 'PositionOffset': [0.0, 73.4739990234375, 0.0], 'YAngle': 180.0, 'IsWaitEnd': False, 'InstanceName': '', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C05', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C05', 'ForceFadeInFrame': -1.0})
    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C18_00_Launcher_Up'})
    } {
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Worldミュート(DmF_SY_Cannon用)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    }

    EventSystemActor[Con].EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
    FldObj_Cannon_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_Cannon_JumpOut', 'SLinkKey': ''})
    FldObj_CannonLauncher_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C17_00_Launcher_Up', 'IsKill': False})
    FldObj_CannonLauncher_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'IsKill': False, 'SLinkKey': 'DmF_SY_Cannon_C18_00_Launcher_Up'})
    FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C18_00_Launcher_Shoot'})
}

void C01_Setting() {
    Player.EventTriggerModelBindWithDependency({'ActorName': 'FldObj_CannonLauncher_A_01', 'RotOffset': [0.0, 180.0, 0.0], 'InstanceName': '', 'BoneName': 'BindJoint', 'TransOffset': [0.0, 0.05000000074505806, 0.0]})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void C05_1st() {

    fork {
        Demo_Reel.EventPlayAS({'ASName': 'C05', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {

        call C05()

    }

}

void Camera_Right_1st() {

    call Attach()


    call C00()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [-10.369999885559082, -5.059999942779541, 16.040000915527344], 'AtVector': [0.0, -1.4199999570846558, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call C01_1st()

    }


    call C02_1st()

    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [-10.369999885559082, -5.059999942779541, 16.040000915527344], 'AtVector': [0.0, -1.4199999570846558, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {

            call C02-1_1st()

        }

    }

    call C02-2_1st()

    Event235:

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'IsReferenceRootOnce': False, 'SceneName': 'C05-1', 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {

        call C05_1st()

    }

    Event156:

    call End_1st()

}

void Camera_UpLeft_1st() {

    call Attach()


    call C00()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [10.40999984741211, 1.8600000143051147, 16.09000015258789], 'AtVector': [0.0, -4.929999828338623, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call C01_1st()

    }


    call C02_1st()

    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [10.40999984741211, 1.8600000143051147, 16.09000015258789], 'AtVector': [0.0, -4.929999828338623, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {

            call C02-1_1st()

        }

    }

    call C02-2_1st()


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'SceneName': 'C05-0', 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {

        call C05_1st()

    }

    goto Event156
}

void Camera_UpRight_1st() {

    call Attach()


    call C00()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [-10.489999771118164, 1.5800000429153442, 16.09000015258789], 'AtVector': [0.0, -4.929999828338623, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call C01_1st()

    }


    call C02_1st()

    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonBellows_A_01', 'PosVector': [-10.489999771118164, 1.5800000429153442, 16.09000015258789], 'AtVector': [0.0, -4.929999828338623, 0.0], 'TargetFovy': 49.13999938964844, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {

            call C02-1_1st()

        }

    }

    call C02-2_1st()

    goto Event235
}

void C02_1st() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'dm', 'PosVector': [0.0, 1.75, 8.220000267028809], 'AtVector': [0.0, 0.9599999785423279, 0.30000001192092896], 'TargetFovy': 29.770000457763672, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 1.0})
    } {
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_CannonLauncher_Omen', 'SLinkKey': ''})
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C02', 'ForceFadeInFrame': -1.0})
    } {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

            fork {
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'C01', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
                FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C14_00_Launcher_Rattle_2nd'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            } {
                Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        } else {

            fork {
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C02', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'UseAnmDriven': False, 'ClothWarpMode': 0})
                FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'SLinkKey': 'DmF_SY_Cannon_C14_00_Launcher_Rattle', 'ELinkKey': ''})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_10'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 23})
            } {
                Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }

        }
    }

}

void End_1st() {
    Demo_Reel.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player', 'BoneName': 'Root'})

    fork {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

            fork {
                Player.EventPlayerLaunch({'IsWaitEnd': True, 'InstanceName': 'ArrivalPoint', 'ActorName': 'DestinationAnchor', 'ReachFrame': 160.0, 'MoveAnmName': 'CannonJump', 'WorldOffset': [0.0, 46.0, 0.0], 'EndAnmName': 'CannonJumpEndPad'})
            } {
                Demo_Reel.EventReelSyncEndAnm({'IsWaitEnd': False, 'LoopASName': 'CannonJump', 'EndASName': 'CannonJumpEd', 'CheckASName': 'CannonJumpEndPad'})
            }

        } else {

            fork {
                Player.EventPlayerLaunch({'IsWaitEnd': True, 'InstanceName': 'ArrivalPoint', 'ActorName': 'DestinationAnchor', 'ReachFrame': 160.0, 'MoveAnmName': 'Demo_CannonJump', 'EndAnmName': 'Demo_CannonJumpEnd', 'WorldOffset': [0.0, 46.0, 0.0]})
            } {
                Demo_Reel.EventReelSyncEndAnm({'IsWaitEnd': False, 'LoopASName': 'CannonJump_1st', 'EndASName': 'CannonJumpEd_1st', 'CheckASName': 'Demo_CannonJumpEnd'})
            }

        }
    } {

        call End_Common()

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, -0.20000000298023224, -5.300000190734863], 'AtVector': [0.0, -0.20000000298023224, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False})

        fork {
            EventCamera.EventLaunchCamera({'EnableControle': True, 'IsWaitEnd': False, 'OffsetFrame': 0, 'Offset': [0.0, -1.5, 0.0], 'TurnbackOffsetRate': 0.30000001192092896})
        } {
            EventEffectEmitter.EventForceCloudSeaAppear({'AppearState': True, 'PrepareState': False})
        }

    } {
        EventSystemActor.EventWait({'Frames': 160, 'IsWaitEnd': True})
        GameSystemActor[kaze].EventClothRequestExtraWind({'ActorName': 'Player', 'InstanceName': '', 'IsWaitEnd': False, 'Elevation': 85.0, 'Azimuth': 150.0, 'Speed': 25.0})
    }

    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 20, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [0.0, 9.510000228881836, -2.200000047683716], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'CannonJumpToGlide', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoGlide', 'IsAllSlot': True, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        Demo_Reel.EventPlayAS({'ASName': 'CannonJumpToGlide', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'DemoGlide', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air', 'SLinkKey': ''})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_LeftHand', 'SLinkKey': ''})
    }

}

void Attach() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.899999976158142, 4.610000133514404, -4.090000152587891], 'AtVector': [-0.4300000071525574, 1.0499999523162842, -0.9200000166893005], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'FldObj_CannonLauncher_A_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    } {
        Demo_Guardian_Leg.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Demo_Reel.EventTriggerParticipateEvent()
    }

    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        call Attach_2nd()

    } else {

        call Attach_1st()

    }
    Demo_Guardian_Leg.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventEffectEmitter.EventEffectCloudDisplayOff()
}

void Attach_2nd() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoLookPad', 'IsAllSlot': True, 'ClothWarpMode': 0})
    Dm_Locator[dm].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'YAngle': 180.0, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1})
    Demo_Guardian_Leg.EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'IsWaitEnd': False, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 180.0})
    Demo_Guardian_Leg.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 34})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Attach_2nd_st'})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'ASCommand': 'Attach_2nd_st', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'ActorName': 'FldObj_CannonLauncher_A_01', 'BoneName': 'BindJoint', 'TransOffset': [0.0, 0.05000000074505806, 0.0]})
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attach_2nd_st'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'SceneName': 'B02-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Attach_2nd_00'})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'Attach_2nd_00', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_2nd_00', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'SceneName': 'B03-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Attach_2nd_01'})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'KeepOneTimeAnm': True, 'ASCommand': 'Attach_2nd_01', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_2nd_01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'SceneName': 'B04-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Attach_2nd_02'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_2nd_02', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_2nd_02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'SceneName': 'B05-0', 'IsLoop': False, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Attach_2nd_03'})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_2nd_03', 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_2nd_03', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_Cannon_Second', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Attach_1st() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        Dm_Locator[dm].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'YAngle': 180.0, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'OffsetBase': 1})
        Demo_Guardian_Leg.EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'IsWaitEnd': False, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 180.0})
        Demo_Guardian_Leg.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})

        fork {
            EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})
        } {
            Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attach_1st_00', 'IsWaitEnd': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'Attach_1st_00', 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
        } {
            Demo_Reel.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'ActorName': 'FldObj_CannonLauncher_A_01', 'BoneName': 'BindJoint', 'TransOffset': [0.0, 0.05000000074505806, 0.0]})
            Demo_Reel.EventPlayAS({'ASName': 'Attach_1st_00', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 43})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_00'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'A02-0', 'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'Frames': 39, 'IsWaitEnd': True})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV725_01', 'ELinkKey': ''})
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 24})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_02'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'A03-0', 'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'Frames': 23, 'IsWaitEnd': True})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 6})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 14})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_03'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'A04-0', 'RootType': 3, 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_04'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'A05-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'A06-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'dm', 'TargetActorName': 'Dm_Locator', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_05'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'A07-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attach_1st_01', 'IsWaitEnd': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_1st_01', 'ClothWarpMode': 3})
    } {
        Demo_Reel.EventPlayAS({'ASName': 'Attach_1st_00', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 24})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_06'})
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 33})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_07'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'A08-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'OverwriteStartFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Demo_Guardian_Leg.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attach_1st_02'})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_1st_02', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_1st_02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'A09-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'dm', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Demo_Guardian_Leg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Attach_1st_03', 'IsWaitEnd': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_1st_03', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_1st_03', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    } {
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 13})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_08'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'A10-0', 'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'dm', 'TargetActorName': 'Dm_Locator', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'Attach_1st_04', 'ClothWarpMode': 0})
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 39})
        Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_09'})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Attach_1st_04', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_Cannon_First', 'CommandLife': 2, 'IsReleaseDucking': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C00() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'FldObj_CannonLauncher_A_01', 'PosVector': [-38.63999938964844, 18.790000915527344, 81.30999755859375], 'AtVector': [0.4399999976158142, 40.189998626708984, 1.1799999475479126], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'Actor1ActorName': 'FldObj_CannonLauncher_A_01', 'PosVector': [-37.0099983215332, 19.68000030517578, 77.97000122070312], 'AtVector': [0.4399999976158142, 40.189998626708984, 1.1799999475479126], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        EventSystemActor[player].EventWait({'IsWaitEnd': True, 'Frames': 1})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Worldミュート(DmF_SY_Cannon用)', 'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': ''})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsLinearMove': True, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'AtVector': [15.819999694824219, 15.489999771118164, 22.530000686645508], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DgnObj_WarpPoint_A_01', 'PosVector': [19.780000686645508, 9.130000114440918, 26.739999771118164], 'AtVector': [16.049999237060547, 15.9399995803833, 22.770000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'IsWaitEnd': False, 'MoveTime': 60, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void C02-1_1st() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        FldObj_CannonBellows_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Shrink_Loop'})
        EventSystemActor[Con].EventWait({'IsWaitEnd': True, 'Frames': 10})
        FldObj_CannonBellows_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Shrink', 'IsWaitEnd': False})
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C15_00_Bellows_Shrink'})
    }

}

void C02-2_1st() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'FldObj_CannonLauncher_A_01', 'IsWaitEnd': True, 'InterpolateFrame': 0.0, 'SceneName': 'C02-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-1'})
        EventSystemActor[player].EventWait({'Frames': 5, 'IsWaitEnd': True})
        GameSystemActor[con].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_CannonLauncher_Launch', 'SLinkKey': 'DmF_SY_Cannon_C16_00_Launcher_Launch'})
    } {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {
            FldObj_CannonLauncher_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'DmF_SY_Cannon_C15_00_Bellows_Shrink'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            Demo_Reel.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } else {

            fork {
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C02-1', 'IsAllSlot': True, 'ClothWarpMode': 0})
                SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
                Player.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'PV725_11'})
            } {
                Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C02-1', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False})
            }

        }
    }

    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        call C03()

    }
}

void Camera_Cannon10() {

    call Attach()


    call C00()


    call C01_Setting()


    call C02_1st()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_Cannon'}) {

        call C02-1_1st()

    }

    call C02-2_1st()

    goto Event235
}

void End_Common() {
    GameSystemActor.EventTriggerSetTraverseBasePosByActorPos({'Actor': 'DestinationAnchor', 'Instance': 'ArrivalPoint', 'Index': 0})
    GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

    fork {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    } {
        FldObj_CannonLauncher_A_01.EventPlayAS({'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'Default', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
        FldObj_CannonBellows_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Default', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    }

}
