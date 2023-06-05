-------- EventFlow: Dm_SY_0001 --------

Actor: DgnObj_ZonauShrineEntrance_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerSetIsAppearSpiral', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerActorRenderingProxySetVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0001/Dm_SY_0001_DgnObj_ZonauShrineEntrance_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0001_DgnObj_ZonauShrineEntrance.root.as', 'IsBindNearestActor': True}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitUpdate', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntranceGround_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerActorRenderingProxySetVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0001/Dm_SY_0001_DgnObj_ZonauShrineEntrance_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0001_DgnObj_ZonauShrineEntrance.root.as', 'IsBindNearestActor': True}

Actor: DgnObj_WarpPoint_Zonau_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: Dm_FldObj_ZonauShrine_KeyCrystal
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0001/Dm_SY_0001_FldObj_ZonauShrine_KeyCrystal_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0001_FldObj_ZonauShrine_KeyCrystal_A.root.as', 'IsBindNearestActor': True, 'Position': [0.0, -3.0, 0.0]}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetActor', 'EventPlayerStopInAir', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntranceGate_A_01
entrypoint: None()
actions: ['EventTriggerSetAppearOwnGameData']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: DgnObj_ZonauShrineEntranceGateMark_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call c01()


    call c02()

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})

    call end()

    DgnObj_ZonauShrineEntrance_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': True})
    DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void pre() {
    Dm_FldObj_ZonauShrine_KeyCrystal.EventGoOffstageForUser({'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:WorldSEミュート(フェード長い)'})

    call Common.AirStartUP_Player()

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': False})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': False})
    DgnObj_ZonauShrineEntranceGate_A_01.EventTriggerSetAppearOwnGameData()
    GameSystemActor.EventWaitUpdate({'IsWaitEnd': True, 'UpdateCount': 3})

    fork {
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerParticipateEvent()
        DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'wait'})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetIsAppearSpiral({'IsAppear': False})
        DgnObj_ZonauShrineEntrance_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerParticipateEvent()
        DgnObj_ZonauShrineEntranceGround_A_01.EventPlayAS({'ASName': 'waitGround', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        DgnObj_ZonauShrineEntranceGround_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsSleepXLink': False, 'IsRidingTargetGoOffstage': False})
    } {
        DgnObj_WarpPoint_Zonau_A_01.EventTriggerParticipateEvent()
        DgnObj_WarpPoint_Zonau_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {

        call Link_position()

    } {
        DgnObj_ZonauShrineEntranceGateMark_A_01.EventPlayAS({'ASName': 'OffWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void c01() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'c01-0', 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CleanCenter', 'Radius': 8.0, 'Height': 14.5, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    } {

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'wait', 'IsAllSlot': True})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0001_EntranceRock_Appear', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Appear'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Dm_FldObj_ZonauShrine_KeyCrystal.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [-0.3564999997615814, 13.117300033569336, -7.426499843597412]})

        fork {
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'ASName': 'appear', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        } {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'ASName': 'appear', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        fork {
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'grow', 'IsWaitEnd': False})
        } {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'grow', 'IsWaitEnd': False})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'c01-1', 'CalcUpInInterpolate': False})
    } {
        DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'down', 'IsWaitEnd': False})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Down'})
    } {
        Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'down', 'IsWaitEnd': True})

        fork {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_DoDon', 'Length': 0.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Camera_Sin00'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoGoGo', 'Length': 3.299999952316284})
        } {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'matDisappear', 'IsWaitEnd': False})
        } {
            DgnObj_ZonauShrineEntranceGround_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'appearGround', 'IsWaitEnd': False})
            DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0001_ZonauShrineEntranceGround_SandFall', 'SLinkKey': ''})
            DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Ground'})
        }

    }

}

void c02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-10.5, 5.949999809265137, 10.300000190734863], 'TargetFovy': 70.0, 'AtVector': [-6.619999885559082, 6.800000190734863, 4.110000133514404], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 3, 'IsRumbleController': False, 'Power': 0.5, 'LoopEndCount': 50})
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'StartAccelerateRate': 0.0, 'MoveTime': 150, 'IsWaitEnd': False, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-10.5, 6.300000190734863, 10.300000190734863], 'TargetFovy': 75.0, 'AtVector': [-6.619999885559082, 8.100000381469727, 4.110000133514404], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 45.0})
        }
    } {
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0001_EntranceRock_ZonauSpiral_Start', 'SLinkKey': 'Dm_SY_0001_EntranceRock_ZonauSpiral'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetIsAppearSpiral({'IsAppear': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                if Player.EventQueryCheckPlayerState({'State': 3}) {
                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'SwimWait', 'ClothWarpMode': 0})
                }
            } else {
                Player.EventDoNothing({'IsWaitEnd': False})
            }
        } else {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
    } {
        DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'IsWaitEnd': True, 'ASName': 'OffWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        call skipAction()

    } else {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void end() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6}) {
        if !Player.EventQueryCheckPlayerState({'State': 3}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 3.0399999618530273, -3.1500000953674316], 'AtVector': [0.0, 1.850000023841858, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        }
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void skipAction() {
    Dm_FldObj_ZonauShrine_KeyCrystal.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'def_wait'})
    DgnObj_ZonauShrineEntranceGround_A_01.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'def_waitGround'})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0001_EntranceRock_Appear', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Appear', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0001_EntranceRock_ZonauSpiral_Start', 'SLinkKey': 'Dm_SY_0001_EntranceRock_ZonauSpiral', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Down', 'IsKill': True})
    DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0001_ZonauShrineEntranceGround_SandFall', 'SLinkKey': 'Dm_SY_0001_EntranceRock_Ground', 'IsKill': True})
}

void Link_position() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsPlayerInShrineStone'}) {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'PositionOffset': [0.0, 0.5, 2.200000047683716], 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    } else
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6})
        && !Player.EventQueryCheckPlayerState({'State': 3}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventDoNothing({'IsWaitEnd': True})
        }
    } else {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    }
}
