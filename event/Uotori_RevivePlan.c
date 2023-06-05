-------- EventFlow: Uotori_RevivePlan --------

Actor: Npc_HatenoVillage032[Uotori]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventTriggerChangeEmotion', 'EventWait', 'EventTriggerParticipateEvent', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage013[Uotori]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventResetGimmick', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataBool', 'EventTriggerSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerHorseGetOff', 'EventPlayerTalk', 'EventPlayerUnequip', 'EventTriggerParticipateEvent', 'EventPlayerStopInAir']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWeatherForFlowchart']
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Revive_Npc_HatenoVillage032_Uotori_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})


    call ReviveOnlyCheck()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1}) {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveLeaderHouse', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_RevivePrivateHouse', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0064', 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call HouseChoiceOnly()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveInn', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_ReviveRestaurant', 'ChoiceExcludeGameData3': 'ExcludeChoice_UotoriRevivePlan_ReviveTreasureShop', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0065', 'ChoiceNumber': 4, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call ShopChoiceOnly()

    } else {

        call Revive_isFirstTalk()

        Event15:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call ShopChoice()

          case 1:

            call HouseChoice()

          case 2:

            call Goodbye()

        }
    }
}

void Ready_Npc_HatenoVillage032_Uotori_Near() {
    Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_HatenoVillage032_Uotori_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TauraChallenge001_ClearTalk'}) {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori"), 'Actor2': ActorIdentifier(name="Npc_SouthernVillage013", sub_name="Uotori"), 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_HatenoVillage032', 'Spearker1InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_SouthernVillage013', 'Spearker2InstanceName': 'Uotori'})

        Event3:
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0076', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event343:
        if !GameSystemActor.EventQueryTalkChoice2() {

            fork {
                Npc_SouthernVillage013[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Npc_HatenoVillage032[Uotori].EventWait({'Frames': 10, 'IsWaitEnd': True})
                Npc_HatenoVillage032[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_SouthernVillage013[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_SouthernVillage013[Uotori].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0087', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0078', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0089', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0088', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            Npc_SouthernVillage013[Uotori].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            Npc_HatenoVillage032[Uotori].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Npc_SouthernVillage013[Uotori].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Uotori_RevivePlan', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'CollectWood', 'IsWaitEnd': True})
        } else {
            Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0074', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori"), 'Actor2': ActorIdentifier(name="Npc_SouthernVillage013", sub_name="Uotori"), 'Arg_Turn': 2, 'Spearker1ActorName': 'Npc_HatenoVillage032', 'Spearker1InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_SouthernVillage013', 'Spearker2InstanceName': 'Uotori'})

        Event4:
        Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0075', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TauraChallenge001_ClearTalk', 'Index': -1, 'Value': True})
        Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0027', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call VillageView()

        Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0033', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call VillageView_Undo_NonPlayer()

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0024', 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event343
    }
}

void Choice_Retry() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1}) {
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1}) {
            Event192:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
                    Event625:
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveShop', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_ReviveHouse', 'ChoiceExcludeGameData3': ''})
                    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0023', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event15
                }
            } else {
                goto Event625
            }
        }
    } else
    goto Event192
}

