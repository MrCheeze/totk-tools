-------- EventFlow: Npc_Challenge093Lady --------

Actor: Npc_NorthHatelHatago001[FlowerGarden]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Challenge093Lady
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerNPCChangePosture', 'EventTriggerRequestLookAtTheFront', 'EventTriggerSetRecentTalkFlag', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryVolatileGeneralPurposeFlagOn']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventClearActorsAroundAnchor', 'EventResetGimmick']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerTalk', 'EventPlayerUnequip', 'EventGoOffstageForUser', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerWait', 'EventTriggerParticipateEvent', 'EventTriggerPlayerRequestKeepLifting']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune05_IsAfter_Carry2_Exp'}) {

        call Tribune05_IsAfter_Carry2_Exp_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0014', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
            Event86:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0022', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0026', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            Event0:
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0013', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Act_Farmer', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            Event82:
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !Npc_EventStarter.EventQueryHaveTalked() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0024', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0027', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event86
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0024', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event86
            }
        } else
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
            goto Event0
        } else {
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0013', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event82
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune05_IsAfter_Carry2_Exp'}) {

        call Tribune05_IsAfter_Carry2_Exp_Near()

    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Event7:
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Challenge093Lady:Near_1003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
        goto Event7
    }
}

void Hello() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Tribune05_IsAfter_Carry2_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
            Event3:
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Farmer', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
            goto Event3
        } else {
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Event2:
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0013', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Act_Farmer', 'IsNotOpenIfSkipedMostRecent': False})
        Event72:
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

        call Hello()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
        goto Event2
    } else {
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0013', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event72
}

void Tribune05_IsAfter_Carry2_Exp_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0}) {
        Event74:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Challenge093Lady:Near_1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Challenge093Lady:Near_1003', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 4}) {
        goto Event74
    }
}

void Tribune05_TreadOnFlower() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

        call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Challenge093Lady")})


        call Reset()


        call Init_Ground()

        Event225:

        call BgmMute()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlowerGarden_Forbidden_Burned', 'Index': -1}) {

            call Tribune05_BurnedFlower()

        } else
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call CameraStart()

        }

        fork {

            call Surprise()

        } {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 1}) {
              case 0:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 1})
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0025', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 2})
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0029', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0030', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }

        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'FlowerGarden_Forbidden_Pattern'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Angry_Challenge093Lady', 'FadeInTypeEventEnd': 2})

        call PosMove()

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern', 'Value': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Angry_Challenge093Lady', 'FadeInTypeEventEnd': 2})

        call PosMove()

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }
}

void Reset() {
    if Npc_Challenge093Lady.EventQueryVolatileGeneralPurposeFlagOn() {
        Npc_Challenge093Lady.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 0})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'FlowerGarden_Forbidden_Count2'})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'FlowerGarden_Forbidden_Count3'})
    }
}

void Tribune05_GetTools() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

        call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Challenge093Lady")})

    } else {

        call InitTalkNoTurnNoCameraOnEvent()

    }

    call Reset()


    call Init()


    call BgmMute()

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Count2'}) {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Count2'})
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0028', 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event250:

        call CameraStart()

        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0037', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
      case 1:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'FlowerGarden_Forbidden_Count2'})
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0031', 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event250
      case 2:
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0032', 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event250
    }
}

void CameraStart() {
    Npc_Challenge093Lady.EventTriggerRequestLookAtTheFront()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Challenge093Lady', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 1.5, 1.399999976158142], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'LongShiftRange': 90.0, 'LatShiftRange': 30.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void PosMove() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'VehiclePos', 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        LastRiddenAnimal_ForEvent.EventWarpToTargetActor({'ActorName': 'DesignateMatrixActor', 'InstanceName': 'VehiclePos', 'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        Event209:

        call RemoveObstacle()

        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_FlowerGarden', 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Challenge093Lady', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 5, 6, 7]:
            Npc_Challenge093Lady.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 8, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Event143:
            Npc_Challenge093Lady.EventTriggerNPCChangePosture({'Posture': 1, 'IsPlayCurrentAS': False})
            Npc_Challenge093Lady.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Act_Farmer', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [1.5099999904632568, 3.0199999809265137, -5.840000152587891], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            EventRequestActor.EventTriggerSetEventBool({'Bool': False})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
          case [1, 2, 3, 4]:
            Npc_Challenge093Lady.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 0, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            goto Event143
        }
    } else {
        goto Event209
    }
}

void Init() {

    fork {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
        }
    } {
        Npc_Challenge093Lady.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Event217:
    Npc_Challenge093Lady.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_Challenge093Lady.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune05_IsAfter_Carry2_Exp'}) {
        Npc_NorthHatelHatago001[FlowerGarden].EventTriggerParticipateEvent()
    }
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

        call CameraStart()

    }
}

