-------- EventFlow: Npc_Umii_Kakariko_Scholar_A --------

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Umii_Kakariko_Scholar_A
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_First', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Ready_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Search_Exp'}) {
                        Event70:
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                            Event37:

                            call Question1()

                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        goto Event37
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                        Event38:

                        call Question2()

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event38
                } else
                goto Event70
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Search_Exp'}) {
                    Event73:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'IsAnimeDriven': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                        Event57:

                        call Question1()

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_08', 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event57
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                    Event58:

                    call Question2()

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_08', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event58
            } else
            goto Event73
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_50', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_First', 'Index': -1, 'Value': True})
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_26', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'TalkSurprised', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Search_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                            Event51:
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event110:
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event106:

                                call Question1()

                            } else
                            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                              case [0, 1]:
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event110
                              case [2, 3, 4, 5, 6, 7, 8]:
                                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event110
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event105:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                            goto Event106
                        } else
                        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                          case [0, 1]:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event105
                          case [2, 3, 4, 5, 6, 7, 8]:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event105
                        }
                    } else
                    goto Event51
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1}) {
                        Event159:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event116:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event107:

                            call Question2()

                        } else
                        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                          case [0, 1]:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event116
                          case [2, 3, 4, 5, 6, 7, 8]:
                            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event116
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event103:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                        goto Event107
                    } else
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event103
                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event103
                    }
                } else
                goto Event159
            } else
            goto Event51
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
            if !Npc_Umii_Kakariko_Scholar_A.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_51', 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_37', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_50', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_First', 'Index': -1, 'Value': True})
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_26', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ASName': 'TalkSurprised', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'InnNeverReturns_IsAfter_Search_Exp'}) {
                Event15:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event14:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ChoiceLabel3': 4, 'ChoiceNumber': 3, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                        Event35:

                        call Question1()

                    } else
                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                      case [0, 1]:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_02', 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event14
                      case [2, 3, 4, 5, 6, 7, 8]:
                        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event14
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event56:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event35
                } else
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_02', 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event56
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event56
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GotoFironeZonauRemains_IsAfter_DecipherTheIithograph_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event19:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_10', 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_A_GJ', 'Index': -1, 'Value': True})
                    Event36:

                    call Question2()

                } else
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_02', 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event19
                  case [2, 3, 4, 5, 6, 7, 8]:
                    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event19
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event85:
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event36
            } else
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_02', 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event85
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event85
            }
        } else
        goto Event15
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_51', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Dragon_Ice_CanSee'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Ballon_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Ballon_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Ballon_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Question1() {
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event27:
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_04', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event27
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_51', 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_37', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Question2() {
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1001, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Choice1001()

                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event225:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': False})
            } else {
                Event181:

                call ByeTalk()

            }
          case 1:

            call Choice1001()

            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_57', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event225
            } else {
                goto Event181
            }
          case 2:

            call ByeTalk()

        }
      case 1:
        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1001, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Choice1001()

                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event225
            } else {
                Event192:

                call ByeTalk()

            }
          case 1:

            call Choice1001()

            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_57', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event225
            } else {
                goto Event192
            }
          case 2:

            call ByeTalk()

        }
      case 2:

        call Choice1001()

        Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel4': 4, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_57', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event225
            } else {
                Event208:

                call ByeTalk()

            }
          case 1:
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_03', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 4, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_07', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event225
            } else {
                goto Event208
            }
          case 2:

            call ByeTalk()

        }
      case 3:
        Event42:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Enemy_Dragon_Ice_CanSee', 'Index': -1}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_51', 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_37', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event156:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1, 'Value': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Umii_Kakariko_Scholar_Talk_Miasma', 'Index': -1}) {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_04', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event156
    }
}

void ByeTalk() {
    goto Event42
}

void Choice1001() {
    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_55', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_Umii_Kakariko_Scholar_A.EventNPCTurnToTarget({'Target': 0, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'WorldPos': [1835.0, 260.0, 1061.0], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'Target': 0, 'WorldPos': [1835.0, 260.0, 1061.0], 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [1874.699951171875, 283.55999755859375, 982.0499877929688], 'AtVector': [1871.949951171875, 281.8299865722656, 987.5700073242188], 'TargetFovy': 50.0, 'MoveTime': 40, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Umii_Kakariko_Scholar_A.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 3, 'ChoiceLabel3': 1001, 'ChoiceLabel4': 4, 'ChoiceNumber': 0, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_A:Talk_56', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 0, 'MoveFrame': 0, 'CollisionInterpolateSkip': True, 'EnableCameraAlpha': False})

    fork {
        Npc_Umii_Kakariko_Scholar_A.EventNPCTurnToTarget({'WorldPos': [1739.0, 306.0, 907.0], 'FaceControlType': 1, 'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_Umii_Kakariko_Scholar_A', 'WorldPos': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}