void Revive_Inn() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event326:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn_IsFirstTalked', 'Index': -1}) {

        call PatternTalk({'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0149', 'TurnPos': [2939.659912109375, 110.86029815673828, 3427.072998046875], 'PosVector': [2918.2900390625, 115.30000305175781, 3428.639892578125], 'AtVector': [2922.4599609375, 115.29000091552734, 3429.840087890625]})

    } else {

        call Inn_FirstTalk()

    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event693:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0205', 'IsNotOpenIfSkipedMostRecent': False})

        call Warp({'WarpPosition_Link': 'Revive_Inn_Link', 'WarpPosition_Sakurada': 'Revive_Inn', 'WarpFlag': 'Revive_Inn_Move'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [1.100000023841858, 1.4700000286102295, -3.3299999237060547], 'AtVector': [0.9100000262260437, 2.680000066757202, 4.880000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0215', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call RiviveTurnAround({'TurnPos': [2939.659912109375, 110.86029815673828, 3427.072998046875]})


        call CameraPan({'PosVector': [2935.550048828125, 110.66999816894531, 3409.429931640625], 'AtVector': [2939.8701171875, 115.41999816894531, 3426.5400390625]})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn_RemoveObject'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0216', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0217', 'IsNotOpenIfSkipedMostRecent': False})

            call GotoReviveEvent_Inn({'GameDataName': 'Revive_Inn', 'EventName': 'Revive_Inn'})

            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_Inn'})

            call Revive_Check()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn_isMaterialsTalk'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0157', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0223', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0222', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0223', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_Inn_isMaterialsTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event693
        } else {

            call Goodbye()

        }
    } else {

        call Choice_DoNotRevive()

    }
}

void Revive_TresureShop() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event62:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_IsFirstTalked'}) {

        call PatternTalk({'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0168', 'PosVector': [2941.8701171875, 127.83999633789062, 3369.22998046875], 'AtVector': [2956.260009765625, 124.37000274658203, 3373.699951171875], 'TurnPos': [2964.175048828125, 121.67639923095703, 3385.39404296875]})

    } else {

        call TreasureShop_FirstTalk()

    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event664:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0205', 'IsNotOpenIfSkipedMostRecent': False})

        call Warp({'WarpPosition_Link': 'Revive_TreasureShop_Link', 'WarpPosition_Sakurada': 'Revive_TreasureShop', 'WarpFlag': 'Revive_TreasureShop_Move'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [1.100000023841858, 1.4700000286102295, -3.3299999237060547], 'AtVector': [0.9100000262260437, 2.680000066757202, 4.880000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0215', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call CameraPan({'PosVector': [2941.8701171875, 127.83999633789062, 3369.22998046875], 'AtVector': [2956.260009765625, 124.37000274658203, 3373.699951171875]})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_isSetTree'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0219', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0217', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsNotOpenIfSkipedMostRecent': False})

            call GotoReviveEvent({'EventName': 'Revive_TresureShop', 'GameDataName': 'Revive_TreasureShop'})

            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_TresureShop'})

            call Revive_Check()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_isNotTreeTalk'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0176', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0210', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0228', 'IsNotOpenIfSkipedMostRecent': False})
            Event706:

            call CameraReset()


            call FacetoFace()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Revive_RepairedEvenOnce'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0229', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0105', 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_TreasureShop_isNotTreeTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0173', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [2885.969970703125, 118.19999694824219, 3421.409912109375], 'AtVector': [2888.510009765625, 117.72000122070312, 3418.5], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0103', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2941.8701171875, 127.83999633789062, 3369.22998046875], 'AtVector': [2956.260009765625, 124.37000274658203, 3373.699951171875], 'TargetFovy': 50.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0104', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1, 'Value': True})
            goto Event706
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event664
        } else {

            call Goodbye()

        }
    } else {

        call Choice_DoNotRevive()

    }
}

void Revive_LeaderHouse() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event154:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_LeaderHouse_IsFirstTalked'}) {

        call PatternTalk({'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0175', 'PosVector': [2858.199951171875, 122.7300033569336, 3466.739990234375], 'AtVector': [2836.719970703125, 116.77999877929688, 3478.010009765625], 'TurnPos': [2837.72900390625, 115.7667007446289, 3477.52294921875]})

    } else {

        call LeaderHouse_FirstTalk()

    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event93:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0205', 'IsNotOpenIfSkipedMostRecent': False})

        call Warp({'WarpPosition_Link': 'Revive_LeaderHouse_Link', 'WarpPosition_Sakurada': 'Revive_LeaderHouse', 'WarpFlag': 'Revive_LeaderHouse_Move'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2853.56005859375, 113.43000030517578, 3470.830078125], 'AtVector': [2849.139892578125, 113.95999908447266, 3472.719970703125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0215', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call RiviveTurnAround({'TurnPos': [2837.72900390625, 115.7667007446289, 3477.52294921875]})


        call CameraPan({'PosVector': [2858.199951171875, 122.7300033569336, 3466.739990234375], 'AtVector': [2836.719970703125, 116.77999877929688, 3478.010009765625]})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_LeaderHouse_isSetTree'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0220', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0217', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsNotOpenIfSkipedMostRecent': False})

            call GotoReviveEvent({'EventName': 'Revive_LeaderHouse', 'GameDataName': 'Revive_LeaderHouse'})

            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_LeaderHouse'})

            call Revive_Check()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_LeaderHouse_isNotTreeTalk'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0177', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0227', 'IsNotOpenIfSkipedMostRecent': False})
            Event606:

            call CameraReset()


            call FacetoFace()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Revive_RepairedEvenOnce'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0174', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0111', 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_LeaderHouse_isNotTreeTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0167', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [2885.969970703125, 118.19999694824219, 3421.409912109375], 'AtVector': [2888.510009765625, 117.72000122070312, 3418.5], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0109', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2858.199951171875, 122.7300033569336, 3466.739990234375], 'AtVector': [2836.719970703125, 116.77999877929688, 3478.010009765625], 'TargetFovy': 50.0, 'CameraCollisionMode': 0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0110', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1, 'Value': True})
            goto Event606
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event93
        } else {

            call Goodbye()

        }
    } else {

        call Choice_DoNotRevive()

    }
}

