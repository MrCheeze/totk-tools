-------- EventFlow: Npc_OasisStudent_C --------

void Talk() {
    Event1:

    call Npc_OasisStudent_A.Talk_C()

}

void Near() {
    Event0:

    call Npc_OasisStudent_A.Near_C()

}

void NearActorsTalk() {
    goto Event1
}

void NearActorsNear() {
    goto Event0
}
