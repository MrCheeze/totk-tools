-------- EventFlow: Zonau_GeniusWeapon --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContentWithNumGameData']
queries: ['EventQueryIsPouchContent', 'EventQueryIsExistInPouchWithNumGameData']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenZonaniumDisplay', 'EventCloseZonaniumDisplay', 'EventWaitStableNumDisplay']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWait']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_ZonauChallenge_02
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Ready_Npc_Zonau_Golem_Servant_ZonauChallenge_02_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/Zonau_GeniusWeapon:Balloon000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Zonau_Golem_Servant_ZonauChallenge_02_Talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_ZonauChallenge_02")})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk000', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Weapon_01'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk013', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Weapon_01'})

        Event4:
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': 'GameRomHorseBone'}) {
            Player.EventPlayerWait({'IsWaitEnd': True})
        } else {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Get', 'IsWaitEnd': True, 'ClothWarpMode': 0})
        }
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk012', 'IsNotOpenIfSkipedMostRecent': False})

        call Exchange()

    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk014', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee'})

        goto Event4
    }
}

void Exchange_Npc_Zonau_Golem_Servant_ZonauChallenge_02_Near() {
    if !PouchSystemActor.EventQueryIsExistInPouchWithNumGameData({'Actor': 'Item_Ore_L', 'NumGameData': 'Zonau_GeniusWeapon_Requires'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/Zonau_GeniusWeapon:Balloon000', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Event25:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Zonau_GeniusWeapon:Balloon000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Exchange_Npc_Zonau_Golem_Servant_ZonauChallenge_02_Talk() {
    Event2:

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_ZonauChallenge_02")})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk008', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk007', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call Exchange()

}

void Near() {
    goto Event25
}

void Talk() {
    goto Event2
}

void Exchange() {
    if !PouchSystemActor.EventQueryIsExistInPouchWithNumGameData({'Actor': 'Item_Ore_L', 'NumGameData': 'Zonau_GeniusWeapon_Requires'}) {
        GameSystemActor.EventOpenZonaniumDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk001', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event15:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_Weapon_01'}) {
                PouchSystemActor.EventTriggerAddOrRemovePouchContentWithNumGameData({'Actor': 'Item_Ore_L', 'NumGameData': 'Zonau_GeniusWeapon_Requires', 'IsReverse': True})
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Weapon_01'})

                if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': 'GameRomHorseBone'}) {
                    Player.EventPlayerWait({'IsWaitEnd': True})
                } else {
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Get', 'IsWaitEnd': True, 'ClothWarpMode': 0})
                }
                GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

                call Branch()

            } else {
                GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event45:
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zonau_GeniusWeapon_IsAfter_Ready_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Zonau_GeniusWeapon', 'StepName': 'Exchange', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                }
            }
        } else {
            GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event45
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zonau_GeniusWeapon_IsAfter_Ready_Exp'}) {
        GameSystemActor.EventOpenZonaniumDisplay({'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
    } else {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Zonau_GeniusWeapon', 'StepName': 'Exchange', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void Branch() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zonau_GeniusWeapon_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Zonau_GeniusWeapon_IsCompleted_Exp'}) {
            if !PouchSystemActor.EventQueryIsExistInPouchWithNumGameData({'Actor': 'Item_Ore_L', 'NumGameData': 'Zonau_GeniusWeapon_Requires'}) {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk011', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call OneMore()

            } else {
                GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            fork {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
            }

            Event47:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Zonau_GeniusWeapon', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        }
    } else {

        fork {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Zonau_GeniusWeapon:Talk006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
            GameSystemActor.EventCloseZonaniumDisplay({'IsWaitEnd': True})
        }

        goto Event47
    }
}

void OneMore() {
    goto Event15
}
