-------- EventFlow: DefeatGanondorf_AppearBoss --------

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

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTraverseAroundAndWaitCreateActor', 'EventWait', 'EventWarpSageFollowersFormationPos', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Rito_Uncleared
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerReserveChangeConnectionTimingAfterEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zora_Uncleared
entrypoint: None()
actions: ['EventDungeonBossZoraReadyAdventDemo', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [0.0, 0.0, 0.0], 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Goron_Uncleared
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventDungeonBossGoronSetLegVisibleTrue', 'EventPlayASForTimelineToInGame']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zonau_Uncleared
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Enemy_PhantomGanon[PhantomGanon_00]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_ThirdWeapon': '', 'EquipmentUser_ThirdWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Gerudo_Uncleared[Boss2]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventPlayASForTimelineToInGame']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False, 'EventMemberCreateMethod': 4}

Actor: Enemy_DungeonBoss_Zora_Bullet_Shark
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelSetVisible', 'EventPlayASForTimelineToInGame']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Enemy_DungeonBoss_Zora_Bullet_SharkFin
entrypoint: None()
actions: ['EventPlayAS', 'EventDoNothing', 'EventPlayASForTimelineToInGame']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopPreDieBossSound', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Appear_RitoBoss() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearRitoBoss'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_DungeonBoss_Rito_Uncleared', 'IsWaitEnd': True, 'InstanceName': ''})
    Player.EventPlayerWarpToTargetPosAndRot({'Position': [-252.49220275878906, -2367.1298828125, -771.6201171875], 'YAngle': 0.0, 'IsWaitEnd': False, 'UseDemoWait': True})
    Enemy_DungeonBoss_Rito_Uncleared.EventDoNothing({'IsWaitEnd': False})
    Enemy_DungeonBoss_Rito_Uncleared.EventWarpToTargetPosAndRot({'YAngle': 90.0, 'Position': [-132.5050048828125, -2236.5009765625, -563.3242797851562], 'IsWaitEnd': False})
    Enemy_DungeonBoss_Rito_Uncleared.EventPlayAS({'ASName': 'Fly', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [-252.83799743652344, -2367.050048828125, -776.1849975585938], 'TargetFovy': 41.7140007019043, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'AtVector': [-252.57000732421875, -2635.550048828125, -771.8599853515625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0003'})
    Enemy_DungeonBoss_Rito_Uncleared.EventPlayASForTimelineToInGame({'ASName': 'Fly', 'Partial': '', 'IsAllSlot': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': False})
}

void Appear_GoronBoss() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearGoronBoss'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Enemy_DungeonBoss_Goron_Uncleared'})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-253.32899475097656, -2367.14990234375, -772.7059936523438], 'YAngle': 0.0, 'UseDemoWait': True})
    Enemy_DungeonBoss_Goron_Uncleared.EventWarpToTargetPosAndRot({'Position': [-253.16799926757812, -2366.889892578125, -726.3800048828125], 'YAngle': 180.0, 'IsWaitEnd': True})
    Enemy_DungeonBoss_Goron_Uncleared.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-251.48599243164062, -2366.760009765625, -778.948974609375], 'AtVector': [-251.5659942626953, -2366.570068359375, -777.9710083007812], 'TargetFovy': 25.753000259399414, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0004'})
    Enemy_DungeonBoss_Goron_Uncleared.EventDungeonBossGoronSetLegVisibleTrue()
    Enemy_DungeonBoss_Goron_Uncleared.EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
}

