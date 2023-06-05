-------- EventFlow: Npc_NewsPaper011 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventDisableRecentTalkFlag']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleIsMovingFromRainAnchorToDefaultAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 0}) {
        if !Npc_EventStarter.EventQueryAIScheduleIsMovingFromRainAnchorToDefaultAnchor() {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper011:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event16:
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventDisableRecentTalkFlag({'IsWaitEnd': True})
                }
              case [2, 3, 4, 5, 6, 7, 8]:
                Event13:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper011:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event16
            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Event0:

                call Newspaper.Cmn_Newspaper_Talk_Men()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper011:Talk01', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper011:Talk03', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper011:Talk02', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                }
              case [2, 3, 4, 5, 6, 7, 8]:
                goto Event13
            }
        }
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 0, 'ActionType': 10}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 1})

        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            goto Event0
          case [2, 3, 4, 5, 6, 7, 8]:
            goto Event13
        }
    } else {
        goto Event0
    }
}

void Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 0}) {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_NewsPaper011:Near02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            Event7:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_NewsPaper011:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 0, 'ActionType': 10})
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        goto Event7
    }
}
