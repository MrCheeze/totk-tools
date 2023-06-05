-------- EventFlow: Npc_OasisHighMountain_001 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Talk() {

    call Npc_Cannon_02.Talk()

}

void Near() {
    Npc_EventStarter.EventTriggerParticipateEvent()
}
