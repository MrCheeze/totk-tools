-------- EventFlow: HammerGong_MiniGame --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventClearActorsAroundAnchor', 'EventResetGimmick', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryHasRuppe', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventShowFinish', 'EventTriggerResetMiniGameScore', 'EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerOnStopMode', 'EventTriggerPlayerRequestParasail', 'EventPlayerOffStopMode', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerHorseGetOff', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_SmallOasis001
entrypoint: None()
actions: ['EventNPCTurnToObjectGreeting', 'EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: HammerGong_Bell
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventHammerGongReset', 'EventWaitWhileMeasuring']
queries: ['EventQueryCheckHittingGong']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void TransitionFinishToRetry() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Retry', 'ChallengeName': 'HammerGong_MiniGame', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    ChallengeSystemActor.EventTriggerResetMiniGameScore()
    GameSystemActor.EventTriggerRequestAutoSave()
}

void DescribeRule() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'GongMessage', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_26', 'IsNotOpenIfSkipedMostRecent': False})

    call LookAtWorkingArea()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_07', 'IsNotOpenIfSkipedMostRecent': False})
}

void MiniGame_FirstEntry() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 1, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call CheckRupee()

        Event211:
        GameSystemActor.EventTriggerRequestAutoSave()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_SmallOasis001.EventTriggerRequestLookAtTheFront()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_09', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event211
    }
}

void CheckRupee() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 30}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -30})
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_04', 'ASName': 'TalkRest', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call Util_Start_MiniGame()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': False})
    }
}

void CalcResult() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_HammerGong_BestScore', 'Value': 0}) {
      case [0, 1]:
        GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HammerGong_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
        Event73:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0}) {
          case [0, 1]:

            call Retire()

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 130}) {
              case 0:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 100}) {
                  case 0:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 60}) {
                      case 0:

                        call GetBadScore()

                      case [1, 2]:

                        call GetNormalScore()

                    }
                  case [1, 2]:

                    call GetGreatScore()

                }
              case [1, 2]:

                call GetVeryGreatScore()

            }
        }
      case 2:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'MiniGame_HammerGong_BestScore', 'Operator': 2}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 130}) {
              case 0:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 100}) {
                  case 0:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 60}) {
                      case 0:

                        call GetNewRecordByBad()

                      case [1, 2]:

                        call GetNewRecordByNormal()

                    }
                  case [1, 2]:

                    call GetNewRecordByGreat()

                }
              case [1, 2]:

                call GetNewRecordByVeryGreat()

            }
        } else
        goto Event73
    }
}

void GetGreatScore() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_19', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Event96:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': True})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_14', 'IsNotOpenIfSkipedMostRecent': False})

    call StepFinish_GetReward({'TargetActor': 'Item_Ore_D', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_49', 'ItemIndex': 2})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード即)'})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
}

void GetNormalScore() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_11', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Event59:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': True})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})

    call StepFinish_GetReward({'TargetActor': 'Item_Ore_E', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_50', 'ItemIndex': 1})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード即)'})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
}

void Retire() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_16', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード即)'})

    call TransitionFinishToRetry()

    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void GetNewRecordByGreat() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_19', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HammerGong_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    goto Event96
}

void GetBadScore() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_12', 'IsNotOpenIfSkipedMostRecent': False})
    Event25:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': True})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_40', 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード即)'})
}

void GetNewRecordByNormal() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_11', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HammerGong_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    goto Event59
}

void GetNewRecordByBad() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_13', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HammerGong_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    goto Event25
}

void Ready_Npc_SmallOasis001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_HammerGong_Described_Rule'}) {

        call MiniGame_AfterSecondEntry()

    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call Intro2()

    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5, 8]:
        Event104:

        call Intro()

      case [2, 3, 6, 7]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_38', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event104
    }
}

