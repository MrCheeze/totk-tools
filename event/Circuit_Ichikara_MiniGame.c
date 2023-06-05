-------- EventFlow: Circuit_Ichikara_MiniGame --------

Actor: Npc_Umii_Ichikara_Scholar_C
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventOpenRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventEventFadeIn', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice4', 'EventQueryHasRuppe', 'EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerRideControlStick', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerRequestLookAtTheFront']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerProgressChallengeStep', 'EventShowFinish', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerRollbackChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventSoundStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SpObj_ControlStick_A_02[Circuit_Ichikara]
entrypoint: None()
actions: ['EventTriggerErasePauseMask', 'EventTriggerPushPauseMask', 'EventTriggerRecordControlStickMatrix']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryWarpToRecordedPosWithCombinedActor', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryIsExistSafePosNearControlStick']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DefaultFlow() {
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0081', 'IsNotOpenIfSkipedMostRecent': False})
    Event16:
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': 'Circuit_Ichikara_CourseCheck', 'IsInvertGameData2': False, 'IsInvertGameData3': True})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 16, 'ChoiceLabel3': 26, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0124', 'IsNotOpenIfSkipedMostRecent': False})
    Event2:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryActorIsRotYTiltOverAngle({'Angle': 45.0}) {
                Event294:
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})

                call Select_Quit()

                SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
            } else
            if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryIsExistSafePosNearControlStick({'IsOnlyCircuitItem': True}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ClearTalk'}) {
                    Event211:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 13, 'ChoiceLabel2': 19, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0075', 'ChoiceNumber': 3, 'ChoiceLabel3': 21, 'IsAnimeDriven': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call LupeePay()


                        call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0056', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseA', 'GameDataNamePlayingCourseID': 'Circuit_Ichikara_CourseA_Playing', 'GameDataNameNotPlayingCourseID': 'Circuit_Ichikara_CourseB_Playing', 'TimerLimit': 3600, 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Ichikara:Talk_0107'})

                      case 1:

                        call LupeePay()


                        call CourseChange({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0067', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseB', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Ichikara:Talk_0085', 'GameDataNamePlayingCourseID': 'Circuit_Ichikara_CourseB_Playing', 'GameDataNameNotPlayingCourseID': 'Circuit_Ichikara_CourseA_Playing', 'TimerLimit': 5400})

                      case 2:

                        call ReturnCourseCheck()

                    }
                } else
                if !Npc_Umii_Ichikara_Scholar_C.EventQueryIsOnRecentTalkFlag() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1, 'Value': True})
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 27, 'ChoiceLabel2': 28, 'ChoiceNumber': 3, 'ChoiceLabel3': 21, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0137', 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        goto Event211
                      case [1, 2]:
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                        call Select_Quit()

                        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1, 'Value': True})
                    goto Event211
                }
            } else {
                goto Event294
            }
        } else {
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call NoControlStick()


            call Select_Quit()

            SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
        }
      case 1:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call CourseCheck_Start()

        Event45:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1, 'Value': True})
        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
      case 2:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call CourseCheck_End()

        goto Event45
      case 3:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call Select_Quit()

        goto Event45
    }
}

void Ready_Npc_Umii_Ichikara_Scholar_C_Near() {
    Event246:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_TalkBranch1'}) {
        Event249:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_TalkBranch2'}) {
        goto Event249
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Ichikara:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_Umii_Ichikara_Scholar_C_Talk() {
    Event139:
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1}) {

        call RewardCheck()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1}) {
            Event47:

            call DefaultFlow()

        } else
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            goto Event47
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CircuitIchikaraMiniGameStart'}) {
            if !Npc_Umii_Ichikara_Scholar_C.EventQueryIsOnRecentTalkFlag() {
                Event345:
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'ChoiceLabel3': 16, 'ChoiceLabel2': 20, 'ChoiceLabel1': 14, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0069', 'IsNotOpenIfSkipedMostRecent': False})
                Event319:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:

                    call NoControlStick()

                    Event44:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'ChoiceLabel3': 16, 'ChoiceLabel2': 20, 'ChoiceLabel1': 14, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0115', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event319
                  case 1:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0122', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event44
                  case 2:

                    call CourseCheck_Start()

                  case 3:

                    call Select_Quit()

                }
            } else {

                call Greeting()

                Event333:
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0110', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CircuitIchikaraMiniGameStart'})
                goto Event345
            }
        } else {
            goto Event333
        }
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0043', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {

            call FirstTalkFlow()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1, 'Value': True})
            goto Event345
        }
    }
}

