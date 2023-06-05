-------- EventFlow: Npc_SmallOasis012_Cherry --------

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryCheckTerrorLevel', 'EventQueryAIScheduleCheckActorAction', 'EventQueryIsBattle']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Near() {
    if !Npc_EventStarter.EventQueryCheckTerrorLevel()
    && Npc_EventStarter.EventQueryIsBattle()
    && !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 1}) {

        call Npc_SmallOasis012.Npc_SmallOasis012_Tree_Near()

    }
}

void Talk() {

    call Npc_SmallOasis012.Npc_SmallOasis012_Tree_Talk()

}
