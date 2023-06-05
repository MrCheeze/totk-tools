-------- EventFlow: Newspaper_Woman --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventWait']
queries: ['EventQueryOrderedBranch', 'EventQueryNewsPaperIsSameAffiliationStableHostelType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Women_ClearTribune() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'Key': 'NewsPaperWomen_CompleteTribune', 'EnableSaveResultGameData': True, 'SaveResultGameDataName': 'NewsPaperWomanStatus.TopNews.LastTalkedIndex', 'SaveResultGameDataName2': 'NewsPaperWomanStatus.TopNews.LastTalkedStableHostelType', 'IsChoiceRandom': False}) {
      case 0:

        call Mori_TribuneClearNews()

        Event13:

        call News_Women_Return_NotArg()

      case 1:

        call Setsugen_TribuneClearTalk()

        goto Event13
      case 2:

        call Futago_TribuneClearNews()

        goto Event13
      case 3:

        call Heigen_TribuneClearTalk()

        goto Event13
      case 4:

        call Kougen_TribuneClearTalk()

        goto Event13
      case 5:

        call Tabanta_TribuneClearTalk()

        goto Event13
      case 6:

        call Shitsugen_TribuneClearTalk()

        goto Event13
      case 7:

        call River_TribuneClearTalk()

        goto Event13
      case 8:

        call Minakkare_TribuneClearTalk()

        goto Event13
      case 9:

        call Sanroku_TribuneClearTalk()

        goto Event13
      case 10:

        call Gerudo_TribuneClearTalk()

        goto Event13
      case 11:

        call Maritta_TribuneClearTalk()

        goto Event13
      case 12:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3013', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event13
      case 15:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NewsPaper_Talked_Goodbye'}) {

            call Women_NextTribune()

        }
    }
}

void Women_NextTribune() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'Key': 'NewsPaperWomen_NextTribune', 'SaveResultGameDataName': '', 'IsChoiceRandom': False, 'EnableSaveResultGameData': True, 'SaveResultGameDataName2': 'NewsPaperWomanStatus.TopNews.LastTalkedStableHostelType'}) {
      case 0:

        call Mori_TribuneInductionNews()

        Event26:

        call News_Women_Return_NotArg()

      case 1:

        call Setsugen_TribuneInductionNews()

        goto Event26
      case 2:

        call Futago_TribuneInductionNews()

        goto Event26
      case 3:

        call Heigen_TribuneInductionNews()

        goto Event26
      case 4:

        call Kougen_TribuneInductionNews()

        goto Event26
      case 5:

        call Tabanta_TribuneInductionNews()

        goto Event26
      case 6:

        call Shitsugen_TribuneInductionNews()

        goto Event26
      case 7:

        call River_TribuneInductionNews()

        goto Event26
      case 8:

        call Minakkare_TribuneInductionNews()

        goto Event26
      case 9:

        call Sanroku_TribuneInductionNews()

        goto Event26
      case 10:

        call Gerudo_TribuneInductionNews()

        goto Event26
      case 11:

        call Maritta_TribuneInductionNews()

        goto Event26
      case 15:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk2007', 'IsNotOpenIfSkipedMostRecent': False})

        call News_Women_Return_NotArg()

    }
}