void Revive_PrivateHouse() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0014', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event175:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse_IsFirstTalked'}) {

        call PatternTalk({'PosVector': [2973.35009765625, 115.3499984741211, 3415.570068359375], 'AtVector': [2979.75, 114.68000030517578, 3416.639892578125], 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0184', 'TurnPos': [2993.52099609375, 114.47229766845703, 3419.930908203125]})

    } else {

        call PrivateHouse_FirstTalk()

    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event86:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0205', 'IsNotOpenIfSkipedMostRecent': False})

        call Warp({'WarpFlag': 'Revive_PrivateHouse_Move', 'WarpPosition_Link': 'Revive_PrivateHouse_Link', 'WarpPosition_Sakurada': 'Revive_PrivateHouseS'})

        EventCamera.EventMoveToTargetPosCamera({'PosVector': [2977.610107421875, 112.05999755859375, 3431.679931640625], 'AtVector': [2981.860107421875, 112.26000213623047, 3428.800048828125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0215', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call RiviveTurnAround({'TurnPos': [2993.52099609375, 114.47229766845703, 3419.930908203125]})


        call CameraPan({'PosVector': [2973.35009765625, 115.3499984741211, 3415.570068359375], 'AtVector': [2979.75, 114.68000030517578, 3416.639892578125]})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse_isSetTree'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0221', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0217', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsNotOpenIfSkipedMostRecent': False})

            call GotoReviveEvent({'EventName': 'Revive_PrivateHouse', 'GameDataName': 'Revive_PrivateHouse'})

            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_PrivateHouse'})

            call Revive_Check()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse_isNotTreeTalk'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0185', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0227', 'IsNotOpenIfSkipedMostRecent': False})
            Event435:

            call CameraReset()


            call FacetoFace()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Revive_RepairedEvenOnce'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0174', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0118', 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_PrivateHouse_isNotTreeTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0167', 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [2885.969970703125, 118.19999694824219, 3421.409912109375], 'AtVector': [2888.510009765625, 117.72000122070312, 3418.5], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0116', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2973.35009765625, 115.3499984741211, 3415.570068359375], 'AtVector': [2979.75, 114.68000030517578, 3416.639892578125], 'TargetFovy': 50.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0117', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1, 'Value': True})
            goto Event435
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event86
        } else {

            call Goodbye()

        }
    } else {

        call Choice_DoNotRevive()

    }
}

void Revive_Check() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_PrivateHouse', 'Index': -1}) {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'FinaleEvent_Intro'})
    } else {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        fork {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0163', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_HatenoVillage032', 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Goodbye() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void HouseChoice() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0084', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Revive_PrivateHouse_Desc()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0083', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Revive_LeaderHouse_Desc()

    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveLeaderHouse', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_RevivePrivateHouse', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0022', 'ChoiceLabel2': 7, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Revive_LeaderHouse()

          case 1:

            call Revive_PrivateHouse()

          case 2:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ExcludeChoice_UotoriRevivePlan_ReviveShop'}) {

                call Goodbye()

            } else {

                call Choice_Retry()

            }
        }
    }
}

void ShopChoice() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0081', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Revive_TresureShop_Desc()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0082', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Revive_Restaurant_Desc()

        } else {
            Event21:
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveInn', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_ReviveRestaurant', 'ChoiceExcludeGameData3': 'ExcludeChoice_UotoriRevivePlan_ReviveTreasureShop', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0021', 'ChoiceNumber': 4, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call Revive_Inn()

              case 1:

                call Revive_Restaurant()

              case 2:

                call Revive_TresureShop()

              case 3:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ExcludeChoice_UotoriRevivePlan_ReviveHouse'}) {

                    call Goodbye()

                } else {

                    call Choice_Retry()

                }
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0080', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Revive_Inn_Desc()

        } else {
            goto Event21
        }
    } else
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) in [0, 1] {
        goto Event21
    }
}

void Revive_PrivateHouse_Desc() {
    goto Event175
}

void Revive_LeaderHouse_Desc() {
    goto Event154
}

void Revive_TresureShop_Desc() {
    goto Event62
}

void Revive_Restaurant_Desc() {
    Event43:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_IsFirstTalked'}) {

        call PatternTalk({'PosVector': [2885.469970703125, 118.30000305175781, 3426.489990234375], 'AtVector': [2886.550048828125, 117.69999694824219, 3422.800048828125], 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0165', 'TurnPos': [2884.541015625, 115.44090270996094, 3404.090087890625]})

    } else {

        call Restaurant_FirstTalk()

    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event495:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0205', 'IsNotOpenIfSkipedMostRecent': False})

        call Warp({'WarpPosition_Link': 'Revive_Restaurant_Link', 'WarpPosition_Sakurada': 'Revive_Restaurant', 'WarpFlag': 'Revive_Restaurant_Move'})

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [2.8399999141693115, 1.4800000190734863, -3.890000104904175], 'AtVector': [2.190000057220459, 1.6299999952316284, -2.0999999046325684], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0215', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call RiviveTurnAround({'TurnPos': [2884.541015625, 115.44090270996094, 3404.090087890625]})


        call CameraPan({'PosVector': [2894.5400390625, 119.83000183105469, 3418.530029296875], 'AtVector': [2892.3759765625, 118.7509994506836, 3415.35009765625]})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_isSetTree'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0218', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0217', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsNotOpenIfSkipedMostRecent': False})

            call GotoReviveEvent({'GameDataName': 'Revive_Restaurant', 'EventName': 'Revive_Restaurant'})

            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_Restaurant'})

            call Revive_Check()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_isNotTreeTalk'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0170', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraReset()


            call FacetoFace()

            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0227', 'IsNotOpenIfSkipedMostRecent': False})
            Event58:

            call CameraReset()


            call FacetoFace()

            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Revive_RepairedEvenOnce'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0174', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0099', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_Restaurant_isNotTreeTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0167', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [2885.969970703125, 118.19999694824219, 3421.409912109375], 'AtVector': [2888.510009765625, 117.72000122070312, 3418.5], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0097', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [2894.5400390625, 119.83000183105469, 3418.530029296875], 'AtVector': [2892.3759765625, 118.7509994506836, 3415.35009765625], 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0171', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_SampleModelView', 'Index': -1, 'Value': True})
            goto Event58
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event495
        } else {

            call Goodbye()

        }
    } else {

        call Choice_DoNotRevive()

    }
}

void ReviveOnlyCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
                    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1, 'Value': True})
                        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0083', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

                        call Revive_LeaderHouse_Desc()

                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1, 'Value': True})
                    Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0084', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

                    call Revive_PrivateHouse_Desc()

                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'})
            && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1, 'Value': True})
                Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0081', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

                call Revive_TresureShop_Desc()

            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1, 'Value': True})
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0082', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

            call Revive_Restaurant_Desc()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1, 'Value': True})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0080', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call Revive_Inn_Desc()

    }
}

void Ready_Npc_SouthernVillage013_Uotori_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TauraChallenge001_ClearTalk'}) {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Spearker1ActorName': 'Npc_HatenoVillage032', 'Spearker1InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_SouthernVillage013', 'Spearker2InstanceName': 'Uotori', 'Actor1': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori"), 'Actor2': ActorIdentifier(name="Npc_SouthernVillage013", sub_name="Uotori")})

        Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0086', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call VillageView()

        Npc_SouthernVillage013[Uotori].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0033', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call VillageView_Undo_NonPlayer()

        goto Event3
    } else {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori"), 'Actor2': ActorIdentifier(name="Npc_SouthernVillage013", sub_name="Uotori"), 'Arg_Turn': 2, 'Spearker1ActorName': 'Npc_HatenoVillage032', 'Spearker1InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_SouthernVillage013', 'Spearker2InstanceName': 'Uotori'})

        goto Event4
    }
}

void VillageView() {

    fork {
        Npc_SouthernVillage013[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_SouthernVillage013[Uotori].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_SouthernVillage013[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [2884.429931640625, 108.86799621582031, 3438.429931640625], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [2884.429931640625, 108.86799621582031, 3438.429931640625], 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_HatenoVillage032[Uotori].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [2884.429931640625, 108.86799621582031, 3438.429931640625], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [2878.93994140625, 118.37999725341797, 3435.550048828125], 'AtVector': [2893.780029296875, 117.02999877929688, 3423.8701171875], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'TargetFovy': 39.999000549316406, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void RiviveTurnAround() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'WorldPos': 'TurnPos', 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': 'TurnPos', 'ActorName': '', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
}

void VillageView_Undo_NonPlayer() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})

    fork {
        Npc_SouthernVillage013[Uotori].EventTriggerLookAtObject({'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ResetArriveTransformFixed': False})
        Player.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_HatenoVillage032[Uotori].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_SouthernVillage013', 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_HatenoVillage032', 'Spearker1InstanceName': 'Uotori', 'Spearker2ActorName': 'Npc_SouthernVillage013', 'Spearker2InstanceName': 'Uotori', 'Speaker2SetType': 1, 'IsWaitEnd': False, 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
    Player.EventTriggerPlayerRequestLookAtTheFront()
}

void Revive_isFirstTalk() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0131', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0130', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Choice_DoNotRevive() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1}) {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveLeaderHouse', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_RevivePrivateHouse', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0158', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call HouseChoiceOnly()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveInn', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_ReviveRestaurant', 'ChoiceExcludeGameData3': 'ExcludeChoice_UotoriRevivePlan_ReviveTreasureShop', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'ChoiceLabel4': 0, 'ChoiceNumber': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0158', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call ShopChoiceOnly()

    } else {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_ReviveShop', 'ChoiceExcludeGameData2': 'ExcludeChoice_UotoriRevivePlan_ReviveHouse', 'ChoiceExcludeGameData3': ''})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0158', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event15
    }
}

