-------- EventFlow: Npc_Kakariko005_Dungeon046 --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryNothing']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event1:

    call Npc_Wanderer_Dungeon046.NearActorsTalk()

}

void NearActorsTalk() {
    goto Event1
}

void NearActorsNear() {
    ;
}
