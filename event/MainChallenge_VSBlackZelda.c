-------- EventFlow: MainChallenge_VSBlackZelda --------

Actor: Enemy_PhantomGanon[PhantomGanon_00]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerOnMotionTypeStatic', 'EventPlayerOffMotionTypeStatic']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventTriggerDisableAutoSavePausing', 'EventWarpSoulFollowersFormationPos', 'EventWaitForActorPresence', 'EventWait', 'EventWaitForActorPresenceCondition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_HyruleCastle_Battle_A_01
entrypoint: None()
actions: ['EventTriggerSetModelUnitVisible', 'EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGMwithInput', 'EventTriggerStopInGameBgm', 'EventTriggerSoundRequestWaitSetupNextEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void BlackZeldaBattleStart() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'DefeatBlackZelda', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_After_Demo_BlackZeldaBossIn', 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerOnMotionTypeStatic()
    Enemy_PhantomGanon[PhantomGanon_00].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-254.0, 444.18499755859375, -1066.696044921875], 'YAngle': 0.0})
    Enemy_PhantomGanon[PhantomGanon_00].EventDoNothing({'IsWaitEnd': False})
    Enemy_PhantomGanon[PhantomGanon_00].EventPlayAS({'ASName': 'Wait', 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.6100000143051147, 2.9000000953674316, -5.949999809265137], 'AtVector': [-0.5099999904632568, 2.7200000286102295, -4.96999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'TwnObj_HyruleCastle_Battle_A_01', 'InstanceName': ''})
    Player.EventPlayerOffMotionTypeStatic()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_BZ_BossIn', 'FadeInTypeEventEnd': 0})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_PhantomGanon', 'ControlType2': 0})
    Enemy_PhantomGanon[PhantomGanon_00].EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        TwnObj_HyruleCastle_Battle_A_01.EventTriggerParticipateEvent()
        TwnObj_HyruleCastle_Battle_A_01.EventTriggerSetModelUnitVisible({'IsVisible': False, 'SearchKey': 'current'})
        TwnObj_HyruleCastle_Battle_A_01.EventTriggerSetModelUnitVisible({'IsVisible': True, 'SearchKey': 'past'})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_StatueVisible', 'Value': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event19:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsMasterSwordTrueForm'})
    } else {
        goto Event19
    }
}

void BlackZeldaDefeat() {

    call BossBattle_Common.StopLowLayerBgm()


    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call BossBattle_Common.BossBattle_CommonA()

    EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'ReturnBCAfterBlackZelda', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MainChallenge_DefeatBlackZelda'})
    Player.EventPlayerOnMotionTypeStatic()
    GameSystemActor.EventWaitForActorPresenceCondition({'ActorName': 'MergedActorUnifiedPrefab', 'PresenceGameDataName': 'HyruleCastleIncident_Equal_DefeatBlackZelda_Exp', 'PresenceFlagNegate': True, 'IsWaitEnd': True})
    Player.EventPlayerOffMotionTypeStatic()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastle_StatueVisible', 'Value': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_BZ_BossOut', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_BZ_0005_PreRender', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_BZ_GoBackBC', 'FadeInTypeEventEnd': 2})
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_After_Demo_GoBackBC', 'UseDemoWait': True})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.6100000143051147, 2.9000000953674316, -5.949999809265137], 'AtVector': [-0.5099999904632568, 2.7200000286102295, -4.96999979019165], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsMasterSwordTrueForm', 'Value': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})

    call DragonMemoryCommonFlow.OpenPlayButton({'OpenCondition': 34})

    GameSystemActor.EventTriggerDisableAutoSavePausing()
    GameSystemActor.EventTriggerRequestAutoSave()
}