void Tribune05_BurnedFlower() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Count3'}) {
      case 0:
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0039', 'IsNotOpenIfSkipedMostRecent': False})
        Event183:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})

        call RemoveObstacle()

        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Event46:
            GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'VehiclePos', 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 3.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DesignateMatrixActor', 'InstanceName': 'VehiclePos', 'IsWaitEnd': True, 'UseDemoWait': True})
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 5, 6, 7]:
                Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True, 'InstanceName': 'Player_FlowerGarden_B'})
                Event50:
                EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Challenge093Lady', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                Event223:
                Npc_Challenge093Lady.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_Challenge093Lady.EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                fork {
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Count3'}) {
                      case 0:
                        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0041', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Count3'})
                      case [1, 2]:
                        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0042', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } {

                    call Surprise()

                }

                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern', 'Value': 0})

                call CameraStart()

                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0038', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0036', 'IsNotOpenIfSkipedMostRecent': False})
                }
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlowerGarden_Forbidden', 'Index': -1}) {
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    call PosMove()

                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Event167:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Burned', 'Value': False})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else {
                    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
                    goto Event167
                }
              case [1, 2, 3, 4]:
                Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True, 'InstanceName': 'Player_FlowerGarden_A'})
                goto Event50
            }
        } else
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {
            goto Event223
        } else {
            goto Event46
        }
      case [1, 2]:
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0040', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event183
    }
}

void Tribune05_Water() {

    fork {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        }
    } {

        call InitTalkNoTurnNoCameraOnEvent()

    }


    call Reset()


    call Init_Water()


    call BgmMute()

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 8]:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern', 'Value': 2})
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0043', 'IsNotOpenIfSkipedMostRecent': False})
        Event203:
        if !Player.EventQueryCheckPlayerState({'State': 29})
        && !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

            call CameraStart()

        }
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 3, 'GameDataName': 'FlowerGarden_Forbidden_Pattern'}) {
          case 0:
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0044', 'IsNotOpenIfSkipedMostRecent': False})
            Event187:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlowerGarden_Forbidden', 'Index': -1}) {
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call PosMove()

                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            } else
            if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
            }
          case [1, 2]:
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0046', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event187
        }
      case [2, 3, 4, 5, 6, 7]:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern', 'Value': 3})
        Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0045', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event203
    }
}

void Surprise() {
    if Player.EventQueryCheckPlayerState({'State': 5})
    && Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'ActorFileName': '', 'Type': 0}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }
}

void BgmMute() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:Bgmミュート(フェード普通)'})
}

void RemoveObstacle() {
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorInstanceName': 'RemovePos', 'AnchorActorName': 'DesignateMatrixActor', 'Radius': 6.5, 'IsWaitEnd': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True, 'IsSweepOut': True, 'Height': 10.0})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 1, 'IsResetCamera': False})
}

void Tribune05_Angry_Challenge093Lady() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern'}) {
      case 0:

        call CameraStart()

        Event10:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0038', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0036', 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case 1:

        call InitTalkNoTurnNoCameraOnEvent()


        call Reset()


        call Init_Ground()

        Event255:

        call BgmMute()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlowerGarden_Forbidden_Burned', 'Index': -1}) {

            call Tribune05_BurnedFlower()

        } else
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call CameraStart()

        }

        fork {

            call Surprise()

        } {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 1}) {
              case 0:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 1})
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0025', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'FlowerGarden_Forbidden_Count', 'Index': -1, 'Value': 2})
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0029', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
              case 2:
                Npc_Challenge093Lady.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Challenge093Lady:Talk0030', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }

        goto Event10
      case 2:

        call InitTalkNoTurnNoCameraOnEvent()


        call Reset()


        call Init()

        goto Event255
    }
}

void InitTalkNoTurnNoCameraOnEvent() {
    Npc_Challenge093Lady.EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void Tribune05_HurtFlower() {

    call Common.AirStartUP_Player()

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Event25:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'FlowerGarden_Forbidden_Pattern', 'Value': 2})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Tribune05_Angry_Challenge093Lady', 'FadeInTypeEventEnd': 2})

            call PosMove()

            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {

            call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Challenge093Lady")})


            call Reset()


            call Init()

            goto Event225
        }
    } else {
        goto Event25
    }
}

void Init_Water() {

    fork {
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 29}) {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerWait({'IsWaitEnd': True})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
            } else {
                Player.EventTriggerPlayerRequestKeepLifting()
            }
        }
    } {
        Npc_Challenge093Lady.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_Challenge093Lady.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_Challenge093Lady.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune05_IsAfter_Carry2_Exp'}) {
        Npc_NorthHatelHatago001[FlowerGarden].EventTriggerParticipateEvent()
    }
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_Challenge093Lady', 'ActorNameB': 'Player', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

        call CameraStart_ShowPlayer()

    }
}

void Init_Ground() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
    } {
        Npc_Challenge093Lady.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    goto Event217
}

void CameraStart_ShowPlayer() {
    Npc_Challenge093Lady.EventTriggerRequestLookAtTheFront()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Challenge093Lady', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'AtVector': [0.0, 1.5, 0.0], 'PosVector': [0.0, 1.5, 1.399999976158142], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'LatShiftRange': 30.0, 'LongShiftRange': 90.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1})
}
