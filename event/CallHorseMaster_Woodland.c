-------- EventFlow: CallHorseMaster_Woodland --------

Actor: Npc_DeathWestHatago_002
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_DeathWestHatago_002"), 'TurnToActorName': 'Npc_DeathWestHatago_002'})

}
