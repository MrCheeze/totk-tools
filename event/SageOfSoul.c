-------- EventFlow: SageOfSoul --------

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerRaumiGolemHeadLightOff', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal00]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head[HeadParts01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_RaumiLabo_A_04[DgnObj_BossBattle_01]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerProgressChallengeStep', 'EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventEventFadeOut', 'EventWarpSoulFollowersFormationPos', 'EventTriggerRequestAutoSave', 'EventWaitForActorPresence', 'EventTriggerCloseCompanionLifeGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerStopInAir', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventTriggerPlayerRequestKeepLifting', 'EventTriggerPlayerRideRobot', 'EventTriggerPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerClimbOff']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataEnum', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_EntranceDoor_B_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zonau
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Obj_ZonauContainer_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head_B
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerSoundControlBGMwithInput', 'EventTriggerStopInGameBgm', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_RaumiLabo_A_08[DgnObj_BossBattle_02]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void SageOfSoul_Event_ChallengeStart() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal00].EventTriggerParticipateEvent()
    RaumiGolem_Parts_Head.EventTriggerParticipateEvent()
    Obj_Zonau_EntranceDoor_B_02.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_Ready_Exp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_BackHatchOpened'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_TouchedHeadPart'})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0009', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Value': 'Beam_CheckPoint01', 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_HatchOpened', 'Value': True, 'Index': -1})
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'ExamineParts', 'IsWaitEnd': True, 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'ActorName': 'RaumiGolem_Parts_Head', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'TurnFaceControlType': 1})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [1367.498046875, 539.6589965820312, 3254.883056640625], 'AtVector': [1365.5179443359375, 538.5150756835938, 3259.070068359375], 'TargetFovy': 25.75316047668457, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Obj_Zonau_EntranceDoor_B_02.EventPlayAS({'ASName': 'Open_Wait', 'IsAllSlot': True, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0})
        Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal00].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0, 'ASName': 'Base_Turn', 'Partial': '', 'IsAllSlot': True})
        Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal00].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Release', 'Partial': 'Lock', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call SageOfSoul_Event_CarriedTutorial()

    } else {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [1364.43994140625, 539.97998046875, 3269.610107421875], 'AtVector': [1364.050048828125, 538.1900024414062, 3263.659912109375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'MoveTime': 30})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'RaumiGolem_Parts_Head', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        SystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SageOfSoul:Talk0063', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    }
}

void SageOfSoul_Event_CarriedCheckPoint01() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
        }
        Event204:
        GameSystemActor.EventTriggerRequestAutoSave()
        EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZN_0067', 'IsWaitEnd': True, 'SpecialEventActionType': 1})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'CarryHead_CheckPoint02', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
    } else {
        Player.EventTriggerPlayerRequestKeepLifting()
        goto Event204
    }
}

void SageOfSoul_Event_CarriedCheckPoint02() {
    RaumiGolem_Parts_Head[HeadParts01].EventTriggerParticipateEvent()
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal01].EventTriggerParticipateEvent()
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
        }
        Event223:
        GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True})
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'LoadMinusFieldForceCounter', 'Value': 1, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Index': -1, 'Value': 'Ready'})
        GameSystemActor.EventTriggerRequestAutoSave()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0013', 'FadeInTypeEventEnd': 2})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_Elevator_Start', 'Value': True, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_RaumiHeadParts_YUpConst', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_Elevator_End', 'Index': -1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call ToUnderground()

    } else {

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event223
    }
}

void SageOfSoul_Event_CarriedCheckPoint04() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)'})
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }
    GameSystemActor.EventTriggerRequestAutoSave()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_Collected_Head', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Index': -1, 'Value': 'Complete'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    RaumiGolem_Parts_Head_B.EventTriggerParticipateEvent()

    call Common.SnappingInterval()

    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0015'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_InsertHeadParts'})
}

void SageOfSoul_Event_CarriedTutorial() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 60, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.09000000357627869, 4.650000095367432, -4.630000114440918], 'AtVector': [0.0, 1.7999999523162842, -0.05000000074505806], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_Departed_Npc_HatenoGate001', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ZonauRemains_AppearsSkyIsland'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_OpenedTheDoor'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'GotoFironeZonauRemains', 'StepName': 'Complete', 'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        Event10:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'CarryHead_CheckPoint01', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_PedestalLock', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfSoul_RaumiHeadParts_YUpConst', 'Value': False})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClueTotheSixthSage_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'ClueTotheSixthSage', 'StepName': 'ZonauChallenge', 'IsWaitEnd': True})
        }
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
        ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SageOfSoul', 'IsRestoreWhenEventEnd': False})
    } else {
        goto Event10
    }
}

