-------- EventFlow: Npc_Attacked_002 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call Npc_Attacked_007.DeathMtHatago_ExistDill_Talk()

}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'DeathMtHatago_IsTalked_DillJyoram', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_Attacked_007:near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}
