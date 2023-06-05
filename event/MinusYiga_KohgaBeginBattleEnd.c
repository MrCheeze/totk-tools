-------- EventFlow: MinusYiga_KohgaBeginBattleEnd --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_Minus0001[blueprint]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Assassin_Senior[KohgaBegin]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void BatttleEnd() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventTriggerParticipateEvent()
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventPlayAS({'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'Partial': 'Material', 'IsAllSlot': False, 'ASName': 'Mat_AllON'})
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'ASName': 'WakeUp', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True})
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Npc_Zonau_Golem_Servant_Minus0001[blueprint].EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventTriggerParticipateEvent()
    Enemy_Assassin_Senior[KohgaBegin].EventTriggerParticipateEvent()

    call BossBattle_Common.BossBattle_CommonA()

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -47.88100051879883, 'Position': [-809.29248046875, -415.1897888183594, 1929.48095703125], 'UseDemoWait': True})
    Enemy_Assassin_Senior[KohgaBegin].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player', 'InstanceName': '', 'PositionOffset': [0.0, 0.019999999552965164, 16.0], 'YAngle': 175.57000732421875})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OT_0010'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': True, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}