void ToUnderground() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.5399999618530273, 1.7999999523162842, -5.059999942779541], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [868.1179809570312, -445.9440002441406, 2231.030029296875], 'UseDemoWait': True})
    }

    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'LoadMinusFieldForceCounter', 'Value': -1, 'Index': -1})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0053'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_CheckPoint02_AfterSaveLoad', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'CarryHead_CheckPoint04', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
}

void SageOfSoul_Event_InsertRightArm0() {

    call Common.SnappingInterval()

    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0016'})
}

void SageOfSoul_Event_InsertLeftArm0() {

    call Common.SnappingInterval()

    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0017'})
}

void SageOfSoul_Event_InsertRightLeg0() {
    Obj_ZonauContainer_A_03.EventTriggerParticipateEvent()
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.SnappingInterval()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0018'})
}

void SageOfSoul_Event_InsertLeftLeg0() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.SnappingInterval()


    call Common.AirStartUP_Player()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0019'})
}

void SageOfSoul_Event_SatelliteTempleDoor_EventCamera() {
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0049'})
}

void SageOfSoul_Event_SatelliteTempleDoor_EventCameraLArm() {
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0050'})
}

void SageOfSoul_Event_SatelliteTempleDoor_EventCameraRLeg() {
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0051'})
}

void SageOfSoul_Event_SatelliteTempleDoor_EventCameraLLeg() {
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 0, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZN_0052'})
}

void SageOfSoul_Event06_DungeonBoss_Defeated() {
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})
    GameSystemActor.EventTriggerRequestAutoSave()

    call BossBattle_Common.StopLowLayerBgm()


    call SageOfSoul_Sub_LargeDungeon_Clear.Event_DungeonBoss_Defeated()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Dungeon_DefeatedBoss', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void SageOfSoul_Event_ToTheBossStep() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_DungeonBoss_Appeared', 'Index': -1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Npc_RaumiGolem_Sage', 'InstanceName': 'DynamicGenerateSage', 'IsWaitEnd': True})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
    Player.EventTriggerParticipateEvent()
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'RobotWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1366.89404296875, -631.9600219726562, 3312.717041015625], 'YAngle': 160.18499755859375, 'UseDemoWait': True})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'Position': [1367.0479736328125, -637.0, 3312.291015625], 'YAngle': 160.0, 'IsWaitEnd': True})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'AlertWait'})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Mat_Normal', 'Partial': 'SkinColor'})
    Enemy_DungeonBoss_Zonau.EventDoNothing({'IsWaitEnd': True})
    Enemy_DungeonBoss_Zonau.EventWarpToTargetPosAndRot({'Position': [1372.5970458984375, -637.0, 3297.0439453125], 'YAngle': -20.0, 'IsWaitEnd': True})
    Enemy_DungeonBoss_Zonau.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'TargetFovy': 59.5, 'AtVector': [1364.8790283203125, -628.989013671875, 3318.4951171875], 'PosVector': [1364.5579833984375, -628.6480102539062, 3319.37890625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    DgnObj_RaumiLabo_A_08[DgnObj_BossBattle_02].EventPlayAS({'ASName': 'Default_Wait', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    DgnObj_RaumiLabo_A_04[DgnObj_BossBattle_01].EventPlayAS({'ASName': 'Default_Wait', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_ZN_BossIn', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Zonau', 'ControlType2': 0})

    fork {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayASForTimelineToInGame({'Partial': '', 'IsAllSlot': False, 'ASName': 'AlertWait'})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayASForTimelineToInGame({'IsAllSlot': False, 'ASName': 'Mat_Normal', 'Partial': 'SkinColor'})
    } {
        Enemy_DungeonBoss_Zonau.EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': True})
        Enemy_DungeonBoss_Zonau.EventPlayASForTimelineToInGame({'ASName': 'Arm_Off', 'IsAllSlot': False, 'Partial': 'SubArm'})
    } {
        Player.EventTriggerPlayerRideRobot({'ActorName': 'Npc_RaumiGolem_Sage', 'InstanceName': 'DynamicGenerateSage'})
        Player.EventTriggerPlayerWarpToNearAnchorWithRidableActor({'InstanceName': 'BossBattle', 'ActorName': 'DestinationAnchor'})
    }

    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Dungeon_BeforeBossBattle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul', 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'TargetFovy': 59.5, 'AtVector': [1364.8790283203125, -628.989013671875, 3318.4951171875], 'PosVector': [1364.5579833984375, -628.6480102539062, 3319.37890625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event179:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Dungeon_BeforeBossBattle', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul'})
        goto Event179
    }
}

void SageOfSoul_Event_GotSecretStone() {
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
    GameSystemActor.EventTriggerRequestAutoSave()

    call SageOfSoul_Sub_LargeDungeon_Clear.Event_GotSecretStone()

}
