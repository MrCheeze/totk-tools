-------- EventFlow: FldObj_SignboardStone_A_05 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call SignboardWood.Demo_LookSignboard()

    Npc_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'SignboardStone'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_DreamBattle_ReadMessage'})
}
