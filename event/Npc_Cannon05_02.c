-------- EventFlow: Npc_Cannon05_02 --------

void Near() {

    call Npc_Cannon02_02.CommonNear()

}

void Talk() {

    call Npc_Cannon02_02.CommonTalk()


    call Npc_Cannon02_02.LookAtCannonFromRight()


    call Npc_Cannon02_02.CommonTalk_AfterCamera()

}