void Appear_ZoraBoss() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearZoraBoss'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Enemy_DungeonBoss_Zora_Uncleared'})
    Enemy_DungeonBoss_Zora_Uncleared.EventDungeonBossZoraReadyAdventDemo({'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Enemy_DungeonBoss_Zora_Uncleared.EventDoNothing({'IsWaitEnd': False})
    Enemy_DungeonBoss_Zora_Bullet_SharkFin.EventDoNothing({'IsWaitEnd': False})
    Enemy_DungeonBoss_Zora_Uncleared.EventPlayAS({'ASName': 'AttackSharkSwim', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventPlayAS({'ASName': 'SharkSwim', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_DungeonBoss_Zora_Bullet_SharkFin.EventPlayAS({'ASName': 'FinSharkSwim', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventTriggerModelSetVisible({'IsVisible': False})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-250.02000427246094, -2367.260009765625, -755.3679809570312], 'YAngle': 18.85300064086914, 'UseDemoWait': True})
    Enemy_DungeonBoss_Zora_Uncleared.EventWarpToTargetPosAndRot({'Position': [-245.33999633789062, -2366.889892578125, -741.6539916992188], 'YAngle': -155.43499755859375, 'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-254.9040069580078, -2366.820068359375, -760.3989868164062], 'AtVector': [-254.34500122070312, -2366.72998046875, -759.5750122070312], 'TargetFovy': 18.547000885009766, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopPreDieBossSound()


    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0005'})
    Enemy_DungeonBoss_Zora_Uncleared.EventPlayASForTimelineToInGame({'ASName': 'AttackSharkSwim', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Zora_Bullet_Shark.EventPlayASForTimelineToInGame({'ASName': 'SharkSwim', 'Partial': '', 'IsAllSlot': False})
    Enemy_DungeonBoss_Zora_Bullet_SharkFin.EventPlayASForTimelineToInGame({'ASName': 'FinSharkSwim', 'Partial': '', 'IsAllSlot': False})
}

void Appear_GerudoBoss() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearGerudoBoss'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Enemy_DungeonBoss_Gerudo_Uncleared', 'InstanceName': 'Boss2'})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-250.55419921875, -2366.885009765625, -751.0169067382812], 'UseDemoWait': True})
    Enemy_DungeonBoss_Gerudo_Uncleared[Boss2].EventWarpToTargetPosAndRot({'YAngle': -162.5, 'IsWaitEnd': True, 'Position': [-245.97219848632812, -2366.885009765625, -735.8696899414062]})
    Enemy_DungeonBoss_Gerudo_Uncleared[Boss2].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 32.43899917602539, 'PosVector': [-253.1658935546875, -2366.799072265625, -754.572998046875], 'AtVector': [-252.7570037841797, -2366.55908203125, -753.6928100585938], 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopPreDieBossSound()


    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0006'})
    Enemy_DungeonBoss_Gerudo_Uncleared[Boss2].EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
}

void Appear_ZonauBoss() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearZonauBoss'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Enemy_DungeonBoss_Zonau_Uncleared'})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-251.66000366210938, -2366.885009765625, -744.7999877929688], 'YAngle': 14.338000297546387, 'UseDemoWait': True})
    Enemy_DungeonBoss_Zonau_Uncleared.EventWarpToTargetPosAndRot({'Position': [-249.67799377441406, -2366.85009765625, -723.6259765625], 'YAngle': -175.76499938964844, 'IsWaitEnd': True})
    Enemy_DungeonBoss_Zonau_Uncleared.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-254.0019989013672, -2366.590087890625, -748.7550048828125], 'AtVector': [-252.1439971923828, -2365.2880859375, -742.3900146484375], 'TargetFovy': 31.893999099731445, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopPreDieBossSound()


    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0007'})
    Enemy_DungeonBoss_Zonau_Uncleared.EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
}

void Appear_PhantomGanon() {

    call DefeatGanondorf.ArmyBattle_Common()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatGanondorf_AppearBlackZelda'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Enemy_PhantomGanon', 'InstanceName': 'PhantomGanon_00'})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-247.59100341796875, -2366.885009765625, -723.489013671875], 'YAngle': -175.14599609375, 'UseDemoWait': True})
    Enemy_PhantomGanon[PhantomGanon_00].EventWarpToTargetPosAndRot({'Position': [-249.12100219726562, -2366.885009765625, -741.468017578125], 'YAngle': 4.0, 'IsWaitEnd': True})
    Enemy_PhantomGanon[PhantomGanon_00].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-246.41099548339844, -2365.02001953125, -717.3900146484375], 'AtVector': [-246.54600524902344, -2365.0400390625, -718.3800048828125], 'TargetFovy': 36.17100143432617, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 4.0, 'Space': 3.0})

    call Sound_StopPreDieBossSound()


    call Sound_StopInGameBgm_All()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_GA_0008'})
    Enemy_PhantomGanon[PhantomGanon_00].EventPlayASForTimelineToInGame({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False})
}

void Sound_StopPreDieBossSound() {
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 1})
}

void Sound_StopInGameBgm_All() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': True, 'IsForceFadeTime': True, 'FadeType': 2, 'IsImmediateOnAutoOff': True, 'CommandLife': 0})
}
