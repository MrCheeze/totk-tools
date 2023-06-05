-------- EventFlow: SageOfGerudo_DefenseEnemyNear --------

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerShowCompanionMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseEnemyNear1'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseEnemyNear2'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseEnemyNear3'}) {
                GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_11'})
            } else {
                GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_10'})
            }
        } else {
            GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_09'})
        }
    }
}
