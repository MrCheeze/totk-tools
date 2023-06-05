-------- EventFlow: Dm_ZN_0050 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventBasedOnLookAtCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Obj_Zonau_ContainerSupply_A_03
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Dm_ZN_0050() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsAfter_CarryHead_CheckPoint04_Exp'}) {

        call Dm_ZN_0051.Authentication_SatelliteTemple()


        call Dm_ZN_0051.Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_4'})


        call Dm_ZN_0051.Container_Sweep({'AnchorActorName': 'DesignateMatrixActor', 'GameDataName': 'SageOfSoul_Container_Sweep_4', 'AnchorInstanceName': 'Container_Sweep_4'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_AirWallOn'})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor_4'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_TerminalOn_LeftArmContainer_Respawn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 179})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_TerminalOn_LeftArmContainer_Respawn', 'Value': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_LeftArm'})
            EventCamera.EventTriggerCameraSavePoint()
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            EventCamera.EventBasedOnLookAtCamera({'MoveTime': 15, 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'LookAtVectorXZ': 1, 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'DesignateMatrixActor', 'TargetActorInstanceName': 'ContainerStorage_EventCamera01', 'TargetOffset': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IdealDistance': 4.5})
            DgnObj_Terminal_A_04.EventPlayAS({'IsWaitEnd': False, 'ASName': 'ActivatedWait', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'ASName': 'Light_On', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2_4'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 48})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor2_4'})
            Obj_Zonau_ContainerSupply_A_03.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Light_Off', 'IsWaitEnd': True})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'RootType': 0, 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
            GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSoul_ClosedSatelliteTempleDoor_LeftArm'})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})

            fork {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C03-0', 'CalcUpInInterpolate': False})
            } {
                GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_SwitchedSatelliteTempleDoor_4'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_OpenedSatelliteTempleExit_LeftArm'})
            }

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'SageOfSoul_AirWallOn'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }
    } else {

        call Dm_ZN_0051.Failure_SatelliteTemple()


        call Dm_ZN_0051.Terminal_Sweep({'GameDataName': 'SageOfSoul_Terminal_Sweep_4'})

    }
}
