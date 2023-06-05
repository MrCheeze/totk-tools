-------- EventFlow: ShieldSurfing_MiniGame_AfterGoal --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventWaitStableNumDisplay']
queries: ['EventQueryTalkChoice2', 'EventQueryHasRuppe', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasPouchContentByCategory', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventShowFinish', 'EventTriggerMiniGameCalcElapsedTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_IceVillage011[GoneSnow_S]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: NPC_Lanayru002[BackStart]
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: NPC_Lanayru001[GoneSnow_R]
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void TimeCheck() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'ShieldSurfing_CourseType', 'Value': 0}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_CourseA_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseA_BestTime_L', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMinute'}) {
                Event10:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseA_TimeUpdate'})
                Event39:
                ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerMinute': 'ShieldSurfing_CourseA_BestTime_L', 'ElapsedTimerSecond': 'ShieldSurfing_CourseA_BestTime_M', 'ElapsedTimerMilliSecond': 'ShieldSurfing_CourseA_BestTime_S', 'ElapsedTimerValue': 'ShieldSurfing_BestTime_Flame', 'LimitTimerValue': 'ShieldSurfing_TimeLimit'})
                Event82:
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'ShieldSurfing_CourseA_BestTime_L', 'GameDataA': 'MiniGame_TimerMinute'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseA_BestTime_M', 'Operator': 4, 'GameDataA': 'MiniGame_TimerSecond'}) {
                    goto Event10
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'ShieldSurfing_CourseA_BestTime_M', 'GameDataA': 'MiniGame_TimerSecond'})
                && !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseA_BestTime_S', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond'}) {
                    goto Event10
                } else {
                    goto Event82
                }
            } else {
                goto Event82
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseA_FirstTake'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseA_TimeUpdate'})
            goto Event39
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ShieldSurfing_CourseB_FirstTake'}) {
            if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseB_BestTime_L', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMinute'}) {
                Event66:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseB_TimeUpdate'})
                Event51:
                ChallengeSystemActor.EventTriggerMiniGameCalcElapsedTime({'ElapsedTimerMinute': 'ShieldSurfing_CourseB_BestTime_L', 'ElapsedTimerSecond': 'ShieldSurfing_CourseB_BestTime_M', 'ElapsedTimerMilliSecond': 'ShieldSurfing_CourseB_BestTime_S', 'LimitTimerValue': 'ShieldSurfing_TimeLimit', 'ElapsedTimerValue': 'ShieldSurfing_BestTime_Flame'})
                Event83:
                ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
            } else
            if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'ShieldSurfing_CourseB_BestTime_L', 'GameDataA': 'MiniGame_TimerMinute'}) {
                if !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseB_BestTime_M', 'Operator': 4, 'GameDataA': 'MiniGame_TimerSecond'}) {
                    goto Event66
                } else
                if !GameDataActor.EventQueryCompareGameDataInt({'Operator': 0, 'GameDataB': 'ShieldSurfing_CourseB_BestTime_M', 'GameDataA': 'MiniGame_TimerSecond'})
                && !GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'ShieldSurfing_CourseB_BestTime_S', 'Operator': 4, 'GameDataA': 'MiniGame_TimerMilliSecond'}) {
                    goto Event66
                } else {
                    goto Event83
                }
            } else {
                goto Event83
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseB_FirstTake'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ShieldSurfing_CourseB_TimeUpdate'})
            goto Event51
        }
    }
}

void Retry_AfterGoal() {

    fork {
        NPC_Lanayru001[GoneSnow_R].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        NPC_Lanayru001[GoneSnow_R].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        NPC_Lanayru002[BackStart].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        NPC_Lanayru002[BackStart].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ShieldSurfing_CourseA_Clear', 'Index': -1}) {
        Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskRetry_Expert', 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 23, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'ShieldSurfing_CourseType', 'Value': 1, 'Index': -1}) {
              case [0, 2]:
                Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 15, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskCourse_Expert', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 16, 'IsNotOpenIfSkipedMostRecent': False})
                Event32:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event47:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'ShieldSurfing_CourseType', 'Value': 0, 'Index': -1})
                    Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:IfSelectBeginnerCourse_Expert', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                    Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskRupee_Expert', 'ChoiceLabel2': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call LupeePay_AfterGame()

                  case 1:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'ShieldSurfing_CourseType', 'Index': -1, 'Value': 1})
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ShieldSurfing_RewardComplete'}) {
                        Event33:
                        Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:IfSelectExpertCourse_Expert', 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                        Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 2, 'ChoiceLabel3': 16, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskRupee_Expert', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 22, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:

                            call LupeePay_AfterGame()

                          case 1:

                            call Retry_Beginner()

                          case 2:

                            call End_Surfing()

                        }
                    } else
                    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Weapon_Shield_001', 'Num': 1}) {
                        goto Event33
                    } else {
                        Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:IfSelectExpertCourse_Expert1', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call Return_Hut()

                    }
                  case 2:

                    call End_Surfing()

                }
              case 1:
                Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 15, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskCourse_Expert', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 16, 'ChoiceDefaultNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event32
            }
        } else {

            call End_Surfing()

        }
    } else {
        GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
        Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:AskRetry_Beginner', 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 23, 'IsNotOpenIfSkipedMostRecent': False})

        call LupeePay_AfterGame()

    }
}

void LupeePay_AfterGame() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !PouchSystemActor.EventQueryHasPouchContentByCategory({'Category': 3, 'Count': 1}) {
            if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call ShieldSurfing_MiniGame_RaceScene.RetryGame()

            } else {
                Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:NotHadEnoughRupee', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event21:
                Npc_IceVillage011[GoneSnow_S].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Exit_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Event37:
                Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:Pouch_Check03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call ShieldSurfing_MiniGame_RaceScene.GoHut()

            }
        } else {
            Npc_IceVillage011[GoneSnow_S].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/ShieldSurfing_MiniGame:EntranceTalk_No_Shield', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event21
        }
    } else {

        call End_Surfing()

    }
}

void Retry_Beginner() {
    goto Event47
}

void Return_Hut() {
    goto Event37
}

void End_Surfing() {
    goto Event21
}
