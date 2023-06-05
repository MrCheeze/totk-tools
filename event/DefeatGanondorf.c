-------- EventFlow: DefeatGanondorf --------

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 3}

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 3}

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 3}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 3}

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False, 'EventMemberCreateMethod': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventSwitchVisiblePlacementHyruleCastle', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerWarpToNearAnchor', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerRequestGlide', 'EventPlayerPlayASForFlowchart', 'EventPlayerStopInAir', 'EventPlayerRideDragon', 'EventTriggerRemoveBreakLifeAllAndHealMax', 'EventPlayerHorseGetOff', 'EventTriggerClearModelBindAndDependency', 'EventPlayerSwitchEquipment', 'EventWaitCreationFinishedEquipment', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerCopyMaxLifeToGameDataForSpecialEvent', 'EventTriggerSetLifeForVSDragon', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerBuffTemporaryDisable', 'EventPlayerTurnAndLook']
queries: ['EventQueryIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0002/Dm_ED_0002_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0002_Link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventReserveBancChange', 'EventWait', 'EventEventFadeIn', 'EventTriggerMasterSwordForcedResurrection', 'EventTraverseAroundAndWaitCreateActor', 'EventSaveTemporarySave', 'EventSaveAndWaitTemporarySave', 'EventTriggerEnterGameSafetySection', 'EventTriggerLeaveGameSafetySection', 'EventTriggerCloseCompanionLifeGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerSoundControlBGMwithInput', 'EventSoundWaitForEventSoundFinished', 'EventTriggerSoundRequestWaitSetupNextEvent', 'EventTriggerSoundStopPreDieBossSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataString64']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerReserveChangeConnectionTimingAfterEvent', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerReserveDelayEventAfterConnect']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventPlayAS', 'EventDragonEndRailMove', 'EventWarpToTargetActor', 'EventTriggerDragonRequestCreateHairActor', 'EventDragonControlHoldingActorVisible', 'EventTriggerDragonLightRequestOpAction', 'EventTriggerDragonSetHairVisiblityStep', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime', 'Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_Hair
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Ganondorf_Miasma
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerStartFadeIn', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Ganondorf
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness_SecretStone
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController[kaze]
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void StartBattleDemo() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_GanondorfCastle', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call ArmyBattle_Common_First()


    call SageFlagSetting()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_ArmyBattleEnv'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.IsForceDisableSummonCompanion', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatGanondorfWithAllSage'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GA_0018'})
    } else {

        call PlayDemoOther()

    }
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 0.8700000047683716, -3.940000057220459], 'AtVector': [0.0, 1.7999999523162842, -0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LockOnWaitUpper', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'DefeatMonsterArmy', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MainChallenge', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'DefeatGanondorf_ArmyBattle'})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_MonsterArmy'})
}

void DefeatAllMonster() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWait({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_ArmyClear', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatGanondorfWithAllSage'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MainChallenge_DefeatBlackZelda', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_ArmyGateOpen'})
        Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GA_0017'})
        Event165:
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_FinishArmyBattle', 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.7200000286102295, 2.2100000381469727, -5.53000020980835], 'AtVector': [-0.5899999737739563, 2.140000104904175, -4.539999961853027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Event52:
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MainChallenge', 'StepName': 'DefeatGanon1', 'IsIgnoreChallengeProgressUI': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

        call DisappearSage()

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0029', 'FadeInTypeEventEnd': 2})

        call Appear_UnDefeatBoss()

    }
}

void DefeatGanon() {

    call Common.AirStartUP_Player_OnlyStopInAir()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})

    call BossBattle_Common.BossBattle_CommonA()

    Enemy_Ganondorf.EventWarpToTargetPosAndRot({'Position': [-251.468505859375, -2345.544921875, -986.9224243164062], 'IsWaitEnd': True, 'YAngle': 0.0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'DefeatGanondorf_IsAppearGanondorf2'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventPlayerWarpToTargetPosAndRot({'Position': [-249.3000030517578, -2346.02001953125, -1030.25], 'YAngle': 180.0, 'IsWaitEnd': True, 'UseDemoWait': False})
    Enemy_Ganondorf_Miasma.EventWarpToTargetPosAndRot({'Position': [-249.3000030517578, -2346.02001953125, -1041.5400390625], 'YAngle': 0.0, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 14.475600242614746, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [-246.52200317382812, -2345.429931640625, -1024.0799560546875], 'PosVector': [-246.26400756835938, -2345.52001953125, -1023.1199951171875], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Enemy_Ganondorf_Miasma.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmT_GA_LastBossTransform'})
    Enemy_Ganondorf_Miasma.EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
    Enemy_Ganondorf_Miasma.EventTriggerStartFadeIn({'FadeFrame': 1})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Ganondorf_Miasma', 'CommandLife': 2, 'IsReleaseDucking': False})
    }
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MainChallenge', 'StepName': 'DefeatGanon2', 'IsIgnoreChallengeProgressUI': False})
}

void BeforeVSGanon() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 1, 'WithPlayableEvent': False, 'IsForceFadeTime': False, 'CommandLife': 0})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_BossBattleEnv'})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'DefeatGanondorf_BossBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'System_IsSaveTemporaryStorage', 'Value': True, 'Index': -1})
    GameSystemActor.EventSaveAndWaitTemporarySave({'IsWaitEnd': True, 'IsLastBattleRestartPos': True, 'GameSafetySetting': 'DefeatGanondorf_ArmyBattle'})
    Player.EventTriggerCopyMaxLifeToGameDataForSpecialEvent({'GameDataName': 'MaxLifeForBeforeVSGanon'})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})

    call ResetPlayerPos_Ganondorf()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0015'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GanonDefeat_SeeVSGanonDemo'})
    GameSystemActor.EventTriggerMasterSwordForcedResurrection()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0022'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'DefeatGanondorf_IsAppearGanondorf'})
}

