-------- EventFlow: Circuit_Ichikara --------

Actor: SpObj_ControlStick_A_02[Circuit_Ichikara]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerRecordControlStickMatrix']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryWarpToSafeSpaceWithCombinedActor', 'EventQueryWarpToRecordedPosWithCombinedActor', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryIsExistSafePosNearControlStick', 'EventQueryCheckContactCombinedBodyEntity']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A01_B01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A05]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A06]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A07]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[A08_B08]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[B02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[B04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[B05]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[B06]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[B07]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[Tutorial02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis039
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventWait', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis038
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventWait', 'EventPlayAS', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Umii_Ichikara_Scholar_C
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventWait', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventPlayerRideControlStick', 'EventPlayerTurnAndLook', 'EventWait', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerWarpToNearAnchor']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState', 'EventQueryCheckContactPlayer']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventSendMultiEventTalkMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventShowFinish', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerRollbackChallengeStep', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CircuitCheckPoint_A_01[StartGoal]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SpObj_ControlStick_A_02[InitInterruptionResetGame(SpObj_ControlStick_A_02)]
entrypoint: InitInterruptionResetGame(SpObj_ControlStick_A_02)
actions: ['EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_oasis038[EventJoin(JoinNpc1)]
entrypoint: EventJoin(JoinNpc1)
actions: ['EventTriggerParticipateEvent', 'EventWait', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_oasis039[EventJoin(JoinNpc2)]
entrypoint: EventJoin(JoinNpc2)
actions: ['EventTriggerParticipateEvent', 'EventWait', 'EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_EventStarter[Circuit_Ichikara_InitTalk(Talker_Actor)]
entrypoint: Circuit_Ichikara_InitTalk(Talker_Actor)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)]
entrypoint: Circuit_Ichikara_InitTalk(Listener_Actor)
actions: ['EventPlayAS', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: None

void Goal() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IchikaraCircuit_Tutorial_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {

            call Circuit_Ichikara_MiniGame.Circuit_Ichikara_MiniGame_Goal()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CheckPointAllClear', 'Index': -1}) {

            fork {
                SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})

                call TimeUpdateCheck()

                ChallengeSystemActor.EventTriggerUnshowTimerUI()

                call Circuit_Ichikara_MiniGame.SoundStopRaceBgm_Goal()

                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            } {

                call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

            }

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Playing', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing', 'Value': False})

            call FinaleEvent()

        }
    } else {

        call IchikaraCircuit_Tutorial.Goal()

    }
}

void FinaleEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call IchikaraCircuit_Tutorial.CheckPoint_AddEvent()


    call IchikaraCircuit_Tutorial.PositionReset()

    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
    if SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToRecordedPosWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'IsSafeCheck': True, 'IsEnableHitPlayer': True}) in [0, 1] {

        call CourseReset()


        fork {
            Npc_oasis039.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        } {
            Npc_oasis038.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        } {
            Npc_Umii_Ichikara_Scholar_C.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [5.710000038146973, 2.319999933242798, -1.3200000524520874], 'AtVector': [1.6200000047683716, 1.3600000143051147, 1.25], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventTriggerPlayerRequestLookAtTheFront()

        call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Spearker3ActorName': 'Npc_oasis038', 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Arg_Turn': 4, 'Actor3': ActorIdentifier(name="Npc_oasis038"), 'Actor1': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Actor2': ActorIdentifier(name="Npc_oasis039"), 'Spearker1ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker2ActorName': 'Npc_oasis039'})


        fork {
            Npc_oasis039.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_oasis038.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0078', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'Item_Enemy_130'}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_130_Bundle_A'})


            call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0057', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Contact_Exp'}) {

                call Uotori_ResortPlan.ResortPlan_Circuit_Finish()

            }
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0080', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Circuit_Ichikara', 'IsWaitEnd': True})
            Event291:
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0097', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0057', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Contact_Exp'}) {

                call Uotori_ResortPlan.ResortPlan_Circuit_Finish()

            }
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0080', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0098', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Circuit_Ichikara', 'StepName': 'Finish', 'IsWaitEnd': True})
            goto Event291
        }
    }
}

void CourseReset() {

    call CourseReset_LightOnly()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CheckPointAllClear', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_GrabHandle', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ReleaseHandle', 'Value': False})
}

