-------- EventFlow: CallHorseMaster_NewSouthAkkal --------

Actor: Npc_TamourPlainHatago_004
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void CallHorseMaster() {

    call CallHorseMaster_NewMaritta.CommonFlow({'ActorName': ActorIdentifier(name="Npc_TamourPlainHatago_004"), 'TurnToActorName': 'Npc_TamourPlainHatago_004'})

}
