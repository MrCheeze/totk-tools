-------- EventFlow: Npc_HatenoVillage023 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerExcludeNextTalkChoice']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryNpcGardenCurrentState', 'EventQueryNpcGardenGrowthProgress', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataString64', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToObjectGreeting', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsIndoor', 'EventQueryAIScheduleIsWokeUp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather', 'EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage023
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: ['EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 2:

        call Act2_MoveTalk()

      case 3:

        call Act2_ArrivalTalk()

      case 10:

        call Sleep1_MoveTalk()

      case 11:

        call Sleep1_ArrivalTalk()

    }
}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 2:
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
            Npc_HatenoVillage023.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_1000', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 3:
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
            Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_1100', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 10:
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
            Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_2000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 11:
        if Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 0}) {
            Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_2100', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Hateno_WhatToPlant_IsCompleted_Exp_Near() {
    switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
      case [0, 1]:
        if !Npc_HatenoVillage023.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1, 2, 3, 4]:
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1]:
                    Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_3100', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                  case [2, 3]:
                    Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_3103', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
              case [5, 6, 7]:
                Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_3102', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
      case 2:
        Npc_HatenoVillage023.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage023:Near_3200', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Hateno_WhatToPlant_IsCompleted_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
      case [0, 1]:

        call Growing()

      case 2:

        call Harvestable()

    }
}

void Act2_MoveTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_HatenoVillage023.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1}) {
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Event17:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event183:

                call TransactionFlow()

              case [2, 3, 4, 5, 6, 7, 8]:
                if !Npc_EventStarter.EventQueryIsIndoor() {
                    goto Event17
                } else {
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event183
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})

            call UmeGreeting()

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Event14:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event154:

                call EquipmentCheck()

                goto Event183
              case [2, 3, 4, 5, 6, 7, 8]:
                if !Npc_EventStarter.EventQueryIsIndoor() {
                    goto Event14
                } else {
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event154
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Event35:
            Npc_HatenoVillage023.EventTalk({'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event65:

            call TransactionFlow()

          case [2, 3, 4, 5, 6, 7, 8]:
            if !Npc_EventStarter.EventQueryIsIndoor() {
                goto Event35
            } else {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event65
        }
    }
}

void Act2_ArrivalTalk() {
    if !Npc_HatenoVillage023.EventQueryHaveTalked() {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1}) {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1103', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event184:

            call TransactionFlow()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})

            call UmeGreeting()

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1101', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event153:

                call EquipmentCheck()

                goto Event184
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1102', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event153
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1100', 'ASName': 'Act_Farmer', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})
            Event20:
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1104', 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call TransactionFlow()

          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_HatenoVillage023.EventTriggerChangeEmotion({'EmotionType': 5, 'IsActFaceOnly': False})

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_1100', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage023.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            goto Event20
        }
    }
}

void Sleep1_MoveTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_HatenoVillage023.EventQueryHaveTalked() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1}) {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2003', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event178:

            call TransactionFlow()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})

            call UmeGreeting()

            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2001', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event152:

                call EquipmentCheck()

                goto Event178
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2002', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event152
            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2000', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call TransactionFlow()

    }
}

void Sleep1_ArrivalTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1}) {

        call TransactionFlow()

        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2101', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_07', 'Index': -1, 'Value': True})
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_2100', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call TransactionFlow()

    }
}

void TransactionFlow() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsAfter_Ready_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_VillageMayorElection_Ume'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_77', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_42', 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Mushroom_E', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_43', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -1, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Mushroom_E', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hateno_VillageMayorElection_Ume'})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Hateno_VillageMayorElection_count', 'Value': -1, 'Index': -1})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Hateno_VillageMayorElection', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': '', 'IsWaitEnd': True})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_44', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_WhatToPlant_IsAfter_Ready_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_79', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_78', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Growing() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage023_TalkBranch2'}) {

        call YieldCheck()

        if !Npc_HatenoVillage023.EventQueryIsOnRecentTalkFlag() {
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData2': 'WhatToPlant_GrowthRateTalk_DeleteCheck', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3109', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
            Event208:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData2': 'WhatToPlant_GrowthRateTalk_DeleteCheck', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3011', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 21, 'IsNotOpenIfSkipedMostRecent': False})

                call GrowingReturnTalkSelect()

              case 1:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3008', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameDataActor.EventQueryNpcGardenGrowthProgress({'GdNpcGardenInfo': 'NpcGardenInfo_HatenoVillage023'}) {
                  case 0:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3016', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Event196:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3020', 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event124:
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3102', 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !GameSystemActor.EventQueryRandomChoice2() {
                                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3103', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3105', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event98:

                                call Hateno_WhatToPlant.Return_ChoiceMenu()


                                call Hateno_WhatToPlant.TransactionFlow()

                            } else {
                                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3004', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event98
                            }
                        } else {
                            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3107', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call TransactionFlow()

                        }
                    } else {
                        Event131:
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3107', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call EquipmentCheck()


                        call TransactionFlow()

                    }
                  case 1:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3017', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event196
                  case 2:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3018', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event196
                  case 3:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3019', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event196
                }
              case 2:
                goto Event124
              case 3:
                goto Event131
            }
        } else {

            call UmeGreeting()

            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData2': 'WhatToPlant_GrowthRateTalk_DeleteCheck', 'ChoiceExcludeGameData1': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3100', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceLabel2': 6, 'ChoiceLabel1': 1, 'ChoiceNumber': 4, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event208
              case [2, 3]:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3108', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 21, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event208
            }
        }
    } else {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage023_TalkBranch2'})

        call TransactionFlow()

    }
}

