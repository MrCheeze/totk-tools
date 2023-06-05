-------- EventFlow: FindSunaNui --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryAIScheduleCheckActorAction14_2', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerMiniGameTimerStart', 'EventTriggerMiniGameTimerSetting', 'EventTriggerShowTimerUI', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowTimerUI', 'EventShowFinish', 'EventExecuteProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventResetGimmick']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice4', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventBustShotCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerOffSurfaceVelocityFloatWater', 'EventPlayerOnSurfaceVelocityFloatWater', 'EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventPlayerClimbOff', 'EventPlayerHorseGetOff']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016[OutUG]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion']
queries: ['EventQueryAIScheduleCheckActorAction14_2', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis045[OutUG]
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)]
entrypoint: Stop_FindSunaNui_Oasis016Init(Self)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHasControllerSet']
params: None

void Ready_Npc_oasis016_Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:

        call Npc_oasis016.SageOfGerudo_IsAfter_DungeonBossDead_Exp_Talk()

      case 7:

        call GerudoGreeting.InitTalk_GerudoGreeting()


        call GerudoGreeting.HelloYouth1()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0033', 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event85:
                Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0024', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                Event21:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event262:
                    Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_NPCinUG'}) {
                        Event164:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
                            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0038', 'IsNotOpenIfSkipedMostRecent': False})
                            Event354:
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': False})

                            call SetKakurenbo()

                            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0039', 'IsNotOpenIfSkipedMostRecent': False})
                            Event135:
                            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_Point0', 'Value': False})

                            call Hint()


                            call SoundStartDuckBgm()

                            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
                                Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0029', 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }

                            call Common.EventTriggerShowReadyGoWithCountIn()

                            ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 2700})
                            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
                            ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 0})

                            call Sub_StepUpdate_Playing()

                        } else {
                            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'FindSunaNui', 'StepName': 'SetUp', 'IsIgnoreCompletedChallenge': False})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0038', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event354
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
                        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0003', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call SoundStopInGameBgm_NeedResume()

                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': False})

                        call SetKakurenbo()

                        Event273:

                        call SoundResumeInGameBgm()

                        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0019', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event135
                    } else {
                        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'FindSunaNui', 'StepName': 'SetUp', 'IsIgnoreCompletedChallenge': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0003', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call SoundStopInGameBgm_NeedResume()

                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': False})

                        call SetKakurenbo()

                        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                            goto Event273
                        } else {

                            call SoundResumeInGameBgm()

                            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0006', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event135
                        }
                    }
                } else
                Event182:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0016', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0005', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': False})
            } else {
                Event84:
                Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0027', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0000', 'ASName': '', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0026', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0032', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event85
            } else {
                goto Event84
            }
        }
    }
}

void Ready_Npc_oasis016_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:

        call Npc_oasis016.SageOfGerudo_IsAfter_DungeonBossDead_Exp_Near()

      case 7:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0000', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void SetUp_Npc_oasis016_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Npc_oasis016.SageOfGerudo_IsAfter_DungeonBossDead_Exp_Talk()

      case [4, 5]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 2, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0020', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event21
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 2, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0002', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0001', 'ChoiceLabel3': 2, 'ASName': '', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event21
    }
}

void SetUp_Npc_oasis016_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Npc_oasis016.SageOfGerudo_IsAfter_DungeonBossDead_Exp_Near()

      case 5:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0004', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindSunaNui_IsAfter_Ready_Exp'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0001', 'IsDisplayInTerror': False, 'IsChallenge': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0001', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void SetKakurenbo() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint'})

    Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 18, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GoToUG', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_oasis016[OutUG].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis016', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'InstanceName': 'OutUG'})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3872.7900390625, 141.25999450683594, 2955.659912109375], 'AtVector': [-3877.25, 140.64999389648438, 2956.280029296875], 'TargetFovy': 40.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Point1', 'Value': True, 'Index': -1})
        Event92:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Playing', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'FindSunaNui_Point0'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'FindSunaNui_ReloadDoor'})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'FindSunaNui_Point2', 'Index': -1})
        goto Event92
      case 2:
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'FindSunaNui_Point3', 'Index': -1})
        goto Event92
      case 3:
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'FindSunaNui_Point4', 'Index': -1})
        goto Event92
    }
}

