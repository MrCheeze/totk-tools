-------- EventFlow: ReadableMemo --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void ReadableMemo() {

    call InitTalk.InitTalkBook({'Arg_Greeting': 3})

    Event5:
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Obj_Notepad_Tips_A_01', 'InstanceName': 'Notepad_Mercenary_HyrulePlain'}) {
        Event9:

        call Common.OpenActionGuideScreenForce({'ActionGuideType': 22})

    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Obj_Notepad_Tips_A_01', 'InstanceName': 'Notepad_Mercenary_Hateru'}) {
        goto Event9
    }
}

void ReadableMemoEquip() {

    call InitTalk.InitTalkBookEquip({'Arg_Greeting': 3})

    goto Event5
}
