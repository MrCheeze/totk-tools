-------- EventFlow: Hebra_SkyRingChallenge --------

Actor: Npc_HighMountain004
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerProgressChallengeStep', 'EventTriggerUnshowMiniGameScoreNum', 'EventTriggerMiniGameTimerStart', 'EventShowFinish', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerResetMiniGameScore', 'EventTriggerEnableShowRecordUpdate', 'EventTriggerMiniGameIntBestScoreSetting', 'EventExecuteProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait', 'EventPlayerTalk', 'EventPlayerClimbOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_HighMountain004_Near() {
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    if !Npc_HighMountain004.EventQueryHaveTalked() {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk01', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk14', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Hebra_SkyRingChallenge', 'StepName': 'Preparation', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    Npc_HighMountain004.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void RingReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Hebra_SkyRingChallenge_CourseSet'})
}

void CourseOut_Hebra() {

    call Quit_If_InvalidStep_Irregular()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {

        call Hebra_SkyRingChallenge_MiniGame.CourseOut_Hebra()

    } else {

        call Common.AirStartUP_Player_ConsideringSwimming()

        ChallengeSystemActor.EventTriggerMiniGameTimerStop()

        call SoundStopMinigameBgmWithFue()

        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk41', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event39:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        call EndPosition()

        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Hebra_SkyRingChallenge', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Retry', 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void ChallengeReset_Break() {
    goto Event39
}

void Playing_Npc_HighMountain004_EachFrame() {
    Event223:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Hebra_SkyRingChallenge_MiniGame'}) {
            Event62:
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_CollisionDelete', 'Value': True})
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                ChallengeSystemActor.EventTriggerUnshowTimerUI()
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_Ready_Exp'})
                    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_Playing_Exp'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'Value': True, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver'})
                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'TimeOver', 'ChallengeName': 'Hebra_SkyRingChallenge_MiniGame'})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_Preparation_Exp'})
                && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_Playing_Exp'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'Value': True, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver'})
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'TimeOver', 'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Hebra_SkyRingChallenge', 'IsIgnoreChallengeProgressUI': True})
                }
            } else {
                GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataIndex': -1, 'SrcGameDataIndex': -1})
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event223
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'Value': 'Playing', 'GameDataName': 'Step_Hebra_SkyRingChallenge'}) {
        goto Event62
    }
}

void TimeOver_Npc_HighMountain004_StepStart() {

    call Quit_If_InvalidStep_TimeUp()

    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataIndex': -1, 'SrcGameDataIndex': -1})

    call Common.AirStartUP_Player_ConsideringSwimming()


    call SoundStopMinigameBgm_Finish()


    call NewRecord_UI()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Value': 20}) {
      case 0:
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk21', 'EndDialogOption': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()

        call EndPosition()


        call BestRecord()

      case [1, 2]:

        call RightGoal()

    }
}

void Goal() {

    call Quit_If_InvalidStep_Irregular()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {

        call Hebra_SkyRingChallenge_MiniGame.Goal()

    } else {

        call Common.AirStartUP_Player_ConsideringSwimming()

        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Event50:
            ChallengeSystemActor.EventTriggerMiniGameTimerStop()

            call SoundStopMinigameBgm_Finish()


            call NewRecord_UI()

            Event116:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call FinaleEvent()

        } else {
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3803.56591796875, 267.352294921875, -2312.98095703125], 'YAngle': -62.0, 'UseDemoWait': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            goto Event50
        }
    }
}

void FinaleEvent() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    ChallengeSystemActor.EventTriggerResetMiniGameScore()

    call EndPosition()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_FirstTake'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            Event88:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})


            call SoundStartInGameBgm()

            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event16:
            Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk201', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk201_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Hebra_SkyRingChallenge', 'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            goto Event88
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_FirstTake'})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})


        call SoundStartInGameBgm()

        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event16
    }
}

void Retry_Npc_HighMountain004_Near() {
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near31', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
}

void Retry_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShieldSurfing_NowPlay', 'Index': -1}) {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk02', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk31', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event10:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call ChoiceReady()

          case 1:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk07', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event10
          case 2:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Playing_Npc_HighMountain004_Near() {
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near11', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Playing_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk11', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call SoundStopMinigameBgm()


        call ChallengeReset_Break()

    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    }
}