void Playing_Npc_oasis016_EachFrame() {
    Event339:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Playing', 'GameDataName': 'Step_FindSunaNui2', 'Index': -1}) {
            Event42:
            if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
                ChallengeSystemActor.EventTriggerMiniGameTimerStop()
                ChallengeSystemActor.EventTriggerUnshowTimerUI()

                call Sub_StepUpdate_TimeOver()

            } else {
                EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
                goto Event339
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_FindSunaNui', 'Value': 'Playing', 'Index': -1}) {
        goto Event42
    }
}

void ChaseTalk() {
    Event46:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0048', 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0035', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
    } else {
        ChallengeSystemActor.EventTriggerUnshowTimerUI()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0036', 'IsNotOpenIfSkipedMostRecent': False})

        call SoundStartDuckBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Sub_FlagReset()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call Sub_StepUpdate_GiveUp()

    }
}

void ChaseNear() {
    Event337:
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoUGPrison_BadBoy'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Gerudo_Player_InPrison', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0002', 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/FindSunaNui:near0003', 'IsIgnoreDisplayKeepDepth': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Result_Npc_oasis016_StepStart() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 6, 7]:
        Event119:
        ChallengeSystemActor.EventTriggerUnshowTimerUI()

        call SoundStopInGameBgm_NeedResume()

        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event105:

            call GoToFruitShop()

            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Fruit_C', 'Num': 1}) {
                if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Fruit_G', 'Num': 1}) {
                    if !GameSystemActor.EventQueryRandomChoice2() {
                        Event126:

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Fruit_C'})

                    } else {
                        Event123:

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Fruit_G'})

                    }
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event308:
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'ChallengeName': 'FindSunaNui2', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'Ready', 'IsWaitEnd': True})
                } else {
                    goto Event126
                }
            } else
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Fruit_G', 'Num': 1}) {
                goto Event123
            } else {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

                Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0047', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event308
            }
        } else {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event102:

            call GoToFruitShop()

            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'FindSunaNui', 'StepName': 'Complete', 'IsWaitEnd': True})
        }
      case 5:

        call Common.CancelWaitPlayerAnim()

        goto Event119
    }
}

void GoToFruitShop() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Sub_FlagReset()

    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG")})


    call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint'})

    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GoToUG', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 18, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_oasis016[OutUG].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_oasis016[OutUG].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
    Npc_oasis016[OutUG].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsReleaseThreaten': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis016', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'InstanceName': 'OutUG'})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [4.369999885559082, 2.3299999237060547, 0.8600000143051147], 'AtVector': [-0.019999999552965164, 1.2000000476837158, 1.0299999713897705], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call SoundResumeInGameBgm()

}

