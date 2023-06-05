-------- EventFlow: ShowBalloonNPC_BaseCamp01 --------

Actor: ShowBalloonNPC_BaseCamp01
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
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LookingForTheVoiceLord_MuteShowBalloon01', 'Index': -1}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_StatueDevil'}) {
            ShowBalloonNPC_BaseCamp01.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/LookingForTheVoiceLord:Near02', 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            ShowBalloonNPC_BaseCamp01.EventTriggerBalloonMessage({'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/LookingForTheVoiceLord:Near02', 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': True})
        }
    }
}
