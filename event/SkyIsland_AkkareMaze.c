-------- EventFlow: SkyIsland_AkkareMaze --------

Actor: DgnObj_Terminal_A_01[AkkareMazeSky5]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0014_1Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0014_2Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0014_3Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_04[SkyIsland0014_4Terminal]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void 1TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Land2_Exp'}) {

        call SkyIsland_GerudoMaze.ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_1Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_1Terminal")})

        Event0:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Sky_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Sky1st_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Sky2nd_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Sky3rd_Exp'}) {
                        DgnObj_Terminal_A_01[AkkareMazeSky5].EventTriggerParticipateEvent()
                        EventCamera.EventTriggerCameraSavePoint()

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Connect_AkkareMaze_Sky5Appear'})
                        } {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 120, 'AtVector': [-0.10000000149011612, 131.35000610351562, -0.550000011920929], 'PosVector': [-0.5, 132.35000610351562, -6.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        }


                        call VibrationCommon.OnetimeSmall()

                        DgnObj_Terminal_A_01[AkkareMazeSky5].EventTriggerEmitXLink({'ELinkKey': 'Terminal_Rise_Up', 'SLinkKey': 'Terminal_Rise_Up'})
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
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Connect_AkkareMaze', 'StepName': 'SkyAll', 'IsWaitEnd': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SkyIsland0014_DungeonAppeared'})
                    }
                } else {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Connect_AkkareMaze', 'StepName': 'Sky3rd', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
                }
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Connect_AkkareMaze', 'StepName': 'Sky2nd', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False})
            }
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Connect_AkkareMaze', 'StepName': 'Sky1st', 'IsWaitEnd': True})
        }
    } else {

        call SkyIsland_GerudoMaze.ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_1Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_1Terminal")})

    }
}

void 2TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Land2_Exp'}) {

        call SkyIsland_GerudoMaze.ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_2Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_2Terminal")})

        goto Event0
    } else {

        call SkyIsland_GerudoMaze.ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_2Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_2Terminal")})

    }
}

void 3TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Land2_Exp'}) {

        call SkyIsland_GerudoMaze.ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_3Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_3Terminal")})

        goto Event0
    } else {

        call SkyIsland_GerudoMaze.ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_3Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_3Terminal")})

    }
}

void 4TerminalActivated() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_AkkareMaze_IsAfter_Land2_Exp'}) {

        call SkyIsland_GerudoMaze.ActivateGate({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_4Terminal', 'DgnObj_Terminal_A_04': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_4Terminal")})

        goto Event0
    } else {

        call SkyIsland_GerudoMaze.ActivateGateBefore({'SkyIslandXXXX_YTerminal': 'SkyIsland0014_4Terminal', 'TerminalActorName': ActorIdentifier(name="DgnObj_Terminal_A_04", sub_name="SkyIsland0014_4Terminal")})

    }
}