void RespawnCar() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IchikaraChallenge_RespawnCar'})
    GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IchikaraChallenge_RespawnCar', 'Value': False})
}

void CourseOut_Circuit_Ichikara() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IchikaraCircuit_Tutorial_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {

            call Circuit_Ichikara_MiniGame.CourseOut_Circuit_Ichikara_MiniGame()

        } else {

            fork {

                call IchikaraCircuit_Tutorial.InitInterruption({'AsbObj_StoneRectangle_B_LL_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})


                call Circuit_Ichikara_MiniGame.SoundStopRaceBgmWithFue()

            } {

                call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

            }

            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event202:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call CheckPoint_AddEvent()


            call IchikaraCircuit_Tutorial.PositionReset()


            call InitInterruptionResetGame({'SpObj_ControlStick_A_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'IchikaraCircuitChallenge_Started_Move'})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CheckPointAllClear', 'Index': -1}) {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0100', 'IsNotOpenIfSkipedMostRecent': False})
                Event187:

                call Circuit_Ichikara_MiniGame.SoundStartInGameBgm()

                if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0119', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0136', 'ChoiceLabel1': 27, 'ChoiceLabel2': 28, 'ChoiceNumber': 3, 'ChoiceLabel3': 21, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine'}) {
                                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})
                                Event527:
                                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
                                Event221:

                                call CourseReset()

                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing', 'Value': False})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine', 'Value': False})
                                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Circuit_Ichikara', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                                GameSystemActor.EventTriggerRequestAutoSave()
                            } else {
                                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0027', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call CourseReset()

                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing', 'Value': False})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine', 'Value': False})
                                ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Circuit_Ichikara', 'IsIgnoreChallengeProgressUI': False})

                                call Rally_Ready()

                            }
                          case 1:
                            goto Event527
                          case 2:
                            Event381:
                            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0087', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event221
                        }
                    } else {
                        goto Event381
                    }
                } else {
                    goto Event381
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CheckPointContactAny'}) {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0108', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0109', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event187
        }
    } else {

        call IchikaraCircuit_Tutorial.CourseOut_IchikaraCircuit_Tutorial()

    }
}

void Ready_Npc_oasis039_Talk() {
    Event6:

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_oasis038', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis039', 'Spearker2InstanceName': '', 'Spearker3ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker3InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_oasis038"), 'Actor2': ActorIdentifier(name="Npc_oasis039"), 'Actor3': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Arg_Turn': 3})

    Npc_oasis038.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_oasis039.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0002', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0011', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3743.47509765625, 199.326904296875, -1679.1839599609375], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [3743.47509765625, 199.326904296875, -1679.1839599609375], 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0007', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3804.449951171875, 224.5399932861328, -1702.9300537109375], 'AtVector': [3788.219970703125, 219.25, -1701.1600341796875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3799.909912109375, 224.5399932861328, -1692.1300048828125], 'AtVector': [3789.3701171875, 219.25, -1704.6099853515625], 'TargetFovy': 50.0, 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    }


    call CameraReset_ScholarCandPlayerTurn()

    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Spearker1ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker2ActorName': 'Npc_oasis039', 'Spearker3ActorName': 'Npc_oasis038', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_TutorialClearTalk', 'Index': -1}) {
        Event1:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0001', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0003', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0026', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis039.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'ActorName': 'Player', 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        fork {
            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Npc_Umii_Ichikara_Scholar_C.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_Umii_Ichikara_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_oasis039', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_oasis038.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_oasis038.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 1, 'ActorName': 'Npc_oasis039', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_oasis039.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis038', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0005', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_oasis039.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0008', 'ChoiceLabel2': 17, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'FaceControlType': 1, 'ActorName': 'Npc_oasis039', 'Target': 2, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_oasis039.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Npc_oasis039.EventNPCTurnToTarget({'FaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Npc_oasis038.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_oasis038.EventNPCTurnToTarget({'FaceControlType': 1, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 17, 'ChoiceLabel3': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0010', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Event15:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0029', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ZonauGear_CameraPan()

            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0023', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset_ScholarCandPlayerTurn()

            EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 1, 'Spearker1ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker2ActorName': 'Npc_oasis039', 'Spearker3ActorName': 'Npc_oasis038', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Uotori_ResortPlan.Circuit_Ichkara_ReadyTalk()


            call AfterTalkWaitRequest()

            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Circuit_Ichikara', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Craft', 'IsWaitEnd': True})
          case 1:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event15
            } else {
                Event12:
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0019', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0077', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0024', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Uotori_ResortPlan.Circuit_Ichkara_ReadyTalk()


                call AfterTalkWaitRequest()

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Circuit_Ichikara', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Craft', 'IsWaitEnd': True})
            }
          case 2:
            goto Event12
        }
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0063', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TutorialClearTalk', 'Index': -1, 'Value': True})
        goto Event1
    }
}

