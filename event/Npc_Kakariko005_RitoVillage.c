-------- EventFlow: Npc_Kakariko005_RitoVillage --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryNothing']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event1:

    call Npc_Wanderer_RitoVillage.NearActorsTalk()

}

void NearActorsTalk() {
    goto Event1
}

void NearActorsNear_Kakariko005() {
    ;
}
