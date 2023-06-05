-------- EventFlow: JobSunazarashi --------

Actor: Npc_GerudoDesert002[Mini]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerChangeEmotion', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventWaitForActorPresence', 'EventTraverseAroundAndWaitCreateActor', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventEventCircleWipeFadeIn', 'EventCreateSunazarashiOnAnchor', 'EventClearActorsAroundAnchor', 'EventResetGimmick']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_GerudoDesert002
entrypoint: None()
actions: ['EventFollowToTargetActor', 'EventTriggerBalloonMessage', 'EventTalk', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventCancelFollowToTargetActor', 'EventAIScheduleWarpToAnchor', 'EventTriggerNPCChangePosture', 'EventTriggerAttentionSenderChangeClientValidByNameAll', 'EventTriggerChangeEmotion', 'EventTriggerErasePauseMask', 'EventTriggerRequestLookAtTheFront', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsFollowToTargetActor', 'EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis020
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventDisableRecentTalkFlag', 'EventTriggerBalloonMessage', 'EventPlayAS']
queries: ['EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerPushPauseMask']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryIsFollowToTargetActor', 'EventQueryFollowingObjectTroubleKind']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventBustShotCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWait', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventGoOffstageForUser']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Sunazarashi_Sled
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerChemicalSetTemporaryNoBurned', 'EventTriggerParticipateEvent', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryCheckNoObjectDirY']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_Sunazarashi_C
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerParticipateEvent', 'EventTriggerErasePauseMask', 'EventTriggerDeleteSelf', 'EventWait']
queries: ['EventQueryIsSunazarashiConnectSled']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SunazarashiSledRope
entrypoint: None()
actions: ['EventTriggerChemicalSetTemporaryNoBurned', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_RequestImmTrans']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void InitCarry() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_GerudoDesert002.EventTriggerAttentionSenderChangeClientValidByNameAll({'DoClientName': 'TalkNormal', 'DoClientName2nd': 'LockOnNormal'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_GerudoDesert002.EventTriggerAttentionSenderChangeClientValidByNameAll({'DoClientName': 'TalkNarrow', 'DoClientName2nd': 'LockOnNarrow'})
    Npc_GerudoDesert002.EventFollowToTargetActor({'IsWaitEnd': True, 'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': '', 'Posture': 3, 'XZDegOffset': 0.0, 'PositionOffset': [0.0, 0.5, -1.0]})
    Npc_GerudoDesert002.EventPlayAS({'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SUB_SledSetup', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Ready_Npc_GerudoDesert002_Talk() {
    Event292:
    switch Npc_oasis020.EventQueryCheckTerrorLevel() {
      case 0:
        Event293:
        switch Npc_GerudoDesert002.EventQueryCheckTerrorLevel() {
          case 0:
            Event207:

            call InitTalk.InitTalk_Pair({'Actor1': ActorIdentifier(name="Npc_GerudoDesert002"), 'Actor2': ActorIdentifier(name="Npc_oasis020"), 'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_GerudoDesert002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis020', 'Spearker2InstanceName': ''})

            Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis020.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_oasis020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_oasis020.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'Target': 3, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_oasis020.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step1', 'ChallengeName': 'JobSunazarashi', 'IsWaitEnd': True})
            Npc_GerudoDesert002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
            Npc_oasis020.EventDisableRecentTalkFlag({'IsWaitEnd': True})
          case [1, 2, 3, 4, 5]:
            Npc_GerudoDesert002.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            goto Event207
        }
      case [1, 2, 3, 4, 5]:
        Npc_oasis020.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        goto Event293
    }
}

void Ready_Npc_GerudoDesert002_Near() {
    Npc_GerudoDesert002.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/JobSunazarashi:near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Step1_Npc_GerudoDesert002_Talk() {

    call GerudoGreeting.InitTalk_GerudoGreeting()


    call GerudoGreeting.HelloYouth()

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0021', 'ChoiceNumber': 2, 'ChoiceLabel1': 19, 'ChoiceLabel2': 20, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'JobSunazarashi_SoriOK', 'Index': -1}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'SUB_CheckConnectSorizarashi', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoEvent_Tmp00'}) {
                EventSystemActor.EventTransition({'EventName': 'SUB_SledCheck', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
            } else
            Event241:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event193:
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'JobSunazarashi', 'StepName': 'Drive1', 'IsWaitEnd': True})
              case 3:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event193
            }
        } else
        goto Event241
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Step1_Npc_GerudoDesert002_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near0008', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void ArriveDestination() {
    Obj_Sunazarashi_Sled.EventTriggerParticipateEvent()
    SunazarashiSledRope.EventTriggerParticipateEvent()
    Animal_Sunazarashi_C.EventTriggerParticipateEvent()
    Animal_Sunazarashi_C.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Obj_Sunazarashi_Sled.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_GerudoDesert002")})

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0001', 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Npc_GerudoDesert002.EventCancelFollowToTargetActor({'ASName': 'Rest', 'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': '', 'IsWaitEnd': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'JobSunazarashi', 'StepName': 'Arrival', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True})

    call Replace()

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Arrival_Npc_GerudoDesert002_Mini_StepStart'})
}

