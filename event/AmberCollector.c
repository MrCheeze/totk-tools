-------- EventFlow: AmberCollector --------

void SellAmbers_Npc_Goron018_Talk() {

    call Npc_Goron018.Talk()

}

void SellAmbers_Npc_Goron018_Near() {
    Event1:

    call Npc_Goron018.Near_Challenge()

}

void SellAmbers_Npc_Goron018_Step_SageOfFire_VillagersSchedule_Talk() {
    Event3:

    call Npc_Goron018.Step_SageOfFire_VillagersSchedule_Talk()

}

void SellAmbers_Npc_Goron018_Step_SageOfFire_VillagersSchedule_Near() {
    goto Event1
}

void Ready_Npc_Goron018_Ramera02_Near() {

    call Npc_Goron018.Near_Challenge_Ready()

}

void Ready_Npc_Goron018_Ramera02_Talk() {
    goto Event3
}