void DefeatGanon2() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})

    call BossBattle_Common.BossBattle_CommonA()

    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0016', 'FadeInTypeEventEnd': 2})

    call DisappearSage()

    GameSystemActor.EventTriggerLeaveGameSafetySection()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'DefeatGanondorf_LoadLastBattleSet', 'Index': -1, 'Value': True})
    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextBanc': 'MainField', 'BootEventName': 'MainChallenge_ApearWhiteDragon', 'NextStartRot': [0.0, 0.0, 0.0], 'NextStartPos': 'PlayerPos_Ganondorf3_Start', 'IsStartOnEvent': False, 'FadePattern': 1})
}

void ApearWhiteDragon_Main() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'FadeType': 0, 'CommandLife': 2, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
    EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 17})

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Enemy_Dragon_Light_002.EventDoNothing({'IsWaitEnd': True})
    Enemy_Dragon_Darkness.EventPlayAS({'IsWaitEnd': False, 'ASName': 'BattleWaitOp', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'Switch': False, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

        call Setup_WhiteDragonHair()

    }
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ED_0001', 'FadeInTypeEventEnd': 0})
    GameSystemActor.EventEventFadeOut({'Length': 1, 'Color': 0, 'IsNoPlayAnime': True, 'IsWaitEnd': False})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'IsWaitEnd': True, 'Switch': True})
    Enemy_Dragon_Light_002.EventDragonEndRailMove()
    Enemy_Dragon_Light_002.EventPlayAS({'ASName': 'Dragon_Stop', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    Enemy_Dragon_Light_002.EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Color', 'IsWaitEnd': False, 'Partial': 'Color'})
    Enemy_Dragon_Light_002.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Dragon_Darkness', 'OffsetBase': 1, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 200.0], 'YAngle': 168.0})
    EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'EnvTimeTableName': 'Dm_GA_0023', 'ChangeSpeed': 4, 'IsWaitEnd': False, 'EnvPaletteName': ''})
    EventWorldManagerController[kaze].Event_SetWindForFlowchart({'Speed': 5.0, 'IsWaitEnd': False, 'Elevation': 0.0, 'Azimuth': 295.0, 'IsImmTrans': True})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Sword_070', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': ''})
        Player.EventPlayerRideDragon({'ActorName': 'Enemy_Dragon_Light_002', 'IsWaitEnd': True, 'InstanceName': '', 'ASCommand': ''})
        Event149:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ED_0002', 'FadeInTypeEventEnd': 2})
        Player.EventTriggerSetLifeForVSDragon({'GameDataName': 'MaxLifeForBeforeVSGanon'})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'DefeatBlackDragon', 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MainChallenge', 'IsIgnoreChallengeProgressUI': False})
        Enemy_Dragon_Light_002.EventTriggerDragonLightRequestOpAction()
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_DragonBattleOutsideA', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DefeatGanondorf_DragonBattleOutsideB'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'System_IsSaveTemporaryStorage', 'Value': True, 'Index': -1})
        GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'DefeatGanondorf_DragonBattle'})
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0023', 'FadeInTypeEventEnd': 2})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_SK_0003_PreRender', 'FadeInTypeEventEnd': 2})
        Enemy_Dragon_Light_002.EventTriggerDragonSetHairVisiblityStep({'Step': 2})
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Enemy_Dragon_Light_002', 'InstanceName': ''})
        Player.EventPlayerRideDragon({'ActorName': 'Enemy_Dragon_Light_002', 'IsWaitEnd': True, 'InstanceName': '', 'ASCommand': ''})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0025', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'IsDeleteMasterSwordLastBattle'})
        goto Event149
    }
}

