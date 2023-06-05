-------- EventFlow: Npc_GerudoCanyonHatago001 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_GerudoCanyonHatago001
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerForceSetRecentTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContentForCooking', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcGerudoCanyonHatago_Tribune14_TellTruth', 'Index': -1}) {
        Event30:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NpcGerudoCanyonHatago_RescueFirstTalk'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
                Event156:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsAfter_Ready_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_09_Thank2'}) {
                                    Event20:
                                    if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag() {
                                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    } else
                                    if !Player.EventQueryCheckPlayerState({'State': 0}) {
                                        switch EventWorldManagerController.EventQueryTimeDivision() {
                                          case 0:
                                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            Event9:
                                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcGerudoCanyonHatago_Tribune14_TellTruth', 'Index': -1}) {
                                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            } else {
                                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            }
                                          case [1, 2, 3, 4, 5]:
                                            goto Event9
                                          case 6:
                                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0044', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event9
                                          case 7:
                                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0045', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event9
                                        }
                                    } else {
                                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event9
                                    }
                                } else {
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_09_Thank2'})
                                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_Thank_00', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event11:
                                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                            } else {
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1, 'Value': True})
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_09_Thank2'})
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_03', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event11
                            }
                        } else {
                            Event157:

                            call PhotoChallenge_Proceeding_Talk()

                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1}) {
                        goto Event20
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1, 'Value': True})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_Thank', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event11
                    }
                } else {
                    goto Event157
                }
            } else
            goto Event20
        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTriggerForceSetRecentTalkFlag({'value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcGerudoCanyonHatago_RescueFirstTalk'})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
                goto Event156
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune14_IsCompleted_Exp'}) {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0004', 'IsNotOpenIfSkipedMostRecent': False})

        call Link_TalkingS()

        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'NpcGerudoCanyonHatago_Tribune14_TellTruth', 'Index': -1})
    } else
    goto Event30
}

void PhotoChallenge_Proceeding_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09'}) {

        call PhotoSpot_Challenge_09.Step02_Direct_1()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'}) {

        call PhotoSpot_Challenge_09_2.Step02_Direct_2()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'}) {
        Event63:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsCompleted_Exp'}) {

            call PhotoSpot_Challenge_09_2.Step02_Direct_2()

        } else {

            call PhotoSpot_Challenge_09.Step02_Direct_1()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'}) {
        goto Event63
    } else
    if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag() {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_11', 'ChoiceLabel1': 7001, 'ChoiceLabel2': 7004, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 7001, 'ChoiceLabel2': 7004, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsCompleted_Exp'}) {
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09_2', 'IgnoreShowedTarget': False}) {

                    call PhotoSpot_Challenge_09_2.TalkDirectly_Gerudo2()

                } else {

                    call NoPhoto_Gerudo2()

                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {

                    call PhotoSpot_Challenge_09.TalkDirectly_Gerudo1_Solo()

                } else {

                    call NoPhoto_Gerudo1()

                }
            } else {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_05', 'ChoiceNumber': 2, 'ChoiceLabel1': 7002, 'ChoiceLabel2': 7003, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {

                        call PhotoSpot_Challenge_09.TalkDirectly_Gerudo1()

                    } else {

                        call NoPhoto_Gerudo1()

                    }
                } else
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09_2', 'IgnoreShowedTarget': False}) {

                    call PhotoSpot_Challenge_09_2.TalkDirectly_Gerudo2()

                } else {

                    call NoPhoto_Gerudo2()

                }
            }
        } else
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {

            call PhotoSpot_Challenge_09.TalkDirectly_Gerudo1_Solo()

        } else {

            call NoPhoto_Gerudo1()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NpcGerudoCanyonHatago_RescueFirstTalk'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune14_IsCompleted_Exp'}) {
            if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag() {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag() {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:talk0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcGerudoCanyonHatago_RescueFirstTalk'})
    }
}

void PhotoChallenge_Proceeding_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsCompleted_Exp'}) {
            Event13:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsAfter_Ready_Exp'})
            && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'}) {
                    Event15:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 14}) {
                      case [0, 1]:
                        if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {
                            Event16:
                            Npc_GerudoCanyonHatago001.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': True, 'MessageID': 'EventFlowMsg/Npc_GerudoCanyonHatago001:near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True, 'IsChallenge': True})
                        } else {
                            Event17:
                            Npc_GerudoCanyonHatago001.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': True, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_GerudoCanyonHatago001:near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                        }
                      case 2:
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Index': -1}) {
                            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {
                                goto Event16
                            } else {
                                goto Event17
                            }
                        } else
                        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {
                            goto Event16
                        } else {
                            goto Event17
                        }
                    }
                } else
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'IgnoreShowedTarget': False, 'ChallengeName': 'PhotoSpot_Challenge_09_2'}) {
                    Event41:
                    Npc_GerudoCanyonHatago001.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_GerudoCanyonHatago001:near0001', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_GerudoCanyonHatago001.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_GerudoCanyonHatago001:near0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09'}) {
            goto Event15
        } else
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {
            goto Event41
        } else
        goto Event13
    } else
    goto Event13
}

void NoPhoto_Gerudo1() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event0:
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
        if !Npc_GerudoCanyonHatago001.EventQueryAvoidDuplicationRandomChoice2() {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void NoPhoto_Gerudo2() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event0
}

void Link_TalkingS() {
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}