void Harvestable() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage023_TalkBranch2'}) {
        if !Npc_HatenoVillage023.EventQueryIsOnRecentTalkFlag() {

            call TransactionFlow()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcGardenInfo_HatenoVillage023.IsHarvested', 'Index': -1}) {

                call Growing()

            } else {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3201', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call UmeGreeting()


            call TransactionFlow()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcGardenInfo_HatenoVillage023.IsHarvested', 'Index': -1}) {

                call Growing()

            } else {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3200', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call EquipmentCheck()

            }
        }
    } else {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage023_TalkBranch2'})
    }
}

void GrowingReturnTalkSelect() {
    goto Event208
}

void UmeGreeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 6:
        Event27:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 7:
        if !EventWorldManagerController.EventQueryCheckTime({'Hour': 3, 'CompareOparator': 3, 'Minute': 0}) {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event27
        }
    }
}

void EquipmentCheck() {
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1076_Head', 'ArmorSlot': 0}) {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Npc_HatenoVillage023_AbsenceTalkEvent() {

    call OwnerOfHouseSuprised.Init_OwnerOfHouseSurprised({'Npc': ActorIdentifier(name="Npc_HatenoVillage023")})


    fork {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4102', 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call OwnerOfHouseSuprised.Staging_OwnerOfHouseSurprised({'Npc': 'Npc_HatenoVillage023', 'InstanceName': ''})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage023_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4104', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_4103', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage023_TalkBranch3', 'Index': -1, 'Value': True})
        Npc_HatenoVillage023.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void YieldCheck() {
    Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'NpcGardenInfo_Common.GrowNum', 'Operator': 0, 'GameDataB': 'NpcGardenInfo_Common.HarvestNum'}) {
        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName', 'Value': 'Item_Fruit_M'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
              case [0, 1]:
                Event88:
                if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName', 'Value': 'Item_Fruit_B'}) {
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
                      case [0, 1]:
                        Event91:
                        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName', 'Value': 'Item_Fruit_F'}) {
                            switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
                              case [0, 1]:
                                Event92:
                                if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName', 'Value': 'Item_Fruit_N'}) {
                                    switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
                                      case [0, 1]:
                                        Event93:
                                        if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName', 'Value': 'Item_Fruit_J'}) {
                                            switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
                                              case [0, 1]:
                                                Event82:
                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_GrowthRateTalk_DeleteCheck', 'Value': False, 'Index': -1})
                                                Event84:
                                                Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})
                                              case 2:
                                                Event83:
                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_GrowthRateTalk_DeleteCheck', 'Value': True, 'Index': -1})
                                                goto Event84
                                            }
                                        } else {
                                            goto Event82
                                        }
                                      case 2:
                                        goto Event83
                                    }
                                } else
                                goto Event93
                              case 2:
                                goto Event83
                            }
                        } else
                        goto Event92
                      case 2:
                        goto Event83
                    }
                } else
                goto Event91
              case 2:
                goto Event83
            }
        } else
        goto Event88
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'NpcGardenInfo_Common.GrowNum'}) {
      case [0, 1]:
        goto Event82
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NpcGardenInfo_Common.HarvestNum', 'Index': 0, 'Value': 0}) {
          case [0, 1]:
            switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
              case [0, 1]:
                goto Event82
              case 2:
                goto Event83
            }
          case 2:
            goto Event83
        }
    }
}
