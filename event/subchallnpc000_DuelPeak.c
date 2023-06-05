-------- EventFlow: subchallnpc000_DuelPeak --------

Actor: subchallnpc000_DuelPeak[sanroku]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: subchallnpc000_twin_DuelPeak[sanroku]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventOpenRupeeDisplay']
queries: ['EventQueryTalkChoice2', 'EventQueryHasRuppe', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Actor1': ActorIdentifier(name="subchallnpc000_DuelPeak", sub_name="sanroku"), 'Spearker1ActorName': 'subchallnpc000_twin_DuelPeak', 'Actor2': ActorIdentifier(name="subchallnpc000_twin_DuelPeak", sub_name="sanroku"), 'Spearker2ActorName': 'subchallnpc000_DuelPeak', 'Spearker1InstanceName': 'sanroku', 'Spearker2InstanceName': 'sanroku'})


    call ResetTmpFlag()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1}) {

        call AfterClear()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_Duel_TalkInfo', 'Index': -1}) {
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': '', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetInfo'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetAllInfo'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 12, 'ChoiceLabel2': 8, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_DuelPeak'})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Pirate'})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Gerudo'})

                                call Report()

                            } else {
                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1})
                        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1}) {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceNumber': 2, 'ChoiceLabel2': 8, 'ChoiceLabel3': 12, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event79:
                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event130:
                                subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                subchallnpc000_twin_DuelPeak[sanroku].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                            } else {
                                Event83:
                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 8, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                goto Event79
                              case 1:
                                Event209:

                                call EquipCheckFlagOn()


                                call Report()

                              case 2:
                                goto Event83
                            }
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1})
                        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1}) {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 8, 'ChoiceLabel3': 12, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event80:
                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event130
                            } else {
                                goto Event83
                            }
                        } else {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 8, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                goto Event80
                              case 1:
                                goto Event209
                              case 2:
                                goto Event83
                            }
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1}) {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 7, 'ChoiceLabel2': 6, 'ChoiceLabel3': 8, 'ChoiceLabel4': 12, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            goto Event79
                          case 1:
                            goto Event80
                          case 2:
                            goto Event83
                        }
                    } else {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 6, 'ChoiceNumber': 4, 'ChoiceLabel3': 12, 'ChoiceLabel4': 8, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            goto Event79
                          case 1:
                            goto Event80
                          case 2:
                            goto Event209
                          case 3:
                            goto Event83
                        }
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1})
                        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1}) {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 8, 'ChoiceLabel3': 12, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event78:
                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event130
                            } else {
                                goto Event83
                            }
                        } else {
                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 8, 'ChoiceLabel1': 5, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                goto Event78
                              case 1:
                                goto Event209
                              case 2:
                                goto Event83
                            }
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1}) {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'ChoiceLabel4': 12, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            goto Event78
                          case 1:
                            goto Event79
                          case 2:
                            goto Event83
                        }
                    } else {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 12, 'ChoiceLabel4': 8, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            goto Event78
                          case 1:
                            goto Event79
                          case 2:
                            goto Event209
                          case 3:
                            goto Event83
                        }
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1}) {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 8, 'ChoiceLabel4': 12, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            goto Event78
                          case 1:
                            goto Event80
                          case 2:
                            goto Event83
                        }
                    } else {
                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 6, 'ChoiceNumber': 4, 'ChoiceLabel3': 12, 'ChoiceLabel4': 8, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice4() {
                          case 0:
                            goto Event78
                          case 1:
                            goto Event80
                          case 2:
                            goto Event209
                          case 3:
                            goto Event83
                        }
                    }
                } else {
                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk27', 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'ChoiceLabel3': 6, 'ChoiceNumber': 4, 'ChoiceLabel4': 8, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:
                        goto Event78
                      case 1:
                        goto Event79
                      case 2:
                        goto Event80
                      case 3:
                        goto Event83
                    }
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1}) {
                    Event152:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1}) {
                            Event153:
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1}) {
                                    Event3:
                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk21', 'ChoiceNumber': 3, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    switch GameSystemActor.EventQueryTalkChoice3() {
                                      case 0:
                                        Event32:
                                        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetInfo'}) {
                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk12', 'IsNotOpenIfSkipedMostRecent': False})
                                        } else {
                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk09', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        }
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            if !GameSystemActor.EventQueryHasRuppe({'Value': 100}) {
                                                GameSystemActor.EventTriggerIncreaseRupee({'Value': -100})
                                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp'}) {
                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsAfter_Ready_Exp'}) {
                                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                            Event36:
                                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk18', 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 7, 'ChoiceLabel3': 6, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 7, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            switch GameSystemActor.EventQueryTalkChoice3() {
                                                              case 0:
                                                                Event27:
                                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TreasureOfLambda_DuelPeak_Get'}) {
                                                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_DuelPeak'})
                                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'})
                                                                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                                                                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_TalkCompleteCheck'})
                                                                    }

                                                                    call Report()

                                                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1, 'Value': True})
                                                                    Event14:
                                                                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'TreasureOfLamda_DuelPeak', 'StepName': 'GetTreasure', 'IsWaitEnd': True})
                                                                } else {

                                                                    call LastTalk()

                                                                    goto Event14
                                                                }
                                                              case 1:
                                                                Event37:
                                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TreasureOfLambda_Pirate_Get'}) {
                                                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Pirate'})
                                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'})
                                                                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
                                                                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_TalkCompleteCheck'})
                                                                    }

                                                                    call Report()

                                                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1, 'Value': True})
                                                                    Event40:
                                                                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetTreasure', 'ChallengeName': 'TreasureOfLamda_Pirate', 'IsWaitEnd': True})
                                                                } else {

                                                                    call LastTalk()

                                                                    goto Event40
                                                                }
                                                              case 2:
                                                                Event38:
                                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TreasureOfLambda_Gerudo_Get'}) {
                                                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Gerudo'})
                                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'})
                                                                    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
                                                                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'TreasureOfLambda_Tmp_TalkCompleteCheck'})
                                                                    }

                                                                    call Report()

                                                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1, 'Value': True})
                                                                    Event43:
                                                                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetTreasure', 'ChallengeName': 'TreasureOfLamda_Gerudo', 'IsWaitEnd': True})
                                                                } else {

                                                                    call LastTalk()

                                                                    goto Event43
                                                                }
                                                            }
                                                        } else {
                                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                            goto Event38
                                                        }
                                                    } else
                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        goto Event37
                                                    } else {
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 7, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                                            goto Event37
                                                        } else {
                                                            goto Event38
                                                        }
                                                    }
                                                } else
                                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsAfter_Ready_Exp'}) {
                                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        goto Event27
                                                    } else {
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                                            goto Event27
                                                        } else {
                                                            goto Event38
                                                        }
                                                    }
                                                } else
                                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
                                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceCancelNo': 1, 'ChoiceLabel2': 7, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    if !GameSystemActor.EventQueryTalkChoice2() {
                                                        goto Event27
                                                    } else {
                                                        goto Event37
                                                    }
                                                } else {
                                                    goto Event36
                                                }
                                            } else {
                                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                subchallnpc000_DuelPeak[sanroku].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})
                                            }
                                        } else {
                                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            subchallnpc000_DuelPeak[sanroku].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})
                                        }
                                      case 1:
                                        Event87:
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsAfter_Ready_Exp'}) {
                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsAfter_Ready_Exp'}) {
                                                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk30', 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    switch GameSystemActor.EventQueryTalkChoice3() {
                                                      case 0:
                                                        Event107:
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        Event125:
                                                        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                                        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        subchallnpc000_twin_DuelPeak[sanroku].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                                                      case 1:
                                                        Event108:
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                        goto Event125
                                                      case 2:
                                                        Event105:
                                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    }
                                                }
                                            } else
                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk30', 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                switch GameSystemActor.EventQueryTalkChoice3() {
                                                  case 0:
                                                    goto Event107
                                                  case 1:
                                                    Event109:
                                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    goto Event125
                                                  case 2:
                                                    goto Event105
                                                }
                                            } else {
                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                Event128:
                                                subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                                subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                subchallnpc000_twin_DuelPeak[sanroku].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
                                            }
                                        } else
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsAfter_Ready_Exp'}) {
                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk30', 'ChoiceNumber': 3, 'ChoiceLabel3': 8, 'ChoiceLabel4': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                switch GameSystemActor.EventQueryTalkChoice3() {
                                                  case 0:
                                                    goto Event108
                                                  case 1:
                                                    goto Event109
                                                  case 2:
                                                    goto Event105
                                                }
                                            } else {
                                                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event128
                                            }
                                        } else
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsAfter_Ready_Exp'}) {
                                            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event128
                                        }
                                      case 2:
                                        Event85:
                                        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                } else {
                                    Event142:
                                    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk21', 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 11, 'ChoiceLabel3': 12, 'IsNotOpenIfSkipedMostRecent': False})
                                    switch GameSystemActor.EventQueryTalkChoice4() {
                                      case 0:
                                        goto Event32
                                      case 1:
                                        goto Event87
                                      case 2:

                                        call EquipCheckFlagOn()


                                        call Report()

                                      case 3:
                                        goto Event85
                                    }
                                }
                            } else {
                                goto Event3
                            }
                        } else {
                            goto Event142
                        }
                    } else
                    goto Event153
                } else {
                    goto Event142
                }
            } else
            goto Event152
        } else {
            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event23:
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event32
            } else {
                subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                subchallnpc000_DuelPeak[sanroku].EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'TreasureOfLambda_Duel_TalkInfo', 'Index': -1})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk00', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk01', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk04', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': '', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk03', 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk08', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event23
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetAllInfo'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Near00', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Near00', 'DisplayFrame': 300, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void LastTalk() {
    subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetInfo'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLambda_DuelPeak_GetInfo2'}) {
            subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk35', 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk36', 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk37', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk33', 'IsNotOpenIfSkipedMostRecent': False})
            subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': '', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk34', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': '', 'Target': 2, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Report() {
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk38', 'IsNotOpenIfSkipedMostRecent': False})

    call EquipmentCheck()

    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk46', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk39', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_TalkCompleteCheck', 'Index': -1}) {
        Event163:
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk42', 'IsNotOpenIfSkipedMostRecent': False})
        Event147:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1, 'Value': True})
        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1, 'Value': True})
        }
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1, 'Value': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'}) {
        goto Event163
    } else
    goto Event147
}

