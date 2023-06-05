-------- EventFlow: SageOfWind_Sub001 --------

Actor: Npc_HighMountain009[hut]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[Ready]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerSetHaveTalked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_HighMountain037[GoToCave]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestCreateStaticEquipment', 'EventWarpToTargetPosAndRot', 'EventNpcRitoTakeOff', 'EventTriggerRequestLookAtTheFront', 'EventTriggerBalloonMessage', 'EventTriggerEquipmentUserRequestSetVisible']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_ValleyVillage010
entrypoint: None()
actions: ['EventTriggerSetHaveTalked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerStopInAir', 'EventPlayerConversate', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain005
entrypoint: None()
actions: ['EventTriggerSetHaveTalked']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Toby_Junior[IpponSugi]
entrypoint: None()
actions: []
queries: ['EventQueryTobyIsDead']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[IpponSugi]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWaitForDynamicSagePresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataEnum']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenActionGuideWithPictScreen', 'EventTriggerNoticeActionGuideWithPictScreenClosable', 'EventCloseActionGuideWithPictScreen', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeOut', 'EventClearActorsAroundAnchor']
queries: ['EventQueryEnemyActorLvByLevelSensor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundRequestWaitSetupNextEvent', 'EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventNPCTurnToObjectGreeting', 'EventTriggerBecomeSpeaker', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

void SageOfWind_Ready_Sub() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_Tulin_Sage[Ready].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_ValleyVillage010.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_HighMountain005.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWind_Ready_WarpDelete', 'Value': True, 'Index': -1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0039', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'Event_CleanActorPos', 'Height': 8.0, 'Radius': 10.0, 'IsWaitEnd': True, 'IsSweepOut': False, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0040'})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'StepName': 'MountainHut', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void MountainHut_Npc_HighMountain009_hut_Near_Sub() {
    Npc_HighMountain009[hut].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_RT_0032:Dm_RT_0032_Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void MountainHut_Npc_HighMountain009_hut_Talk_Sub() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0032'})
    Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'StepName': 'GoToCave', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void Ready_Npc_Tulin_Sage_Ready_Near_Sub() {
    Npc_Tulin_Sage[Ready].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/Dm_RT_0039:Dm_RT_0039_Near02', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GoToCave_Npc_HighMountain037_GoToCave_Near_Sub() {
    Npc_HighMountain037[GoToCave].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_RT_0033:Dm_RT_0033_Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GoToCave_Npc_HighMountain037_GoToCave_Talk_Sub() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    Event13:
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0033'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'StepName': 'IpponSugi', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void IpponSugi_Npc_Tulin_Sage_Near_Sub() {
    Npc_Tulin_Sage[IpponSugi].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void IpponSugi_Npc_Tulin_Sage_Talk_Sub() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0009'})
}

void SageOfWind_GetBack_Sub() {

    fork {

        call Common.AirStartUP_Player()

    } {
        switch Enemy_Toby_Junior[IpponSugi].EventQueryTobyIsDead() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWind_GetBack_SkipTobyDefeated', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWind_GetBack_HideToby', 'Value': False})
          case 1:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfWind_GetBack_SkipTobyDefeated'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWind_GetBack_HideToby', 'Value': False})
          case 2:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfWind_GetBack_SkipTobyDefeated'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfWind_GetBack_HideToby'})
        }
    }

    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWind_GetBackBow', 'Index': -1, 'Value': True})
    if GameSystemActor.EventQueryEnemyActorLvByLevelSensor({'ActorName': 'Enemy_Bokoblin_Middle'}) in [0, 1, 2, 3, 4] {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'SageOfWind_GetBackBowDemo_EnemyLevel'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        } {

            call Ready_Dm_RT_0034_Tulin()

        }

        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfWind_GetBack_HideToby', 'Index': -1}) {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_RT_0034_HideToby'})
        } else {
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0034', 'FadeInTypeEventEnd': 2})
        }
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 3, 'IsVisible': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.320000171661377], 'AtVector': [0.0, 1.7999999523162842, -0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_IpponSugi_Exp'}) {

            call OpnePictureGuide()

        }
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'DefeatEnemy'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestCreateStaticEquipment({'DynamicEquipmentState': 2, 'EquipmentActorName': 'Weapon_Bow_116', 'AttachmentName': '', 'EffectType': 0, 'EffectValue': -1})
    }
}

void SageOfWind_DefeatEnemy_Sub() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'Length': 1, 'IsNoPlayAnime': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfWind_DefeatEnemy'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0035', 'FadeInTypeEventEnd': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Value': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfWind', 'IsIgnoreCompletedChallenge': False, 'StepName': 'GoToHebra', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void SageOfWind_GoToCave_Sub() {

    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_HighMountain037", sub_name="GoToCave"), 'Arg_Turn': 4})

    goto Event13
}

void OpnePictureGuide() {
    GameSystemActor.EventOpenActionGuideWithPictScreen({'IsWaitEnd': True, 'ActionGuideCompanionOrderType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor.EventTriggerNoticeActionGuideWithPictScreenClosable()
    GameSystemActor.EventCloseActionGuideWithPictScreen({'IsWaitEnd': True})
}

void Ready_Dm_RT_0034_Tulin() {
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 88.44026947021484, 'Position': [-3050.81005859375, 650.0, -2748.280029296875], 'UseDemoWait': True})
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate'})
    if !GameDataActor.EventQueryIsGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Breakaway'}) {
        GameDataActor.EventTriggerSetGameDataEnum({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.JoiningCondition', 'Value': 'Joining'})
    }
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor[DynamicGenerateSage].EventWaitForDynamicSagePresence({'IsWaitEnd': True, 'SageType': 4})
    Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoTakeOff({'IsWaitEnd': True, 'FlagOnly': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-3030.8310546875, 665.859375, -2762.43994140625]})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 3, 'IsVisible': False})
}

void FoundTulin_Npc_Tulin_Sage_Talk_Sub() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})

    fork {
        Npc_EventStarter.EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 2, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0009_FoundTulin'})
}

void FoundTulin_Npc_Tulin_Sage_Near_Sub0() {
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_RT_0009:Dm_RT_0009_Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}
