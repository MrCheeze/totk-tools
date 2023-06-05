-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0026 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zonau_Golem_Servant_Minus0026_Thanks', 'Index': -1}) {

        call Npc_Zonau_Golem_Servant_Minus0012.Talk_Common({'CameraPosBaseInstance': 'PosBase0001'})

    } else {

        call InitTalk.InitTalkZonauGolemServant({'Arg_Greeting': 3, 'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1000, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1001, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0026:talk_0002', 'IsNotOpenIfSkipedMostRecent': False})

        call Npc_Zonau_Golem_Servant_Minus0012.TeachMe({'CameraPosBaseInstance': 'PosBase0001', 'CameraPosBaseActor': 'DesignateMatrixActor'})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zonau_Golem_Servant_Minus0026_Thanks', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enable_SmeltGolemDig', 'Value': False})
    }
}

void Buy() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Zonau_Golem_Servant_Minus0026_Thanks', 'Index': -1}) {
        Event1:

        call Npc_Zonau_Golem_Servant_Minus0012.Buy()

    } else {

        call InitTalk.InitTalkZonauGolemServant({'Arg_Greeting': 3, 'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_EventStarter")})

        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0026:talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zonau_Golem_Servant_Minus0026_Thanks', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enable_SmeltGolemDig', 'Value': False})
        goto Event1
    }
}