void Women_NextCity() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'Key': 'NewsPaperWomen_NextCity', 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': False, 'EnableSaveResultGameData': False}) {
      case 0:

        call TopNewsTalk({'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk1509', 'GameDataName': 'NewsPaper_Talked_BloodyMoon1stTalk', 'AS': 'Act_SitChair_Newspaper_Talk'})

      case 1:

        call NotSetGameDataTalk({'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk1507', 'AS': 'Act_SitChair_Newspaper_Talk'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NewsPaper_Talked_NewspaperMitsuba', 'Index': -1, 'Value': True})
      case 2:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk1509'})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Start_Any_SageChallenge'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_BloodyMoon2ndTalk'})
        }
      case 3:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3031'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_kakarikoInfo'})
      case 4:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3032'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_HatenoInfo'})
      case 5:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3033'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_IchikaraInfo'})
      case 6:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3034'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_UotoriInfo'})
      case 7:

        call NotSetGameDataTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3035'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_TauraChallenge001Info'})
      case 8:

        call TopNewsTalk({'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3036', 'GameDataName': 'NewsPaper_Talked_UotoriResortInfo', 'AS': 'Act_SitChair_Newspaper_Talk'})

      case 9:

        call TopNewsTalk({'AS': 'Act_SitChair_Newspaper_Talk', 'GameDataName': 'NewsPaper_Talked_HylianShield', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3050'})

      case 15:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NewsPaper_Talked_Goodbye'}) {
            switch Npc_EventStarter.EventQueryOrderedBranch({'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'IsChoiceRandom': True, 'Key': 'NewspaperWoman_HaveReadAllColumn'}) {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk1509', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                Event135:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3049', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                Event142:

                call News_Women_Return_NotArg()

              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk1507', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event135
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3031', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event135
              case 3:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3032', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event135
              case 4:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3033', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event135
              case 5:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3036', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event135
              case 15:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk2007', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event142
            }
        }
    }
}

void News_Women_Return_NotArg() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk2005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    Event7:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isTalked_NewsPaper', 'Value': True})

        call Women_ClearTribune()

      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isTalked_NewsPaper', 'Value': True})

        call Women_NextCity()

      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isTalked_NewsPaper'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NewsPaper_Talked_Goodbye'})
            Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call Women_NextCity()

        }
    }
}

void Cmn_Newspaper_Talk_Woman() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'isTalked_NewsPaper'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NewsPaper_Talked_Goodbye', 'Value': False, 'Index': -1})

    call Newspaper.ExtraNews_Woman()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk2004', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event7
}

void TopNewsTalk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NewsPaper_Talked_Goodbye'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})

        call News_Women_Return_NotArg()

    }
}

void NotSetGameDataTalk() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NewsPaper_Talked_Goodbye'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})

        call News_Women_Return_NotArg()

    }
}

void Mori_TribuneClearNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'AffiliationStableHostelType': 12, 'UseLastArticleIndex': False, 'GDName': ''}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3040', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 14}) {
        Event159:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3052', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 15}) {
        goto Event159
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 13}) {
        goto Event159
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3039', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Futago_TribuneClearNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 14}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3014', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3002', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Tabanta_TribuneClearTalk() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 3}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3015', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3003', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void River_TribuneClearTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3004', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Shitsugen_TribuneClearTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3005', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Maritta_TribuneClearTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3006', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Heigen_TribuneClearTalk() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 15}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3007', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3007', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Setsugen_TribuneClearTalk() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 13}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3044', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3008', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Minakkare_TribuneClearTalk() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 6}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3046', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3009', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Sanroku_TribuneClearTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3010', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Kougen_TribuneClearTalk() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 9}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3048', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3011', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Gerudo_TribuneClearTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3012', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Mori_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'AffiliationStableHostelType': 12, 'UseLastArticleIndex': False, 'GDName': ''}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3038', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 14}) {
        Event164:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3051', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 15}) {
        goto Event164
    } else
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 13}) {
        goto Event164
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3037', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Futago_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 14}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3028', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3017', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Tabanta_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 3}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3029', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3018', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void River_TribuneInductionNews() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3019', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Shitsugen_TribuneInductionNews() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3020', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Maritta_TribuneInductionNews() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3021', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Heigen_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 15}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper005:Goodbye_05', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3022', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Setsugen_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 13}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3043', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3023', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Minakkare_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 6}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3045', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3024', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Sanroku_TribuneInductionNews() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3025', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Kougen_TribuneInductionNews() {
    if !Npc_EventStarter.EventQueryNewsPaperIsSameAffiliationStableHostelType({'UseLastArticleIndex': False, 'GDName': '', 'AffiliationStableHostelType': 9}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3047', 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3026', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Gerudo_TribuneInductionNews() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NewsPaper001:Talk3027', 'NotPlayLipSyncAnim': False, 'ASName': 'Act_SitChair_Newspaper_Talk', 'IsNotOpenIfSkipedMostRecent': False})
}
