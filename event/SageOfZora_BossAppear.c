-------- EventFlow: SageOfZora_BossAppear --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestChangeState', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS', 'EventSageWarpToNearAnchor', 'EventTriggerRequestLookAtTheFront', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'UseEventAS': '', 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventWarpSoulFollowersFormationPos', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zora
entrypoint: None()
actions: ['EventDungeonBossZoraReadyAdventDemo', 'EventPlayAS', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zora_Bullet_Shark
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelSetVisible', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zora_Bullet_SharkFin
entrypoint: None()
actions: ['EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGMwithInput', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'StartBossPos', 'UseDemoWait': True})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventSageWarpToNearAnchor({'ActorName': 'AnchorAction2', 'InstanceName': 'StartBossShidoPos', 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfZora_DungeonEvent01'})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Zora', 'IsWaitEnd': True, 'InstanceName': ''})
    Enemy_DungeonBoss_Zora.EventDungeonBossZoraReadyAdventDemo({'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Zora_Bullet_Shark', 'IsWaitEnd': True, 'InstanceName': ''})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Zora_Bullet_SharkFin', 'IsWaitEnd': True, 'InstanceName': ''})
    Enemy_DungeonBoss_Zora.EventDoNothing({'IsWaitEnd': True})
    Enemy_DungeonBoss_Zora.EventPlayAS({'ASName': 'AttackSharkSwim', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventPlayAS({'ASName': 'SharkSwim', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventTriggerModelSetVisible({'IsVisible': False})
    Enemy_DungeonBoss_Zora_Bullet_SharkFin.EventPlayAS({'ASName': 'FinSharkSwim', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 31.894636154174805, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [3359.112060546875, 1849.9620361328125, -761.02001953125], 'AtVector': [3359.60595703125, 1849.93505859375, -760.1519775390625], 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PlayerStatus.Companion.Water.IsSageDynamicGenerate'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_BossInDemoTarVisible', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'DefeatBoss', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'BeforeBattleWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmT_ZO_BossIn'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_BossInDemoTarVisible', 'Value': False, 'Index': -1})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Zora', 'ControlType2': 0})
    SoundSystemActor.EventSoundReleaseDucking({'IsImmediately': True, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayASForTimelineToInGame({'ASName': 'BeforeBattleWait', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Zora.EventPlayASForTimelineToInGame({'ASName': 'AttackSharkSwim', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventPlayASForTimelineToInGame({'ASName': 'SharkSwim', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Zora_Bullet_SharkFin.EventPlayASForTimelineToInGame({'ASName': 'FinSharkSwim', 'Partial': '', 'IsAllSlot': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfZora_WashSecretStone'})
}
