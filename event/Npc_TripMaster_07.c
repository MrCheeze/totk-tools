-------- EventFlow: Npc_TripMaster_07 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call Npc_TripMaster_00.Shop_Talk({'MessageId': 'EventFlowMsg/Npc_TripMaster_07:Com_Talk_Hello'})

}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2]:
        if !Npc_EventStarter.EventQueryIsIndoor() {
            Event0:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_TripMaster_07:Near1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5]:
            goto Event0
          case [2, 3, 6, 7, 8]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_TripMaster_00:Near_Rainy'})
        }
      case 1:
        goto Event0
    }
}