void CollectWood_Npc_HatenoVillage032_Uotori_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_WoodHere'}) {
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0006', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void CollectWood_Npc_HatenoVillage032_Uotori_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_WoodHere'}) {

        call WoodHere()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_TalkBranch2'}) {
        Event677:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_CollectWoodClear'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0204', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_HowtoWood'})
            Event538:
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call PresentStrawFlow()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_NGWoodHere'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'Uotori_RevivePlan_GetWoodCount_Remained', 'SrcGameDataName': 'Uotori_RevivePlan_RequestWoodNum', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'Uotori_RevivePlan_GetWoodCount_Remained', 'GameDataB': 'Uotori_RevivePlan_GetWoodTotalCount'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0092', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event648:
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ExcludeChoice_UotoriRevivePlan_PresentStraw', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0145', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event538
        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'DstGameDataName': 'Uotori_RevivePlan_GetWoodCount_Remained', 'SrcGameDataName': 'Uotori_RevivePlan_RequestWoodNum', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'Uotori_RevivePlan_GetWoodCount_Remained', 'GameDataB': 'Uotori_RevivePlan_GetWoodTotalCount'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0144', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event648
        }
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0143', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch2', 'Index': -1, 'Value': True})
        goto Event677
    }
}

void WoodHere() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0037', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event136:

        call WeatherTime()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_NGWoodHere'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0041', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if Player.EventQueryCheckPlayerState({'State': 4}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }

        call IsFirstTry()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_GetWood_Delete'})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Uotori_RevivePlan_GetWoodCount_Remained', 'Index': -1, 'Value': 15})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'SakuradaWarp_Link', 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_HatenoVillage032[Uotori].EventTriggerBecomeSpeaker()
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        EventSystemActor.EventTransition({'EventName': 'Revive_GiveWoodAfterTalk', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    } else {
        Event106:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0038', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Uotori_RevivePlan_GetWoodCount_Remained', 'Index': -1, 'Value': 15})
        if GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'Uotori_RevivePlan_GetWoodCount', 'Index': -1}) in [1, 2] {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0077', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event140:
            GameDataActor.EventTriggerSubGameDataInt({'GameDataA': 'Uotori_RevivePlan_GetWoodCount_Remained', 'GameDataB': 'Uotori_RevivePlan_GetWoodTotalCount'})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call NextStepCheck()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_NGWoodHere', 'Value': False, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_WarpReserve', 'Value': False})
        }
    }
}

void Uotori_RevivePlan_LeaveWood() {

    call InitTalk.InitTalkOnEventWithAirPause({'Arg_Turn': 2, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0042', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_WarpReserve'})
        goto Event136
    } else {
        goto Event106
    }
}

void WeatherTime() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case 0:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0091', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [1, 2, 3, 4, 5]:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0039', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0073', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0072', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void NextStepCheck() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_GetWoodTotalCount', 'Value': 15}) {
      case 0:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0092', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event648
      case [1, 2]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ExcludeChoice_UotoriRevivePlan_PresentStraw', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_IsFirstTryGetWood'}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0093', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0230', 'IsNotOpenIfSkipedMostRecent': False})
            Event147:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0148', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Sound_StopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_CollectWoodClear'})

            call ClearActor()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_Groundwork'})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_WarpReserve'}) {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'SakuradaWarp_Link', 'IsWaitEnd': True, 'UseDemoWait': True})
                Npc_HatenoVillage032[Uotori].EventTriggerBecomeSpeaker()
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                Event190:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                SoundSystemActor.EventStartSound({'IsWaitEnd': True, 'TimeoutFrame': 0, 'SLinkKey': 'Dm_UotoriHouseRepair_foundation'})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call Sound_StartInGameBgm()

                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0152', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventTriggerCameraSavePoint()

                fork {
                    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'WorldPos': [2877.2900390625, 115.4000015258789, 3428.739990234375], 'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
                    Player.EventPlayerTurnAndLook({'WorldPos': [2877.2900390625, 115.4000015258789, 3428.739990234375], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                }

                EventCamera.EventMoveToTargetPosCamera({'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVector': [2876.159912109375, 114.98999786376953, 3432.739990234375], 'AtVector': [2877.2900390625, 115.4000015258789, 3428.739990234375], 'TargetFovy': 50.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0226', 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})

                fork {
                    Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                }

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0225', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0153', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0154', 'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0155', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Uotori_RevivePlan', 'StepName': 'Revive', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})

                call Revive_NextStepTalk()

            } else {
                goto Event190
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_IsFirstTryGetWood'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0093', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0203', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_HowtoWood'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_CollectWoodClear'})
        goto Event538
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_Inn_Move_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1}) {

        call Revive_Npc_HatenoVillage032_Uotori_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0157', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 18, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 23, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event696:
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0223', 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call Choice_DoNotRevive()

            }
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': True}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event696
    }
}

void Revive_Restaurant() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event43
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_Restaurant_Move_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1}) {

        call Revive_Npc_HatenoVillage032_Uotori_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0170', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call Choice_DoNotRevive()

            }
        } else {

            call Goodbye_ReviveNow()

        }
    }
}

