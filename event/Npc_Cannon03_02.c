-------- EventFlow: Npc_Cannon03_02 --------

void Talk() {

    call Npc_Cannon02_02.CommonTalk()


    call Npc_Cannon02_02.LookAtCannonFromRight()


    call Npc_Cannon02_02.CommonTalk_AfterCamera()

}

void Near() {

    call Npc_Cannon02_02.CommonNear()

}
