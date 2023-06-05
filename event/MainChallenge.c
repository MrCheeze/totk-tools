-------- EventFlow: MainChallenge --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventSwitchVisiblePlacementHyruleCastle', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventSetEventResult', 'EventEventFadeIn', 'EventEventFadeOut', 'EventWait', 'EventPlayUIScreen', 'EventTriggerRequestAutoSave', 'EventTriggerLeaveGameSafetySection', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerPauseMgrRequestPause', 'EventLoadingFadeOut', 'EventTriggerOneShotRequestInvokeTraverse']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerSwitchEquipment', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerEquipmentUserRequestSetVisible', 'EventTriggerEquipmentUserRequestStaticEquipmentSetVisible', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_00
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Npc_Zelda_Catch
entrypoint: None()
actions: ['EventTriggerPushPauseMask']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera[EventCamera]
entrypoint: None()
actions: ['EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventSoundWaitForEventSoundFinished']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Check_4Sage() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_1stSageClear_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_2ndSageClear_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_3rdSageClear_Exp'}) {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'ReturnBCAfter4Sage', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages', 'IsWaitEnd': True})
                } else {
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': '4thSageClear', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages', 'IsWaitEnd': True})
                }
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': '3rdSageClear', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages', 'IsWaitEnd': True})
            }
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': '2ndSageClear', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages', 'IsWaitEnd': True})
        }
    }
}

void CatchZelda() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 1, 'Length': 0})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'Switch': False, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ED_0004', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'IsWaitEnd': True, 'Switch': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Complete', 'ChallengeName': 'MainChallenge', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
    GameSystemActor.EventPlayUIScreen({'IsWaitEnd': True, 'ClipIndex': 0, 'ScreenName': ''})
    Dm_Npc_Zelda_Catch.EventTriggerPushPauseMask({'IsFrameEndCalc': True, 'IsPhysics': True, 'IsCloth': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ED_0005'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatGanondorfWithAllSage'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MainChallenge_DefeatBlackZelda', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DragonMemoryComplete'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ED_0007_PreRender'})
        SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
        Event151:
        GameSystemActor.EventSetEventResult({'IsWaitEnd': True, 'EventResult': 'Title'})
        GameSystemActor.EventLoadingFadeOut({'IsWaitEnd': True, 'IsBlackFade': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Sequence_ToTitleFromGameClear'})
        GameSystemActor.EventTriggerPauseMgrRequestPause({'PauseType': 'GameOverPause'})
    } else {
        goto Event151
    }
}

void Check_NumOfSageClear() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 1, 'Index': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Ready_Npc_Zonau_Golem_Servant_FirstIsland_00_IsActivated_FirstIsland_00_NPCZonauGolem_Talk_First() {
    EventSystemActor.EventTransition({'EventName': 'Dm_OP_0006', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_Zonau_Golem_Servant_FirstIsland_00.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GetZonauMajic', 'ChallengeName': 'MainChallenge', 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void GoToTempleOfTime_ShrineCertifyFailed() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsOpenMapFromChallengeScreen', 'Value': False})
    GameSystemActor.EventTriggerRequestAutoSave()
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_OP_0035'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OP_0009'})
    } else {

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'EndPosition_Dm_OP_0035', 'NotChangeRot': False, 'UseDemoWait': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OP_0035', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveTalked.Dm_Npc_Raul'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSky_IsActivateCDungeon', 'Index': -1, 'Value': True})
        GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'LookingForLightSpot_IsAfter_GoToLightSpotOfPurahPad_Exp'}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'LookingForLightSpot', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'GoToLightSpotOfPurahPad'})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [452.42999267578125, 1557.969970703125, 859.5499877929688], 'PosVector': [457.67999267578125, 1558.5999755859375, 858.1500244140625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera[EventCamera].EventTriggerSendKeepStateMessageToPlayerCamera()
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

            call Common.OpenActionGuideScreen({'ActionGuideType': 13})

        }
    }
}

void GetZonauMajic_Complete() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OP_0012'})
    Player.EventTriggerParticipateEvent()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'LookingForLightSpot', 'IsWaitEnd': True, 'StepName': ''})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void GoToBackOfTempleOfTime_Complete_AreaIn() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'EndPosition_Dm_OP_0016', 'UseDemoWait': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OP_0016', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Firstskyisland_IsDisappear_Cloud_AfterDm_OP_0016'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor2ActorName': 'Player', 'MoveTime': 0, 'PosVector': [451.7778015136719, 1595.4940185546875, 638.3499755859375], 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'AtVector': [440.7403869628906, 1578.3919677734375, 627.4542236328125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera[EventCamera].EventTriggerSendKeepStateMessageToPlayerCamera()
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Weapon_Sword_070_Broken', 'Num': -1, 'IsEquipDIrect': False, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 0, 'IsVisible': True})
    Player.EventTriggerEquipmentUserRequestStaticEquipmentSetVisible({'IsVisible': True, 'StaticEquipmentSlot': 3})
    if !Player.EventQueryIsEquipWeapon({'WeaponName': 'Weapon_Sword_070_Broken', 'WeaponSlot': 0}) {
        Player.EventPlayerSwitchEquipment({'DisarmWeapon': True, 'IsWaitEnd': True, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentWeaponName': '', 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': ''})
    }
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MainChallenge', 'StepName': 'LookingForZelda'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'MeetPurah', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GOToTheCastleOfHyrule'})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'Actor1InstanceName': '', 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor2ActorName': 'Player', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [449.2869873046875, 1588.52294921875, 634.3499755859375], 'AtVector': [445.56201171875, 1579.8160400390625, 631.639404296875], 'MoveTime': 60, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void SuccessAuthentication_ShrineCertifySuccess() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TempleOfTime_CreateSecretStone', 'Index': -1, 'Value': True})
    EventSystemActor.EventTransition({'EventName': 'Dm_OP_0013', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    Player.EventTriggerParticipateEvent()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'LookingForLightSpot', 'StepName': 'Complete', 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void GoToBackOfTempleOfTime_Get_ReverseRecorder() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OP_0040'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OP_0015', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsGet.Obj_ReverseRecorder'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OP_0032', 'FadeInTypeEventEnd': 2})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'GoToAlterAfterGetRR', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'MainChallenge', 'IsWaitEnd': True})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void WakeUpOnStart() {
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': True})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 118.11199951171875, 'Position': [342.7770080566406, 2385.758056640625, 1756.1419677734375], 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'Wait', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_OP_0004'})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVector': [339.1159973144531, 2387.708984375, 1757.384033203125], 'Actor1ActorName': 'Player', 'AtVector': [342.7760009765625, 2387.5458984375, 1756.1409912109375], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera[EventCamera].EventTriggerSendKeepStateMessageToPlayerCamera()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void Golem_GiveBattery() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'SageOfSky_GetBattery'})
}

void RaulAppear_Clear1stSmallDungeon() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_OP_0033'})
}

void Golem_GiveBattery_ExitHand() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Golem_GiveBattery_ExitUltraHand'})
}

void Golem_GiveBattery_ExitToore() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Golem_GiveBattery_ExitTooreroof'})
}

void Clear4thDungeon() {
    Player.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmF_SY_SmallDungeon5Out'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MainChallenge', 'StepName': 'GoToBackToGolemInTemple', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}
