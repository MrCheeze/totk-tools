-------- EventFlow: Npc_OasisStudent_B --------

void Talk() {
    Event1:

    call Npc_OasisStudent_A.Talk_B()

}

void Near() {
    Event0:

    call Npc_OasisStudent_A.Near_B()

}

void NearActorsTalk() {
    goto Event1
}

void NearActorsNear() {
    goto Event0
}
