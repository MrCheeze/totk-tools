-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0015 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Talk() {

    call Npc_Zonau_Golem_Servant_Minus0012.Talk_Common({'CameraPosBaseInstance': 'PosBase0015'})

}

void Buy() {

    call Npc_Zonau_Golem_Servant_Minus0012.Buy()

}

void Activate() {

    call Npc_Zonau_Golem_Servant_Minus0012.Activate_Common({'Golem': 'Npc_Zonau_Golem_Servant_Minus0015', 'IsActivated': 'IsActivated_Minus0015_NPCZonauGolem', 'PlayerPos_Auth': 'PlayerPos_AuthShopGolem15', 'PlayerPos_InShop': 'PlayerPos_ShopGolem15', 'CameraPosBaseInstance': 'PosBase0015'})

}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:near_1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}