void Retry_Npc_SmallOasis001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_HammerGong_Pending_Rewards', 'Value': 0, 'Index': -1}) {
      case [0, 1]:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call MiniGame_AfterSecondEntry()

        } else
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5, 8]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_36', 'IsNotOpenIfSkipedMostRecent': False})
            Event58:

            call MiniGame_AfterSecondEntry_Without_Donation()

          case [2, 3, 6, 7]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event58
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_HammerGong_Pending_Rewards', 'Value': 1, 'Index': -1}) {
          case [0, 1]:

            call RetryStep_GetReward({'TargetActor': 'Item_Ore_E', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_50'})

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_HammerGong_Pending_Rewards', 'Index': -1, 'Value': 2}) {
              case [0, 1]:

                call RetryStep_GetReward({'TargetActor': 'Item_Ore_D', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_49'})

              case 2:

                call RetryStep_GetReward({'TargetActor': 'Item_Ore_B', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_46'})

            }
        }
    }
}

void Finish_Npc_SmallOasis001_StepStart() {
    Player.EventPlayerOffStopMode()

    call Finish_MiniGame()


    call CalcResult()


    call MiniGame_RetryEntry()


    call TransitionFinishToRetry()

}

void Playing_Npc_SmallOasis001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_SmallOasis001.EventTalk({'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_03', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_44', 'ChoiceNumber': 2, 'ChoiceLabel2': 12, 'ChoiceLabel1': 13, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})

            call Retire_MiniGame()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void MiniGame_AfterSecondEntry() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_20', 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Event85:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call CheckRupee()

      case 1:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call DescribeRule({'GongMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_06'})


        call MiniGame_AfterSecondEntry()

      case 2:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': False})
        Npc_SmallOasis001.EventTriggerRequestLookAtTheFront()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_09', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Ready_Npc_SmallOasis001_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/HammerGong_MiniGame:Balloon_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Retry_Npc_SmallOasis001_Near() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HammerGong_IsRingGong'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/HammerGong_MiniGame:Balloon_03'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/HammerGong_MiniGame:Balloon_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Playing_Npc_SmallOasis001_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/HammerGong_MiniGame:Balloon_02', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Util_Start_MiniGame() {
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

    call InitializeMiniGame()


    call Common.EventTriggerShowReadyGoWithCountIn()

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード普通)'})
}

void TransitionReadyToPlaying() {
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HammerGong_MiniGame', 'StepName': 'Playing', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
}

void InitializeMiniGame() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})

    call MovePlayerToStartPos()


    call TransitionReadyToPlaying()

    ChallengeSystemActor.EventTriggerResetMiniGameScore()
    HammerGong_Bell.EventTriggerParticipateEvent()
    HammerGong_Bell.EventHammerGongReset({'IsWaitEnd': True})
    Npc_SmallOasis001.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Intro() {

    call IntroMessage()

    Event106:
    if !GameSystemActor.EventQueryTalkChoice2() {

        call DescribeRule({'GongMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_45'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_27', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MiniGame_HammerGong_Described_Rule', 'Index': -1, 'Value': True})

        call MiniGame_FirstEntry()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_09', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_SmallOasis001.EventTriggerRequestLookAtTheFront()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Retire_MiniGame() {

    call TearDown_MiniGame()


    call CalcResult()


    call MiniGame_RetryEntry()


    call TransitionFinishToRetry()

}

void GoOutOfArea() {

    call InitTalkOnEvent()

    Npc_SmallOasis001.EventTalk({'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})

        call TransitionFinishToRetry()

    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName2': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'CommandLife': 0})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call MovePlayerToStartPos()

        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }
}

void InitTalkOnEvent() {

    call Common.AirStartUP_Player()

    Npc_SmallOasis001.EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 1, 'IsWaitEnd': True})
}

void MovePlayerToStartPos() {
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'StartPos_HammerGong_MiniGame', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.15000000596046448, 2.119999885559082, -5.53000020980835], 'AtVector': [0.11999999731779099, 2.059999942779541, -4.53000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void IntroMessage() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_32', 'IsNotOpenIfSkipedMostRecent': False})

    call LookAtBell()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_31', 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void Intro2() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_35', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event106
}

void MiniGame_AfterSecondEntry_Without_Donation() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 1, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_37', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event85
}

