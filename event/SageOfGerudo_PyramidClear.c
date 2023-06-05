-------- EventFlow: SageOfGerudo_PyramidClear --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventSetMaterialVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundRequestWaitSetupNextEvent', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WithPlayableEvent': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_StoneGet', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_StoneMind', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GE_0025_PreRender'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GE_0026', 'FadeInTypeEventEnd': 2})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventSetMaterialVisible({'IsWaitEnd': True, 'IsVisible': True, 'ModelAccessIndex': 0, 'MaterialName': 'Mt_SecretStone_Thunder'})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventSetMaterialVisible({'IsWaitEnd': True, 'IsVisible': True, 'ModelAccessIndex': 0, 'MaterialName': 'Mt_Earring'})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_Awake', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfGerudo', 'StepName': 'DungeonEnd', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Electric.IsSageDynamicGenerate', 'Index': -1, 'Value': False})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextBanc': 'MainField', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextStartPos': 'PyramidDungeonEnd', 'BootEventName': 'SageOfGerudo_Clear', 'FadePattern': 1})
}
