-------- EventFlow: CallHorseMaster_TabanthaBridge --------

Actor: Npc_TabantaBridgeHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_TabantaBridgeHatago006"), 'TurnToActorName': 'Npc_TabantaBridgeHatago006'})

}