void Revive_Restaurant_SetWood() {

    call Common.AirStartUP_Player()


    call ReviveEvent({'EventName': 'Revive_Restaurant', 'GameDataName': 'Revive_Restaurant'})

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_Restaurant'})

    call Revive_Check()

}

void PositionReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn_Move', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_Move', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Revive_TreasureShop_Move'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Revive_LeaderHouse_Move'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Revive_PrivateHouse_Move'})
}

void CollectWoodGoodbye() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0007', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Uotori_RevivePlan_NGWoodHere', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'UotoriRevivePlan_ShopDesc_IsTalked'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'UotoriRevivePlan_HowtoStraw_IsTalked'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_NotEnoughStraw', 'Value': False})
}

void PresentStrawFlow() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_PresentStraw_Exp', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 20, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0146', 'ChoiceLabel2': 21, 'ChoiceLabel3': 19, 'ChoiceLabel4': 9, 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
    Event417:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Material_03', 'Num': 20, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_PresentStraw', 'Index': -1})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0190', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Material_03', 'Num': -20, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_CollectWoodClear', 'Index': -1}) {

                call CollectWoodFinale()

            } else {
                Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0202', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_ShopDesc', 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_HowtoWood', 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_HowtoStraw', 'Index': -1})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_NotEnoughStraw'})
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0151', 'IsNotOpenIfSkipedMostRecent': False})
            Event421:

            call ReChoice_PresentStrawFlow_Choice4()

        }
      case 1:

        call ShopDesc_IsTalkedCheck()

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0201', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event421
      case 2:

        call HowtoStraw_IsTalked()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_UotoriRevivePlan_PresentStraw'}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0067', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event762:

            call ReChoice_PresentStrawFlow_Choice4()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_CollectWoodClear', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0183', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event762
        } else {
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0183', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0067', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event762
        }
      case 3:

        call CollectWoodGoodbye()

    }
}

void CollectWoodFinale() {
    goto Event147
}

void Warp() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PositionReset()

    Npc_HatenoVillage032[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'WarpPosition_Link', 'UseDemoWait': True})
    Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 2, 'InstanceName': 'WarpPosition_Sakurada', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WarpFlag'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn_Move', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_ChangeTree'})
    }
}

void Revive_Inn_SetWood() {

    call Common.AirStartUP_Player()

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

    call ReviveEvent({'GameDataName': 'Revive_Inn', 'EventName': 'Revive_Inn'})

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_Inn'})

    call Revive_Check()

}

void Revive_Inn_Desc() {
    goto Event326
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_TreasureShop_Move_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1}) {

        call Revive_Npc_HatenoVillage032_Uotori_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0176', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call Choice_DoNotRevive()

            }
        } else {

            call Goodbye_ReviveNow()

        }
    }
}

void Revive_TresureShop_SetWood() {

    call Common.AirStartUP_Player()


    call ReviveEvent({'EventName': 'Revive_TresureShop', 'GameDataName': 'Revive_TreasureShop'})

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_TresureShop'})

    call Revive_Check()

}

void Revive_Npc_HatenoVillage032_Uotori_Revive_LeaderHouse_Move_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1}) {

        call Revive_Npc_HatenoVillage032_Uotori_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0177', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call Choice_DoNotRevive()

            }
        } else {

            call Goodbye_ReviveNow()

        }
    }
}

void Revive_LeaderHouse_SetWood() {

    call Common.AirStartUP_Player()


    call ReviveEvent({'EventName': 'Revive_LeaderHouse', 'GameDataName': 'Revive_LeaderHouse'})

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_LeaderHouse'})

    call Revive_Check()

}

void ReviveEvent() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Inn_Move'}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0224', 'IsNotBecomeSpeaker': True, 'IsCloseDialog': True, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 6}) {
                Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
            } else {
                Player.EventTriggerParticipateEvent()
            }
            Event5:
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_HatenoVillage032', 'Actor1InstanceName': 'Uotori', 'PosVector': [0.05999999865889549, 2.0, 3.4600000381469727], 'AtVector': [-0.10999999940395355, 1.2300000190734863, -3.630000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'EnableCameraAlpha': False})
            Event646:
            Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

            call Sound_StopInGameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event869:

            call ClearActor_Revive()


            fork {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0090', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_UotoriHouseRepair', 'IsWaitEnd': True, 'TimeoutFrame': 0})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 3, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0095', 'IsNotOpenIfSkipedMostRecent': False})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GameDataName'})

                call TreasureShopFlagReset()

                GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
                GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            }

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_PalmTreeDelete', 'Value': False})
            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                Event841:
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            } else {
                Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'TauraChallenge001_Finale_Link', 'UseDemoWait': False, 'IsWaitEnd': True})
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                goto Event841
            }
        } else {
            Npc_HatenoVillage032[Uotori].EventTriggerBecomeSpeaker()
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
            goto Event5
        }
    } else {

        call InitTalk.InitTalkOnEventWithAirPause({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_HatenoVillage032", sub_name="Uotori")})

        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0193', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_HatenoVillage032', 'Actor1InstanceName': 'Uotori', 'PosVector': [0.05999999865889549, 2.0, 3.4600000381469727], 'AtVector': [-0.10999999940395355, 1.2300000190734863, -3.630000114440918], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 10, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0207', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        Event451:

        call Sound_StopInGameBgm()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call LinkWarp()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_PalmTreeDelete'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        goto Event869
    }
}

void GotoReviveEvent() {
    goto Event451
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_PrivateHouse_Move_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_PrivateHouse', 'Index': -1}) {

        call Revive_Npc_HatenoVillage032_Uotori_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 23, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0185', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Uotori_RevivePlan_TalkBranch3', 'Index': -1}) {
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0169', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call Choice_DoNotRevive()

            }
        } else {

            call Goodbye_ReviveNow()

        }
    }
}

