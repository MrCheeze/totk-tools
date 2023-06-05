-------- EventFlow: Circuit_Desert --------

Actor: Npc_GerudoDesert001_Minigame[mini]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerParticipateEvent', 'EventWarpToHomeMatrix', 'EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventTriggerMiniGameTimerStart', 'EventShowFinish', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerShowReadyGo', 'EventWait', 'EventTriggerUnshowMiniGameScoreNum', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventDoNothing', 'EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerIncreaseRupee', 'EventWait', 'EventTriggerRequestAutoSave', 'EventResetGimmick']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventTriggerParticipateEvent', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataInt', 'EventTriggerCopyGameDataFloat', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataFloat', 'EventQueryIsGameDataFloat', 'EventQueryIsGameDataEnum', 'EventQueryGameDataIntBranch', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking', 'EventSoundChangeListenerPreset', 'EventTriggerSetNpcVoiceFarMode', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Goal() {

    call Quit_If_InvalidStep_Goal()


    call OnStart_VeryFarEvent()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call SoundStopRaceBgm_Goal()

    if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 4, 'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Circuit_Desert_Time_Record_Value'}) {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
    } else {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    }

    call InitTalk_OutScreen()

    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call ReturnToStart()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'StepName': 'Finish', 'ChallengeName': 'Circuit_Desert', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})

    call Finish_StepStart()

}

void Playing_EachFrame() {
    Event230:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_IsTimerCounting', 'Index': -1})
    && !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Craft_Exp'})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Playing_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Desert_TimeUp', 'Value': True, 'Index': -1})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Circuit_Desert', 'StepName': 'TimeUp', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False})
        }
    } else {
        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Craft_Exp'})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Playing_Exp'}) {
            goto Event230
        }
    }
}

void Erase_InGameObjUI() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Desert_CoursePresence', 'Index': -1, 'Value': False})
}

void TimeUp_StepStart() {

    call Quit_If_InvalidStep_TimeUp()


    call OnStart_VeryFarEvent()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call InitTalk_OutScreen()


    call SoundStopRaceBgmWithFue()

    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event40:

    call ReturnToStart()

    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoDesert001_Minigame[mini].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'PosOffset': [0.0, 0.0, 5.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoDesert001_Minigame[mini].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 1, 'PosOffset': [0.0, 0.0, 0.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    call SoundStartInGameBgm()

    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0075', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveClear', 'Index': -1}) {

        call Question_OnceMore({'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0049', 'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0076'})

    } else {

        call Question_OnceMore({'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0045', 'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0076'})

    }

    call OnStepEnd_RollbackReady()

}

void Finish_StepStart() {
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call SoundStartInGameBgm()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveClear', 'Index': -1}) {
        if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 4, 'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Circuit_Desert_Time_Record_Value'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_GoodResult', 'Index': -1}) {
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0054', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call UpdateRecord()


                call RewardNewRecord()

                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0081', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0055', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Question_OnceMore({'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0078', 'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0080'})

                Event197:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Desert_HaveClear'})

                call OnStepEnd_RollbackReady()

            } else {
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0053', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call UpdateRecord()


                call RewardSpecial()

                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0071', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event197
            }
        } else
        switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Index': -1, 'Value': 4500.0}) {
          case 0:
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call RewardA()

            Event57:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_GoodResult', 'Index': -1}) {
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0060', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Question_OnceMore({'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0077', 'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0078'})

            goto Event197
          case [1, 2]:
            switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Value': 4950.0, 'Index': -1}) {
              case 0:
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0072', 'IsNotOpenIfSkipedMostRecent': False})

                call RewardB()

                goto Event57
              case [1, 2]:
                switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Value': 5850.0, 'Index': -1}) {
                  case 0:
                    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0073', 'IsNotOpenIfSkipedMostRecent': False})

                    call RewardC()

                    goto Event57
                  case [1, 2]:
                    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0074', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event57
                }
            }
        }
    } else
    if !GameDataActor.EventQueryCompareGameDataFloat({'Operator': 4, 'GameDataA': 'MiniGame_TimerValue', 'GameDataB': 'Circuit_Desert_Time_Record_Value'}) {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0056', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call UpdateRecord()


        call RewardSpecial()

        Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0052', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event197
    } else {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataFloat({'GameDataName': 'MiniGame_TimerValue', 'Value': 4950.0, 'Index': -1}) {
          case 0:
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0067', 'IsNotOpenIfSkipedMostRecent': False})

            call RewardB()

            Event280:
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0070', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Desert_HaveClear'})

            call Question_OnceMore({'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0077', 'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0078'})

            goto Event197
          case [1, 2]:
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0068', 'IsNotOpenIfSkipedMostRecent': False})

            call RewardC()

            goto Event280
        }
    }
}

