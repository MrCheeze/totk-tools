-------- EventFlow: Npc_GerudoGate_AncientAssistant003 --------

Actor: Npc_GerudoGate_AncientAssistant003[degudo]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleIsWokeUp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_GerudoGate_AncientAssistant003[Near(Npc_GerudoGate_AncientAssistant003)]
entrypoint: Near(Npc_GerudoGate_AncientAssistant003)
actions: []
queries: []
params: None

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    switch EventWorldManagerController.EventQueryTimeDivision() {
      case 0:
        if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            Event17:
            if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryIsOnRecentTalkFlag() {
                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1, 2, 3, 4, 5, 6]:
                    Event64:
                    if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryIsOnRecentTalkFlag() {
                        Npc_GerudoGate_AncientAssistant003[degudo].EventPlayAS({'ASName': 'Act_Memo_Ed', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
                        Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                        Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
                        Event21:
                        Npc_GerudoGate_AncientAssistant003[degudo].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetItem2_Npc_GerudoGate_AncientAssistant003'}) {
                            Event40:

                            call Common_Talk()

                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Talked_Npc_GerudoGate_AncientAssistant002', 'Index': -1})
                        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Talked_Npc_GerudoGate_AncientAssistant004', 'Index': -1}) {
                            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetItem2_Npc_GerudoGate_AncientAssistant003'})

                            call AssassinEquipmentCheck()


                            call TalkEnd()

                        } else {
                            goto Event40
                        }
                    } else {
                        goto Event21
                    }
                  case 7:
                    if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'ActionType': 10, 'AIScheduleState': 1}) {
                        Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        goto Event21
                    }
                }
            } else {

                call Greeting()

                switch EventWorldManagerController.EventQueryTimeDivision() {
                  case [0, 1, 2, 3, 4, 5, 6]:
                    goto Event64
                  case 7:
                    if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'ActionType': 10, 'AIScheduleState': 1}) {
                        Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_07', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        goto Event21
                    }
                }
            }
        } else {
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_Adventure:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2, 3, 4, 5, 6]:
        goto Event17
      case 7:
        if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 10}) {
            goto Event17
        } else {
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GerudoCanyon_Adventure:Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Near() {
    if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'ActionType': 0, 'AIScheduleState': 0}) {
        Event48:
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Balloon_AssassinEquipment_00'})
        } else
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4]:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Balloon_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [5, 6, 7]:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Balloon_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 0, 'ActionType': 10}) {
        goto Event48
    } else
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1, 2, 3, 4, 5, 6]:
        Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Balloon_00', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 7:
        if Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleIsWokeUp({'Type': 0}) {
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Balloon_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case 0:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_EarlyMorning', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event59:
            Npc_GerudoGate_AncientAssistant003[degudo].EventPlayAS({'ASName': 'Act_Memo_Ed', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
          case [1, 2]:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_Morning', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event59
          case [3, 4]:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_Noon', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event59
          case [5, 6]:
            Event6:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_Evening', 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event59
          case 7:
            Event11:
            if !Npc_GerudoGate_AncientAssistant003[degudo].EventQueryAIScheduleCheckActorAction({'ActionType': 10, 'AIScheduleState': 1}) {
                Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_Midnight', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                goto Event6
            }
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5, 6]:
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Greeting_Rain', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event59
          case 7:
            goto Event11
        }
    }
}

void Common_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_First_Gerudo_Npc_GerudoGate_AncientAssistant003'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_First_Degudo_Npc_GerudoGate_AncientAssistant003'}) {
            Event28:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Talked_Secret_Npc_GerudoGate_AncientAssistant003', 'Index': -1}) {
                Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_05', 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event24:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Talked_Secret_Npc_GerudoGate_AncientAssistant003', 'Index': -1, 'Value': True})
                Event60:

                call AssassinEquipmentCheck()


                call TalkEnd()

            } else {
                Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_15', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event60
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Talked_First_Degudo_Npc_GerudoGate_AncientAssistant003'})
            Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_16', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event24
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Talked_First_Degudo_Npc_GerudoGate_AncientAssistant003'}) {
        goto Event28
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Talked_First_Degudo_Npc_GerudoGate_AncientAssistant003'})
        Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:Talk_00', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event24
    }
}

void TalkEnd() {
    Npc_GerudoGate_AncientAssistant003[degudo].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 0, 'Target': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_GerudoGate_AncientAssistant003[degudo].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_Memo', 'IsWaitEnd': False})
    Npc_GerudoGate_AncientAssistant003[degudo].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
}

void Talk_InGerudoCity() {

    call GerudoCanyon_Adventure.Ready_Npc_GerudoGate_AncientAssistant003_gerudo_Talk()

}

void Near_InGerudoCity() {

    call GerudoCanyon_Adventure.Ready_Npc_GerudoGate_AncientAssistant003_gerudo_Near()

}

void AssassinEquipmentCheck() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False})
    && Npc_GerudoGate_AncientAssistant003[degudo].EventQueryIsOnRecentTalkFlag() {
        Npc_GerudoGate_AncientAssistant003[degudo].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoGate_AncientAssistant003:AssassinEquipment_00', 'IsNotOpenIfSkipedMostRecent': False})
    }
}
