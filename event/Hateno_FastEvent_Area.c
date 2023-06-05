-------- EventFlow: Hateno_FastEvent_Area --------

Actor: Npc_Road_018[HTN_E]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_022[HTN_E]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_040[HTN_E]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage019
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Npc_Road_040[HTN_E].EventTriggerParticipateEvent()
    Npc_Road_040[HTN_E].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Road_040[HTN_E].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_HatenoVillage019', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Road_018', 'Spearker2InstanceName': 'HTN_E', 'Spearker3ActorName': 'Npc_Road_022', 'Spearker3InstanceName': 'HTN_E', 'Spearker4ActorName': 'Npc_Road_040', 'Spearker4InstanceName': 'HTN_E', 'Actor1': ActorIdentifier(name="Npc_HatenoVillage019"), 'Actor2': ActorIdentifier(name="Npc_Road_040", sub_name="HTN_E"), 'Actor3': ActorIdentifier(name="Npc_Road_018", sub_name="HTN_E"), 'Actor4': ActorIdentifier(name="Npc_Road_022", sub_name="HTN_E")})


    call Npc_HatenoVillage019.AreaTrigger()

}
