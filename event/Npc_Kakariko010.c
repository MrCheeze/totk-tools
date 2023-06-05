-------- EventFlow: Npc_Kakariko010 --------

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Kakariko010
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsShopSoldOutFor3DShop']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryRandomChoice4', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryHaveTalked', 'EventQueryCheckPlacedItemNumber']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataString64']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kakariko010_Talk01', 'Index': -1}) {
            Event34:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Kakariko005_ReturnKakariko'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko010_AboutNpc_Kakariko005_Talk'}) {
                    Event98:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                        if !Npc_Kakariko010.EventQueryHaveTalked() {
                            if !Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1024', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1021', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event19:

                                call Shop()

                            } else {
                                Event78:
                                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            Event4:
                            Npc_Kakariko010.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:

                                call Shop()

                              case 1:
                                Event42:
                                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1020', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {

                                    call Shop()

                                } else
                                Event33:
                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Kakariko005_ReturnKakariko'}) {
                                    Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1021', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                              case 2:
                                goto Event33
                            }
                        }
                    } else
                    Event1:
                    if !Npc_Kakariko010.EventQueryHaveTalked() {
                        switch EventWorldManagerController.EventQueryTimeDivision() {
                          case [0, 1, 2, 3, 4]:
                            if Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'TauraChallenge001_IsCompleted_Exp', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                if !Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1024', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1027', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                Event46:
                                switch GameSystemActor.EventQueryTalkChoice3() {
                                  case 0:

                                    call Shop()

                                  case 1:
                                    goto Event42
                                  case 2:
                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Kakariko005_ReturnKakariko'}) {
                                        Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    } else {
                                        Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1021', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                }
                            } else {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1022', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event46
                            }
                          case [5, 6]:
                            if Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'TauraChallenge001_IsCompleted_Exp', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                if !Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1024', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1027', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                Event11:
                                switch GameSystemActor.EventQueryTalkChoice3() {
                                  case 0:
                                    goto Event19
                                  case 1:
                                    goto Event42
                                  case 2:
                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Kakariko005_ReturnKakariko'}) {
                                        goto Event78
                                    } else {
                                        Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1006', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                }
                            } else {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1022', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event11
                            }
                          case 7:
                            if Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1003', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'TauraChallenge001_IsCompleted_Exp', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                                if !Npc_Kakariko010.EventQueryIsOnRecentTalkFlag() {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1024', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1027', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                goto Event11
                            } else {
                                Npc_Kakariko010.EventTalk({'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1022', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event11
                            }
                        }
                    } else {
                        goto Event4
                    }
                } else
                if !Npc_Kakariko010.EventQueryHaveTalked() {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko010_AboutNpc_Kakariko005_Talk', 'Index': -1, 'Value': True})
                    Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1019', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Shop()

                    } else {
                        Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                goto Event98
            } else
            goto Event1
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko010_Talk01', 'Index': -1, 'Value': True})
            Npc_Kakariko010.EventTalk({'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel1': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Shop()

            } else {
                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else
    goto Event34
}

void Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if !Npc_Kakariko010.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
            Npc_Kakariko010.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko010:Near1002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_Kakariko010.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Kakariko010:Near1001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_Kakariko010.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Kakariko010:Near1003', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Shop() {

    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_Kakariko010")})

    Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1007', 'ChoiceLabel4': 0, 'ChoiceLabel3': -2, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Sell() {
    switch Npc_EventStarter.EventQueryCheckPlacedItemNumber() {
      case 0:
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Event21:
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1009', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 1:
                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1010', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1011', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 3:
                Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1012', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Kakariko005_ReturnKakariko'}) {
            Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1030', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1002', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1013', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        goto Event21
    }
}

void Buy() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Item_Enemy_66', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kakariko010_Check_Medama', 'Index': -1}) {
            Event28:

            call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_Kakariko010")})


            call Sell()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko010_Check_Medama', 'Index': -1, 'Value': True})
            Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1028', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event28
        }
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Item_Enemy_124', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kakariko010_Check_Hane', 'Index': -1}) {
            goto Event28
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko010_Check_Hane', 'Index': -1, 'Value': True})
            Npc_Kakariko010.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceCancelNo': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko010:Talk1029', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event28
        }
    } else {
        goto Event28
    }
}
