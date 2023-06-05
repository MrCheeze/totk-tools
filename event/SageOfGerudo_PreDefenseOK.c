-------- EventFlow: SageOfGerudo_PreDefenseOK --------

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventSoundWaitForEventSoundFinished']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerRequestAutoSave', 'EventTriggerCloseCompanionLifeGauge', 'EventTriggerLeaveGameSafetySection', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_SmallOasis011
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_OasisStep_B
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_SmallOasis013
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Gerudo001
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Gerudo002
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_SmallOasis014
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTriggerRecoverFainted', 'EventTriggerHealLifeMax', 'EventWait', 'EventPlayAS', 'EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_KarakaraDefense', 'IsUseSuspendFade': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_InBattle'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'SageOfGerudo_RougeLightningOn'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MapData.IsGerudoIconEnable'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MapData.IsMiniMapForceZoomIn', 'Value': False})
    GameSystemActor.EventTriggerCloseCompanionLifeGauge({'IsDirect': True})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_KaraBazaAfter', 'FadeInTypeEventEnd': 2})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-3324.8720703125, 129.92149353027344, 2574.14501953125], 'YAngle': -45.0, 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3321.14990234375, 131.05999755859375, 2571.760009765625], 'AtVector': [-3321.97998046875, 131.2100067138672, 2572.2900390625], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfGerudo', 'StepName': 'PreDefenseEnd', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    SoundSystemActor.EventSoundWaitForEventSoundFinished({'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SageOfGerudo_PreDefenseAfterDeploy', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void DeployNpc() {

    fork {
        Npc_SmallOasis011.EventTriggerParticipateEvent()
        Npc_SmallOasis011.EventTriggerHealLifeMax()
        Npc_SmallOasis011.EventTriggerRecoverFainted()
        Npc_SmallOasis011.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_SmallOasis011.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_SmallOasis011.EventTriggerForceSetRecentTalkFlag({'value': False})
    } {
        Npc_OasisStep_B.EventTriggerParticipateEvent()
        Npc_OasisStep_B.EventTriggerHealLifeMax()
        Npc_OasisStep_B.EventTriggerRecoverFainted()
        Npc_OasisStep_B.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 4, 'ActionType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_OasisStep_B.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_OasisStep_B.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_OasisStep_B.EventTriggerForceSetRecentTalkFlag({'value': False})
    } {
        Npc_SmallOasis013.EventTriggerParticipateEvent()
        Npc_SmallOasis013.EventTriggerHealLifeMax()
        Npc_SmallOasis013.EventTriggerRecoverFainted()
        Npc_SmallOasis013.EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_SmallOasis013.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_SmallOasis013.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_SmallOasis013.EventTriggerForceSetRecentTalkFlag({'value': False})
    } {
        Npc_SmallOasis014.EventTriggerParticipateEvent()
        Npc_SmallOasis014.EventTriggerHealLifeMax()
        Npc_SmallOasis014.EventTriggerRecoverFainted()
        Npc_SmallOasis014.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_SmallOasis014.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_SmallOasis014.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_SmallOasis014.EventTriggerForceSetRecentTalkFlag({'value': False})
    } {
        Npc_BaseCamp_Gerudo001.EventTriggerParticipateEvent()
        Npc_BaseCamp_Gerudo001.EventTriggerHealLifeMax()
        Npc_BaseCamp_Gerudo001.EventTriggerRecoverFainted()
        Npc_BaseCamp_Gerudo001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 16, 'ActionType': 8, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_BaseCamp_Gerudo001.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_BaseCamp_Gerudo001.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_BaseCamp_Gerudo001.EventTriggerForceSetRecentTalkFlag({'value': False})
    } {
        Npc_BaseCamp_Gerudo002.EventTriggerParticipateEvent()
        Npc_BaseCamp_Gerudo002.EventTriggerHealLifeMax()
        Npc_BaseCamp_Gerudo002.EventTriggerRecoverFainted()
        Npc_BaseCamp_Gerudo002.EventAIScheduleWarpToAnchor({'AnchorType': 18, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_BaseCamp_Gerudo002.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        Npc_BaseCamp_Gerudo002.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_BaseCamp_Gerudo002.EventTriggerForceSetRecentTalkFlag({'value': False})
    }

}
