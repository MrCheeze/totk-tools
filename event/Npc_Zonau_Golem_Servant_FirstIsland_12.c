-------- EventFlow: Npc_Zonau_Golem_Servant_FirstIsland_12 --------

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_12
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_12")})

    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 5, 6, 7]:
        if !Npc_Zonau_Golem_Servant_FirstIsland_12.EventQueryIsOnRecentTalkFlag() {
            Npc_Zonau_Golem_Servant_FirstIsland_12.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 1, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_12:talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_12.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 1, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_12:talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2, 3, 4]:
        if !Npc_Zonau_Golem_Servant_FirstIsland_12.EventQueryIsOnRecentTalkFlag() {
            Npc_Zonau_Golem_Servant_FirstIsland_12.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 1, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_12:talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_12.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_12:talk_00', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 1, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}