void LookAtBell() {
    Npc_SmallOasis001.EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-1273.7559814453125, 298.8789978027344, 1385.66796875], 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [-1273.7559814453125, 298.8789978027344, 1385.66796875]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'Actor1ActorName': 'HammerGong_Bell', 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 30, 'TargetFovy': 70.0, 'AtVector': [0.0, 0.0, 5.0], 'PosVector': [0.0, 1.0, 15.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_01', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 2, 'MoveFrame': 0, 'EnableCameraAlpha': False})

    fork {
        Npc_SmallOasis001.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'ResetArriveTransformFixed': False})
    } {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_SmallOasis001', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void MiniGame_RetryEntry() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_42', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {

        call CheckRupeeWithRetry()

    } else {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_SmallOasis001.EventTalk({'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_15', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Finish_MiniGame() {
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード即)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)(Env除外)'})
    HammerGong_Bell.EventTriggerParticipateEvent()

    call ResultPerformance()


    call TearDown_MiniGame()

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void LookAtGong() {
    HammerGong_Bell.EventTriggerParticipateEvent()
    EventRequestActor.EventTriggerSetEventBool({'Bool': False})
    Player.EventTriggerParticipateEvent()

    call StopPlayer()

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'HammerGong_Bell', 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'AtVector': [0.0, -6.5, 5.0], 'PosVector': [0.0, -8.5, 30.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    HammerGong_Bell.EventWaitWhileMeasuring({'WaitFrame': 30, 'IsWaitEnd': True})
    if !HammerGong_Bell.EventQueryCheckHittingGong() {
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'MiniGame_HammerGong_RingGong'})
    } else {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 1, 'MoveFrame': 45, 'EnableCameraAlpha': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        Player.EventPlayerOffStopMode()
    }
}

void StopPlayer() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        Player.EventTriggerPlayerRequestParasail()
    } else {
        Player.EventPlayerOnStopMode({'StopAnm': True})
    }
}

void StepFinish_GetReward() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'TargetActor'}) {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'TargetActor'})

    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_51', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'CantReceiveItemMessage', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_HammerGong_Pending_Rewards', 'Value': 'ItemIndex', 'Index': -1})

        call TransitionFinishToRetry()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void RetryStep_GetReward() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'TargetActor'}) {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_47', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'TargetActor'})

        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_52', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MiniGame_HammerGong_Pending_Rewards', 'Index': -1, 'Value': 0})
        GameSystemActor.EventTriggerRequestAutoSave()
        Event287:
        Npc_SmallOasis001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': False})
    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_48', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'CantReceiveItemMessage', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event287
    }
}

void TearDown_MiniGame() {
    Npc_SmallOasis001.EventTriggerParticipateEvent()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'HammerGong_MiniGame', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Finish'})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'MiniGame_HammerGong_FinishPos', 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Npc_SmallOasis001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    HammerGong_Bell.EventHammerGongReset({'IsWaitEnd': True})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'HammerGong_CenterPos', 'Height': 25.0, 'IsWaitEnd': True, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'Radius': 8.0, 'IsDeleteActor': True})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'Height': 25.0, 'IsWaitEnd': True, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'HammerGong_ResultCenterPos', 'Radius': 3.75, 'IsDeleteActor': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.15000000596046448, 2.119999885559082, -5.53000020980835], 'AtVector': [0.11999999731779099, 2.059999942779541, -4.53000020980835], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_SmallOasis001"), 'Arg_Turn': 3})

    Npc_SmallOasis001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False})
    Npc_SmallOasis001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Hit_Gong() {
    Player.EventTriggerParticipateEvent()
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード即)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)(Env除外)'})
    HammerGong_Bell.EventTriggerParticipateEvent()
    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'HammerGong_Bell', 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'IsPosVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 1, 'MoveTime': 0, 'IsWaitEnd': False, 'PosVector': [0.0, -2.0, 13.0], 'AtVector': [0.0, -2.0, 10.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call ShakeCamera()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

    call ShowMinigameFinishScreen()


    call TearDown_MiniGame()

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

    call CalcResult()


    call MiniGame_RetryEntry()


    call TransitionFinishToRetry()

}

