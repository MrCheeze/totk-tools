-------- EventFlow: TwnObj_DemonStatue_A_01 --------

Actor: TwnObj_DemonStatue_A_01
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_StatueDevil', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Near() {
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_StatueDevil'}) {
        TwnObj_DemonStatue_A_01.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/DmF_SY_StatueDevil:near00', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        TwnObj_DemonStatue_A_01.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/DmF_SY_StatueDevil:near00', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
    }
}