void ReturnToStart() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Erase_InGameObjUI()

    Player.EventTriggerParticipateEvent()
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Circuit_Desert_PlayerWarp_StartPoint', 'UseDemoWait': True, 'NotChangeRot': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_GerudoDesert001_Minigame', 'InstanceName': 'mini', 'IsWaitEnd': True})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Npc_GerudoDesert001_Minigame[mini].EventWarpToHomeMatrix({'IsWaitEnd': True})
    Npc_GerudoDesert001_Minigame[mini].EventTriggerParticipateEvent()

    call OnAfterNear_VeryFarEvent()

    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_GerudoDesert001_Minigame', 'InstanceName': 'mini', 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_GerudoDesert001_Minigame[mini].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Circuit_Desert_PlayerWarp_StartPoint', 'UseDemoWait': True, 'NotChangeRot': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.23000000417232513, 3.2899999618530273, -4.150000095367432], 'AtVector': [-0.18000000715255737, 3.009999990463257, -3.190000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

}

void Craft_Npc_GerudoDesert001_mini_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Circuit_Desert:near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Craft_Npc_GerudoDesert001_mini_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0009', 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 4, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0091', 'ChoiceLabel1': 14, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call GiveUp()

        } else {
            Event157:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0004', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        goto Event157
    }
}

void StartDesertRace() {

    call ResetCheckpoint()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Circuit_Desert', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Playing'})

    fork {
        ChallengeSystemActor.EventTriggerShowReadyGo({'HasCountIn': False})
    } {
        ChallengeSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': False, 'TimerLimit': 6300})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

    call SoundStartRaceBgm()

    ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Desert_TimeUp', 'Index': -1, 'Value': False})
}

void Failure() {

    call Quit_If_InvalidStep_Goal()


    call OnStart_VeryFarEvent()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call SoundStopRaceBgm_Goal()

    ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})

    call InitTalk_OutScreen()

    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call ReturnToStart()

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    call SoundStartInGameBgm()

    Npc_GerudoDesert001_Minigame[mini].EventTalk({'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0051', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveClear', 'Index': -1}) {

        call Question_OnceMore({'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0050', 'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0049'})

    } else {

        call Question_OnceMore({'QuestionMsg': 'EventFlowMsg/Circuit_Desert:talk0032', 'NoMoreMsg': 'EventFlowMsg/Circuit_Desert:talk0045'})

    }

    call OnStepEnd_RollbackReady()

}

void CourceOut() {

    call Quit_If_InvalidStep_CourseOut()


    call OnStart_VeryFarEvent()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call InitTalk_OutScreen()


    call SoundStopRaceBgmWithFue()

    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event40
}

void ResetCheckpoint() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Desert_CheckPointAllClear'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 3})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 4})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 5})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Circuit_Desert_CheckPoint', 'Index': 6})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0})
}

