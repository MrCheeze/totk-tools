-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0013 --------

void Talk() {

    call Npc_Zonau_Golem_Servant_Minus0012.Talk_Common({'CameraPosBaseInstance': 'PosBase0013'})

}

void Buy() {

    call Npc_Zonau_Golem_Servant_Minus0012.Buy()

}

void Activate() {

    call Npc_Zonau_Golem_Servant_Minus0012.Activate_Common({'Golem': 'Npc_Zonau_Golem_Servant_Minus0013', 'IsActivated': 'IsActivated_Minus0013_NPCZonauGolem', 'PlayerPos_Auth': 'PlayerPos_AuthShopGolem13', 'PlayerPos_InShop': 'PlayerPos_ShopGolem13', 'CameraPosBaseInstance': 'PosBase0013'})

}
