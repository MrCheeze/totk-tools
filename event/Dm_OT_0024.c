-------- EventFlow: Dm_OT_0024 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventEventFadeIn', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLookNow', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Animal_RupeeRabbit_NushiShop[NushiShop]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetForwardDirToTarget', 'EventTriggerParticipateEvent', 'EventWarpToTargetActor', 'EventRupeeRabbitNushiShopFade', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerStopInGameBgm', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 1.0, 0.0], 'Actor1InstanceName': '01', 'Actor1ActorName': 'Npc_NushiShop', 'IsWaitEnd': False, 'PosVector': [0.0, 1.0499999523162842, 1.0], 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } {
        Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Transform_Ed', 'Partial': 'Material'})
    } {
        SoundSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Npc_EventStarter.EventTriggerEmitXLink({'SLinkKey': 'Dm_OT_0024_Transform', 'ELinkKey': ''})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    GameSystemActor.EventEventFadeOut({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'LastPlayerPos', 'ActorName': 'AnchorAction5', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 1.0, 0.0], 'Actor1InstanceName': '01', 'Actor1ActorName': 'Npc_NushiShop', 'PosVector': [0.0, 1.2000000476837158, 2.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_RabbitAppear'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventTriggerParticipateEvent()
    Npc_EventStarter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 1.0, 0.0], 'IsWaitEnd': False, 'Actor1ActorName': 'Animal_RupeeRabbit_NushiShop', 'Actor1InstanceName': 'NushiShop', 'PosVector': [0.0, 1.2000000476837158, 5.0], 'MoveTime': 210, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventPlayAS({'ASName': 'Wait_RandomC', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    GameSystemActor.EventEventFadeIn({'Color': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventPlayAS({'ASName': 'Wait_RandomC', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Run'})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0024_Rabbit_Run'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Wait', 'IsWaitEnd': False})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [0.0, 0.0, 3.0]})
    Animal_RupeeRabbit_NushiShop[NushiShop].EventTriggerSetForwardDirToTarget({'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'EscapePos', 'ActorName': 'AnchorAction6', 'IsConfront': True, 'OffsetBase': 1, 'Target': 2, 'PosOffset': [0.0, 0.0, 15.0]})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0, 'ASCommand': 'HorseWait'})
        Event9:
        Animal_RupeeRabbit_NushiShop[NushiShop].EventPlayAS({'IsWaitEnd': False, 'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Run'})
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-3.0999999046325684, 2.0899999141693115, -3.9600000381469727], 'AtVector': [-0.9800000190734863, 1.5800000429153442, 1.5], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        Animal_RupeeRabbit_NushiShop[NushiShop].EventTriggerEmitXLink({'SLinkKey': 'Dm_OT_0024_Rabbit_TheEnd', 'ELinkKey': ''})
        Animal_RupeeRabbit_NushiShop[NushiShop].EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_OT_0024_Rabbit_Run', 'IsKill': False})
        Animal_RupeeRabbit_NushiShop[NushiShop].EventRupeeRabbitNushiShopFade({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_Complete', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        GameSystemActor.EventTriggerRequestAutoSave()
    } else {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerTurnAndLookNow({'Target': 3, 'ActorName': 'Animal_RupeeRabbit_NushiShop', 'InstanceName': 'NushiShop', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'TurnFaceControlType': 0, 'Direction': 0.0, 'OffsetBase': 0})
        goto Event9
    }
}
