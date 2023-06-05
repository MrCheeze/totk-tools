-------- EventFlow: Hebra_SkyRingChallenge_MiniGame --------

Actor: Npc_HighMountain004
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventTriggerRequestAutoSave', 'EventWaitStableNumDisplay']
queries: ['EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerUnshowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerResetMiniGameScore', 'EventTriggerEnableShowRecordUpdate', 'EventTriggerMiniGameIntBestScoreSetting', 'EventExecuteRollbackChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void MiniGame_Ready_Npc_HighMountain004_Near() {
    Event0:
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near101', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
}

void MiniGame_Ready_Npc_HighMountain004_Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})


    call Greeting()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShieldSurfing_NowPlay', 'Index': -1}) {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0})
    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event2:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'})
            Event216:
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

            call LupeePay()

          case 1:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType', 'Value': 1})
            goto Event216
          case 2:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event2
          case 3:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Ring_Ready() {

    call Hebra_SkyRingChallenge.SoundStopInGameBgm()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Hebra_SkyRingChallenge_MiniGame'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetScore()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_CourseSet'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_CollisionDelete', 'Value': False})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3803.56591796875, 267.352294921875, -2312.98095703125], 'YAngle': -62.0, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
      case [0, 1]:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore', 'Value': 0}) {
          case [0, 1]:
            Event6:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            ChallengeSystemActor.EventTriggerResetMiniGameScore()
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
              case [0, 1]:
                ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 900})

                call Common.EventTriggerShowReadyGoWithCountIn()

                ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                call Hebra_SkyRingChallenge.SoundStartMinigameBgm()

                ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 2})
                ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IsFinishedFirstTake': 'Hebra_SkyRingChallenge_MiniGame_FirstTake', 'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
              case 2:
                ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 1500})

                call Common.EventTriggerShowReadyGoWithCountIn()

                ChallengeSystemActor.EventTriggerMiniGameTimerStart()

                call Hebra_SkyRingChallenge.SoundStartMinigameBgm()

                ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
                ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 2})
                ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore', 'IsFinishedFirstTake': 'Hebra_SkyRingChallenge_MiniGame_CourseB_FirstTake'})
            }
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 20, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
              case [0, 2]:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk210', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
              case 1:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk210_01', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
            }
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'}) {
          case [0, 1]:
            goto Event6
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore', 'Value': 35}) {
              case [0, 2]:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk211', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
              case 1:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk211_01', 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
            }
        }
    }
}

void CourseOut_Hebra() {

    call Common.AirStartUP_Player_ConsideringSwimming()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call Hebra_SkyRingChallenge.SoundStopMinigameBgmWithFue()

    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk41', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event34:
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    call Hebra_SkyRingChallenge.EndPosition()

    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeStep': 'Retry', 'ChallengeName': 'Hebra_SkyRingChallenge_MiniGame', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void ChallengeReset_Break() {
    goto Event34
}

void MiniGame_Playing_Npc_HighMountain004_EachFrame() {

    call Hebra_SkyRingChallenge.Playing_Npc_HighMountain004_EachFrame()

}

void MiniGame_TimeOver_Npc_HighMountain004_StepStart() {

    call Hebra_SkyRingChallenge.Quit_If_InvalidStep_TimeUp()

    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataIndex': -1, 'SrcGameDataIndex': -1})

    call Common.AirStartUP_Player_ConsideringSwimming()


    call Hebra_SkyRingChallenge.SoundStopMinigameBgm_Finish()


    call NewRecord_UI()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
      case [0, 1]:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Value': 20}) {
          case 0:
            Event48:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()

            call Hebra_SkyRingChallenge.EndPosition()


            call BestRecord()

          case [1, 2]:
            Event196:

            call RightGoal_MiniGame()

        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Value': 35}) {
          case 0:
            goto Event48
          case [1, 2]:
            goto Event196
        }
    }
}

