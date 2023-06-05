-------- EventFlow: SkyIsland_GerudoMaze --------

Actor: DgnObj_Terminal_A_01[GerudoMazeSky5]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0009/Dm_OP_0009_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0009_Link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

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

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0013_1Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0013_2Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0013_3Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0013_4Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[ActivateGate(DgnObj_Terminal_A_04)]
entrypoint: ActivateGate(DgnObj_Terminal_A_04)
actions: ['EventPlayAS']
queries: []
params: None

Actor: DgnObj_Terminal_A_04[ActivateGateBefore(TerminalActorName)]
entrypoint: ActivateGateBefore(TerminalActorName)
actions: ['EventPlayAS']
queries: []
params: None

void 1TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Land2_Exp'}) {

        call ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_1Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_1Terminal")})

        Event0:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Sky_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Sky1st_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Sky2nd_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Sky3rd_Exp'}) {
                        DgnObj_Terminal_A_01[GerudoMazeSky5].EventTriggerParticipateEvent()
                        EventCamera.EventTriggerCameraSavePoint()

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Connect_GerudoMaze_Sky5Appear', 'Index': -1, 'Value': True})
                        } {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 120, 'AtVector': [-0.10000000149011612, 131.35000610351562, -0.550000011920929], 'PosVector': [-0.5, 132.35000610351562, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        }


                        call VibrationCommon.OnetimeSmall()

                        DgnObj_Terminal_A_01[GerudoMazeSky5].EventTriggerEmitXLink({'ELinkKey': 'Terminal_Rise_Up', 'SLinkKey': 'Terminal_Rise_Up'})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

                        call VibrationCommon.ContinuousSmall()

                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'TargetFovy': 50.0, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'Actor2InstanceName': '', 'Actor2ActorName': '', 'MoveTotargetPosType': 1, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 120, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'DesignateMatrixActor', 'AtVector': [0.0, 1.350000023841858, 0.550000011920929], 'PosVector': [0.0, 2.3499999046325684, 15.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                        call VibrationCommon.OnetimeSmall()

                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Connect_GerudoMaze', 'StepName': 'SkyAll', 'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SkyIsland0013_DungeonAppeared'})
                    }
                } else {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Connect_GerudoMaze', 'StepName': 'Sky3rd', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
                }
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Connect_GerudoMaze', 'StepName': 'Sky2nd', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
            }
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Connect_GerudoMaze', 'StepName': 'Sky1st', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    } else {

        call ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_1Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_1Terminal")})

    }
}

void 2TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Land2_Exp'}) {

        call ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_2Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_2Terminal")})

        goto Event0
    } else {

        call ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_2Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_2Terminal")})

    }
}

void 3TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Land2_Exp'}) {

        call ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_3Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_3Terminal")})

        goto Event0
    } else {

        call ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_3Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_3Terminal")})

    }
}

void 4TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_GerudoMaze_IsAfter_Land2_Exp'}) {

        call ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_4Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_4Terminal")})

        goto Event0
    } else {

        call ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0013_4Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0013_4Terminal")})

    }
}

void ActivateGate() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'AtVector': [-0.10000000149011612, 1.350000023841858, -0.550000011920929], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [-0.5, 2.3499999046325684, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'SkyIslandXXXX_YTerminal', 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        DgnObj_Terminal_A_04[ActivateGate(DgnObj_Terminal_A_04)].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Activate', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'OpenCDungeonGate', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {

        call Dm_SY_0010.OpenGateVibration()

    }

    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void ActivateGateBefore() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [-0.10000000149011612, 1.350000023841858, -0.550000011920929], 'PosVector': [-0.5, 2.3499999046325684, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'SkyIslandXXXX_YTerminal', 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'lookhand', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        DgnObj_Terminal_A_04[ActivateGateBefore(TerminalActorName)].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Failure', 'ClothWarpMode': -1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    DgnObj_Terminal_A_04[ActivateGateBefore(TerminalActorName)].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1, 'ASName': 'OffWait'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerRequestAutoSave()
}
