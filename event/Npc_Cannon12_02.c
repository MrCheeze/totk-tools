-------- EventFlow: Npc_Cannon12_02 --------

void Near() {

    call Npc_Cannon02_02.CommonNear()

}

void Talk() {

    call Npc_Cannon02_02.CommonTalk()


    call Npc_Cannon02_02.LookAtCannonFromLeft()


    call Npc_Cannon02_02.CommonTalk_AfterCamera()

}