void Ready_Npc_oasis038_Talk() {
    goto Event6
}

void Npc_Umii_Ichikara_Scholar_C_Near() {
    Npc_Umii_Ichikara_Scholar_C.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0002', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Npc_Umii_Ichikara_Scholar_C_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 1, 'Spearker1ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker2ActorName': 'Npc_oasis039', 'Spearker3ActorName': 'Npc_oasis038', 'Actor1': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Actor2': ActorIdentifier(name="Npc_oasis039"), 'Actor3': ActorIdentifier(name="Npc_oasis038"), 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': ''})

    Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_TutorialClearTalk', 'Index': -1}) {
        Event272:
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0070', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0063', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TutorialClearTalk', 'Index': -1, 'Value': True})
        goto Event272
    }
}

void Ready_Npc_Umii_Ichikara_Scholar_C_Talk() {
    goto Event6
}

void Npc_oasis038_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Spearker1ActorName': 'Npc_oasis038', 'Spearker2ActorName': 'Npc_oasis039', 'Actor1': ActorIdentifier(name="Npc_oasis038"), 'Actor2': ActorIdentifier(name="Npc_oasis039"), 'Spearker1InstanceName': '', 'Spearker2InstanceName': ''})

    Npc_oasis039.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Npc_Umii_Ichikara_Scholar_C.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})

    call EventJoin({'JoinNpc1': ActorIdentifier(name="Npc_oasis039"), 'JoinNpc2': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C")})


    call IchikaraCircuit_Tutorial.NoArmorTalk()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk'}) {
            if !Npc_oasis038.EventQueryIsOnRecentTalkFlag() {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0088', 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event153:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call IchikaraCircuit_Tutorial.NpcToPlayerTurn({'ActorName_000': 'Npc_oasis039', 'ActorName': ActorIdentifier(name="Npc_oasis039"), 'InstanceName_000': ''})

                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0004', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis038_QuestionisFirstTalk01'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk02'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis038_QuestionisFirstTalk02'})
                    Event455:
                    GameSystemActor.EventTriggerRequestAutoSave()
                  case 1:

                    call IchikaraCircuit_Tutorial.NpcToPlayerTurn({'ActorName_000': 'Npc_oasis039', 'ActorName': ActorIdentifier(name="Npc_oasis039"), 'InstanceName_000': ''})

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_ResortPlan_Oasis038_QuestionisFirstTalk02'}) {
                        Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0055', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_ResortPlan_Oasis038_QuestionisFirstTalk02'})
                    && !Npc_oasis039.EventQueryIsOnRecentTalkFlag() {
                        Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event455
                    } else {
                        Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0089', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis038_QuestionisFirstTalk02'})
                        goto Event455
                    }
                  case 2:
                    Npc_oasis038.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event455
                }
            } else {
                Event93:
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0048', 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event153
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk'})
            goto Event93
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk'}) {
        if !Npc_oasis038.EventQueryIsOnRecentTalkFlag() {
            Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event263:
            Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0048', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event455
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk'})
        goto Event263
    }
}

void Npc_oasis039_Talk() {

    call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 1, 'Spearker3ActorName': 'Npc_oasis038', 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Actor3': ActorIdentifier(name="Npc_oasis038"), 'Actor1': ActorIdentifier(name="Npc_oasis039"), 'Actor2': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Spearker1ActorName': 'Npc_oasis039', 'Spearker2ActorName': 'Npc_Umii_Ichikara_Scholar_C'})

    Npc_oasis039.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Umii_Ichikara_Scholar_C.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk'}) {
            if !Npc_oasis039.EventQueryIsOnRecentTalkFlag() {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0055', 'ChoiceLabel1': 10, 'ChoiceLabel3': 11, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
                Event310:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0004', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ClothWarpMode': 0})
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk02'})
                    goto Event455
                  case 1:
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event455
                  case 2:
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0056', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event455
                }
            } else {
                Event54:
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0046', 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event310
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk'})
            goto Event54
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk'}) {
        if !Npc_oasis039.EventQueryIsOnRecentTalkFlag() {
            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0055', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event265:
            Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0046', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event455
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk'})
        goto Event265
    }
}