void DefeatBlackDragon() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    Enemy_Dragon_Darkness_SecretStone.EventTriggerParticipateEvent()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Enemy_Dragon_Light_002.EventDoNothing({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GA_0027'})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWind_IsAbnormalWeather', 'Value': False})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'Sequence_ReservedBootEventName', 'Index': -1, 'Value': ''})
    EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 5})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ED_0003', 'FadeInTypeEventEnd': 2})

    call CheckArmor()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_ED_0003_SpiritualWorld'})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Player.EventPlayerSwitchEquipment({'IsWaitEnd': True, 'DisarmHeadGear': True, 'EquipmentUpperArmorName': 'Armor_1501_Upper', 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'DisarmUpperArmor': False, 'DisarmShield': True, 'DisarmBow': True, 'DisarmWeapon': False, 'EquipmentWeaponName': 'Weapon_Sword_070'})
    }

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventTriggerRemoveBreakLifeAllAndHealMax()
    Player.EventTriggerBuffTemporaryDisable()
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'ZeldaCatch_Start', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Fall', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player.EventTriggerPlayerRequestGlide()
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 4.369999885559082, -6.110000133514404], 'AtVector': [0.03999999910593033, 4.019999980926514, -5.170000076293945], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsMasterSwordTrueForm', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'PlayerStatus.IsForceDisableUseSpecialPower'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatGanondorf_IsAfter_Ready_Exp'}) {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'DefeatGanondorf', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True})
    }
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'MainChallenge', 'StepName': 'CatchZelda', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': True})
    GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'ZeldaCatch'})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ED_0012', 'FadeInTypeEventEnd': 0})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 10})
}

void Demo_EntrustUs() {
    SoundSystemActor.EventTriggerStartBgmSimple({'IsReleaseDucking': False, 'BGMName': 'BGM_Dm_GA_0009', 'CommandLife': 2})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 110})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0009', 'FadeInTypeEventEnd': 2})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0010', 'FadeInTypeEventEnd': 2})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0011', 'FadeInTypeEventEnd': 2})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0012', 'FadeInTypeEventEnd': 2})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0013', 'FadeInTypeEventEnd': 2})
    }
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_GA_0009', 'IsUseSuspendFade': False})
}

void ArmyBattle_Common() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_StartArmyBattle', 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerStopInAir({'IsWaitEnd': False, 'EnableCalcAnm': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-0.20000000298023224, 1.8300000429153442, -5.130000114440918], 'AtVector': [-0.05999999865889549, 1.840000033378601, 0.17000000178813934], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void ResetPlayerPos_Ganondorf() {
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_GanondorfBattle', 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.7200000286102295, 2.2100000381469727, -5.53000020980835], 'AtVector': [-0.5899999737739563, 2.140000104904175, -4.539999961853027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void PlayDemoOther() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0001', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmT_GA_SageHelpRT', 'IsReleaseDucking': False, 'CommandLife': 2})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 111})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GA_SageHelpRT'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GA_SageHelpGO'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GA_SageHelpZO'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GA_SageHelpGE'})
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'DmT_GA_SageHelpUG'})
    }
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_DmT_GA_SageHelpRT'})
}

void Defeat_RitoBoss() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_AppearRitoBoss', 'Value': False})
    Event110:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        Event111:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
            Event112:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Event113:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsCompleted_Exp'}) {
                    Event120:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MainChallenge_DefeatBlackZelda', 'Index': -1}) {
                        Event124:

                        call FinishArmyBattle()

                    } else {
                        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DefeatGanondorf_AppearPhantomGanon'})
                        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_PhantomGanon', 'ControlType2': 1})
                    }
                } else {
                    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DefeatGanondorf_AppearZonauBoss'})
                    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Zonau', 'ControlType2': 1})
                }
            } else {
                EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DefeatGanondorf_AppearGerudoBoss'})
                SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Gerudo', 'ControlType2': 1})
            }
        } else {
            EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DefeatGanondorf_AppearZoraBoss'})
            SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Zora', 'ControlType2': 1})
        }
    } else {
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DefeatGanondorf_AppearGoronBoss'})
        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 1, 'BgmName': 'BGM_LargeDungeonBoss_Goron'})
    }
}

void Defeat_GoronBoss() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_AppearGoronBoss', 'Value': False})
    goto Event111
}

void Defeat_GerudoBoss() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_AppearGerudoBoss', 'Value': False})
    goto Event113
}

void Defeat_ZoraBoss() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_AppearZoraBoss', 'Value': False})
    goto Event112
}

void Defeat_ZonauBoss() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DefeatGanondorf_AppearZonauBoss', 'Value': False})
    goto Event120
}

