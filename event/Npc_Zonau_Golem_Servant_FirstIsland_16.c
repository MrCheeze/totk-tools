-------- EventFlow: Npc_Zonau_Golem_Servant_FirstIsland_16 --------

Actor: Npc_Zonau_Golem_Servant_FirstIsland_16
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Greeting': 3, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_16"), 'Arg_Turn': 4})

    if !Npc_Zonau_Golem_Servant_FirstIsland_16.EventQueryHaveTalked()
    && !Npc_Zonau_Golem_Servant_FirstIsland_16.EventQueryIsOnRecentTalkFlag() {
        Npc_Zonau_Golem_Servant_FirstIsland_16.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_16:talk_08', 'ASName': 'Act_Mining_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zonau_Golem_Servant_FirstIsland_16.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_16:talk_06', 'ASName': 'Act_Mining_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SleepTalk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Greeting': 3, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_16"), 'Arg_Turn': 4})

    if !Npc_Zonau_Golem_Servant_FirstIsland_16.EventQueryHaveTalked()
    && !Npc_Zonau_Golem_Servant_FirstIsland_16.EventQueryIsOnRecentTalkFlag() {
        Npc_Zonau_Golem_Servant_FirstIsland_16.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_16:talk_08', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Zonau_Golem_Servant_FirstIsland_16.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 3, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_16:talk_06', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }
}