void Ready_Npc_Umii_Ichikara_Scholar_C_Near() {
    Npc_Umii_Ichikara_Scholar_C.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0001', 'DisplayFrame': 300, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Craft_Npc_Umii_Ichikara_Scholar_C_Near() {
    Event189:
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0003', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Retry_Npc_Umii_Ichikara_Scholar_C_Near() {
    goto Event189
}

void ZonauGear_CameraPan() {

    fork {
        Npc_Umii_Ichikara_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'InstanceName': 'Circuit_Ichikara', 'FaceControlType': 0, 'ActorName': 'SpObj_ControlStick_A_02', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'SpObj_ControlStick_A_02', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Circuit_Ichikara', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'SpObj_ControlStick_A_02', 'Actor1InstanceName': 'Circuit_Ichikara', 'PosVector': [-5.679999828338623, 1.9500000476837158, 1.5099999904632568], 'AtVector': [-4.639999866485596, 1.6299999952316284, 1.149999976158142], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'CameraCollisionMode': 1})
}

void Craft_Npc_Umii_Ichikara_Scholar_C_Talk() {
    Event514:
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'ActionType': 3, 'AIScheduleState': 1})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
        Event488:

        call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Spearker2ActorName': 'Npc_oasis038', 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Actor2': ActorIdentifier(name="Npc_oasis038"), 'Actor1': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Actor3': ActorIdentifier(name="Npc_oasis039"), 'Spearker1ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker3ActorName': 'Npc_oasis039'})

        Npc_oasis039.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait'})
        Npc_oasis038.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Champion_Wait'})
        Event30:
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                Event519:
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'ChoiceLabel2': 17, 'ChoiceNumber': 3, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0042', 'IsNotOpenIfSkipedMostRecent': False})
                Event25:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event16:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0027', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call Rally_Ready()

                  case 1:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'ChoiceLabel2': 17, 'ChoiceNumber': 3, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
                    Event295:
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event16
                      case 1:
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_1012', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'ChoiceLabel2': 17, 'ChoiceNumber': 3, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event295
                      case 2:
                        Event26:
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0020', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
                    }
                  case 2:
                    goto Event26
                }
            } else {
                goto Event519
            }
        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0030', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ZonauGear_CameraPan()

            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0023', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'FaceControlType': 1, 'Target': 2, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})
            } {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            }

            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'ActionType': 2, 'AIScheduleState': 1})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'ActionType': 2, 'AIScheduleState': 1}) {
        goto Event488
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

        goto Event30
    }
}

void Retry_Npc_Umii_Ichikara_Scholar_C_Talk() {
    goto Event514
}

void Rally_Ready() {

    call Circuit_Ichikara_MiniGame.SoundStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CourseReset()


    call CheckCarForward()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0047', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseA', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ResetObstacle', 'Value': True})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'SpObj_ControlStick_A_02', 'InstanceName': 'Circuit_Ichikara', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.0, -1.0], 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Circuit_Ichikara', 'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': False})
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_oasis038.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'RallyStart', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_oasis038.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_oasis039.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'RallyStart', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_oasis039.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Umii_Ichikara_Scholar_C.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    call CleanUpPlaceToGenerateObstacles()


    call IchikaraCircuit_Tutorial.ViewtheCourse()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ResetObstacle', 'Value': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'CheckPointOn', 'IsIgnoreDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call IchikaraCircuit_Tutorial.Rally_StartCamera()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0036', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call Common.EventTriggerShowReadyGoWithCountIn()


    call Circuit_Ichikara_MiniGame.SoundStartRaceBgm()

    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 3600})
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerRecordControlStickMatrix()
    Player.EventPlayerRideControlStick({'ActorName': 'SpObj_ControlStick_A_02', 'IsWaitEnd': True, 'InstanceName': 'Circuit_Ichikara'})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing'})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 5.0})
}

