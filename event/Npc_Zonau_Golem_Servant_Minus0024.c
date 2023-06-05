-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0024 --------

Actor: Npc_Zonau_Golem_Servant_Minus0014
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})


    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemTalk_Common({'GetReward_GameData': 'IsGetReward_BluePrint4', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0014', 'Draft_Actor': 'Obj_AutoBuilderDraft_03', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0024', 'IsActiveted_GameData': 'IsActivated_Minus0024_NPCZonauGolem', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0014"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem24'})

}

void IsActivated_Minus0004_NPCZonauGolem_Talk() {

    call Npc_Zonau_Golem_Servant_Minus0002.DraftGolemActivate_Common({'GetReward_GameData': 'IsGetReward_BluePrint4', 'ShopActor': 'Npc_Zonau_Golem_Servant_Minus0014', 'Draft_Actor': 'Obj_AutoBuilderDraft_03', 'GolemActor': 'Npc_Zonau_Golem_Servant_Minus0024', 'IsActiveted_GameData': 'IsActivated_Minus0024_NPCZonauGolem', 'PlayerPos_Auth': 'PlayerPos_AuthDraftGolem24', 'ShopActorID': ActorIdentifier(name="Npc_Zonau_Golem_Servant_Minus0014"), 'CleanupDraftSpace': 'CleanupDraftSpace_ForGolem24'})

}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:near_1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}