void Ready_Npc_GerudoDesert001_mini_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call GerudoGreeting.Hello()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveClear', 'Index': -1}) {
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_GoodResult', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0062', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0061', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event174:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Event180:

                call PayCheck()

                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_GoodResult', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event235:
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Event264:
                Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call SoundRequestDuck()

                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Circuit_Desert', 'StepName': 'Craft', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Desert_CoursePresence', 'Value': True, 'Index': -1})
                Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Circuit_Desert_PlayerWarp_StartPoint', 'UseDemoWait': True, 'NotChangeRot': False})
                Npc_GerudoDesert001_Minigame[mini].EventWarpToHomeMatrix({'IsWaitEnd': True})
                Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_GerudoDesert001_Minigame', 'InstanceName': 'mini', 'KeepTalkWait': True, 'OffsetBase': 0})
                Npc_GerudoDesert001_Minigame[mini].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Desert_HaveClear'}) {

                    call Camera_StartArch_Auto()

                    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0010', 'IsNotOpenIfSkipedMostRecent': False})
                    Event83:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Circuit_Desert_HaveTry', 'Value': True, 'Index': -1})
                } else {

                    call Camera_StartArch_Far()

                    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0016', 'IsNotOpenIfSkipedMostRecent': False})
                    } {
                        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3617.01904296875, 127.02300262451172, 3625.9609375], 'AtVector': [-3611.761962890625, 127.7979965209961, 3625.7890625], 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    }

                    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'NotFollow', 'FadeTime': 0.03999999910593033})

                    fork {
                        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0064', 'IsNotOpenIfSkipedMostRecent': False})
                    } {
                        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3185.009033203125, 160.2570037841797, 3733.419921875], 'AtVector': [-3180.174072265625, 160.8509979248047, 3734.160888671875], 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    }


                    call Camera_StartArch_Auto()

                    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.029999999329447746})
                    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0082', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event83
                }
              case 1:

                call TeachRule()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0027', 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event180
                } else {

                    call Bye()

                }
              case 2:

                call Bye()

            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0043', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0041', 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event174
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveTry', 'Index': -1}) {
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0043', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0041', 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call PayCheck()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event235
          case 1:
            Event205:

            call TeachRule()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0027', 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call PayCheck()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0007', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event235
            } else {
                Event196:
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 2:

            call Bye()

        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0017', 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
        Event46:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call PayCheck()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event235
          case 1:
            goto Event205
          case 2:

            call Bye()

        }
    } else
    if !Npc_EventStarter.EventQueryHaveTalked() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 12, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0000', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 12, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0018', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0063', 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 6, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0069', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event46
}

void Ready_Npc_GerudoDesert001_mini_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_HaveTry', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Desert:near0004', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Circuit_Desert:near0000', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Playing_Npc_GerudoDesert001_mini_Talk() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0024', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0091', 'ChoiceLabel1': 14, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event136:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Circuit_Playing'})

            call SoundStopRaceBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call Erase_InGameObjUI()

            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call OnStepEnd_RollbackReady()

        } else {
            Event150:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        goto Event150
    }
}

void Playing_Npc_GerudoDesert001_mini_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Circuit_Desert:near0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void InitTalk_OutScreen() {
    EventSystemActor.EventDoNothing({'IsWaitEnd': True})
}

void UpdateRecord() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Desert_GoodResult', 'Value': True})
    GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'Circuit_Desert_Time_Record_Minute', 'SrcGameDataName': 'MiniGame_TimerMinute', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_TimerSecond', 'DstGameDataName': 'Circuit_Desert_Time_Record_Second', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerMilliSecond', 'DstGameDataName': 'Circuit_Desert_Time_Record_MilliSecond'})
    GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MiniGame_TimerValue', 'DstGameDataName': 'Circuit_Desert_Time_Record_Value'})
}

void GiveUp() {
    goto Event136
}

void OnStart_VeryFarEvent() {
    Npc_GerudoDesert001_Minigame[mini].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Player.EventPlayerOnStopMode({'StopAnm': False})
}

void OnAfterNear_VeryFarEvent() {
    Npc_GerudoDesert001_Minigame[mini].EventTriggerErasePauseMask()
    Player.EventPlayerOffStopMode()
}

void Bye() {
    goto Event196
}

void TeachRule() {
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_GoodResult', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0066', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0065', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void PayCheck() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 10}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -10})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0058', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void RewardA() {

    call RewardWeapon({'Reward': 'Weapon_Sword_129', 'RewardAlt': 'Obj_ArrowBundle_A_02', 'MsgAlt': 'EventFlowMsg/Circuit_Desert:talk0083', 'MsgFull': 'EventFlowMsg/Circuit_Desert:talk0084', 'RewardType': 2})

}

void RewardNewRecord() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Animal_Insect_M', 'Num': 1}) {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Animal_Insect_M'})

    } else {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0087', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Desert_RewardType', 'Value': 1, 'Index': -1})
        Event332:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Circuit_Desert_HaveClear'})
        if GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_Circuit_Desert', 'Value': 'Reward', 'Index': -1}) {

            call OnStepEnd_Progress({'ChallengeStep': 'Reward'})

        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void RewardB() {

    call RewardWeapon({'Reward': 'Weapon_Shield_026', 'RewardAlt': 'Obj_ArrowBundle_A_01', 'MsgAlt': 'EventFlowMsg/Circuit_Desert:talk0085', 'MsgFull': 'EventFlowMsg/Circuit_Desert:talk0086', 'RewardType': 3})

}

