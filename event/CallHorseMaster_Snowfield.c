-------- EventFlow: CallHorseMaster_Snowfield --------

Actor: Npc_TabantaHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_TabantaHatago004"), 'TurnToActorName': 'Npc_TabantaHatago004'})

}
