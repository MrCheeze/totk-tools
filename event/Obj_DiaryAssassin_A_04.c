-------- EventFlow: Obj_DiaryAssassin_A_04 --------

Actor: Obj_DiaryAssassin_A_04
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

    call InitTalk.InitTalkBook({'Arg_Greeting': 4})

    Event1:
    Obj_DiaryAssassin_A_04.EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Obj_DiaryAssassin_A_04:Talk_00', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice3() {
        Event3:
        Obj_DiaryAssassin_A_04.EventTalk({'ChoiceNumber': 3, 'ChoiceLabel3': 5, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Obj_DiaryAssassin_A_04:Talk_01', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice3() {
            Event5:
            Obj_DiaryAssassin_A_04.EventTalk({'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Obj_DiaryAssassin_A_04:Talk_02', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice3() {
                Event7:
                Obj_DiaryAssassin_A_04.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Obj_DiaryAssassin_A_04:Talk_03', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice3() {
                    Event11:
                    Obj_DiaryAssassin_A_04.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Obj_DiaryAssassin_A_04:Talk_04', 'ChoiceNumber': 2, 'ChoiceLabel2': 5, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event7
                    }
                } else {
                    goto Event5
                }
            } else {
                goto Event3
            }
        } else {
            goto Event1
        }
    } else {
        goto Event11
    }
}
