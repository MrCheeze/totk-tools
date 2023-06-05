-------- EventFlow: SageOfGerudo_PyramidRougeInfo --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerOpenCompanionMessageUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Info1() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_PyramidRougeInfo1', 'Index': -1}) {
        Event0:
        EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_01'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo1'})
    }
}

void Info2() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfGerudo_PyramidRougeInfo2', 'Index': -1}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_12'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo2'})
    }
}

void Info3() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo3'}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_13'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo3'})
    }
}

void Info4() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo4'}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_14'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo4'})
    }
}

void Info5() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo5'}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_15'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo5'})
    }
}

void Info7() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo7'}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_17'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo7'})
    }
}

void Info8() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo8'}) {
        goto Event0
    } else {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerOpenCompanionMessageUI({'MessageID': 'ShoutMsg/ShoutVoice_Rouge:Info_18'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_PyramidRougeInfo8'})
    }
}
