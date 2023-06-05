-------- EventFlow: BossBattle_Common --------

Actor: Player
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestChangeState', 'EventTriggerPlayerGetOff', 'EventTriggerPlayerClimbOff', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Gerudo_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: DungeonBoss_Zora_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: DungeonBoss_Goron_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: DungeonBoss_Rito_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Enemy_PhantomGanon_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: DungeonBoss_Zonau_EventStarter
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerCloseCompanionLifeGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void BossBattle_CommonA() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 4}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                if !Player.EventQueryCheckPlayerState({'State': 27}) {
                    Event48:
                    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
                } else {
                    Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
                    Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
                    Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
                    goto Event48
                }
            } else {
                Player.EventTriggerPlayerClimbOff()
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            }
        } else {
            Player.EventTriggerPlayerGetOff()
            Event15:
            if !Player.EventQueryCheckPlayerState({'State': 27}) {
                Event14:
                if Player.EventQueryCheckPlayerState({'State': 4}) {
                    Player.EventTriggerPlayerGetOff()
                }
            } else {
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
                goto Event14
            }
        }
    } else
    goto Event15
}

void BossBattle_CommonB() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 4}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            if !Player.EventQueryCheckPlayerState({'State': 27}) {
                Event45:
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
                Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
                goto Event45
            }
        } else {
            Player.EventTriggerPlayerClimbOff()
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        }
    } else
    if !Player.EventQueryCheckPlayerState({'State': 27}) {
        Event20:
        ;
    } else {
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 3})
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 4})
        goto Event20
    }
}

void Boss_Rito_Underground_TransformBoss() {
    DungeonBoss_Rito_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()

    EventSystemActor.EventTransition({'EventName': 'Dm_RT_0017', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Rito_Uncleared_TransformBoss() {
    DungeonBoss_Rito_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()

    EventSystemActor.EventTransition({'EventName': 'Dm_RT_0017', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Goron_Underground_TransformBoss() {
    DungeonBoss_Goron_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GO_0019', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Goron_Uncleared_TransformBoss() {
    DungeonBoss_Goron_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GO_0019', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Zora_Underground_TransformBoss() {
    DungeonBoss_Zora_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_ZO_0029', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Zora_Uncleared_TransformBoss() {
    DungeonBoss_Zora_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_ZO_0029', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Gerudo_TransformBoss() {
    DungeonBoss_Gerudo_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GE_0023', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Gerudo_Underground_TransformBoss() {
    DungeonBoss_Gerudo_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GE_0023', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Gerudo_Uncleared_TransformBoss() {
    DungeonBoss_Gerudo_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GE_0023', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void PhantomGanon_TransformBoss() {
    Enemy_PhantomGanon_EventStarter.EventTriggerParticipateEvent()

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_BZ_0004', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void PhantomGanon_Uncleared_TransformBoss() {
    Enemy_PhantomGanon_EventStarter.EventTriggerParticipateEvent()

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_BZ_0004', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Enemy_DungeonBoss_Zonau() {
    DungeonBoss_Zonau_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0029', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Enemy_DungeonBoss_Zonau_Uncleared() {
    DungeonBoss_Zonau_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_ZN_0029', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Boss_Goron_TransformBoss() {
    DungeonBoss_Goron_EventStarter.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call StopLowLayerBgm()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'Dm_GO_0019', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void StopLowLayerBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}
