-------- EventFlow: SageOfGerudo_DefenseInfo --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerShowCompanionMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseInfoStart'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEOpen'}) {
            Event6:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestNOpen'}) {
                Event8:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestWOpen'}) {
                    Event13:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEChange'}) {
                        Event16:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestNChange'}) {
                            Event19:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestWChange'}) {
                                Event29:
                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'SageOfGerudo_DefenseCount', 'Index': -1, 'Value': 3}) {
                                    GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_07'})
                                } else {
                                    GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_08'})
                                }
                            } else {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestWChange'})
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestWDead'}) {
                                    goto Event29
                                } else {
                                    GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Info_10'})
                                }
                            }
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestNChange'})
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestNDead'}) {
                                goto Event19
                            } else {
                                GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Info_09'})
                            }
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestEChange'})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEDead'}) {
                            goto Event16
                        } else {
                            GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_04'})
                        }
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestWOpen'})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestWDead'}) {
                        goto Event13
                    } else {
                        GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_03'})
                    }
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestNOpen'})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestNDead'}) {
                    goto Event8
                } else {
                    GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_02'})
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseNestEOpen'})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_DefenseNestEDead'}) {
                goto Event6
            } else {
                GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_01'})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DefenseInfoStart'})
        GameSystemActor.EventTriggerShowCompanionMessage({'Frame': 150.0, 'MessageId': 'ShoutMsg/ShoutVoice_Rouge:Talk_00'})
    }
}