void Goal() {

    call Common.AirStartUP_Player_ConsideringSwimming()

    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        Event41:
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()

        call Hebra_SkyRingChallenge.SoundStopMinigameBgm_Finish()


        call NewRecord_UI()

        Event56:
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call FinaleEvent()

    } else {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3803.56591796875, 267.352294921875, -2312.98095703125], 'YAngle': -62.0, 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event41
    }
}

void FinaleEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    ChallengeSystemActor.EventTriggerResetMiniGameScore()

    call Hebra_SkyRingChallenge.EndPosition()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
      case [0, 1]:
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            Event117:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk107', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

            Event124:

            call Hebra_SkyRingChallenge.SoundStartInGameBgm()

            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
              case [0, 1]:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk209', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event180:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'})
                    Event182:
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})

                    call LupeePay_Retry()

                  case 1:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType', 'Value': 1})
                    goto Event182
                  case 2:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk203', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
                      case [0, 1]:
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event180
                      case 2:
                        Npc_HighMountain004.EventTalk({'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'ChoiceDefaultNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event180
                    }
                  case 3:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk109', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerRequestAutoSave()
                    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Hebra_SkyRingChallenge_MiniGame', 'ChallengeStep': 'Retry', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                }
              case 2:
                Npc_HighMountain004.EventTalk({'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk209', 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'ChoiceDefaultNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event180
            }
        } else {
            goto Event117
        }
      case 2:
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'})
            Event75:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_GotExpertPerfectPrize'}) {
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk208', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

                Event155:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_FirstTake'})
                goto Event124
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_GotExpertPerfectPrize'})
                Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk208_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

                goto Event155
            }
        } else
        goto Event75
    }
}

void MiniGame_Retry_Npc_HighMountain004_Near() {
    goto Event0
}

void MiniGame_Retry_Npc_HighMountain004_Talk() {
    goto Event1
}

void MiniGame_Playing_Npc_HighMountain004_Near() {
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near11', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void MiniGame_Playing_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk11', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk17', 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk12', 'IsNotOpenIfSkipedMostRecent': False})

            call Hebra_SkyRingChallenge.SoundStopMinigameBgm()


            call ChallengeReset_Break()

        } else {
            Event95:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        goto Event95
    }
}

void BestRecord() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
      case [0, 1]:
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event60:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 4}) {
              case 0:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk103', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event124
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 9}) {
                  case 0:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk104', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

                    goto Event124
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 15}) {
                      case 0:
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk105', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

                        goto Event124
                      case [1, 2]:
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk106', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                        goto Event124
                    }
                }
            }
        } else {
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event60
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'}) {
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
                ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'})
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event152:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 21}) {
                  case 0:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk204', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event124
                  case [1, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 28}) {
                      case 0:
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk205', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

                        goto Event124
                      case [1, 2]:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 33}) {
                          case 0:
                            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk206', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                            goto Event124
                          case [1, 2]:
                            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk207', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk108', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

                            goto Event124
                        }
                    }
                }
            } else {
                Event167:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event152
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_FirstTake', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'})
            goto Event167
        }
    }
}

void LupeePay() {
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk110', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call Ring_Ready()

        } else {
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk111', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event134:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event134
    }
}

void LupeePay_Retry() {
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk110', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call Ring_Ready()

            GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver', 'Value': False})
        } else {
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk111', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event200:
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestAutoSave()
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Hebra_SkyRingChallenge_MiniGame', 'StepName': 'Retry', 'IsWaitEnd': True})
        }
    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event200
    }
}

void Greeting() {
    if Npc_HighMountain004.EventQueryIsOnRecentTalkFlag() {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101_00_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1, 2, 3, 6, 7, 8]:
                Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
              case [4, 5]:
                Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101_00_04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [6, 7]:
            Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk101_00_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void NewRecord_UI() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseType'}) {
      case [0, 1]:
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
            Event52:
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        } else {
            Event61:
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        }
      case 2:
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_CourseB_BestScore'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_CourseB_FirstTake'}) {
            goto Event52
        } else {
            goto Event61
        }
    }
}

void ResetScore() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Value': 0})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'MiniGame_Score'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void RightGoal_MiniGame() {
    goto Event56
}