void Drive1_Npc_GerudoDesert002_Talk() {
    if !Npc_GerudoDesert002.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': ''}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Drive1_Npc_GerudoDesert002_Talk_Sub'})
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'JobSunazarashi_SoriOK', 'Index': -1}) {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'EventName': 'SUB_CheckConnectSorizarashi', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GerudoEvent_Tmp00'}) {
                EventSystemActor.EventTransition({'EventName': 'SUB_SledCheck', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
            } else
            Event154:
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0040', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0056', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0040', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void JS_Near_FallRuins() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1000', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1005', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void JS_Near_SpiralRuins() {
    Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1001', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void JS_Near_Enemy() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1002', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1003', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void JS_Near_Bone() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1006', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1007', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void JS_Near_Heso() {
    Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1008', 'DisplayFrame': 150, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void JobSunazarashi_Reset1() {
    Event50:
    Animal_Sunazarashi_C.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Obj_Sunazarashi_Sled.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_GerudoDesert002")})


    call WipeCamera()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0036', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call JobSunazarashi_Reset2()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0037', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void Ready_Npc_oasis020_Near() {
    Npc_oasis020.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/JobSunazarashi:near0000', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_oasis020_Talk() {
    goto Event292
}

void JobSunazarashi_Reset() {
    Event72:
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 10, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventTriggerParticipateEvent()
        Event82:
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})

        call JobSunazarashi_Reset3()

    } else {
        goto Event82
    }
}

void JobSunazarashi_HandReaction() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    Obj_Sunazarashi_Sled.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_GerudoDesert002")})


    call CheckFaceUpCamera()

    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0034', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0035', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call CheckFaceUpCamera_Return()

    Obj_Sunazarashi_Sled.EventTriggerErasePauseMask()
}

void JS_Near_Danger() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void JS_Near_Danger0() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1012', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Arrival_Npc_GerudoDesert002_Mini_StepStart() {

    call InitClearEvent()

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0049', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoDesert002[Mini].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_GerudoDesert002[Mini].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [-2704.782958984375, 170.66470336914062, 2920.0869140625], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'WorldPos': [-2704.782958984375, 170.66470336914062, 2920.0869140625], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'PosVector': [-2796.2900390625, 129.8699951171875, 2850.679931640625], 'AtVector': [-2792.610107421875, 130.8800048828125, 2852.030029296875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2744.489990234375, 138.67999267578125, 2863.929931640625], 'AtVector': [-2742.419921875, 139.66000366210938, 2865.9599609375], 'TargetFovy': 50.5099983215332, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0002', 'NotPlayLipSyncAnim': False, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2764.14990234375, 138.6699981689453, 2822.9599609375], 'AtVector': [-2764.0400390625, 139.66000366210938, 2820.050048828125], 'TargetFovy': 50.52000045776367, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0042', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2784.75, 166.6199951171875, 2850.7900390625], 'AtVector': [-2789.679931640625, 165.33999633789062, 2849.340087890625], 'TargetFovy': 30.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0043', 'EndDialogOption': 3, 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoDesert002[Mini].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2793.47998046875, 130.5800018310547, 2851.570068359375], 'AtVector': [-2788.699951171875, 130.22999572753906, 2851.280029296875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_GerudoDesert002[Mini].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': 'Mini', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

    Npc_GerudoDesert002[Mini].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'JobSunazarashi', 'IsWaitEnd': True})
}

void JobSunazarashi_Reset0() {
    Obj_Sunazarashi_Sled.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Animal_Sunazarashi_C.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()


    call CheckFaceUpCamera()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0045', 'ChoiceLabel1': 28, 'ChoiceLabel2': 27, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0048', 'IsNotOpenIfSkipedMostRecent': False})

        call JobSunazarashi_Reset()

        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0046', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0047', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call CheckFaceUpCamera_Return()

        Npc_GerudoDesert002.EventCancelFollowToTargetActor({'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': '', 'IsWaitEnd': True, 'ASName': 'Surprised'})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': ''})
        Npc_GerudoDesert002.EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Animal_Sunazarashi_C.EventTriggerErasePauseMask()
        Obj_Sunazarashi_Sled.EventTriggerErasePauseMask()
        GameSystemActor.EventResetGimmick({'Option': 1, 'IsWaitEnd': True, 'IsResetCamera': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }
}