void Revive_PrivateHouse_SetWood() {

    call Common.AirStartUP_Player()


    call ReviveEvent({'EventName': 'Revive_PrivateHouse', 'GameDataName': 'Revive_PrivateHouse'})

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Revive_PrivateHouse'})

    call Revive_Check()

}

void PatternTalk() {

    call RiviveTurnAround({'TurnPos': 'TurnPos'})


    call CameraPan({'PosVector': 'PosVector', 'AtVector': 'AtVector'})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'MessageId', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0189', 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'IsNotOpenIfSkipedMostRecent': False})
        Event788:

        call CameraReset()


        call FacetoFace()

      case 1:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0213', 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event788
      case 2:
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0214', 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event788
    }
}

void CameraPan() {
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'PosVector': 'PosVector', 'AtVector': 'AtVector', 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CameraReset() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void Inn_FirstTalk() {

    call RiviveTurnAround({'TurnPos': [2939.659912109375, 110.86029815673828, 3427.072998046875]})


    call CameraPan({'PosVector': [2918.2900390625, 115.30000305175781, 3428.639892578125], 'AtVector': [2922.4599609375, 115.29000091552734, 3429.840087890625]})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0149', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0164', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Revive_Inn_IsFirstTalked', 'Index': -1, 'Value': True})

    call CameraReset()


    call FacetoFace()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0147', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'IsNotOpenIfSkipedMostRecent': False})
}

void FacetoFace() {

    fork {
        Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_HatenoVillage032', 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void Restaurant_FirstTalk() {

    call RiviveTurnAround({'TurnPos': [2884.541015625, 115.44090270996094, 3404.090087890625]})


    call CameraPan({'PosVector': [2885.469970703125, 118.30000305175781, 3426.489990234375], 'AtVector': [2886.550048828125, 117.69999694824219, 3422.800048828125]})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0165', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0166', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_Restaurant_IsFirstTalked'})

    call CameraReset()


    call FacetoFace()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0208', 'IsNotOpenIfSkipedMostRecent': False})
}

void TreasureShop_FirstTalk() {

    call RiviveTurnAround({'TurnPos': [2964.175048828125, 121.67639923095703, 3385.39404296875]})


    call CameraPan({'PosVector': [2941.8701171875, 127.83999633789062, 3369.22998046875], 'AtVector': [2956.260009765625, 124.37000274658203, 3373.699951171875]})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0168', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0011', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_TreasureShop_IsFirstTalked'})

    call CameraReset()


    call FacetoFace()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0209', 'IsNotOpenIfSkipedMostRecent': False})
}

void LeaderHouse_FirstTalk() {

    call RiviveTurnAround({'TurnPos': [2837.72900390625, 115.7667007446289, 3477.52294921875]})


    call CameraPan({'PosVector': [2858.199951171875, 122.7300033569336, 3466.739990234375], 'AtVector': [2836.719970703125, 116.77999877929688, 3478.010009765625]})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0175', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0013', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_LeaderHouse_IsFirstTalked'})

    call CameraReset()


    call FacetoFace()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0211', 'IsNotOpenIfSkipedMostRecent': False})
}

void PrivateHouse_FirstTalk() {

    call RiviveTurnAround({'TurnPos': [2993.52099609375, 114.47229766845703, 3419.930908203125]})


    call CameraPan({'PosVector': [2973.35009765625, 115.3499984741211, 3415.570068359375], 'AtVector': [2979.75, 114.68000030517578, 3416.639892578125]})

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0184', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0015', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_PrivateHouse_IsFirstTalked'})

    call CameraReset()


    call FacetoFace()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 22, 'ChoiceLabel2': 18, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0212', 'IsNotOpenIfSkipedMostRecent': False})
}

void Revive_NextStepTalk() {
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0130', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event15
}

void IsFirstTry() {
    if !GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'GameDataName': 'Uotori_RevivePlan_GetWoodCount', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 15, 'GameDataName': 'Uotori_RevivePlan_GetWoodCount_Temp'}) in [1, 2] {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_IsFirstTryGetWood'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }
}

void GotoReviveEvent_Inn() {
    goto Event646
}

void ReChoice_PresentStrawFlow_Choice4() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'ExcludeChoice_UotoriRevivePlan_PresentStraw_Exp', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 20, 'ChoiceLabel2': 21, 'ChoiceLabel3': 19, 'ChoiceLabel4': 9, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0150', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event417
}

