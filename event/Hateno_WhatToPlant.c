-------- EventFlow: Hateno_WhatToPlant --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventOpenShopMenuUIForSelectPlantableCrop', 'EventWaitShopUIInput', 'EventDecidePlantableCrop', 'EventTalk', 'EventWait', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsShopUIInput', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage023
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: ['EventQueryOwningObjectPlayerInterference', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataString64', 'EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerCopyGameDataString64']
queries: ['EventQueryNpcGardenCurrentState', 'EventQueryNpcGardenIsSameCrop', 'EventQueryIsEmptyGameDataString64', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryNpcGardenGrowthProgress']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryIsExistInPouchForNpcGarden']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventTraverseAroundAndWaitCreateActor', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventGoOffstageForUser', 'EventPlayerHorseGetOff', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestKeepLifting']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBustShotCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Ready_Npc_HatenoVillage023_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_1000', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_HatenoVillage023_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1002', 'IsNotOpenIfSkipedMostRecent': False})
        Event46:
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_HatenoVillage023.EventTalk({'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoVillage023.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2008', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Hateno_WhatToPlant', 'StepName': 'Choice', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        Npc_EventStarter.EventWait({'Frames': 150, 'IsWaitEnd': True})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event21:

            call NpcGardenCreateCropSelect()


            call TransactionFlow()

          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event21
        }
      case [2, 3]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1003', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event46
      case [4, 5, 6, 7]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_1004', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event46
    }
}

void Choice_Npc_HatenoVillage023_Near() {
    switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
      case 0:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_2000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_2001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 1:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case 0:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case 1:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3000', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [2, 3]:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3003', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [4, 5]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3000', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [2, 3]:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3003', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [6, 7]:
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3002', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [2, 3]:
                Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_3003', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
      case 2:

        call Report_Npc_HatenoVillage023_Near()

    }
}

void Choice_Npc_HatenoVillage023_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
      case 0:

        call FirstChoice()

      case 1:

        call Growing()

      case 2:

        call ClearTalkEvent()

    }
}

void Report_Npc_HatenoVillage023_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hateno_WhatToPlant:Near_4000', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Report_Npc_HatenoVillage023_Talk() {

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HatenoVillage023")})

    Event10:
    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_HatenoVillage023', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    Npc_HatenoVillage023.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Event81:
    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Hateno_WhatToPlant', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void NpcGardenCreateCropSelect() {
    Event145:

    call PorchCheck()

    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_Common.GrowActorName', 'Value': ''})
    Npc_EventStarter.EventOpenShopMenuUIForSelectPlantableCrop({'GameDataName': 'NpcGardenInfo_Common.GrowActorName'})
    Npc_EventStarter.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WhatToPlant_TalkBranch1', 'Index': -1}) {
        Npc_HatenoVillage023.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2004', 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage023.EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3008', 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        if !GameDataActor.EventQueryIsEmptyGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_Common.GrowActorName'}) {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'NpcGardenInfo_Common.GrowActorName', 'DstGameDataName': 'NpcGardenInfo_HatenoVillage023.GrowActorName', 'Index': -1, 'SrcIndex': -1})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !GameDataActor.EventQueryNpcGardenIsSameCrop({'GdNpcGardenInfo': 'NpcGardenInfo_HatenoVillage023'}) {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3015', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Return_ChoiceMenu()

            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_WhatToPlant_IsCompleted_Exp'}) {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3007', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2003', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameSystemActor.EventQueryTalkChoice2() {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_TalkBranch1', 'Index': -1, 'Value': False})
                Npc_EventStarter.EventDecidePlantableCrop({'IsWaitEnd': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_HaveSelectedItem', 'Index': -1, 'Value': True})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_WhatToPlant_IsCompleted_Exp'}) {
                    switch Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice3() {
                      case 0:
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3106', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event201:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'WhatToPlant_ItemReSelection'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Value': False, 'Index': -1})
                            if GameDataActor.EventQueryNpcGardenGrowthProgress({'GdNpcGardenInfo': 'NpcGardenInfo_HatenoVillage023'}) in [1, 2, 3] {
                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                            }
                        }
                      case 1:
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event201
                      case 2:
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event201
                    }
                } else {
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event201
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_TalkBranch1', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Value': False, 'Index': -1})
                Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})

                call Return_ChoiceMenu()

            }
        }
    } else {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_TalkBranch1', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Value': False, 'Index': -1})

        call TransactionFlow()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void UmeFarm_AttentionTalk() {

    call Common.AirStartUP_Player()

    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call InitTalk.InitTalkInAir({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HatenoVillage023")})

    } else {

        call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HatenoVillage023")})

    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcGardenInfo_Common.IsBurning', 'Index': -1}) {
        Event142:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4006', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4007', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call WarpPlayer()

        }

        fork {
            EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_HatenoVillage023', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'TargetOffset': [0.0, 0.0, 0.0], 'Longitude': 30.0, 'Latitude': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4008', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage023.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventCamera.EventTriggerCameraSavePoint()
        switch Npc_HatenoVillage023.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [0, 1, 2, 3, 4, 6, 7, 9]:
            Npc_HatenoVillage023.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'Actor1ActorName': 'Npc_HatenoVillage023', 'PosVector': [-0.12999999523162842, 1.6399999856948853, 1.2300000190734863], 'AtVector': [0.0, 1.1799999475479126, 0.12999999523162842], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0})
            } {
                Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            }

            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            fork {
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            } {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            }

            GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
          case 5:

            call ClearEventFlow()

          case 8:
            goto Event142
        }
    }
}

