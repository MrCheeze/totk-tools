-------- EventFlow: CallHorseMaster_Wetland --------

Actor: Npc_NorthHatelHatago006
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_NorthHatelHatago006"), 'TurnToActorName': 'Npc_NorthHatelHatago006'})

}
