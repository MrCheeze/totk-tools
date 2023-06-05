-------- EventFlow: KokkoGuidePost --------

void Talk() {
    Event2:

    call Npc_Kakariko014.Talk()

}

void Near() {
    Event4:

    call Npc_Kakariko014.Near()

}

void Ready_Npc_Kakariko014_Talk() {
    goto Event2
}

void Ready_Npc_Kakariko014_Near() {
    goto Event4
}

void Ready_Npc_Kakariko014_Buy() {
    Event5:

    call Npc_Kakariko014.Buy()

}

void Buy() {
    goto Event5
}
