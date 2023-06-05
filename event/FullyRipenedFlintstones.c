-------- EventFlow: FullyRipenedFlintstones --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Goron_Cafe002_Talk() {
    Event0:

    call Npc_Goron_Cafe002.ResearchEldin_IsCompleted_Exp_Talk()

}

void GetFlintstones_Npc_Goron_Cafe002_Talk() {
    goto Event0
}

void Ready_Npc_Goron_Cafe002_Near() {

    call Npc_Goron_Cafe002.Challenge_Near()

}

void GetFlintstones_Npc_Goron_Cafe002_Near() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_I', 'Num': 20, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Goron_Cafe002:near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Goron_Cafe002:near01', 'IsDisplayInTerror': False, 'IsChallenge': False, 'NotOverriddenByInterestBalloon': True})
    }
}
