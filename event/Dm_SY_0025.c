-------- EventFlow: Dm_SY_0025 --------

Actor: ZonauShrine_EntranceGate
entrypoint: None()
actions: ['EventTriggerSetIsAuthentication']
queries: ['EventQueryKeyCrystalDungeonState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0}

void EntryPoint0() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    }
    switch ZonauShrine_EntranceGate.EventQueryKeyCrystalDungeonState() {
      case 2:
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': 'DmF:WorldSEミュート(フェード長い)'})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

        call DmF_SY_SmallDungeon1Open.Parts_PreSequence()

        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'Dm_SY_0022', 'IsWaitEnd': True, 'SpecialEventActionType': 1})

        call DmF_SY_SmallDungeon1Open.Parts_OpenEntrance()


        call DmF_SY_SmallDungeon1Open.Parts_PostSequence()

      case 5:
        ZonauShrine_EntranceGate.EventTriggerSetIsAuthentication()
        EventSystemActor.EventTransition({'EventName': 'DmF_SY_SmallDungeon1Open', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
    }
}
