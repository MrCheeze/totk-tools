-------- EventFlow: Npc_Road_007 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Talk() {

    call Npc_Road_006.PairTalk_Start()

}

void isTalked_KakarikoTraveller_Near() {

    call Npc_Road_006.chario_balloon_from_isTalked_KakarikoTraveller_Talked()

}

void isTalked_KakarikoTraveller_Talk() {

    call Npc_Road_006.chario_talk_from_isTalkedTraveller_Talked()

}

void Near() {

    call Npc_Road_006.chario_balloon_from_Near()

}

void BaseCamp_CreateGoronGuide_Talk() {

    call Npc_Road_006.BaseCamp_CreateGoronGuide_Talk()

}

void Npc_Road_006_CreateGerudo_Near() {

    call Npc_Road_006.GerudoEntrance_Near_Chario()

}

void Npc_Road_006_CreateGerudo_Talk() {

    call Npc_Road_006.Npc_Road_006_CreateGerudo_Talk()

}

void Npc_Road_006_Talk03_Near() {
    Event8:

    call Npc_Road_006.Npc_Road_006_Talk03_Near_Chario()

}

void Npc_Road_006_Talk03_Talk() {
    Event7:

    call Npc_Road_006.Npc_Road_006_Talk03_Talk_Chario()

}

void Npc_Road_006_Talk03_NearActorsTalk() {
    goto Event7
}

void Npc_Road_006_Talk03_NearActorsNear() {
    goto Event8
}

void NearActorsNear() {
    ;
}
