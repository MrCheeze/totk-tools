-------- EventFlow: TwnObj_Circuit_Ichikara_RuleBook --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_Circuit_Ichikara_RuleBook
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkBook({'Arg_Greeting': 3})

    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'Circuit_Ichikara_CourseA_isFirstPlayed', 'ChoiceExcludeGameData3': '', 'IsInvertGameData3': False, 'IsInvertGameData2': True})
    TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0001', 'IsNotOpenIfSkipedMostRecent': False})
    Event1:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'Circuit_Ichikara_CourseA_isFirstPlayed', 'ChoiceExcludeGameData3': '', 'IsInvertGameData3': False, 'IsInvertGameData2': True})
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0002', 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event1
      case 1:

        call CurrentRecord()

        goto Event1
      case 2:
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0007', 'IsNotOpenIfSkipedMostRecent': False})
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0008', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData2': 'Circuit_Ichikara_CourseA_isFirstPlayed', 'ChoiceExcludeGameData3': '', 'IsInvertGameData3': False, 'IsInvertGameData2': True})
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0010', 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event1
    }
}

void CurrentRecord() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Ichikara_CourseB_isFirstPlayed'}) {
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0003', 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        TwnObj_Circuit_Ichikara_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Ichikara_RuleBook:Talk_0004', 'IsNotOpenIfSkipedMostRecent': False})
    }
}
