-------- EventFlow: Npc_HatenoVillage020 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage020
entrypoint: None()
actions: ['EventTriggerSetHaveTalked', 'EventTalk', 'EventDisableRecentTalkFlag']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsIndoor', 'EventQueryAIScheduleIsMovingFromRainAnchorToDefaultAnchor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event1:

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:

        call RainRun()

        if !Npc_HatenoVillage020.EventQueryHaveTalked() {
            if Npc_HatenoVillage020.EventQueryIsOnRecentTalkFlag() {

                call Weather()

            }
            Event66:
            switch Npc_HatenoVillage020.EventQueryAIScheduleCheckActorAction14() {
              case 0:
                Event49:
                if !Npc_HatenoVillage020.EventQueryAIScheduleIsMovingFromRainAnchorToDefaultAnchor() {
                    Event27:
                    Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event75:
                    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1076_Head', 'ArmorSlot': 0}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage020_Talk01', 'Index': -1}) {
                            Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage020_Talk01', 'Index': -1, 'Value': True})
                        }
                    }
                } else
                Event54:
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_HatenoVillage020', 'ActorNameB': 'Npc_HatenoVillage006', 'CheckDistance': 10.0, 'InstanceNameA': '', 'InstanceNameB': '', 'IsTargetPlayingAllEvent': False}) {
                    goto Event27
                } else {
                    Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event75
              case [1, 3, 5]:
                goto Event54
              case [2, 4]:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_FirstEvent_Inside', 'Index': -1})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage008_NotSave01'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage006_Talk05', 'Index': -1}) {
                        goto Event49
                    } else
                    if !Npc_HatenoVillage020.EventQueryIsIndoor() {
                        goto Event49
                    } else {
                        Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event75
                    }
                } else
                goto Event49
              case 6:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event75
              case 7:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event75
              case [8, 9, 11, 12, 13]:
                goto Event27
              case 10:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event75
            }
        } else {
            Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event66
        }
      case 11:
        Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_HatenoVillage020.EventQueryHaveTalked() {
            Npc_HatenoVillage020.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
    }
}

void Hateno_ChallengeComplete_01_Talk() {
    goto Event1
}

void HatenoVillage_FinaleEvent_Talk() {
    goto Event1
}

void Hateno_FirstEvent_Inside_Talk() {
    goto Event1
}

void Hateno_FirstEvent_Inside_Near() {
    Event19:
    ;
}

void Hateno_ChallengeComplete_01_Near() {
    ;
}

void Near() {
    goto Event19
}

void HatenoVillage_FinaleEvent_Near() {
    ;
}

void Weather() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Event62:
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1]:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [5, 6, 7]:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [2, 3, 4, 5, 6, 7, 8]:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 3, 4, 5, 6, 8, 9, 12, 13]:
                Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [7, 10]:
                goto Event62
            }
        }
    }
}

void NearActorsTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Talk()

      case [1, 3, 5]:

        call Npc_HatenoVillage006.NearActorsTalk()

    }
}

void NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Hateno_FirstEvent_Inside_NearActorsTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Talk()

      case [1, 3, 5]:

        call Npc_HatenoVillage006.Hateno_FirstEvent_Inside_NearActorsTalk()

    }
}

void Hateno_FirstEvent_Inside_NearActorsNear() {
    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [3, 5] {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage006_Talk05'})
    }
}

void Hateno_ChallengeComplete_01_NearActorsTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Talk()

      case [1, 3, 5]:

        call Npc_HatenoVillage006.Hateno_ChallengeComplete_01_NearActorsTalk()

    }
}

void Hateno_ChallengeComplete_01_NearActorsNear() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_ChallengeComplete_02'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_ChallengeComplete_03'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void HatenoVillage_FinaleEvent_NearActorsTalk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 4, 6, 7, 8, 9, 10, 11, 12, 13]:

        call Talk()

      case [1, 3, 5]:

        call Npc_HatenoVillage006.HatenoVillage_FinaleEvent_NearActorsTalk()

    }
}

void HatenoVillage_FinaleEvent_NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage020:near_06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void RainRun() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8]
    && Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [0, 2, 4, 6]
    && Npc_HatenoVillage020.EventQueryIsIndoor() {
        Npc_HatenoVillage020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage020:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !Npc_HatenoVillage020.EventQueryHaveTalked() {
            Event36:
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage020.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
            if Npc_HatenoVillage020.EventQueryIsOnRecentTalkFlag() {
                Npc_HatenoVillage020.EventDisableRecentTalkFlag({'IsWaitEnd': True})
            }
            goto Event36
        }
    }
}
