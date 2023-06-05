-------- EventFlow: TreasureOfLamda_FierceDeity --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_FldObj_MessageBottle_MessageBottle_Lambda_02_Talk() {

    call SignboardWood.Demo_LookSignboard()

    Npc_EventStarter.EventTalkWithInstanceNameLabel({'IsWaitEnd': True, 'MstxtName': 'FldObj_MessageBottle'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'TreasureOfLamda_FierceDeity', 'StepName': 'GetOneTreaure', 'IsWaitEnd': True})
}