void RewardC() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Fruit_F'}) {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Fruit_F'})

    } else {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0088', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Desert_RewardType', 'Value': 4, 'Index': -1})
        goto Event332
    }
}

void RewardSpecial() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_02'})

}

void Question_OnceMore() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'QuestionMsg', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 10}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -10})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0079', 'IsNotOpenIfSkipedMostRecent': False})

            call OnceMore()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0058', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        }
    } else {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'MessageId': 'NoMoreMsg', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void OnceMore() {
    goto Event264
}

void Reward_Npc_GerudoDesert001_mini_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call GerudoGreeting.Hello()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0089', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Circuit_Desert_RewardType'}) {
      case 1:

        call RewardNewRecord()

        Event342:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0078', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Circuit_Desert', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
      case 2:

        call RewardA()

        goto Event342
      case 3:

        call RewardB()

        goto Event342
      case 4:

        call RewardC()

        goto Event342
    }
}

void Reward_Npc_GerudoDesert001_mini_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Circuit_Desert:near0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void OnStepEnd_Progress() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Circuit_Desert', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'ChallengeStep', 'IsWaitEnd': True})
    Event334:
    GameSystemActor.EventTriggerRequestAutoSave()
}

void OnStepEnd_Rollback() {
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Circuit_Desert', 'IsIgnoreCompletedChallenge': False, 'ChallengeStep': 'ChallengeStep', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    goto Event334
}

void OnStepEnd_RollbackReady() {

    call OnStepEnd_Rollback({'ChallengeStep': 'Ready'})

}

void RewardWeapon() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Reward'}) {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Reward'})

    } else
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'RewardAlt'}) {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'ChoiceNumber': 2, 'MessageId': 'MsgAlt', 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'RewardAlt'})

        } else {
            Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Circuit_Desert:talk0090', 'IsNotOpenIfSkipedMostRecent': False})
            Event238:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Circuit_Desert_RewardType', 'Index': -1, 'Value': 'RewardType'})
            goto Event332
        }
    } else {
        Npc_GerudoDesert001_Minigame[mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'MessageId': 'MsgFull', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event238
    }
}

void SoundStartRaceBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_02_Desert'})
}

void SoundStopRaceBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02_Desert', 'IsUseSuspendFade': True})
}

void SoundStopRaceBgm_Goal() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02_Desert', 'IsUseSuspendFade': False})
}

void SoundRequestDuck() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
}

void SoundStopRaceBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsForceFadeTime': False, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_02_Desert', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'TimeoutFrame': 60, 'IsWaitEnd': True, 'SLinkKey': 'Dm_Minigame_Retire'})
}

void Quit_If_InvalidStep_TimeUp() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Playing_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_TimeUp_Exp'}) {
            Event361:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {
        goto Event361
    }
}

void Quit_If_InvalidStep_CourseOut() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_TimeUp', 'Index': -1}) {
        Event355:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Playing_Exp'}) {
            goto Event355
        }
    } else {
        goto Event355
    }
}

void Quit_If_InvalidStep_Goal() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Circuit_Desert_TimeUp', 'Index': -1}) {
        Event359:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Craft_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Circuit_Desert_IsAfter_Playing_Exp'}) {
            goto Event359
        }
    } else {
        goto Event359
    }
}

void SoundStartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void Camera_StartArch_Near() {
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3646.54296875, 123.13899993896484, 3633.14111328125], 'AtVector': [-3641.802978515625, 123.73100280761719, 3632.72802734375], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_StartArch_Far() {
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3654.012939453125, 124.83000183105469, 3637.839111328125], 'AtVector': [-3648.93701171875, 125.6050033569336, 3636.458984375], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_StartArch_Auto() {

    call Camera_StartArch_Near()

}
