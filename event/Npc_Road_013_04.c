-------- EventFlow: Npc_Road_013_04 --------

void Near() {

    call Npc_Road_013_01.Near()

}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})


    call Npc_Road_013.NpcBattle()


    call StylishNPC.StylishNPC_Women()


    call StylishNPC.FairyTalk2_04()


    call StylishNPC.GoodBye_Talk()

}
