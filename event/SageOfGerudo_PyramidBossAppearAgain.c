-------- EventFlow: SageOfGerudo_PyramidBossAppearAgain --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerChangeAIScheduleEquipState', 'EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Gerudo[Boss2]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventEventFadeOut', 'EventWarpSoulFollowersFormationPos', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGMwithInput', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.AirStartUP_Player()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DungeonBossAppearAgain'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Gerudo', 'InstanceName': 'Boss2', 'IsWaitEnd': True})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 1, 'EquipmentState': 2})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
    Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 135.0, 'Position': [-4511.18408203125, 232.71499633789062, 3603.280029296875], 'IsWaitEnd': False, 'UseDemoWait': True})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetPosAndRot({'YAngle': 135.0, 'IsWaitEnd': False, 'Position': [-4511.0400390625, 232.73599243164062, 3601.889892578125]})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'BeforeBattleWait'})
    Enemy_DungeonBoss_Gerudo[Boss2].EventWarpToTargetPosAndRot({'YAngle': -45.0, 'Position': [-4494.77001953125, 232.6649932861328, 3587.77001953125], 'IsWaitEnd': False})
    Enemy_DungeonBoss_Gerudo[Boss2].EventDoNothing({'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'PosVector': [-4526.080078125, 233.0070037841797, 3609.4541015625], 'AtVector': [-4525.22021484375, 233.10890197753906, 3608.947998046875], 'TargetFovy': 13.708999633789062, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GE_0029'})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_LargeDungeonBoss_Gerudo', 'ControlType2': 0})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayASForTimelineToInGame({'Partial': '', 'IsAllSlot': False, 'ASName': 'BeforeBattleWait'})
    Enemy_DungeonBoss_Gerudo[Boss2].EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}
