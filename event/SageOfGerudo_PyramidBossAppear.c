-------- EventFlow: SageOfGerudo_PyramidBossAppear --------

Actor: Enemy_DungeonBoss_Gerudo[Boss1]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDoNothing', 'EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerEquipmentUserRequestChangeState', 'EventTriggerChangeAIScheduleEquipState', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'TextureReplaceType': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventEventFadeOut', 'EventWarpSoulFollowersFormationPos', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
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
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfGerudo_DungeonBossAppear'})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 1, 'EquipmentState': 2})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -34.30099868774414, 'Position': [-4339.85986328125, 132.24200439453125, 3437.716064453125], 'UseDemoWait': True})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -46.369998931884766, 'Position': [-4339.3828125, 132.0373992919922, 3439.839111328125]})
    Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'BeforeBattleWait'})
    Enemy_DungeonBoss_Gerudo[Boss1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 134.85800170898438, 'Position': [-4353.26611328125, 131.3730010986328, 3452.2041015625]})
    Enemy_DungeonBoss_Gerudo[Boss1].EventDoNothing({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 10.0, 'LongShiftRange': 10.0, 'PosVector': [-4326.31591796875, 133.15899658203125, 3425.955078125], 'AtVector': [-4327.0341796875, 133.216796875, 3426.64892578125], 'TargetFovy': 13.713899612426758, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'DmT_GE_BossIn', 'FadeInTypeEventEnd': 2})
    SoundSystemActor.EventTriggerSoundControlBGMwithInput({'ControlType2': 0, 'BgmName': 'BGM_LargeDungeonBoss_Gerudo_First'})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        Enemy_DungeonBoss_Gerudo[Boss1].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ASName': 'BeforeBattleWait', 'ForceFadeInFrame': 0.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Event1:
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        Enemy_DungeonBoss_Gerudo[Boss1].EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayASForTimelineToInGame({'Partial': '', 'IsAllSlot': False, 'ASName': 'BeforeBattleWait'})
        goto Event1
    }
}