void Return_ChoiceMenu() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Index': -1, 'Value': True})
    switch GameDataActor.EventQueryNpcGardenCurrentState({'GdNpcGardenCurrentState': 'NpcGardenInfo_HatenoVillage023.CurrentState'}) {
      case 0:
        GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'NpcGardenInfo_HatenoVillage023.GrowActorName', 'Value': ''})
        goto Event145
      case [1, 2]:
        GameDataActor.EventTriggerCopyGameDataString64({'DstGameDataName': 'NpcGardenInfo_HatenoVillage023.GrowActorName', 'Index': -1, 'SrcIndex': -1, 'SrcGameDataName': 'NpcGardenInfo_HatenoVillage023.LastGrowActorName'})
        goto Event145
    }
}

void FirstChoice() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call UmeGreeting()

    }
    Npc_HatenoVillage023.EventTalk({'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2000', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage023.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2008', 'IsNotOpenIfSkipedMostRecent': False})

    call NpcGardenCreateCropSelect()


    call TransactionFlow()

}

void Growing() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event83:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3008', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameDataActor.EventQueryNpcGardenGrowthProgress({'GdNpcGardenInfo': 'NpcGardenInfo_HatenoVillage023'}) {
              case 0:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3016', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event127:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3020', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event85:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3005', 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Index': -1, 'Value': True})

                        call NpcGardenCreateCropSelect()

                        Event121:

                        call TransactionFlow()

                    } else {
                        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event121
                    }
                } else {
                    Event93:
                    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event121
                }
              case 1:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3017', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event127
              case 2:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3018', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event127
              case 3:
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3019', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event127
            }
          case 1:
            if !PouchSystemActor.EventQueryIsExistInPouchForNpcGarden({'GrowActorName': 'NpcGardenInfo_HatenoVillage023.GrowActorName'}) {
                goto Event85
            } else {
                Npc_EventStarter.EventWait({'Frames': 60, 'IsWaitEnd': True})
                Npc_HatenoVillage023.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2007', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2006', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call TransactionFlow()

            }
          case 2:
            goto Event93
        }
    } else {

        call UmeGreeting()

        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event83
    }
}

void UmeGreeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_3010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void PorchCheck() {
    if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Fruit_J', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Fruit_N', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True, 'Actor': 'Item_PlantGet_Q'})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True, 'Actor': 'Item_PlantGet_M'})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Fruit_M', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Fruit_B', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Material_07', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Material_03', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Fruit_F', 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True, 'Actor': 'Item_PlantGet_C'})
    && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True, 'Actor': 'Item_PlantGet_B'}) {
        if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage023:Talk_3006', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event11:

            call TransactionFlow()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WhatToPlant_ItemReSelection', 'Value': False, 'Index': -1})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_EventStarter.EventWait({'Frames': 60, 'IsWaitEnd': True})
            Npc_HatenoVillage023.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2007', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_2006', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
            goto Event11
        }
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
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Hateno_VillageMayorElection', 'IsWaitEnd': True, 'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_44', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_VillageMayorElection:Talk_78', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void ClearEventFlow() {
    goto Event10
}

void ClearTalkEvent() {
    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event81
}

void UmeSprinkleWaterEvent() {
    Player.EventTriggerPlayerRequestKeepLifting()

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage023")})

    Npc_HatenoVillage023.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4009', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage023.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage023'})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4010', 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hateno_WhatToPlant:Talk_4011', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void WarpPlayer() {
    if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': True, 'Type': 0}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    if !Npc_HatenoVillage023.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 2, 'ActionType': 0}) {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Npc_HatenoVillage023', 'TargetActorKind': 1, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 0, 'PositionOffset': [-0.5, 0.0, 2.0], 'UseDemoWait': True})
    } else {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Npc_HatenoVillage023', 'TargetActorKind': 1, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 0, 'PositionOffset': [2.0, 0.0, 0.5], 'UseDemoWait': True})
    }
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'ActorName': 'Npc_HatenoVillage023', 'IsWaitEnd': True, 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.0, 1.0], 'TargetFovy': 40.0, 'PosVector': [-3.5, 1.5, -1.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Npc_HatenoVillage023.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_HatenoVillage023.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}