void FinishArmyBattle() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call BossBattle_Common.BossBattle_CommonA()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_ArmyGateOpen'})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_GA_0019'})

    call Demo_EntrustUs()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DefeatGanondorf_SageExist'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0014', 'FadeInTypeEventEnd': 2})
        goto Event165
    } else {
        Player.EventPlayerTurnAndLook({'WorldPos': [-244.05999755859375, -2358.22998046875, -822.52001953125], 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'TurnFaceControlType': 1})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
        goto Event52
    }
}

void Appear_UnDefeatBoss() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        goto Event110
    } else {
        EventSystemActor.EventTransition({'EventName': 'DefeatGanondorf_AppearRitoBoss', 'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Rito', 'ControlType2': 1})
    }
}

void Defeat_PhantomGanon() {

    call Sound_StopBgm_forUnDefeatBoss()


    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'DefeatGanondorf_AppearBlackZelda'})
    goto Event124
}

void DisappearSage() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Fire.IsSageDynamicGenerate', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Water.IsSageDynamicGenerate', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Electric.IsSageDynamicGenerate', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Soul.IsSageDynamicGenerate', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'PlayerStatus.Companion.Soul.IsFollowMode', 'Index': -1})
}

void Ganon2SageDown() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'Color': 0, 'Length': 0, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})

    call BossBattle_Common.BossBattle_CommonA()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GA_0026', 'FadeInTypeEventEnd': 0})
}

void Setup_WhiteDragonHair() {
    Enemy_Dragon_Light_002.EventTriggerDragonRequestCreateHairActor()
    Enemy_Dragon_Light_002.EventDragonControlHoldingActorVisible({'BindBoneName': 'Forehead_Sword_Hair', 'IsWaitEnd': True, 'IsVisible': True, 'RotOffset': [-90.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, -0.06340000033378601]})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Enemy_Dragon_Light_002.EventTriggerDragonSetHairVisiblityStep({'Step': 1})
    Enemy_Dragon_Light_Hair.EventPlayAS({'ASName': 'Hair_Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
}

void SageFlagSetting() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        Event346:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
            Event347:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                Event348:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Event349:
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSoul_IsCompleted_Exp'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Soul.IsSageDynamicGenerate'})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Soul.IsFollowMode'})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Electric.IsSageDynamicGenerate'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Electric.IsFollowMode'})
                    goto Event349
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Water.IsSageDynamicGenerate'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode'})
                goto Event348
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Fire.IsSageDynamicGenerate', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Fire.IsFollowMode'})
            goto Event347
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode'})
        goto Event346
    }
}

void ArmyBattle_Common_First() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_StartArmyBattle', 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerStopInAir({'IsWaitEnd': False, 'EnableCalcAnm': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.03999999910593033, 0.8700000047683716, -3.940000057220459], 'AtVector': [0.0, 1.7999999523162842, -0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CheckArmor() {
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Armor_1501_Upper', 'Num': 1, 'IsEquipDIrect': True, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
    Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1036_Head', 'ArmorSlot': 0}) {
        Event450:
        Player.EventPlayerSwitchEquipment({'IsWaitEnd': True, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'DisarmUpperArmor': False, 'DisarmShield': True, 'DisarmBow': True, 'DisarmWeapon': False, 'DisarmLowerArmor': True, 'DisarmHeadGear': False, 'EquipmentWeaponName': '', 'EquipmentUpperArmorName': ''})
        Event451:
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1037_Head', 'ArmorSlot': 0}) {
        goto Event450
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1038_Head', 'ArmorSlot': 0}) {
        goto Event450
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1039_Head', 'ArmorSlot': 0}) {
        goto Event450
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1040_Head', 'ArmorSlot': 0}) {
        goto Event450
    } else {
        Player.EventPlayerSwitchEquipment({'IsWaitEnd': True, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'DisarmUpperArmor': False, 'DisarmShield': True, 'DisarmBow': True, 'DisarmWeapon': False, 'DisarmHeadGear': False, 'EquipmentWeaponName': '', 'EquipmentUpperArmorName': ''})
    }
    goto Event451
}

void Sound_StopBgm_forUnDefeatBoss() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}

void ApearWhiteDragon() {

    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'EventName': 'MainChallenge_ApearWhiteDragon_Main', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    EventWorldManagerController[kaze].Event_ResetWindForFlowchart({'IsImmTrans': False, 'IsWaitEnd': False})
    GameSystemActor.EventSaveTemporarySave({'GameSafetySetting': 'DefeatGanondorf_DragonBattle', 'IsWaitEnd': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'PlayerToInGame', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0, 'KeepOneTimeAnm': True})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'ToIngame', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': True})
    EventCamera.EventTriggerReserveDelayEventAfterConnect()
}