void AfterClear() {
    subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'subchallnpc000_twin_DuelPeak', 'InstanceName': 'sanroku', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
    subchallnpc000_twin_DuelPeak[sanroku].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': 'sanroku', 'ActorName': 'subchallnpc000_DuelPeak', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk42', 'IsNotOpenIfSkipedMostRecent': False})
}

void EquipmentCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_DuelPeak', 'Index': -1})
    && !Player.EventQueryIsEquipArmor({'ArmorSlot': 1, 'ArmorName': 'Armor_174_Upper'}) {
        Event237:
        subchallnpc000_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk44', 'IsNotOpenIfSkipedMostRecent': False})
        subchallnpc000_twin_DuelPeak[sanroku].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TreasureOfLamda_DuelPeak:Talk45', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Pirate', 'Index': -1})
    && !Player.EventQueryIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_174_Lower'}) {
        goto Event237
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Gerudo', 'Index': -1})
    && !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_174_Head'}) {
        goto Event237
    }
}

void ResetTmpFlag() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Gerudo', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Pirate', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_DuelPeak', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_TalkCompleteCheck', 'Value': False, 'Index': -1})
}

void EquipCheckFlagOn() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_DuelPeak_IsCompleted_Exp'}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportDuelPeak', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_DuelPeak', 'Index': -1, 'Value': True})
        }
        Event257:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Gerudo_IsCompleted_Exp'}) {
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ReasureObLamda_ReportGerudo', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Gerudo', 'Index': -1, 'Value': True})
            }
            Event258:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'TreasureOfLamda_Pirate_IsCompleted_Exp'})
            && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'TreasureOfLambda_ReportPirate', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TreasureOfLambda_Tmp_EquipCheck_Pirate', 'Index': -1, 'Value': True})
            }
        } else
        goto Event258
    } else
    goto Event257
}