void Playing_Npc_Umii_Ichikara_Scholar_C_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

}

void Playing_Npc_Umii_Ichikara_Scholar_C_EachFrame() {

    call Circuit_Ichikara.Playing_Npc_Umii_Ichikara_Scholar_C_EachFrame()

}

void Retry_Npc_Umii_Ichikara_Scholar_C_Near() {
    goto Event246
}

void Retry_Npc_Umii_Ichikara_Scholar_C_Talk() {
    goto Event139
}

void TimeOver_Npc_Umii_Ichikara_Scholar_C_StepStart() {
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()


    call SoundStopRaceBgmWithFue()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0058', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call InitTalk.InitTalkInAir({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_Umii_Ichikara_Scholar_C")})


    call ChallengeReset()

}

void FirstTalkFlow() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': 'Circuit_Ichikara_CourseCheck', 'IsInvertGameData2': False, 'IsInvertGameData3': True})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0090', 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'ChoiceLabel2': 16, 'ChoiceLabel3': 26, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event2
}

void CourseChange() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName_CourseID'}) {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Circuit_Ichikara.CourseReset()


        call Circuit_Ichikara.CheckCarForward()

        Event59:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName_CourseID'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ResetObstacle', 'Value': True})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'SpObj_ControlStick_A_02', 'InstanceName': 'Circuit_Ichikara', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.0, -1.0], 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

        call Circuit_Ichikara.CleanUpPlaceToGenerateObstacles()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Circuit_Ichikara_MiniGame'})
        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        EventCamera.EventTriggerCameraSavePoint()
        Npc_Umii_Ichikara_Scholar_C.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_ResetObstacle', 'Value': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'CheckPointOn', 'IsIgnoreDucking': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call IchikaraCircuit_Tutorial.Rally_StartCamera()

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseDesc', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call Common.EventTriggerShowReadyGoWithCountIn()


        call SoundStartRaceBgm()

        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 'TimerLimit'})
        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
        SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerRecordControlStickMatrix()
        Player.EventPlayerRideControlStick({'ActorName': 'SpObj_ControlStick_A_02', 'IsWaitEnd': True, 'InstanceName': 'Circuit_Ichikara'})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Playing'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataNamePlayingCourseID'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GameDataNameNotPlayingCourseID'})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 5.0})
    } else {
        Event393:

        call SoundStopInGameBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Circuit_Ichikara.CourseReset()


        call Circuit_Ichikara.CheckCarForward()

        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseSwitch', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event59
    }
}

void LupeePay() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0065', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryHasRuppe({'Value': 10}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -10})
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0083', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0066', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Playing'}) {

            call AfterFinale()

        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Circuit_Ichikara_MiniGame_Goal() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CheckPointAllClear', 'Index': -1}) {

        fork {
            SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})

            call TimeUpdateCheck()


            call SoundStopRaceBgm_Goal()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Index': -1}) {
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
            } else {
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Playing', 'Value': False})
        } {

            call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

        }


        call FinaleEvent()

    }
}

void FinaleEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PositionReset()

    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    SpObj_ControlStick_A_02[Circuit_Ichikara].EventTriggerErasePauseMask()
    if SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryWarpToRecordedPosWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'IsSafeCheck': True, 'IsEnableHitPlayer': True}) in [0, 1] {

        call Circuit_Ichikara.CourseReset()

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [5.710000038146973, 2.319999933242798, -1.3200000524520874], 'AtVector': [1.6200000047683716, 1.3600000143051147, 1.25], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseB_Playing', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Value': False, 'Index': -1})
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0068', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event223:
                    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Enemy_131'}) {

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

                        Event33:

                        call OneMoreTry()

                    } else {
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 1, 'Index': -1})
                        Event136:

                        call AfterFinale()

                    }
                } else {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0135', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'SpObj_FastWheel_Capsule_A_01', 'Num': 3}) {
                            Event75:

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_FastWheel_Capsule_A_01_Bundle_A'})

                            goto Event33
                        } else
                        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_Rocket_Capsule_A_01'}) {
                            Event216:

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_Rocket_Capsule_A_01_Bundle_A'})

                            goto Event33
                        } else {
                            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0128', 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 5, 'Index': -1})
                            goto Event136
                        }
                    } else
                    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_Rocket_Capsule_A_01'}) {
                        goto Event216
                    } else
                    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'SpObj_FastWheel_Capsule_A_01', 'Num': 3}) {
                        goto Event75
                    } else {
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0129', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 6, 'Index': -1})
                        goto Event136
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed', 'Index': -1, 'Value': True})
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0071', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event223
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Value': False, 'Index': -1})
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0068', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_130', 'Num': 5}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_130_Bundle_B'})

                Event403:

                call OneMoreTry()

            } else {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0125', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 2, 'Index': -1})
                Event137:

                call AfterFinale()

            }
        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0106', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryRandomChoice2() {
                if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_FastWheel_Capsule_B_01'}) {
                    Event253:

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_FastWheel_Capsule_B_01_Bundle_A'})

                    goto Event403
                } else
                if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_WindGenerator_Capsule_A_01'}) {
                    goto Event253
                } else {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0126', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 3, 'Index': -1})
                    goto Event137
                }
            } else
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_WindGenerator_Capsule_A_01'}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_WindGenerator_Capsule_A_01_Bundle_A'})

                goto Event403
            } else
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_FastWheel_Capsule_B_01'}) {
                goto Event253
            } else {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0127', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 4, 'Index': -1})
                goto Event137
            }
        }
    }
}

void CourseOut_Circuit_Ichikara_MiniGame() {

    fork {

        call IchikaraCircuit_Tutorial.InitInterruption({'AsbObj_StoneRectangle_B_LL_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})


        call SoundStopRaceBgmWithFue()

    } {

        call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

    }

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event118:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Circuit_Ichikara.CheckPoint_AddEvent()


    call PositionReset()


    call Circuit_Ichikara.InitInterruptionResetGame({'SpObj_ControlStick_A_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})

    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CheckPointAllClear', 'Index': -1}) {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0100', 'IsNotOpenIfSkipedMostRecent': False})
        Event113:

        call SoundStartInGameBgm()

        if !SpObj_ControlStick_A_02[Circuit_Ichikara].EventQueryConnectedByBondConstraint({'IsLimitActor': False, 'ActorName': '', 'IsCheckAdjustPoint': False, 'AdjustPointIndexSelf': 0, 'AdjustPointIndexTarget': 0}) {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0119', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0136', 'ChoiceLabel1': 27, 'ChoiceLabel2': 28, 'ChoiceNumber': 3, 'ChoiceLabel3': 21, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine'}) {
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0054', 'IsNotOpenIfSkipedMostRecent': False})
                        Event445:
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
                        Event301:

                        call Circuit_Ichikara.CourseReset()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine', 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Ichikara_CourseB_Playing'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Value': False})
                        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Circuit_Ichikara_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                        GameSystemActor.EventTriggerRequestAutoSave()
                    } else {
                        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0027', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

                        call LupeePay()


                        call Circuit_Ichikara.CourseReset()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Value': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RespawnMachine', 'Value': False})
                        ChallengeSystemActor.EventTriggerRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Circuit_Ichikara_MiniGame', 'IsIgnoreChallengeProgressUI': False})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseA_Playing', 'Index': -1}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing'})

                            call CourseRetry({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0056', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseA', 'GameDataNamePlayingCourseID': 'Circuit_Ichikara_CourseA_Playing', 'GameDataNameNotPlayingCourseID': 'Circuit_Ichikara_CourseB_Playing', 'TimerLimit': 3600, 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Ichikara:Talk_0107'})

                            Event371:
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Ichikara_CourseB_Playing'})

                            call CourseRetry({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0067', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseB', 'MessageId_CourseDesc': 'EventFlowMsg/Circuit_Ichikara:Talk_0085', 'GameDataNamePlayingCourseID': 'Circuit_Ichikara_CourseB_Playing', 'GameDataNameNotPlayingCourseID': 'Circuit_Ichikara_CourseA_Playing', 'TimerLimit': 5400})

                            goto Event371
                        }
                    }
                  case 1:
                    goto Event445
                  case 2:
                    Event363:
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0087', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event301
                }
            } else {
                goto Event363
            }
        } else {
            goto Event363
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CheckPointContactAny'}) {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0108', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event113
    } else {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0109', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        GameSystemActor.EventTriggerIncreaseRupee({'Value': 10})
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0120', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        goto Event113
    }
}

