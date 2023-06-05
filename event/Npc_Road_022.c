-------- EventFlow: Npc_Road_022 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call Npc_HatenoVillage019.FirstEvent_Outside()

}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Road_022:near_00', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Hateno_FirstEvent_Near() {

    call Npc_Road_018.Reese_NormalNear()

}

void Hateno_FirstEvent_Talk() {

    call Npc_Road_018.Reese_NormalTalk()

}

void Hateno_FirstEvent_NearActorsTalk() {
    if !Npc_EventStarter.EventQueryIsIndoor() {
        Event5:

        call Npc_Road_018.MeetingTalk()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_040_Terrace', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_018_Terrace', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_022_Terrace', 'Index': -1}) {
        goto Event5
    } else {

        call Npc_Road_018.Reese_NormalTalk()

    }
}

void Hateno_FirstEvent_NearActorsNear() {

    call Npc_Road_018.Reese_MeetingNear()

}
