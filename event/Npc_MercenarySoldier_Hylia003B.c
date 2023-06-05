-------- EventFlow: Npc_MercenarySoldier_Hylia003B --------

Actor: NPC_oasis004_fr02[BaseCamp_Field]
entrypoint: None()
actions: ['EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia001[BaseCamp_Field]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 3, 'Spearker2ActorName': 'NPC_oasis004_fr02', 'Spearker1InstanceName': 'BaseCamp_Field', 'Spearker2InstanceName': 'BaseCamp_Field', 'Spearker3InstanceName': 'BaseCamp_Field', 'Spearker4InstanceName': 'BaseCamp_Field', 'Spearker3ActorName': 'Npc_MercenarySoldier_Hylia002B_BaseCamp', 'Arg_Turn': 0, 'Spearker4ActorName': 'Npc_MercenarySoldier_Hylia001', 'Spearker1ActorName': 'Npc_MercenarySoldier_Hylia003B_BaseCamp', 'Actor1': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor2': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="BaseCamp_Field"), 'Actor3': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor4': ActorIdentifier(name="Npc_MercenarySoldier_Hylia001", sub_name="BaseCamp_Field")})


    call NPC_oasis004_fr02.Initialization()

    Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia003B:Talk_02', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia003B:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Npc_MercenarySoldier_Hylia001.Talk_Army()

    Event14:
    if NPC_oasis004_fr02[BaseCamp_Field].EventQueryHaveTalked() {
        NPC_oasis004_fr02[BaseCamp_Field].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
    if Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventQueryHaveTalked() {
        Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp_Talk() {

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 3, 'Spearker2ActorName': 'NPC_oasis004_fr02', 'Spearker1InstanceName': 'BaseCamp_Field', 'Spearker2InstanceName': 'BaseCamp_Field', 'Spearker3InstanceName': 'BaseCamp_Field', 'Spearker4InstanceName': 'BaseCamp_Field', 'Spearker3ActorName': 'Npc_MercenarySoldier_Hylia002B_BaseCamp', 'Arg_Turn': 0, 'Spearker4ActorName': 'Npc_MercenarySoldier_Hylia001', 'Actor1': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor2': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="BaseCamp_Field"), 'Actor3': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor4': ActorIdentifier(name="Npc_MercenarySoldier_Hylia001", sub_name="BaseCamp_Field"), 'Spearker1ActorName': 'Npc_MercenarySoldier_Hylia003B_BaseCamp'})


    call NPC_oasis004_fr02.Initialization()

    Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia003B:Talk_03', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_MercenarySoldier_Hylia003B:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Npc_MercenarySoldier_Hylia001.Talk_Army2()

    goto Event14
}
