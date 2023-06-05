-------- EventFlow: Npc_SouthernVillage005 --------

Actor: Npc_SouthernVillage005
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsShopSoldOutFor3DShop', 'EventQueryHasAnyParasailSubstituteClothInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice4', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryCheckPlacedItemNumber', 'EventQueryPouchCategoryFor3DShop']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage014
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    if !Npc_SouthernVillage014.EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 1}) {
        Npc_SouthernVillage014.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Event69:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SouthernVillage005_AfterBaseCampChallenge', 'Index': -1}) {
            if !Npc_SouthernVillage005.EventQueryIsOnRecentTalkFlag() {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                            Event76:
                            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
                            Event3:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event18:

                                call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_SouthernVillage005")})

                                Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_06', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event120:
                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                                    Event20:
                                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'ChoiceLabel4': -1, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_07', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event3
                                } else
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SouthernVillage005_DeleteChoice0001', 'Index': -1}) {
                                    goto Event20
                                } else {
                                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'ChoiceLabel4': -1, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_07', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event64:
                                    switch GameSystemActor.EventQueryTalkChoice3() {
                                      case 0:
                                        goto Event18
                                      case 1:
                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_SouthernVillage005_DeleteChoice0001', 'Index': -1, 'Value': True})
                                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event120
                                      case 2:
                                        Event106:
                                        if !Npc_SouthernVillage005.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
                                              case 0:
                                                Event107:
                                                Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                Event118:
                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_SouthernVillage005_DeleteChoice0001', 'Value': False, 'Index': -1})
                                                Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                                              case [1, 2]:
                                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'})
                                                && !Npc_SouthernVillage005.EventQueryHasAnyParasailSubstituteClothInPouch() {
                                                    if !Npc_SouthernVillage005.EventQueryIsOnRecentTalkFlag() {
                                                        goto Event107
                                                    } else {
                                                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
                                                    }
                                                    goto Event118
                                                } else {
                                                    goto Event107
                                                }
                                            }
                                        } else
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
                                          case 0:
                                            Event6:
                                            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_03', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event118
                                          case [1, 2]:
                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'})
                                            && !Npc_SouthernVillage005.EventQueryHasAnyParasailSubstituteClothInPouch() {
                                                if !Npc_SouthernVillage005.EventQueryIsOnRecentTalkFlag() {
                                                    goto Event6
                                                } else {
                                                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
                                                }
                                                goto Event118
                                            } else {
                                                goto Event6
                                            }
                                        }
                                    }
                                }
                            } else
                            goto Event106
                        } else {
                            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                            goto Event3
                        }
                    } else {
                        goto Event76
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                        Event80:
                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_01', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event64
                    } else {
                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_14', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                        goto Event64
                    }
                } else {
                    goto Event80
                }
            } else
            if !Npc_SouthernVillage005.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
                Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                    Event88:
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event3
                } else {
                    Event92:
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event64
                }
            } else {

                call Greeting()

                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                            goto Event88
                        } else {
                            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                            goto Event3
                        }
                    } else {
                        goto Event88
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                        goto Event92
                    } else {
                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_14', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                        goto Event64
                    }
                } else {
                    goto Event92
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_RevivePlan_IsCompleted_Exp'}) {
                Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event72:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_AfterBaseCampChallenge'})
            goto Event3
        } else {
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event72
        }
    } else
    if !Npc_SouthernVillage005.EventQueryHaveTalked() {
        if !Npc_SouthernVillage005.EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                        Event5:
                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_01', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Event61:
                        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_01', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event64
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
                && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                    goto Event64
                } else {
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                    goto Event64
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                    goto Event5
                } else {
                    goto Event61
                }
                goto Event64
            } else {
                goto Event5
            }
        } else
        if !Npc_SouthernVillage005.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                    Event10:
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_05', 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event52:
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_05', 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event64
            } else {
                goto Event10
            }
        } else {

            call Greeting()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                        goto Event10
                    } else {
                        goto Event52
                    }
                    goto Event64
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
                && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                    goto Event64
                } else {
                    Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
                    goto Event64
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                    goto Event10
                } else {
                    goto Event52
                }
                goto Event64
            } else {
                goto Event10
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Hateno_Cheese', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
            && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
                Event1:
                Npc_SouthernVillage005.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Event41:
                Npc_SouthernVillage005.EventTalk({'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event64
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_13', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
            goto Event64
        } else {
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_13', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_SouthernVillage005_TalkedHatenoCheese'})
            goto Event64
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NowInTheVillageOfLurelin_IsCompleted_Exp'}) {
            goto Event1
        } else {
            goto Event41
        }
        goto Event64
    } else {
        goto Event1
    }
}

void Buy() {

    call InitTalk.InitTalkSell_ReturnArrivalAnchor({'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Uotori_RevivePlan_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TauraChallenge001_IsCompleted_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SouthernVillage014_MoveConditions1', 'Index': -1}) {

        call Mube_Buy_Subflow()

    }
    if Npc_SouthernVillage005.EventQueryHaveTalked() {
        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !Npc_EventStarter.EventQueryPouchCategoryFor3DShop() {

        call DisplayShop.Armor_Npc_SouthernVillage005()

    } else {

        call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_SouthernVillage005")})

    }

    call Sell()

}

void Sell() {
    switch Npc_EventStarter.EventQueryCheckPlacedItemNumber() {
      case [0, 2]:
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_08', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_09', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_10', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_11', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SouthernVillage005:Near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
}

void Greeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4]:
        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [5, 6, 7]:
        Npc_SouthernVillage005.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage005:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void NowInTheVillageOfLurelin_Talk() {
    if !Npc_SouthernVillage014.EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 1}) {
        Npc_SouthernVillage014.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_SouthernVillage014.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        goto Event69
    } else
    goto Event69
}

void Mube_Buy_Subflow() {
    Player.EventTriggerParticipateEvent()
    if !Npc_SouthernVillage014.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Npc_SouthernVillage014.EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_SouthernVillage014.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }
}