void ChallengeReset() {
    goto Event118
}

void ReleaseHandle_Circuit_Ichikara_MiniGame() {

    fork {

        call IchikaraCircuit_Tutorial.InitInterruption({'AsbObj_StoneRectangle_B_LL_02': ActorIdentifier(name="SpObj_ControlStick_A_02", sub_name="Circuit_Ichikara")})


        call SoundStopRaceBgmWithFue()

    } {

        call IchikaraCircuit_Tutorial.IchikaraCircuit_AirStartUp()

    }

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/IchikaraCircuit_Tutorial:Talk_0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event118
}

void TimeUpdateCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing'}) {

        call UpdateRecord({'GameDataName_BestMinute': 'Circuit_Ichikara_CourseA_BestTime_L', 'GameDataName_BestSecond': 'Circuit_Ichikara_CourseA_BestTime_M', 'GameDataName_BestMilliSecond': 'Circuit_Ichikara_CourseA_BestTime_S'})

    } else {

        call UpdateRecord({'GameDataName_BestMinute': 'Circuit_Ichikara_CourseB_BestTime_L', 'GameDataName_BestSecond': 'Circuit_Ichikara_CourseB_BestTime_M', 'GameDataName_BestMilliSecond': 'Circuit_Ichikara_CourseB_BestTime_S'})

    }
}

void RewardCheck() {
    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Index': -1}) {
      case 1:
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Enemy_131'}) {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

            Event243:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Index': -1, 'Value': 0})
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event99:
            GameSystemActor.EventTriggerRequestAutoSave()
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0130', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event99
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 2}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 3}) {
              case [0, 2]:

                call RewardCheck2()

                goto Event99
              case 1:
                if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_FastWheel_Capsule_B_01'}) {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_FastWheel_Capsule_B_01_Bundle_A'})

                    goto Event243
                } else {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0131', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event99
                }
            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_130', 'Num': 5}) {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_130_Bundle_B'})

                goto Event243
            } else {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0062', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event99
            }
        }
    }
}

void CourseCheck_Start() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 21, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0076', 'ChoiceLabel1': 22, 'ChoiceLabel2': 23, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseA', 'Index': -1}) {
            Event212:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0117', 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnCourseCheck()

        } else {

            call CourseChange_Check({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0056', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseA'})

        }
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseB', 'Index': -1}) {
            goto Event212
        } else {

            call CourseChange_Check({'MessageId_CourseSwitch': 'EventFlowMsg/Circuit_Ichikara:Talk_0067', 'GameDataName_CourseID': 'Circuit_Ichikara_CourseB'})

        }
      case 2:

        call ReturnCourseCheck()

    }
}

void CourseChange_Check() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0101', 'IsNotOpenIfSkipedMostRecent': False})

    call SoundStartDuckBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Circuit_Ichikara.CourseReset()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId_CourseSwitch', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName_CourseID'})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Circuit_Ichikara_ViewTheCourse', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [3735.97705078125, 205.26040649414062, -1680.748046875], 'InstanceName': 'Circuit_Ichikara_ViewTheCourse', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call IchikaraCircuit_Tutorial.ViewtheCourse()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'CheckPointOn', 'IsIgnoreDucking': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0099', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0105', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0102', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1, 'Value': True})
}