void Craft_Npc_oasis039_Talk() {

    call Circuit_Ichikara_InitTalk({'Talker_Actor': ActorIdentifier(name="Npc_oasis039"), 'Listener_Actor': ActorIdentifier(name="Npc_oasis038"), 'Taker_ActorName': 'Npc_oasis039', 'Listener_ActorName': 'Npc_oasis038'})


    call IchikaraCircuit_Tutorial.EventEntryAllMember()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Contact_Exp'}) {

        call Uotori_ResortPlan.Challenge_Npc_oasis039_Talk()

    } else {

        call oasis039_DefaultTalk()

    }
}

void Hello_Npc_oasis039() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0013', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0014', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0012', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Hello_Npc_oasis038() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Craft_Npc_oasis038_Talk() {

    call Circuit_Ichikara_InitTalk({'Taker_ActorName': 'Npc_oasis038', 'Talker_Actor': ActorIdentifier(name="Npc_oasis038"), 'Listener_Actor': ActorIdentifier(name="Npc_oasis039"), 'Listener_ActorName': 'Npc_oasis039'})


    call IchikaraCircuit_Tutorial.NoArmorTalk()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Contact_Exp'}) {

        call Uotori_ResortPlan.Challenge_Npc_oasis038_Talk()

    } else {

        call oasis038_DefaultTalk()

    }
}

void ChallengeReset() {
    goto Event202
}

void ReleaseHandle_Circuit_Ichikara() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {

        call Circuit_Ichikara_MiniGame.ReleaseHandle_Circuit_Ichikara_MiniGame()

    } else {

        fork {

            call IchikaraCircuit_Tutorial.InitInterruption({'AsbObj_StoneRectangle_B_LL_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})


            call Circuit_Ichikara_MiniGame.SoundStopRaceBgmWithFue()

        } {

            call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

        }

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event202
    }
}

void Playing_Npc_Umii_Ichikara_Scholar_C_EachFrame() {
    Event561:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Playing', 'GameDataName': 'Step_Circuit_Ichikara_MiniGame', 'Index': -1}) {
            Event193:
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Playing', 'Value': False})
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                ChallengeSystemActor.EventTriggerUnshowTimerUI()
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {
                    ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'TimeOver', 'ChallengeName': 'Circuit_Ichikara_MiniGame', 'IsIgnoreChallengeProgressUI': False})
                } else {
                    ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Circuit_Ichikara', 'ChallengeStep': 'TimeOver', 'IsIgnoreChallengeProgressUI': False})
                }
            } else
            if Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 5, 'ActorFileName': ''}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ReleaseHandle', 'Value': True})
            }
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event561
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Playing', 'GameDataName': 'Step_Circuit_Ichikara', 'Index': -1}) {
        goto Event193
    }
}

void TimeOver_Npc_Umii_Ichikara_Scholar_C_StepStart() {
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()


    call Circuit_Ichikara_MiniGame.SoundStopRaceBgmWithFue()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call InitTalk.InitTalkInAir({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C")})


    call ChallengeReset()

}

void CheckPoint_AddEvent() {
    FldObj_CircuitCheckPoint_A_01[A01_B01].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A03].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A04].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A05].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A06].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A07].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[A08_B08].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[B02].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[B04].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[B05].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[B06].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[B07].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[Tutorial02].EventTriggerParticipateEvent()
    FldObj_CircuitCheckPoint_A_01[StartGoal].EventTriggerParticipateEvent()
}

void BondDoneEvent_Circuit_Ichikara() {
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

    if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
        Event517:
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})
        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
    } else
    if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Ichikara_IsCompleted_Exp'}) {

            call Circuit_Ichikara_MiniGame.BondDoneFlow()

        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0038', 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                GameSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})

                call IchikaraCircuit_Tutorial.EventCameraSet_Solo()

                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 15, 'ChoiceLabel2': 17, 'ChoiceLabel3': 0, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0123', 'IsNotOpenIfSkipedMostRecent': False})
            } {
                if Player.EventQueryCheckPlayerState({'State': 5}) {
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                }
            }


            call CheckPoint_AddEvent()

            goto Event25
        }
    } else {
        goto Event517
    }
}

