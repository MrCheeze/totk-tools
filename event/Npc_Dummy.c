-------- EventFlow: Npc_Dummy --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToObjectGreeting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event7:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Dummy:talk_00', 'IsCloseDialog': True, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Near() {
    Npc_EventStarter.EventTriggerParticipateEvent()
}

void EachFrame() {
    Event4:
    Npc_EventStarter.EventTriggerParticipateEvent()
    EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    goto Event4
}

void GatherTalk() {
    Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 4, 'GreetType': 4})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Dummy:talk_00', 'IsCloseDialog': True, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void GatherNear() {
    Npc_EventStarter.EventTriggerParticipateEvent()
}

void StepStart() {
    Npc_EventStarter.EventTriggerParticipateEvent()
}

void Buy() {
    goto Event7
}

void ChaseTalk() {
    Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 4, 'GreetType': 4})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Dummy:talk_00', 'IsCloseDialog': True, 'EndDialogOption': 3, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void ChaseNear() {
    Npc_EventStarter.EventTriggerParticipateEvent()
}
