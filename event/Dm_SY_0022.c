-------- EventFlow: Dm_SY_0022 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventTriggerForceCloseUIScreen', 'EventDoNothing', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventGoOffstageForUser', 'EventTriggerPlayerRequestFallLiftActor', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntrance_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerSetIsAppearSpiral', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerActorRenderingProxySetVisible']
queries: []
params: {'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0022/Dm_SY_0022_DgnObj_ZonauShrineEntrance_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0022_DgnObj_ZonauShrineEntrance.root.as', 'IsBindNearestActor': True}

Actor: ZonauShrine_EntranceGate
entrypoint: None()
actions: ['EventTriggerSetKeyCrystalDungeonState', 'EventRequestShowGateMark', 'EventTriggerEmitXLink', 'EventKeyCrystalChangeToKeyStone']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_FldObj_ZonauShrine_KeyCrystal
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerStartFadeOut', 'EventTriggerStartFadeIn', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'Position': [0.0, -50.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0022/Dm_SY_0022_FldObj_ZonauShrine_KeyCrystal_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0022_FldObj_ZonauShrine_KeyCrystal_A.root.as', 'IsBindNearestActor': True}

Actor: DgnObj_ZonauShrineEntranceGround_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

void EntryPoint0() {

    call pre()

    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call c01()


    call c02()


    call c03()


    call c04()


    call end()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void pre() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:WorldSEミュート(フェード長い)'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'CleanCenter', 'Radius': 8.0, 'Height': 14.5, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventTriggerPlayerRequestFallLiftActor()

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'OffsetBase': 1, 'YAngle': 180.0, 'InstanceName': '', 'PositionOffset': [0.0, 0.5, 2.200000047683716], 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait_FooIKOff', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    ZonauShrine_EntranceGate.EventTriggerSetKeyCrystalDungeonState({'State': 'ChangeToKeyStone'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    ZonauShrine_EntranceGate.EventKeyCrystalChangeToKeyStone({'IsWaitEnd': True})
    DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'wait', 'IsAllSlot': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetIsAppearSpiral({'IsAppear': False})
    DgnObj_ZonauShrineEntrance_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': False})
    Dm_FldObj_ZonauShrine_KeyCrystal.EventTriggerParticipateEvent()
    Dm_FldObj_ZonauShrine_KeyCrystal.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'wait', 'IsAllSlot': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
}

void c01() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'PosVector': [7.96999979019165, 8.0600004196167, 5.989999771118164], 'AtVector': [7.289999961853027, 7.699999809265137, 5.360000133514404], 'TargetFovy': 49.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    GameSystemActor.EventOpenMessageDungeon({'MessageID': 'EventFlowMsg/Dm_SY_0022:talk00', 'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'IsUnder': False})
}

void c02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'c02-0', 'RootType': 3, 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'lift', 'IsAnimeDriven': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 148})
        Dm_FldObj_ZonauShrine_KeyCrystal.EventTriggerStartFadeOut({'FadeFrame': 4})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Vanish'})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_KeyCrystal_Float', 'IsKill': False})
    } {
        DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0022_KeyCrystalDissapear', 'SLinkKey': ''})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_KeyCrystal_Float'})
    }

}

void c03() {

    fork {
        Player.EventPlayerWait({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'c03-0', 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0022_EntranceRock_Appear', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Appear'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'ASName': 'appear', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        } {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventTriggerStartFadeIn({'FadeFrame': 0})
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'ASName': 'appear', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})

        fork {
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'grow', 'IsWaitEnd': False})
        } {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'grow', 'IsWaitEnd': False})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'c03-1', 'CalcUpInInterpolate': False})
    } {
        DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'down', 'IsWaitEnd': False})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Down'})
    } {
        Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'down', 'IsWaitEnd': True})

        fork {
            Dm_FldObj_ZonauShrine_KeyCrystal.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'matDisappear', 'IsWaitEnd': True})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_DoDon', 'Length': 0.0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Camera_Sin00'})
        }

    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void end() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    ZonauShrine_EntranceGate.EventTriggerSetKeyCrystalDungeonState({'State': 'Open'})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerActorRenderingProxySetVisible({'IsRender': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void c04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'AtVector': [-2.950000047683716, 7.46999979019165, -1.9700000286102295], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 67.0, 'PosVector': [-9.0, 5.559999942779541, 11.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'StartAccelerateRate': 0.0, 'IsWaitEnd': True, 'MoveTime': 150, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 72.0, 'PosVector': [-9.0, 5.559999942779541, 11.0], 'AtVector': [-2.950000047683716, 9.0, -1.9700000286102295], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0022_EntranceRock_ZonauSpiral_Start', 'SLinkKey': 'Dm_SY_0022_EntranceRock_ZonauSpiral'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        fork {
            ZonauShrine_EntranceGate.EventRequestShowGateMark({'IsWaitEnd': True})
        } {
            DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetIsAppearSpiral({'IsAppear': True})
        } {
            ZonauShrine_EntranceGate.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_MarkAppear'})
        }

    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        call skipAction()

    } else {
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void skipAction() {
    GameSystemActor.EventTriggerForceCloseUIScreen({'ForceCloseScreen': 0})
    GameSystemActor.EventDoNothing({'IsWaitEnd': False})
    Dm_FldObj_ZonauShrine_KeyCrystal.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASName': 'def_wait'})
    DgnObj_ZonauShrineEntranceGround_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0022_KeyCrystalDissapear', 'SLinkKey': '', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Vanish', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0022_EntranceRock_Appear', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Appear', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_0022_EntranceRock_ZonauSpiral_Start', 'SLinkKey': 'Dm_SY_0022_EntranceRock_ZonauSpiral', 'IsKill': True})
    DgnObj_ZonauShrineEntrance_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_SY_0022_EntranceRock_Down', 'IsKill': True})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}