void JS_Near_Lost() {
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1013', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_GerudoDesert002.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 150, 'MessageID': 'EventFlowMsg/JobSunazarashi:near1014', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Drive1_Npc_GerudoDesert002_Near() {
    if Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': ''}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/JobSunazarashi:near0009', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Replace() {
    Obj_Sunazarashi_Sled.EventTriggerParticipateEvent()
    SunazarashiSledRope.EventTriggerParticipateEvent()
    Animal_Sunazarashi_C.EventTriggerParticipateEvent()
    Obj_Sunazarashi_Sled.EventTriggerCombinedActorDeleteAll()
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'WarpPlayer', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
}

void JobSunazarashi_Reset2() {
    goto Event72
}

void Drive1_Npc_GerudoDesert002_Talk_Sub() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call VehicleJoinEvent()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0020', 'ChoiceNumber': 3, 'ChoiceLabel1': 17, 'ChoiceLabel2': 21, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0029', 'ChoiceNumber': 2, 'ChoiceLabel1': 21, 'ChoiceLabel3': 0, 'ChoiceLabel2': 26, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event107:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'JobSunazarashi_NPC'}) {
                Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'ChoiceLabel2': 22, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0053', 'ChoiceLabel1': 29, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0054', 'IsNotOpenIfSkipedMostRecent': False})
                    Event29:

                    call JobSunazarashi_Reset()

                    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0052', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event225:
                    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0031', 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0030', 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'ChoiceLabel1': 23, 'ChoiceLabel2': 22, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0032', 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event29
                } else {
                    goto Event225
                }
            }
        } else {
            Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0044', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        goto Event107
      case 2:
        Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Rest', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0051', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void JobSunazarashi_Fall() {
    goto Event50
}

void JobSunazarashi_Reset3() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    if !GameSystemActor.EventQueryExistActor({'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'IsCheckLife': True, 'IsCheckAttached': True, 'ActorName': 'Obj_Sunazarashi_Sled', 'IsCheckGolemAttachment': True}) {
        EventSystemActor.EventTransition({'EventName': 'SUB_SledPause', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    }
    Npc_GerudoDesert002.EventTriggerErasePauseMask()
    Npc_GerudoDesert002.EventCancelFollowToTargetActor({'ActorName': 'Obj_Sunazarashi_Sled', 'InstanceName': '', 'IsWaitEnd': True, 'ASName': 'Surprised'})
    EventSystemActor.EventTransition({'EventName': 'SUB_SledDeleteIfAny', 'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
    Animal_Sunazarashi_C.EventTriggerDeleteSelf()
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Reset_WarpPlayer', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerOnMotionTypeStatic()
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'Height': 3.0, 'AnchorInstanceName': 'Npc_oasis020_SoriWarp', 'Radius': 7.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    GameSystemActor.EventCreateSunazarashiOnAnchor({'AnchorActorName': 'DestinationAnchor', 'WithSled': True, 'IsWaitEnd': True, 'AnchorInstanceName': 'Npc_oasis020_SoriWarp'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': ''})
    Player.EventPlayerOffMotionTypeStatic()
    Npc_GerudoDesert002.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': True})
    Npc_GerudoDesert002.EventAIScheduleWarpToAnchor({'IsWaitEnd': False, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert002.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_GerudoDesert002.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Player.EventPlayerWait({'IsWaitEnd': False})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'JobSunazarashi_ResetActor'})
    EventWorldManagerController.EventTrigger_RequestImmTrans()
    Npc_GerudoDesert002.EventTriggerBecomeSpeaker()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-3763.969970703125, 151.24000549316406, 2941.469970703125], 'AtVector': [-3759.97998046875, 150.4499969482422, 2943.389892578125], 'TargetFovy': 40.0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void SUB_SledSetup() {
    Obj_Sunazarashi_Sled.EventTriggerChemicalSetTemporaryNoBurned({'IsNoBurned': True})
    SunazarashiSledRope.EventTriggerChemicalSetTemporaryNoBurned({'IsNoBurned': True})
}

void SUB_CheckConnectSorizarashi() {
    if !Animal_Sunazarashi_C.EventQueryIsSunazarashiConnectSled() {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoEvent_Tmp00', 'Index': -1, 'Value': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GerudoEvent_Tmp00', 'Value': False, 'Index': -1})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void JobSunazarashi_Fire() {
    Animal_Sunazarashi_C.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Obj_Sunazarashi_Sled.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Animal_Sunazarashi_C.EventWait({'IsWaitEnd': False, 'Frames': 0})

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_GerudoDesert002")})


    call WipeCamera()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0050', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call JobSunazarashi_Reset2()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0055', 'IsNotOpenIfSkipedMostRecent': False})
}

void JobSunazarashi_Broken() {
    Animal_Sunazarashi_C.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    Npc_EventStarter.EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_GerudoDesert002")})


    call WipeCamera()

    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0036', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'JobSunazarashi_Reset', 'FadeInTypeEventEnd': 2})
    Npc_GerudoDesert002.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0037', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
}

void JobSunazarashi_Trouble() {
    switch Npc_EventStarter.EventQueryFollowingObjectTroubleKind() {
      case 0:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'JobSunazarashi_Broken'})
      case 1:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'JobSunazarashi_Reset0', 'FadeInTypeEventEnd': 2})
      case 2:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'JobSunazarashi_Fire'})
    }
}

