-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0010 --------

Actor: Npc_Zonau_Golem_Servant_Minus0020
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void IsActivated_Minus0010_NPCZonauGolem_Talk() {

    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemActivate_Common({'GetReward_GameData': 'IsGetReward_BluePrint10', 'IsActiveted_GameData': 'IsActivated_Minus0010_NPCZonauGolem', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0010', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0020', 'Draft_Actor': 'Obj_AutoBuilderDraft_05', 'PlayerPos_Auth': 'PlayerPos_AuthDraftGolem10', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0020"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem10'})

}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})


    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemTalk_Common({'GetReward_GameData': 'IsGetReward_BluePrint10', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0010', 'IsActiveted_GameData': 'IsActivated_Minus0010_NPCZonauGolem', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0020', 'Draft_Actor': 'Obj_AutoBuilderDraft_05', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0020"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem10'})

}