void Sound_StartInGameBgm() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void Sound_StopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 2, 'FadeType': 1, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}

void ShopDesc_IsTalkedCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UotoriRevivePlan_ShopDesc_IsTalked', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0233', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UotoriRevivePlan_ShopDesc_IsTalked', 'Index': -1, 'Value': True})
    }
}

void HowtoStraw_IsTalked() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UotoriRevivePlan_HowtoStraw_IsTalked', 'Index': -1}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0233', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UotoriRevivePlan_HowtoStraw_IsTalked', 'Index': -1, 'Value': True})
    }
}

void Goodbye_ReviveNow() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckHead': False, 'CheckUpper': True, 'CheckLower': True}) {
        Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0206', 'IsNotOpenIfSkipedMostRecent': False})
}

void HouseChoiceOnly() {
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:

        call Revive_LeaderHouse()

      case 1:

        call Revive_PrivateHouse()

      case 2:

        call Goodbye()

    }
}

void ShopChoiceOnly() {
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Revive_Inn()

      case 1:

        call Revive_Restaurant()

      case 2:

        call Revive_TresureShop()

      case 3:

        call Goodbye()

    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_Inn_Move_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1}) {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_Restaurant_Move_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant'}) {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_TreasureShop_Move_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop'}) {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_LeaderHouse_Move_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_LeaderHouse'}) {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Revive_Npc_HatenoVillage032_Uotori_Revive_PrivateHouse_Move_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse'}) {
            Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_HatenoVillage032[Uotori].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Uotori_RevivePlan:Near_0003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void FinaleEvent_Intro() {
    Npc_HatenoVillage032[Uotori].EventTriggerParticipateEvent()
    Npc_SouthernVillage013[Uotori].EventTriggerParticipateEvent()
    Npc_SouthernVillage013[Uotori].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_SouthernVillage013[Uotori].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0016', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage013[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0017', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventWorldManagerController.Event_SetWeatherForFlowchart({'IsImmTrans': True, 'WeatherType': 0})
    Npc_SouthernVillage013[Uotori].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
    Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 6, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_SouthernVillage013[Uotori].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 6, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'RevivePlanFinale_Link', 'UseDemoWait': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Uotori_RevivePlan_ActorCreateControl'})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Uotori_RevivePlan', 'StepName': 'Finale', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OT_0007'})
}

void LinkWarp() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse_Move'}) {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Revive_PrivateHouse_Link', 'UseDemoWait': True})
    }
}

void GiveWoodAfterTalk() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Uotori_RevivePlan_GetWood_Delete', 'Value': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0043', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event140
}

void ClearActor() {
    GameSystemActor.EventClearActorsAroundAnchor({'Radius': 8.0, 'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_Restaurant1', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    GameSystemActor.EventClearActorsAroundAnchor({'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_Restaurant2', 'Radius': 6.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    GameSystemActor.EventClearActorsAroundAnchor({'Radius': 8.0, 'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_TreasureShop', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    GameSystemActor.EventClearActorsAroundAnchor({'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_PrivateHouse', 'Radius': 10.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    GameSystemActor.EventClearActorsAroundAnchor({'Radius': 8.0, 'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_LeaderHouse', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
}

void TreasureShopFlagReset() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_Move'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UotoriTreasureShop_Green1stOpen', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'TreasureBoxShop_CageGreen'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UotoriTreasureShop_Blue1stOpen'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'TreasureBoxShop_CageBlue'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'UotoriTreasureShop_Red1stOpen'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'TreasureBoxShop_CageRed'})
    }
}

void ClearActor_Revive() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_Restaurant_Move'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'Radius': 8.0, 'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_Restaurant1', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
        GameSystemActor.EventClearActorsAroundAnchor({'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_Restaurant2', 'Radius': 6.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_Move'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'RevivePlan_ClearActor_TreasureShop_Revive1', 'Radius': 10.0, 'Height': 36.0})
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'Radius': 10.0, 'AnchorInstanceName': 'RevivePlan_ClearActor_TreasureShop_Revive2', 'Height': 14.0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_TreasureShop_Move'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'RevivePlan_ClearActor_Inn_Revive', 'Radius': 12.0, 'Height': 26.0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_PrivateHouse_Move'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_PrivateHouse', 'Radius': 10.0, 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Revive_LeaderHouse_Move'}) {
        GameSystemActor.EventClearActorsAroundAnchor({'Radius': 8.0, 'Height': 10.0, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'RevivePlan_ClearActor_LeaderHouse', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsDeleteActor': True, 'IsExcludePlacedAroundAnchor': False})
    }
}