void SUB_SledCheck() {
    if !Obj_Sunazarashi_Sled.EventQueryCheckNoObjectDirY({'Length': 2.0, 'Radius': 0.699999988079071, 'Offest': [0.0, 0.5, -1.0]}) {
        if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Step1', 'GameDataName': 'Step_JobSunazarashi', 'Index': -1}) {

            call Step1_Exist()

        } else {

            call Drive1_Exist()

        }
    } else
    if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Step1', 'GameDataName': 'Step_JobSunazarashi', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0024', 'ChoiceNumber': 2, 'ChoiceLabel1': 24, 'ChoiceLabel2': 25, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event92:
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0038', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call InitCarry()

            Event265:
            if !GameDataActor.EventQueryIsGameDataEnum({'Value': 'Step1', 'GameDataName': 'Step_JobSunazarashi', 'Index': -1}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'JobSunazarashi', 'StepName': 'Drive1', 'IsWaitEnd': True})
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event265
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 24, 'ChoiceLabel2': 25, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0028', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event92
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0040', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 24, 'ChoiceLabel2': 25, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/JobSunazarashi:talk0041', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event92
    }
}

void Step1_Exist() {
    goto Event241
}

void Drive1_Exist() {
    goto Event154
}

void VehicleJoinEvent() {
    SunazarashiSledRope.EventTriggerParticipateEvent()
    Obj_Sunazarashi_Sled.EventTriggerParticipateEvent()
    Animal_Sunazarashi_C.EventTriggerParticipateEvent()
}

void WipeCamera() {

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {
        EventCamera.EventBasedOnLookAtCamera({'TargetActorName': 'Npc_GerudoDesert002', 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 0.0, 'ToleranceDistance': 0.0, 'TargetOffset': [0.05000000074505806, 0.800000011920929, 0.0], 'IdealDistance': 2.0, 'CameraCollisionMode': 0, 'ToleranceYDownwardAngle': 0.0, 'ToleranceYUpwardAngle': 0.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_GerudoDesert002.EventTriggerRequestLookAtTheFront()
        Npc_GerudoDesert002.EventPlayAS({'ASName': 'Carry_Rest_Gear1', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_GerudoDesert002.EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
    }

}

void CheckFaceUpCamera() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'ActorNameB': 'Npc_GerudoDesert002'}) {

        call InitTalk.InitTalkOnEventWithAirPause({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_GerudoDesert002")})

    } else {
        EventCamera.EventTriggerCameraSavePoint()

        fork {

            call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_GerudoDesert002")})

        } {
            EventCamera.EventBustShotCamera({'TargetActorName': 'Npc_GerudoDesert002', 'IsWaitEnd': True, 'TargetActorInstanceName': '', 'CameraCollisionMode': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Longitude': 30.0, 'Latitude': 0.0, 'MoveTime': 0, 'TargetOffset': [0.05000000074505806, -0.10000000149011612, 0.0]})
        }

    }
}

void CheckFaceUpCamera_Return() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'InstanceNameB': '', 'ActorNameB': 'Npc_GerudoDesert002'}) {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }
}

void InitClearEvent() {
    Npc_GerudoDesert002[Mini].EventTriggerParticipateEvent()
    Npc_GerudoDesert002[Mini].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_GerudoDesert002[Mini].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_GerudoDesert002', 'InstanceName': 'Mini', 'TurnFaceControlType': 1})
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'Height': 3.0, 'AnchorInstanceName': 'Npc_oasis020_SoriWarp', 'Radius': 7.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    GameSystemActor.EventCreateSunazarashiOnAnchor({'AnchorActorName': 'DestinationAnchor', 'WithSled': True, 'IsWaitEnd': True, 'AnchorInstanceName': 'Npc_oasis020_SoriWarp'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Npc_GerudoDesert002[Mini].EventTriggerBecomeSpeaker()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2793.47998046875, 130.5800018310547, 2851.570068359375], 'AtVector': [-2788.699951171875, 130.22999572753906, 2851.280029296875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}