void Circuit_Ichikara_CourseCheck_Quit() {

    call Common.AirStartUP_Player()

    Player.EventTriggerPlayerRequestLookAtTheFront()
    Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0100', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Event229:

    call SoundStartDuckBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Circuit_Ichikara.CheckPoint_AddEvent()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0104', 'IsNotOpenIfSkipedMostRecent': False})

    call Circuit_Ichikara.CourseReset()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0021', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_CourseCheck', 'Index': -1, 'Value': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Greeting() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckLower': True, 'CheckHead': False}) {
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0121', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0111', 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0112', 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0113', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0114', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReturnCourseCheck() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': 'Circuit_Ichikara_CourseCheck', 'IsInvertGameData2': False, 'IsInvertGameData3': True})
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 14, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0118', 'ChoiceLabel2': 16, 'ChoiceLabel3': 26, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event2
}

void CourseCheck_End() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0103', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event229
}

void CourseRetry() {
    goto Event393
}

void OneMoreTry() {
    goto Event113
}

void AfterFinale() {

    call SoundStartInGameBgm()

    goto Event301
}

void SoundStartRaceBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'BGMName': 'BGM_Minigame_02', 'IsReleaseDucking': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
}

void SoundStopRaceBgm_Goal() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': False})
}

void SoundStartDuckBgm() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
}

void PositionReset() {
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Link_TimeOver_Warp_Ichikara', 'UseDemoWait': True})
    Npc_Umii_Ichikara_Scholar_C.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Umii_Ichikara_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Npc_Umii_Ichikara_Scholar_C.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Umii_Ichikara_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Umii_Ichikara_Scholar_C.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [5.710000038146973, 2.319999933242798, -1.3200000524520874], 'AtVector': [1.6200000047683716, 1.3600000143051147, 1.25], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void RewardCheck2() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 4}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 5}) {
          case [0, 2]:
            if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Value': 6}) {
                if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_Rocket_Capsule_A_01'}) {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_Rocket_Capsule_A_01_Bundle_A'})

                    Event431:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Ichikara_RewardNotReceived', 'Index': -1, 'Value': 0})
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0087', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0134', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_FastWheel_Capsule_A_01'}) {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_FastWheel_Capsule_A_01_Bundle_A'})

                goto Event431
            } else {
                Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0133', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case 1:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 3, 'Actor': 'SpObj_WindGenerator_Capsule_A_01'}) {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'SpObj_WindGenerator_Capsule_A_01_Bundle_A'})

            goto Event431
        } else {
            Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0132', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void BondDoneFlow() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0081', 'IsNotOpenIfSkipedMostRecent': False})

    call IchikaraCircuit_Tutorial.EventCameraSet_Solo()

    goto Event16
}

void SoundStopRaceBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Minigame_Retire', 'TimeoutFrame': 60, 'IsWaitEnd': True})
}

void SoundStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void UpdateRecord() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing'}) {
        Event151:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'GameDataName_BestMinute', 'Operator': 3}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMinute', 'GameDataB': 'GameDataName_BestMinute', 'Operator': 2}) {
                Event156:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_TimeUpdate', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerMinute', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'GameDataName_BestMinute'})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerSecond', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'GameDataName_BestSecond'})
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'GameDataName_BestMilliSecond'})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'GameDataName_BestSecond'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerSecond', 'GameDataB': 'GameDataName_BestSecond', 'Operator': 2}) {
                    goto Event156
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 3, 'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'GameDataName_BestMilliSecond'})
                && !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_TimerMilliSecond', 'GameDataB': 'GameDataName_BestMilliSecond', 'Operator': 2}) {
                    goto Event156
                }
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
        goto Event151
    } else {
        goto Event156
    }
}

void Select_Quit() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseA_Playing', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Ichikara_CourseB_Playing'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Ichikara_ClearTalk', 'Index': -1, 'Value': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void NoControlStick() {
    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0116', 'IsNotOpenIfSkipedMostRecent': False})

    call Circuit_Ichikara.ZonauGear_CameraPan()

    Npc_Umii_Ichikara_Scholar_C.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Ichikara:Talk_0023', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Circuit_Ichikara.CameraReset_ScholarCandPlayerTurn()

}
