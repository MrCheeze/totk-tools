-------- EventFlow: TwnObj_Circuit_Uotori_RuleBook --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_Circuit_Uotori_RuleBook
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkBook({'Arg_Greeting': 3})

    TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0001', 'ChoiceLabel1': 0, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    Event2:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0012', 'IsNotOpenIfSkipedMostRecent': False})
        Event25:

        call Return()

      case 1:

        call RecordCheck()

      case 2:
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel4': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0013', 'ChoiceNumber': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel4': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0014', 'IsNotOpenIfSkipedMostRecent': False})
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel4': 3, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0015', 'IsNotOpenIfSkipedMostRecent': False})
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0016', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event25
    }
}

void RecordCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseA_isFirstPlayed'}) {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel4': 3, 'ChoiceLabel3': 2, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0008', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseB_isFirstPlayed'}) {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0006', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Circuit_Uotori_CourseC_isFirstPlayed'}) {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0007', 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        TwnObj_Circuit_Uotori_RuleBook.EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_Circuit_Uotori_RuleBook:Talk_0010', 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Return()

}

void Return() {
    goto Event2
}