void Stop_FindSunaNui() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': False})
    switch Npc_oasis016[OutUG].EventQueryAIScheduleCheckActorAction14_2() {
      case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13]:
        switch Npc_oasis016[OutUG].EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
            switch Npc_oasis016[OutUG].EventQueryAIScheduleCheckActorAction14_2() {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
                Npc_oasis016[OutUG].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                Npc_oasis016[OutUG].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                Event253:
                switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
                  case [0, 1, 2, 3, 4, 6, 7]:

                    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis045", sub_name="OutUG")})

                    Event349:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 16, 'PosVector': [-3818.590087890625, 150.27000427246094, 2880.239990234375], 'AtVector': [-3824.25, 149.3800048828125, 2877.800048828125], 'TargetFovy': 40.0})
                    if !Npc_oasis045[OutUG].EventQueryIsOnRecentTalkFlag() {
                        Npc_oasis045[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_oasis045[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 5:

                    call Common.CancelLiftByOwnedNoCamera()

                    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_oasis045', 'InstanceName': 'OutUG'})
                    goto Event349
                }
              case 11:
                goto Event253
            }
          case 5:
            Event256:
            switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
              case [0, 1, 2, 3, 4, 6, 7, 8, 9]:

                call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG")})

                Event181:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindSunaNui_IsAfter_Ready_Exp'}) {
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0023', 'IsNotOpenIfSkipedMostRecent': False})
                    Event79:
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Play_StopEvent()

                    } else {

                        call NotPlay_StopEvent()

                    }
                } else
                if !Npc_oasis016[OutUG].EventQueryIsOnRecentTalkFlag() {
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0033', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event362:
                        switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
                          case [0, 1, 2, 3, 4, 6, 7, 8, 9]:

                            call BustUpCamera()

                            Event350:
                            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0024', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event79
                          case 5:
                            goto Event350
                        }
                    } else {
                        Event142:
                        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0037', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0026', 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event362
                    } else {
                        goto Event142
                    }
                }
              case 5:

                call Stop_FindSunaNui_Oasis016Init({'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG")})

                Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'InstanceName': 'OutUG', 'ActorName': 'Npc_oasis016'})
                goto Event181
            }
        }
      case 7:
        goto Event256
    }
}

void Playing_Npc_oasis016_Near() {
    goto Event337
}

void Playing_Npc_oasis016_Talk() {
    goto Event46
}

void FindSunaNui_OutUG() {

    call Common.AirStartUP_Player()


    call Sub_ChangePlayerCamera()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    Player.EventPlayerOffSurfaceVelocityFloatWater()
    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0034', 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0035', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint'})

        Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 18, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GoToUG', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        Npc_oasis016[OutUG].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis016', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'InstanceName': 'OutUG'})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        Event166:
        Player.EventPlayerOnSurfaceVelocityFloatWater()
    } else {
        ChallengeSystemActor.EventTriggerUnshowTimerUI()

        call Sub_FlagReset()

        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0036', 'IsNotOpenIfSkipedMostRecent': False})

        call Sub_StepUpdate_GiveUp()

        goto Event166
    }
}

void TimeOver_Npc_oasis016_StepStart() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Event336:

        call Npc_OasisStep_A.BadEquipment()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckHead': False, 'CheckLower': False, 'CheckSeries': 'Naked'}) {
        goto Event336
    } else {

        call Common.AirStartUP_Player()

        ChallengeSystemActor.EventTriggerMiniGameTimerStop()
        ChallengeSystemActor.EventTriggerUnshowTimerUI()

        call SoundStopInGameBgm_NeedResume()

        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GoToFruitShop()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'MessageId': 'EventFlowMsg/FindSunaNui:talk0012', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0017', 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {

            call ChallengeAgain()

        } else {
            Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0040', 'IsNotOpenIfSkipedMostRecent': False})

            call Sub_StepUpdate_GiveUp()

        }
    }
}

void ChallengeAgain() {
    goto Event164
}

void Hint() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point1', 'Index': -1}) {
        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0041', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point2', 'Index': -1}) {
        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0042', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point3', 'Index': -1}) {
        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0043', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point4', 'Index': -1}) {
        Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0044', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Result_Fire_Npc_oasis016_StepStart() {
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call SoundStopInGameBgm_NeedResume()

    ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0045', 'IsNotOpenIfSkipedMostRecent': False})

    call GoToNuiPoint()

    Npc_oasis016[OutUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindSunaNui:talk0046', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
        goto Event105
    } else {
        goto Event102
    }
}

void Sub_FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Point1', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Point2', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Point3', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Point4', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_Playing', 'Index': -1, 'Value': False})
}

void Sub_StepUpdate_Playing() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Playing', 'ChallengeName': 'FindSunaNui2', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'FindSunaNui', 'StepName': 'Playing', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True})
    }
}

