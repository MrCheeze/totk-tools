-------- EventFlow: SageOfGerudo_DefenseNestOK --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerShowCompanionMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_DefenseCount', 'Index': -1, 'Value': 0}) {
      case [0, 1]:
        Event3:
        GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_16'})
        Event5:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'SageOfGerudo_DefenseCount', 'Value': 1, 'Index': -1})
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_DefenseCount', 'Index': -1, 'Value': 1}) {
          case 0:
            goto Event3
          case 1:
            GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_17'})
            goto Event5
          case 2:
            GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_18'})
            goto Event5
        }
    }
}
