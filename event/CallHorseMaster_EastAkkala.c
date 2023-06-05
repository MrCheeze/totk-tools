-------- EventFlow: CallHorseMaster_EastAkkala --------

Actor: Npc_TamourHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_TamourHatago005"), 'TurnToActorName': 'Npc_TamourHatago005'})

}