void Sub_StepUpdate_TimeOver() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'FindSunaNui2', 'IsIgnoreChallengeProgressUI': True, 'StepName': 'TimeOver', 'IsIgnoreCompletedChallenge': True})
    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'FindSunaNui', 'StepName': 'TimeOver', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True})
    }
}

void Sub_StepUpdate_GiveUp() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_HaveClear'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'FindSunaNui2', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Ready', 'IsWaitEnd': True})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'FindSunaNui', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True, 'StepName': 'SetUp', 'IsWaitEnd': True})
    }
}

void GoToNuiPoint() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG")})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_Point1'}) {

        call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint_Fire1'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [-3917.22998046875, 142.52000427246094, 2991.820068359375], 'AtVector': [-3913.75, 141.5800018310547, 2994.510009765625], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'FireWarp016_1', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Event294:
        Npc_oasis016[OutUG].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_oasis016[OutUG].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'InstanceName': 'FireWarpPlayer', 'UseDemoWait': True})
        Npc_oasis016[OutUG].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_oasis016', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'InstanceName': 'OutUG'})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point2', 'Index': -1}) {

        call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint_Fire2'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [-3850.969970703125, 139.61000061035156, 2964.02001953125], 'AtVector': [-3847.449951171875, 139.00999450683594, 2961.280029296875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'FireWarp016_2', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        goto Event294
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_Point3', 'Index': -1}) {

        call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint_Fire3'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'PosVector': [-3924.300048828125, 139.6199951171875, 2929.409912109375], 'AtVector': [-3922.6298828125, 138.88999938964844, 2925.2900390625], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'FireWarp016_3', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        goto Event294
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindSunaNui_Point4'}) {

        call ResetPreWarp({'GameDataName': 'FindSunaNui_ResetWarpPoint_Fire4'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3903.77001953125, 138.85000610351562, 2981.699951171875], 'AtVector': [-3903.14990234375, 138.72000122070312, 2977.25], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_oasis016[OutUG].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 22, 'InstanceName': 'FireWarp016_4', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        goto Event294
    } else {
        goto Event294
    }
}

void Sub_ChangePlayerCamera() {
    if !Player.EventQueryCheckPlayerState({'State': 6}) {
        Npc_oasis016[OutUG].EventTriggerBecomeSpeaker()

        fork {

            call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_oasis016", sub_name="OutUG")})

        } {
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
        }

    } else {
        Npc_oasis016[OutUG].EventTriggerParticipateEvent()
        Npc_oasis016[OutUG].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
    }
}

void Stop_FindSunaNui_Oasis016Init() {

    call Common.CancelLiftByOwnedPlayerAnim()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)].EventTriggerBecomeSpeaker()

    fork {
        Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)].EventQueryHasControllerSet() {
            Npc_oasis016[Stop_FindSunaNui_Oasis016Init(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

}

void SoundResumeInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void SoundStopInGameBgm_NeedResume() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'CommandLife': 0})
}

void SoundStartDuckBgm() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード長い)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
}

void FindSunaNuiGameCancel() {
    ChallengeSystemActor.EventTriggerUnshowTimerUI()

    call Sub_FlagReset()


    call Sub_StepUpdate_GiveUp()

}

void ResetPreWarp() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GameDataName'}) {
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
    }
}

void BustUpCamera() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FindSunaNui_BustUpCamera', 'Index': -1, 'Value': True})
        EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Longitude': 30.0, 'Latitude': 0.0, 'MoveTime': 0, 'TargetOffset': [0.05000000074505806, -0.10000000149011612, 0.0], 'TargetActorName': 'Npc_oasis016', 'TargetActorInstanceName': 'OutUG'})
    }
}

void NotPlay_StopEvent() {
    goto Event182
}

void Play_StopEvent() {
    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [0, 1, 2, 3, 4, 6, 7, 8, 9]:

        call BustUpCamera()

        goto Event262
      case 5:
        goto Event262
    }
}
