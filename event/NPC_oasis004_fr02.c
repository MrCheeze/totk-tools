-------- EventFlow: NPC_oasis004_fr02 --------

Actor: Npc_MercenarySoldier_Hylia001[BaseCamp_Field]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: NPC_oasis004_fr02[BaseCamp_Field]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 3, 'Spearker1InstanceName': 'BaseCamp_Field', 'Spearker2InstanceName': 'BaseCamp_Field', 'Spearker3InstanceName': 'BaseCamp_Field', 'Spearker4InstanceName': 'BaseCamp_Field', 'Spearker3ActorName': 'Npc_MercenarySoldier_Hylia002B_BaseCamp', 'Arg_Turn': 0, 'Spearker1ActorName': 'NPC_oasis004_fr02', 'Spearker2ActorName': 'Npc_MercenarySoldier_Hylia001', 'Actor1': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="BaseCamp_Field"), 'Actor2': ActorIdentifier(name="Npc_MercenarySoldier_Hylia001", sub_name="BaseCamp_Field"), 'Actor3': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor4': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B_BaseCamp", sub_name="BaseCamp_Field"), 'Spearker4ActorName': 'Npc_MercenarySoldier_Hylia003B_BaseCamp'})


    call Initialization()

    NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        NPC_oasis004_fr02[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NPC_oasis004_fr02:Talk_02', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        NPC_oasis004_fr02[BaseCamp_Field].EventTalk({'MessageId': 'EventFlowMsg/NPC_oasis004_fr02:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Npc_MercenarySoldier_Hylia001.Talk_Army()

    Event18:
    if Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventQueryHaveTalked() {
        Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
    if Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventQueryHaveTalked() {
        Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp_Talk() {

    call InitTalk.InitTalk_Quartet({'Arg_Greeting': 3, 'Spearker1InstanceName': 'BaseCamp_Field', 'Spearker2InstanceName': 'BaseCamp_Field', 'Spearker3InstanceName': 'BaseCamp_Field', 'Spearker4InstanceName': 'BaseCamp_Field', 'Spearker3ActorName': 'Npc_MercenarySoldier_Hylia002B_BaseCamp', 'Arg_Turn': 0, 'Spearker1ActorName': 'NPC_oasis004_fr02', 'Spearker2ActorName': 'Npc_MercenarySoldier_Hylia001', 'Actor1': ActorIdentifier(name="NPC_oasis004_fr02", sub_name="BaseCamp_Field"), 'Actor2': ActorIdentifier(name="Npc_MercenarySoldier_Hylia001", sub_name="BaseCamp_Field"), 'Actor3': ActorIdentifier(name="Npc_MercenarySoldier_Hylia002B_BaseCamp", sub_name="BaseCamp_Field"), 'Actor4': ActorIdentifier(name="Npc_MercenarySoldier_Hylia003B_BaseCamp", sub_name="BaseCamp_Field"), 'Spearker4ActorName': 'Npc_MercenarySoldier_Hylia003B_BaseCamp'})


    call Initialization()

    NPC_oasis004_fr02[BaseCamp_Field].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_MercenarySoldier_Hylia001_QuartetTalk01'}) {
        NPC_oasis004_fr02[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NPC_oasis004_fr02:Talk_05', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        NPC_oasis004_fr02[BaseCamp_Field].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/NPC_oasis004_fr02:Talk_02', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Npc_MercenarySoldier_Hylia001.Talk_Army2()

    goto Event18
}

void Initialization() {
    Npc_MercenarySoldier_Hylia001[BaseCamp_Field].EventPlayAS({'ASName': 'Meeting', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    NPC_oasis004_fr02[BaseCamp_Field].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_MercenarySoldier_Hylia002B_BaseCamp[BaseCamp_Field].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_MercenarySoldier_Hylia003B_BaseCamp[BaseCamp_Field].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}
