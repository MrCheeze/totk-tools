-------- EventFlow: ShowBalloonNPC_BaseCamp02 --------

Actor: ShowBalloonNPC_BaseCamp02
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'LookingForTheVoiceLord_MuteShowBalloon02'}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_StatueDevil'}) {
            ShowBalloonNPC_BaseCamp02.EventTriggerBalloonMessage({'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/LookingForTheVoiceLord:Near03', 'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            ShowBalloonNPC_BaseCamp02.EventTriggerBalloonMessage({'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/LookingForTheVoiceLord:Near03', 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        }
    }
}
