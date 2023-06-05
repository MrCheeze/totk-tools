-------- EventFlow: CallHorseMaster_Lakeside --------

Actor: Npc_LakeSideHatago004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_LakeSideHatago004"), 'TurnToActorName': 'Npc_LakeSideHatago004'})

}
