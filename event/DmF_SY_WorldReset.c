-------- EventFlow: DmF_SY_WorldReset --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWorldResetByBloodyMoon', 'EventReserveBancChangeSafetyPos', 'EventTriggerForceCloseLocationIfNecessary']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundStartSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_StartBloodyMoonEventWorldMgr']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_WorldReset() {

    call WorldReset({'IsMemoryShortage': False})

}

void DmF_SY_WorldResetForMemoryShortage() {

    call WorldReset({'IsMemoryShortage': True})

    GameSystemActor.EventReserveBancChangeSafetyPos({'IsWaitEnd': True})
}

void WorldReset() {
    EventWorldManagerController.EventTrigger_StartBloodyMoonEventWorldMgr()
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_WorldResetStartSound', 'IsIgnoreDucking': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 1, 'IsImmediateOnAutoOff': False, 'WithPlayableEvent': True, 'IsForceFadeTime': True})
    SoundSystemActor.EventSoundRequestDucking({'CommandLife': 1, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_WorldReset'}) {
        GameSystemActor.EventTriggerForceCloseLocationIfNecessary()
        Event2:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MainChallenge_DefeatBlackZelda', 'Index': -1}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_SY_BloodyMoon_PreRender'})
        } else {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_SY_BloodyMoonDarkZelda_PreRender'})
        }
        Event6:
        GameSystemActor.EventWorldResetByBloodyMoon({'IsWaitEnd': True, 'IsMemoryShortage': 'IsMemoryShortage'})
    } else {
        GameSystemActor.EventTriggerForceCloseLocationIfNecessary()
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_WorldResetForMemoryShortage'}) {
            goto Event2
        } else {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_SY_BloodyMoonFirst_PreRender'})
            goto Event6
        }
    }
}
