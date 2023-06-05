-------- EventFlow: Npc_Umii_Road_Scholar_A --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryNothing']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void NearActorsTalk() {
    Event0:

    call Npc_Wanderer_Dungeon046.NearActorsTalk()

}

void NearActorsNear() {
    ;
}

void Talk() {
    goto Event0
}
