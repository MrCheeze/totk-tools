-------- EventFlow: LaunchPlayer --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWarpFollowersBehindCamera']
queries: ['EventQueryIsOpenCannon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void MainFlow() {
    Player.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'DmF_SY_Cannon', 'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
}

void LaunchPlayer() {

    call MainFlow()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower01', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower02', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower03', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower04', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower05', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower06', 'Index': -1}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower08', 'Index': -1}) {
                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower09', 'Index': -1}) {
                                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower10', 'Index': -1}) {
                                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower11', 'Index': -1}) {
                                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower12', 'Index': -1}) {
                                                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower13', 'Index': -1}) {
                                                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower14', 'Index': -1}) {
                                                            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower15', 'Index': -1}) {
                                                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen15'})
                                                            }
                                                            Event15:

                                                            call PostFlow()

                                                        } else {
                                                            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen14'})
                                                            goto Event15
                                                        }
                                                    } else {
                                                        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen13'})
                                                        goto Event15
                                                    }
                                                } else {
                                                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen12'})
                                                    goto Event15
                                                }
                                            } else {
                                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen11'})
                                                goto Event15
                                            }
                                        } else {
                                            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen10'})
                                            goto Event15
                                        }
                                    } else {
                                        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen09'})
                                        goto Event15
                                    }
                                } else {
                                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen08'})
                                    goto Event15
                                }
                            } else {
                                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen07'})
                                goto Event15
                            }
                        } else {
                            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen06'})
                            goto Event15
                        }
                    } else {
                        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen05'})
                        goto Event15
                    }
                } else {
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen04'})
                    goto Event15
                }
            } else {
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen03'})
                goto Event15
            }
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen02'})
            goto Event15
        }
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen01'})
        goto Event15
    }
}

void LaunchPlayer02() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 2}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen02'})
    }
}

void LaunchPlayer03() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 3}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen03'})
    }
}

void LaunchPlayer04() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 4}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen04'})
    }
}

void LaunchPlayer05() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 5}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen05'})
    }
}

void LaunchPlayer01() {

    fork {

        call MainFlow()

    } {

        call HyruleCastleIncident.ToLand_Npc_BaseCamp_Assistant_WatchTower_Warp()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 1}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen01'})
    }
}

void PostFlow() {
    GameSystemActor.EventWarpFollowersBehindCamera({'ActorName': 'Npc_Tulin_Sage', 'IsWaitEnd': False})
    GameSystemActor.EventWarpFollowersBehindCamera({'ActorName': 'Sage_Soul_Rito', 'IsWaitEnd': False})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
}

void LaunchPlayer07() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 7}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen07'})
    }
}

void LaunchPlayer08() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 8}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen08'})
    }
}

void LaunchPlayer09() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 9}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen09'})
    }
}

void LaunchPlayer10() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 10}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen10'})
    }
}

void LaunchPlayer06() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 6}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen06'})
    }
}

void LaunchPlayer12() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 12}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen12'})
    }
}

void LaunchPlayer13() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 13}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen13'})
    }
}

void LaunchPlayer14() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 14}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen14'})
    }
}

void LaunchPlayer15() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 15}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen15'})
    }
}

void LaunchPlayer11() {

    fork {

        call MainFlow()

    } {

        call ToLand_StartUpTower_Check()

    }

    if !GameSystemActor.EventQueryIsOpenCannon({'TowerNo': 11}) {

        call PostFlow()

    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_MapOpen11'})
    }
}

void ToLand_StartUpTower_Check() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_UseCannon_Exp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HyruleCastleIncident_IsAfter_Another_UseCannon', 'Index': -1, 'Value': True})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'ToLand', 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    }
}
