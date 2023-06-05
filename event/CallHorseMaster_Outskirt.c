-------- EventFlow: CallHorseMaster_Outskirt --------

Actor: Npc_HyruleDepthHatago005
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_HyruleDepthHatago005"), 'TurnToActorName': 'Npc_HyruleDepthHatago005'})

}
