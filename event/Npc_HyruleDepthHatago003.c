-------- EventFlow: Npc_HyruleDepthHatago003 --------

Actor: Npc_HyruleDepthHatago003
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked', 'EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})


        call RainRun()

        if !Npc_HyruleDepthHatago003.EventQueryIsOnRecentTalkFlag() {

            call Weather_AfterTalk()

        } else {

            call Weather()

        }
        if !Npc_HyruleDepthHatago003.EventQueryIsOnRecentTalkFlag() {
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_02', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel4': 3, 'ChoiceLabel3': 3, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event17:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk02', 'Index': -1}) {
                    Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk02', 'Index': -1, 'Value': True})
                }
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_03', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_04', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_22', 'ChoiceLabel4': 3, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                Event29:
                if !Npc_HyruleDepthHatago003.EventQueryIsOnRecentTalkFlag() {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk01', 'Index': -1}) {
                        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk01', 'Index': -1, 'Value': True})
                        Event1:
                        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    goto Event1
                }
              case 1:
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_22', 'ChoiceLabel4': 3, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 1, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk02', 'Index': -1}) {
                        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyruleDepthHatago003_Talk02', 'Index': -1, 'Value': True})
                    }
                    Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_03', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                goto Event29
              case 2:
                goto Event29
            }
        } else
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            Event35:
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_01', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 3, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event17
          case [6, 7]:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1]:
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 3, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event17
              case [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                goto Event35
            }
        }
      case 11:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel4': 3, 'ChoiceLabel3': 3, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_23', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        }
    }
}

void Weather() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Event5:
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                goto Event5
              case 1:
                Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [4, 5, 6, 7]:
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [1, 3, 5, 7, 8, 9, 10, 11, 12, 13] {
            Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Weather_AfterTalk() {
    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [0, 2, 4, 6]
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Near() {
    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13] {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case 0:
                Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [1, 2, 3, 4, 5, 6, 7]:
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1, 2, 3, 4, 5]:
                    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
                      case [0, 1, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:
                        switch EventWorldManagerController.EventQueryTimeDivision() {
                          case [0, 1, 2, 4, 5, 6, 7]:
                            Event47:
                            Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                          case 3:
                            Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_05', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                        }
                      case 3:
                        goto Event47
                      case 5:
                        Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_11', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                    }
                  case 6:
                    Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            }
          case [2, 3, 4, 5, 6, 7, 8]:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 2, 4]:
                Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_08', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [1, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                Npc_HyruleDepthHatago003.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyruleDepthHatago003:Near_09', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
    }
}

void RainRun() {
    if Npc_EventStarter.EventQueryIsIndoor()
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8]
    && Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [0, 2, 4, 6] {
        Npc_HyruleDepthHatago003.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyruleDepthHatago003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}
