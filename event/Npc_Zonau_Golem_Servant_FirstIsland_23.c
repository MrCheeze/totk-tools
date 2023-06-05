-------- EventFlow: Npc_Zonau_Golem_Servant_FirstIsland_23 --------

Actor: Npc_Zonau_Golem_Servant_FirstIsland_23
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_23")})

    if !Npc_Zonau_Golem_Servant_FirstIsland_23.EventQueryHaveTalked() {
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 5, 6, 7]:
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
            if !Npc_Zonau_Golem_Servant_FirstIsland_23.EventQueryIsOnRecentTalkFlag() {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 4, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_23', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 4, 'ASName': '', 'IsAnimeDriven': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_19', 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_08', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_17', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [1, 2, 3, 4]:
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 0, 'TurnType': 1})
            if !Npc_Zonau_Golem_Servant_FirstIsland_23.EventQueryIsOnRecentTalkFlag() {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ASName': 'Act_Lumberjack_Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_11', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_12', 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_03', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_08', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Act_Lumberjack_Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_07', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ASName': 'Act_Lumberjack', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_00', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 0, 'TurnType': 1})
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceLabel1': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_06', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_02', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_04', 'IsNotOpenIfSkipedMostRecent': False})
            Event17:
            if EventWorldManagerController.EventQueryTimeDivision() in [0, 5, 6, 7] {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_05', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Act_Lumberjack_Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_07', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event17
        }
    }
}

void Firstskyisland_IsCutDownTree_Tutorial_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_23")})

    Npc_Zonau_Golem_Servant_FirstIsland_23.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 0, 'TurnType': 1})
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 5, 6, 7]:
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
        if !Npc_Zonau_Golem_Servant_FirstIsland_23.EventQueryIsOnRecentTalkFlag() {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 4, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_23', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 4, 'ASName': '', 'IsAnimeDriven': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_19', 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_10', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_08', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_17', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2, 3, 4]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Firstskyisland_IsCutDownTree_MidNight'}) {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 21, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_40', 'ChoiceLabel1': 22, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_42', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_41', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_Zonau_Golem_Servant_FirstIsland_23.EventQueryIsOnRecentTalkFlag() {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_26', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_30', 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_22', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_21', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Firstskyisland_NotTalkedAndCutDownTree_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_23")})

    Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 11, 'ChoiceLabel1': 10, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_27', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_31', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_28', 'IsNotOpenIfSkipedMostRecent': False})
    }
    if EventWorldManagerController.EventQueryTimeDivision() in [0, 5, 6, 7] {
        Npc_Zonau_Golem_Servant_FirstIsland_23.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Lumberjack_Talk', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_23:talk_32', 'IsNotOpenIfSkipedMostRecent': False})
    }
}