void OnHitGong_OutOfMiniGame() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_SmallOasis001"), 'Arg_Turn': 0})

    EventRequestActor.EventTriggerSetEventBool({'Bool': False})
    HammerGong_Bell.EventTriggerParticipateEvent()
    Npc_SmallOasis001.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': False})
    Npc_SmallOasis001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'HammerGong_Bell', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Direction': 40.0, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 3.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_SmallOasis001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HammerGong_MiniGame_IsAfter_Playing_Exp'}) {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_54', 'IsNotOpenIfSkipedMostRecent': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_53', 'IsNotOpenIfSkipedMostRecent': False})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    }
}

void LookAtWorkingArea() {
    Npc_SmallOasis001.EventNPCTurnToTarget({'Target': 0, 'WorldPos': [-1273.428955078125, 282.57501220703125, 1358.06005859375], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 0, 'WorldPos': [-1273.428955078125, 282.57501220703125, 1358.06005859375], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'IsPosVectorReferenceActorPosOnce': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'TargetFovy': 70.0, 'MoveTotargetPosType': 1, 'LatShiftRange': 30.0, 'LongShiftRange': 30.0, 'PosVector': [-1271.10302734375, 288.1600036621094, 1374.4320068359375], 'AtVector': [-1274.10302734375, 284.57501220703125, 1356.6619873046875], 'MoveTime': 20, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_55', 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 2, 'MoveFrame': 0, 'EnableCameraAlpha': False})

    fork {
        Npc_SmallOasis001.EventNPCTurnToTarget({'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'FaceControlType': 1, 'IsWaitEnd': True, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_SmallOasis001', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void ResultPerformance() {

    call ShakeCamera()

    EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'HammerGong_Bell', 'Actor1InstanceName': '', 'CameraCollisionMode': 1, 'MoveTotargetPosType': 1, 'MoveTime': 8, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, -2.0, 13.0], 'AtVector': [0.0, -2.0, 10.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    call ShowMinigameFinishScreen()

}

void ShakeCamera() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 100}) {
      case 0:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 60}) {
          case 0:
            if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 20}) in [1, 2] {
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 1.0})
            }
          case [1, 2]:

            fork {
                EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.25, 'IsRumbleController': False})
            } {
                GameSystemActor.EventTriggerControllerRumble({'Length': 1.5, 'RumbleCall': 'Large'})
            }

        }
      case [1, 2]:

        fork {
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.5, 'IsRumbleController': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 1.5})
        }

    }
}

void ShowMinigameFinishScreen() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'MiniGame_HammerGong_BestScore', 'Value': 0}) {
      case [0, 1]:
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
      case 2:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'MiniGame_HammerGong_BestScore', 'Operator': 2}) {
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
        } else {
            ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        }
    }
}

void GetVeryGreatScore() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_56', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Event310:
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HammerGong_IsRingGong', 'Index': -1, 'Value': True})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_14', 'IsNotOpenIfSkipedMostRecent': False})

    call StepFinish_GetReward({'TargetActor': 'Item_Ore_B', 'CantReceiveItemMessage': 'EventFlowMsg/HammerGong_MiniGame:Talk_46', 'ItemIndex': 3})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード即)'})
}

void GetNewRecordByVeryGreat() {
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_56', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_18', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'MiniGame_Score', 'DstGameDataName': 'MiniGame_HammerGong_BestScore', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    goto Event310
}

void CheckRupeeWithRetry() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 30}) {
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -30})
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_04', 'ASName': 'TalkRest', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call Util_Start_MiniGame()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else {
        Npc_SmallOasis001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HammerGong_MiniGame:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    }
}