void DoNotTakeItHandle_Circuit_Ichikara() {
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_Umii_Ichikara_Scholar_C.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0089', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    call InitTalk.InitTalkInAir({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C")})


    fork {
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'TargetActorName': 'Npc_Umii_Ichikara_Scholar_C', 'MoveTime': 0, 'Longitude': 0.0, 'Latitude': 0.0, 'TargetOffset': [0.0, -0.20000000298023224, 0.5]})
    } {

        call IchikaraCircuit_Tutorial.VisibleOffPlayer()

    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DoNotTakeItHandle_Circuit_Ichikara_isFirstTalk', 'Index': -1}) {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event278:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToSafeSpaceWithCombinedActor({'EndHeightOffset': -1.0, 'BaseRot': [0.0, -102.2229995727539, 0.0], 'BasePos': [3751.923095703125, 199.58050537109375, -1693.5040283203125], 'IsEnableFailDelete': False, 'StartHeightOffset': 2.0, 'IsEnableHitPlayer': False}) {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryCheckContactCombinedBodyEntity({'IsCheckPlayer': True, 'IsCheckCharacter': False}) {
                    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsDeleteActor': False, 'IsExcludePlacedAroundAnchor': True, 'Radius': 3.0, 'AnchorInstanceName': 'Link_Reset_Warp_Circuit_Ichikara'})
                    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True, 'InstanceName': 'Link_Reset_Warp_Circuit_Ichikara'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                    if !Player.EventQueryCheckContactPlayer() {
                        Event45:

                        call RespawnCar()

                    } else {
                        Event547:
                        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
                    }
                    Event465:
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                    Npc_Umii_Ichikara_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                    if Player.EventQueryCheckPlayerState({'State': 5}) {
                        Player.EventWait({'Frames': 1, 'IsWaitEnd': False})
                    }
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                } else {
                    goto Event547
                }
            } else {
                goto Event45
            }
        } else
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToSafeSpaceWithCombinedActor({'EndHeightOffset': -1.0, 'BaseRot': [180.0, 15.0, -180.0], 'BasePos': [3747.98095703125, 199.31289672851562, -1679.9019775390625], 'IsEnableFailDelete': True, 'StartHeightOffset': 2.0, 'IsEnableHitPlayer': False}) {
            SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
        }
        goto Event465
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DoNotTakeItHandle_Circuit_Ichikara_isFirstTalk', 'Index': -1, 'Value': True})
        goto Event278
    }
}

void TimeUpdateCheck() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseA_isFirstPlayed', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerMinute', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'Circuit_Ichikara_CourseA_BestTime_L'})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerSecond', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'Circuit_Ichikara_CourseA_BestTime_M'})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'Circuit_Ichikara_CourseA_BestTime_S'})
}

void Finish_Npc_Umii_Ichikara_Scholar_C_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'Item_Enemy_130'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Finish_Npc_Umii_Ichikara_Scholar_C_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'Item_Enemy_130'}) {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_130_Bundle_A'})

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Circuit_Ichikara', 'IsWaitEnd': True})
        Event404:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0061', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event404
    }
}

void InitInterruptionResetGame() {
    SpObj_ControlStick_A_02[InitInterruptionResetGame(SpObj_ControlStick_A_02)].EventTriggerErasePauseMask()
    if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToRecordedPosWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'IsSafeCheck': True, 'IsEnableHitPlayer': True}) {
        Event403:

        call CourseReset_LightOnly()

    } else {

        call RespawnCar()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine', 'Value': True})
        goto Event403
    }
}

void oasis039_DefaultTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk_CraftStep'}) {
        if !Npc_oasis039.EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0032', 'IsNotOpenIfSkipedMostRecent': False})
                Event302:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case [0, 1]:

                    call Uotori_ResortPlan.Contact_Npc_Oasis039_Talk()

                  case 2:
                    Npc_oasis039.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_ResortPlan:Talk_0091', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0032', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Hello_Npc_oasis039()

            Event121:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0032', 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event302
            } else {
                Npc_oasis039.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis039_Talk_CraftStep'})
        goto Event121
    }
}

void oasis038_DefaultTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk_CraftStep'}) {
        if !Npc_oasis038.EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0045', 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event123:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case [0, 1]:

                    call Uotori_ResortPlan.Contact_Npc_Oasis038_Talk()

                  case 2:
                    Npc_oasis038.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0056', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call Hello_Npc_oasis038()

            Event333:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Ready_Exp'}) {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'Uotori_ResortPlan_Oasis039_QuestionisFirstTalk01', 'IsInvertGameData2': True})
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0045', 'ChoiceLabel1': 10, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event123
            } else {
                Npc_oasis038.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0017', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Ichikara_Npc_oasis038_Talk_CraftStep'})
        goto Event333
    }
}

