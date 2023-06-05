-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0008 --------

Actor: Npc_Zonau_Golem_Servant_Minus0018
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Enable_Activate_Golem_Minus0008_Talk() {

    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemActivate_Common({'GetReward_GameData': 'IsGetReward_BluePrint8', 'IsActiveted_GameData': 'IsActivated_Minus0008_NPCZonauGolem', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0008', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0018', 'PlayerPos_Auth': 'PlayerPos_AuthDraftGolem08', 'Draft_Actor': 'Obj_AutoBuilderDraft_08', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0018"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem08'})

}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})


    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemTalk_Common({'GetReward_GameData': 'IsGetReward_BluePrint8', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0008', 'IsActiveted_GameData': 'IsActivated_Minus0008_NPCZonauGolem', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0018', 'Draft_Actor': 'Obj_AutoBuilderDraft_08', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0018"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem08'})

}

void IsActivated_Minus0008_NPCZonauGolem_Talk() {

    call Npc_Assassin_023.Activate_Golem({'Actor': 'Npc_Assassin_023'})

}
