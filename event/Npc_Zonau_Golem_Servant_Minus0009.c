-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0009 --------

Actor: Npc_Zonau_Golem_Servant_Minus0019
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void IsActivated_Minus0009_NPCZonauGolem_Talk() {

    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemActivate_Common({'GetReward_GameData': 'IsGetReward_BluePrint9', 'IsActiveted_GameData': 'IsActivated_Minus0009_NPCZonauGolem', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0009', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0019', 'PlayerPos_Auth': 'PlayerPos_AuthDraftGolem09', 'Draft_Actor': 'Obj_AutoBuilderDraft_04', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0019"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem09'})

}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})


    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemTalk_Common({'GetReward_GameData': 'IsGetReward_BluePrint9', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0009', 'IsActiveted_GameData': 'IsActivated_Minus0009_NPCZonauGolem', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0019', 'Draft_Actor': 'Obj_AutoBuilderDraft_04', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0019"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem09'})

}
