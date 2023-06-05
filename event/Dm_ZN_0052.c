-------- EventFlow: Dm_ZN_0052 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_ContainerSupply_A_03
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_ZN_0052() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsAfter_CarryHead_CheckPoint04_Exp'}) {

        call Dm_ZN_0051.Authentication_SatelliteTemple()


        call Dm_ZN_0051.Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_1'})


        call Dm_ZN_0051.Container_Sweep({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'Container_Sweep_1', 'GameDataName': 'SageOfSoul_Container_Sweep_1'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_AirWallOn'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_TerminalOn_LeftLegContainer_Respawn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 179})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_TerminalOn_LeftLegContainer_Respawn', 'Value': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_LeftLeg', 'Value': False})
            EventCamera.EventTriggerCameraSavePoint()
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'IdealDistance': 7.5, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'CameraCollisionMode': 1, 'TargetActorInstanceName': 'ContainerStorage_EventCamera01', 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            DgnObj_Terminal_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'ASName': 'Light_On', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2'})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Light_Off', 'IsWaitEnd': True})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'DgnObj_Terminal_A_04', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
            GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_LeftLeg'})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'DgnObj_Terminal_A_04', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C03-0', 'CalcUpInInterpolate': False})
            GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_OpenedSatelliteTempleExit_LeftLeg'})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'DgnObj_Terminal_A_04', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C04-0', 'CalcUpInInterpolate': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {

        call Dm_ZN_0051.Failure_SatelliteTemple()


        call Dm_ZN_0051.Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_1'})

    }
}
