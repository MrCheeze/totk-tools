-------- EventFlow: CallHorseMaster_DuelingPeeks --------

Actor: Npc_HutagoHatago_001
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_HutagoHatago_001"), 'TurnToActorName': 'Npc_HutagoHatago_001'})

}
