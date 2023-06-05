-------- EventFlow: Npc_Kakariko_Road_019 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk_Move() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_019_ClearTalk'}) {
        if !Npc_EventStarter.EventQueryHaveTalked() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0003', 'IsNotOpenIfSkipedMostRecent': False})
                } else {

                    call Greeting()

                }
                Event34:
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_01'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'WhichIsStronger_IsCompleted_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'KokkoGuidePost_IsCompleted_Exp'}) {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_02'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsCompleted_Exp'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_03'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_04'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_Ready_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                                Event38:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0019', 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            goto Event38
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_05'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'WhichIsStronger_IsCompleted_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'KokkoGuidePost_IsCompleted_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsCompleted_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event65:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_04'}) {
                    goto Event34
                } else
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveTalked.Npc_Kakariko002'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event34
            } else {

                call Greeting()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event65
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_04'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk0003', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko_Road_019_ClearTalk', 'Index': -1, 'Value': True})
    }
}

void Near_Move() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_01'}) {
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'WhichIsStronger_IsCompleted_Exp'}) in [0, 1] {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_02'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsCompleted_Exp'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_03'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_04'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko_Road_Move_05'})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) in [0, 1] {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Kakariko_Road_019:Near0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk_Greeting0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk_Greeting0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [4, 5]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk_Greeting0005', 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk_Greeting0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko_Road_019:Talk_Greeting0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}
