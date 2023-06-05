-------- EventFlow: CallHorseMaster_Riverside --------

Actor: Npc_RiverSideHatago003
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_RiverSideHatago003"), 'TurnToActorName': 'Npc_RiverSideHatago003'})

}