void Ring_Ready() {

    call SoundStopInGameBgm()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Playing', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Hebra_SkyRingChallenge'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_CourseSet'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_CollisionDelete', 'Value': False})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3803.56591796875, 267.352294921875, -2312.98095703125], 'YAngle': -62.0, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        Event132:
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        ChallengeSystemActor.EventTriggerResetMiniGameScore()
        ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 900})

        call Common.EventTriggerShowReadyGoWithCountIn()

        ChallengeSystemActor.EventTriggerMiniGameTimerStart()

        call SoundStartMinigameBgm()

        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
        ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 2})
        ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IsFinishedFirstTake': 'Hebra_SkyRingChallenge_MiniGame_FirstTake', 'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
      case 2:
        Npc_HighMountain004.EventTalk({'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk213', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event132
    }
}

void BestRecord() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_FirstTake'}) {
        if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'}) {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event152:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'Index': -1, 'Value': 15}) {
              case 0:
                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call SoundStartInGameBgm()

                Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk209', 'ChoiceLabel1': 1, 'ChoiceNumber': 3, 'ChoiceLabel3': 3, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event11:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call ChoiceReady()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': 3, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver', 'Value': False})
                  case 1:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event11
                  case 2:
                    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'Hebra_SkyRingChallenge', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Retry', 'IsWaitEnd': True})
                    GameSystemActor.EventTriggerRequestAutoSave()
                }
              case [1, 2]:

                call Clear_NonComplete()

            }
        } else {
            Event174:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event152
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_FirstTake'})
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'Hebra_SkyRingChallenge_MiniGame_Score', 'DstGameDataName': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
        ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
        goto Event174
    }
}

void Preparation_Npc_HighMountain004_Near() {
    Npc_HighMountain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Hebra_SkyRingChallenge:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Preparation_Npc_HighMountain004_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShieldSurfing_NowPlay', 'Index': -1}) {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk02', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_HighMountain004.EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk16', 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event31:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call ChoiceReady()

          case 1:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk07', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event151:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk04', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event31
          case 2:
            Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk02', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk03', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event151
    }
}

void EndPosition() {
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Npc_HighMountain004.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_HighMountain004")})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3794.590087890625, 267.4100036621094, -2317.93994140625], 'YAngle': -140.0, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})

    call RingReset()

    Npc_HighMountain004.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [-3790.35009765625, 269.4599914550781, -2317.7099609375], 'AtVector': [-3795.139892578125, 269.010009765625, -2319.1201171875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call SoundStoptDuckWorldSE()

}

void ChoiceReady() {
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Ring_Ready()

}

void Clear_NonComplete() {
    Npc_HighMountain004.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hebra_SkyRingChallenge:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})


    call SoundStartInGameBgm()

    goto Event16
}

void SoundStartMinigameBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_03'})
}

void SoundStopMinigameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'IsImmediateOnAutoOff': False})
}

void SoundStopMinigameBgm_Finish() {

    call SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': False})
}

void NewRecord_UI() {
    if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 2, 'GameDataA': 'Hebra_SkyRingChallenge_MiniGame_Score', 'GameDataB': 'Hebra_SkyRingChallenge_MiniGame_BestScore'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_FirstTake'}) {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
    } else {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    }
}

void SoundStopMinigameBgmWithFue() {

    call SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Minigame_Retire', 'TimeoutFrame': 60, 'IsWaitEnd': True})
}

void SoundStartDuckWorldSE() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'CommandLife': 2})
}

void SoundStoptDuckWorldSE() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'IsImmediately': False, 'IsClearRefCount': False})
}

void SoundStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void Quit_If_InvalidStep_TimeUp() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_Retry_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_TimeOver_Exp'}) {
                Event224:

                call Common.AirStartUP_Player_ConsideringSwimming()

                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else {
            goto Event224
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_Retry_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_TimeOver_Exp'}) {
            goto Event224
        }
    } else {
        goto Event224
    }
}

void Quit_If_InvalidStep_Irregular() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver'}) {
            Event229:

            call Common.AirStartUP_Player_ConsideringSwimming()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_MiniGame_IsAfter_Playing_Exp'}) {
                goto Event229
            }
        } else {
            goto Event229
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hebra_SkyRingChalleng_TimeOver'}) {
        goto Event229
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_Preparation_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hebra_SkyRingChallenge_IsAfter_Playing_Exp'}) {
            goto Event229
        }
    } else {
        goto Event229
    }
}

void RightGoal() {
    goto Event116
}
