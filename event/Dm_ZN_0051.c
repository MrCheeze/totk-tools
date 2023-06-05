-------- EventFlow: Dm_ZN_0051 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_ContainerSupply_A_03
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_ZN_0051() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsAfter_CarryHead_CheckPoint04_Exp'}) {

        call Authentication_SatelliteTemple()


        call Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_3'})


        call Container_Sweep({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'Container_Sweep_3', 'GameDataName': 'SageOfSoul_Container_Sweep_3'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_AirWallOn'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor_3'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_TerminalOn_RightLegContainer_Respawn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 179})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_TerminalOn_RightLegContainer_Respawn', 'Value': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_RightLeg'})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetActorInstanceName': 'ContainerStorage_EventCamera01', 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            DgnObj_Terminal_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'ASName': 'Light_On', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2_3', 'Index': -1})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2_3'})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Light_Off', 'IsWaitEnd': True})
            EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'TargetActorInstanceName': 'SatelliteTempleDoor_EventCamera01', 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_RightLeg'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

            fork {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'c02-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor_3', 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_OpenedSatelliteTempleExit_RightLeg'})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {

        call Failure_SatelliteTemple()


        call Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_3'})

    }
}

void Authentication_SatelliteTemple() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AuthenticationPos', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        DgnObj_Terminal_A_04.EventPlayAS({'ASName': 'Activate', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'OpenCDungeonGate', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Byeen', 'Length': 0.0})
    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
}

void Failure_SatelliteTemple() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'AuthenticationPos', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'OpenCDungeonGate', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        DgnObj_Terminal_A_04.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ASName': 'Failure', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
    }

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void Container_Sweep() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'IsExcludePlacedAroundAnchor': False, 'Height': 6.5, 'AnchorActorName': 'AnchorActorName', 'AnchorInstanceName': 'AnchorInstanceName', 'Radius': 5.5, 'IsDeleteActor': True, 'IsSweepOut': False})
    }
}

void Terminal_Sweep() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'Radius': 2.5, 'Height': 5.0, 'IsDeleteActor': False, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'AuthenticationPos'})
    }
}
