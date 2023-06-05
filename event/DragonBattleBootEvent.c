-------- EventFlow: DragonBattleBootEvent --------

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventDragonEndRailMove', 'EventTriggerDragonLightRequestOpAction', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerRideDragon', 'EventPlayerHorseGetOff', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness
entrypoint: None()
actions: ['EventTriggerEnemyDragonDarknessRequestShootBullet', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitCloseLoadingFade']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerReserveChangeConnectionTimingAfterEvent', 'EventTriggerReserveDelayEventAfterConnect']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Setup()


    call Boot()

}

void Setup() {

    fork {
        Enemy_Dragon_Light_002.EventDragonEndRailMove()
        Enemy_Dragon_Light_002.EventTriggerDragonLightRequestOpAction()
        Enemy_Dragon_Light_002.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Enemy_Dragon_Darkness', 'OffsetBase': 1, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 200.0], 'YAngle': 168.0})
    } {
        Enemy_Dragon_Darkness.EventTriggerEnemyDragonDarknessRequestShootBullet()
        Enemy_Dragon_Darkness.EventPlayAS({'ASName': 'BattleWaitOp', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'Partial': 'メイン', 'IsAllSlot': True})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_Dragon_Light_002', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'UseDemoWait': True})
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Player.EventPlayerRideDragon({'IsWaitEnd': True, 'InstanceName': '', 'ActorName': 'Enemy_Dragon_Light_002', 'ASCommand': 'DragonWait'})
    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVector': [-0.009999999776482582, 1.5199999809265137, -0.1899999976158142], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'PosVector': [-0.47999998927116394, 1.6299999952316284, -2.440000057220459]})
    EventCamera.EventTriggerReserveChangeConnectionTimingAfterEvent({'BasedOnPosDiff': True})
    EventCamera.EventTriggerReserveDelayEventAfterConnect()
}

void Boot() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:ローディング明けデモ専用', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    GameSystemActor.EventWaitCloseLoadingFade({'IsWaitEnd': True})
}
