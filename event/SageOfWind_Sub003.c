-------- EventFlow: SageOfWind_Sub003 --------

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestChangeState', 'EventTriggerChangeAIScheduleEquipState', 'EventSageWarpToNearAnchor', 'EventNpcRitoTakeOff', 'EventPlayAS', 'EventPlayASForTimelineToInGame', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerDisapperAbnormalWeather', 'EventDisapperRitoVillageSnow', 'EventDisapperRitoPlazaSnow']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWait', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWarpToNearAnchor', 'EventTriggerPlayerRequestGlide', 'EventPlayerPlayASForFlowchart', 'EventPlayerGlide']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait', 'EventReserveBancChange', 'EventWarpSoulFollowersFormationPos', 'EventResetForbidTraverse', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor', 'EventEventFadeIn', 'EventOpenInstantTips', 'EventTriggerEnableAreaCulling', 'EventTriggerDisableAreaCulling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Rito
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[TouchSecretStone]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventSetMaterialVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_ValleyVillage010
entrypoint: None()
actions: ['EventTriggerChangeAIScheduleEquipState', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain005
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain009[Finish]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Tulin_Sage[Village]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Rito_EventStarter
entrypoint: None()
actions: ['EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundRequestWaitSetupNextEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void SageOfWind_BossBattle_Sub() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 3, 'EquipmentState': 2})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'LargeDungeonWind_OffAscending'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'LargeDungeonWind_ApppearBoss', 'Index': -1})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Enemy_DungeonBoss_Rito.EventTriggerParticipateEvent()
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'WindBossStart', 'IsWaitEnd': False, 'UseDemoWait': True})
    Npc_Tulin_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction1', 'InstanceName': 'WindBossStart_Tulin', 'IsWaitEnd': False})
    Enemy_DungeonBoss_Rito.EventDoNothing({'IsWaitEnd': False})
    Enemy_DungeonBoss_Rito.EventWarpToTargetPosAndRot({'Position': [-2920.0, 1800.0, -3000.0], 'YAngle': 320.0, 'IsWaitEnd': False})
    Enemy_DungeonBoss_Rito.EventPlayAS({'ASName': 'Fly', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'PosVector': [-2857.698974609375, 2013.405029296875, -2902.27587890625], 'AtVector': [-2857.883056640625, 2012.4520263671875, -2902.51708984375], 'TargetFovy': 44.4119987487793, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Tulin_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'BeforeBattleWait'})
    Npc_Tulin_Sage[DynamicGenerateSage].EventNpcRitoTakeOff({'FlagOnly': True, 'IsWaitEnd': False})
    Player.EventPlayerGlide({'IsWaitEnd': False, 'ASCommand': ''})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Glide', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmT_RT_BossIn'})
    GameSystemActor.EventTriggerDisableAreaCulling()
    Player.EventTriggerPlayerRequestGlide()
    Npc_Tulin_Sage[DynamicGenerateSage].EventPlayASForTimelineToInGame({'ASName': 'BeforeBattleWait', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Rito.EventPlayASForTimelineToInGame({'ASName': 'Fly', 'Partial': '', 'IsAllSlot': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'StepName': 'DefeatBoss', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
}

void SageOfWind_ChangeBoss_Sub() {
    Enemy_DungeonBoss_Rito.EventTriggerParticipateEvent()
    Npc_Tulin_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_RT_0017'})
}

void SageOfWind_DefeatBoss_Sub() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0045', 'FadeInTypeEventEnd': 2})

    call BossBattle_Common.BossBattle_CommonA()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LargeDungeonWind_Clean_BossUpDraft', 'Index': -1, 'Value': True})
    GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_RT_BossOut', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventTriggerDisableAreaCulling()
    DungeonBoss_Rito_EventStarter.EventTriggerDeathSignal()
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'StepName': 'TouchSecretStone', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate'})

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 180.0, 'Position': [-2859.5, 1622.3699951171875, -2977.5], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVector': [0.0, 3.0, -5.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void SageOfWind_TouchSecretStone_Sub() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_RT_StoneGet', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_RT_StoneMind', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_RT_0022_PreRender'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0023', 'FadeInTypeEventEnd': 2})
    Npc_Tulin_Sage[TouchSecretStone].EventSetMaterialVisible({'MaterialName': 'Mt_SecretStone_Wind', 'IsVisible': True, 'IsWaitEnd': True, 'ModelAccessIndex': 0})
    Npc_Tulin_Sage[TouchSecretStone].EventSetMaterialVisible({'IsVisible': True, 'MaterialName': 'Mt_Anklet', 'IsWaitEnd': True, 'ModelAccessIndex': 0})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_RT_Awake', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventTriggerDisableAreaCulling()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSageDynamicGenerate', 'Value': False})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'StepName': 'Finish', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextBanc': 'MainField', 'NextStartPos': 'SageOfWindFinish', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'SageOfWind_GrandFinale', 'FadePattern': 1})
}

void SageOfWind_GetSageSoul_Sub() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SageSoul_Rito'})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Wind.IsGet', 'Value': True, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsSummon'})

    call Common.OpenActionGuideScreen({'ActionGuideType': 25})

    GameSystemActor.EventOpenInstantTips({'InstantTipwType': 38, 'IsWaitEnd': True})
}

void TouchSecretStone_Npc_Tulin_Sage_TouchSecretStone_Near_Sub() {
    Npc_Tulin_Sage[TouchSecretStone].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SageOfWind:TouchSecretStone_Near01', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void SageOfWind_GrandFinale_Sub() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0018', 'FadeInTypeEventEnd': 2})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        GameSystemActor.EventResetForbidTraverse()
        ChallengeSystemActor.EventTriggerDisapperAbnormalWeather()
        ChallengeSystemActor.EventDisapperRitoVillageSnow({'IsWaitEnd': True})
        ChallengeSystemActor.EventDisapperRitoPlazaSnow({'IsWaitEnd': True})
        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 9})
    }

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmF_RT_GrandFinale', 'FadeInTypeEventEnd': 2})
    Npc_Tulin_Sage[Village].EventTriggerParticipateEvent()
    Npc_HighMountain005.EventTriggerParticipateEvent()
    Npc_HighMountain009[Finish].EventTriggerParticipateEvent()
    Npc_ValleyVillage010.EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_ValleyVillage010.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Npc_Tulin_Sage'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfWind_WarpDelete', 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfWind', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

    call MainChallenge.Check_4Sage()

    GameSystemActor.EventTriggerRequestAutoSave()
}