void Craft_Npc_oasis039_Near() {
    Event151:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_ResortPlan_IsAfter_Contact_Exp'}) {

        call Uotori_ResortPlan.Challenge_Npc_oasis039_Near()

    }
}

void Retry_Npc_oasis039_Near() {
    goto Event151
}

void CheckCarForward() {
    if SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, -102.2229995727539, 0.0], 'BasePos': [3751.923095703125, 199.58050537109375, -1693.5040283203125], 'IsEnableFailDelete': False, 'IsEnableHitPlayer': False}) in [0, 1] {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    }
}

void CameraReset_ScholarCandPlayerTurn() {

    fork {
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'FaceControlType': 1, 'Target': 2, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
}

void Playing_Npc_Umii_Ichikara_Scholar_C_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

}

void Playing_Npc_oasis039_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

}

void Playing_Npc_oasis038_Talk() {

    call IchikaraCircuit_Tutorial.Playing_Npc_oasis038_Talk()

}

void EventJoin() {
    Npc_oasis038[EventJoin(JoinNpc1)].EventTriggerParticipateEvent()
    Npc_oasis039[EventJoin(JoinNpc2)].EventTriggerParticipateEvent()

    fork {
        Npc_oasis038[EventJoin(JoinNpc1)].EventWait({'Frames': 5, 'IsWaitEnd': True})
        Npc_oasis038[EventJoin(JoinNpc1)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_oasis039[EventJoin(JoinNpc2)].EventWait({'Frames': 10, 'IsWaitEnd': True})
        Npc_oasis039[EventJoin(JoinNpc2)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

}

void Circuit_Ichikara_InitTalk() {
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'ActionType': 3, 'AIScheduleState': 1})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

        call InitTalk.InitTalk_Trio({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Spearker3ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Actor3': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C"), 'Actor1': 'Talker_Actor', 'Spearker1ActorName': 'Taker_ActorName', 'Actor2': 'Listener_Actor', 'Spearker2ActorName': 'Listener_ActorName'})

        Npc_EventStarter[Circuit_Ichikara_InitTalk(Talker_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_Umii_Ichikara_Scholar_C.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Event542:

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 2, 'Spearker2InstanceName': '', 'Spearker1InstanceName': '', 'Actor1': 'Talker_Actor', 'Actor2': 'Listener_Actor', 'Spearker1ActorName': 'Taker_ActorName', 'Spearker2ActorName': 'Listener_ActorName'})

        Npc_EventStarter[Circuit_Ichikara_InitTalk(Talker_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } else
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {
        goto Event542
    } else
    if !Npc_oasis039.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2})
    && !Npc_oasis038.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        goto Event542
    } else
    if Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }
    Npc_EventStarter[Circuit_Ichikara_InitTalk(Listener_Actor)].EventTriggerLookAtObject({'ActorName': 'Taker_ActorName', 'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    Npc_EventStarter[Circuit_Ichikara_InitTalk(Talker_Actor)].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void CourseReset_LightOnly() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseA', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB', 'Value': False})
}

void AfterTalkWaitRequest() {

    fork {
        Npc_Umii_Ichikara_Scholar_C.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        Npc_Umii_Ichikara_Scholar_C.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } {
        Npc_oasis038.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        Npc_oasis038.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } {
        Npc_oasis039.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        Npc_oasis039.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    }

}

void CleanUpPlaceToGenerateObstacles() {
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'AnchorInstanceName': 'KibakoObstaclePos_1', 'Radius': 5.0, 'Height': 7.0, 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Radius': 5.0, 'Height': 7.0, 'AnchorInstanceName': 'KibakoObstaclePos_2', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Radius': 5.0, 'Height': 7.0, 'AnchorInstanceName': 'KibakoObstaclePos_3', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Radius': 6.0, 'Height': 5.0, 'AnchorInstanceName': 'KibakoObstaclePos_4', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Radius': 6.0, 'Height': 5.0, 'AnchorInstanceName': 'KibakoObstaclePos_5', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Height': 5.0, 'Radius': 5.0, 'AnchorInstanceName': 'IronObstaclePos_1', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'TargetPosMarker', 'Height': 5.0, 'Radius': 5.0, 'AnchorInstanceName': 'IronObstaclePos_2', 'IsWaitEnd': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': False})
}
