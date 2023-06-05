-------- EventFlow: TwnObj_Village_SheikerHeirDiary_A_02 --------

Actor: TwnObj_Village_SheikerHeirDiary_A_02
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkBook({'Arg_Greeting': 3})

    Event2:
    TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_01', 'ChoiceLabel3': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice3() {
        Event10:
        TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_00', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice3() {
            Event11:
            TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_02', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice3() {
                Event12:
                TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_03', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice3() {
                    Event13:
                    TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 5, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_04', 'ChoiceNumber': 3, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice3() {
                        Event15:
                        TwnObj_Village_SheikerHeirDiary_A_02.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TwnObj_Village_SheikerHeirDiary_A_02:Talk_06', 'ChoiceLabel1': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            goto Event13
                        }
                    } else {
                        goto Event12
                    }
                } else {
                    goto Event11
                }
            } else {
                goto Event10
            }
        } else {
            goto Event2
        }
    } else {
        goto Event15
    }
}
