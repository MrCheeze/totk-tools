-------- EventFlow: Dm_GE_0023 --------

Actor: Npc_Gerudo_Queen_Young[DynamicGenerateSage]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[cam]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Gerudo_EventStarter[Boss2]
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossRoar', 'EventDungeonBossGerudoFlyToAnchor', 'EventDungeonBossWarpToNearAnchor', 'EventDungeonBossWarpToReferencedAnchor', 'EventTriggerEmitXLink', 'EventWait', 'EventTriggerXLinkFadeByKey']
queries: ['EventQueryDungeonBossPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_GE_0023/Dm_GE_0023_Enemy_DungeonBoss_Gerudo/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GE_0023_Boss.root.as', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[cam3]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor', 'EventDmLocatorWarpToNearAnchor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor[Effects]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[LinkPos]
entrypoint: None()
actions: ['EventDmLocatorWarpToNearAnchor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[FlyPos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWait', 'EventWarpSageFollowersFormationPos', 'EventTriggerEnableAreaCulling', 'EventTriggerDisableAreaCulling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[boss]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint2() {
    GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})
    switch DungeonBoss_Gerudo_EventStarter[Boss2].EventQueryDungeonBossPlacementType() {
      case 0:
        Dm_Locator[cam3].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GerudoBoss_Start', 'IsWaitEnd': False})
        Dm_Locator[FlyPos].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'cam3', 'PositionOffset': [-10.659000396728516, 8.652199745178223, 10.409000396728516], 'YAngle': -43.93019104003906, 'OffsetBase': 0})
        Dm_Locator[LinkPos].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GerudoBoss_Link', 'IsWaitEnd': True})

        call C01()


        call C02()


        call C04()

        GameSystemActor.EventTriggerDisableAreaCulling()
      case 1:
        Dm_Locator[cam3].EventDmLocatorWarpToStarterLinkAnchor({'InstanceName': 'Dm_GerudoBoss_Under', 'NotChangeRot': False, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': False})

        call C01_Under()

        Event15:

        call C02_Notclear()


        call C04_Notclear()

        GameSystemActor.EventTriggerDisableAreaCulling()
      case 2:
        Dm_Locator[cam3].EventDmLocatorWarpToNearAnchor({'InstanceName': 'Dm_GerudoBoss_NotClear', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': False})

        call C01_NoClear()

        goto Event15
    }
}

void nest() {
    FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_01].EventTriggerParticipateEvent()
    FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_02].EventTriggerParticipateEvent()
    FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_03].EventTriggerParticipateEvent()
    FldObj_Gerudo_ZombieNest_A_02_ForDungeonBossGerudoBattle[ZombieNest_BossArea_04].EventTriggerParticipateEvent()
}

void C01() {

    fork {
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GerudoBoss_Start'})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventPlayAS({'Partial': '', 'ASName': 'C01_Boss', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 10.0, 'IsWaitEnd': False})
        EventSystemActor[boss].EventWait({'IsWaitEnd': True, 'Frames': 61})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossGerudoFlyToAnchor({'AnchorInstanceName': 'Demo_Transform', 'FaceAnchorInstanceName': 'Demo_Transform_Facing', 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C01-2', 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam3', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 80})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam3', 'PosVector': [-0.9800000190734863, 1.9700000286102295, 29.25], 'AtVector': [-0.9700000286102295, 2.490000009536743, 28.399999618530273], 'TargetFovy': 53.84000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False})
    } {

        call BossBattle_Common.BossBattle_CommonB()

        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventPlayAS({'ASName': 'BattleWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    } {

        call nest()

    }

}

void C02() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': True})

    fork {
        DungeonBoss_Gerudo_EventStarter[Boss2].EventWait({'IsWaitEnd': True, 'Frames': 20})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossRoar({'ASName': 'C02_Boss', 'IsWaitEnd': False})
        EventSystemActor[boss].EventWait({'IsWaitEnd': True, 'Frames': 150})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'ASName': 'Hovering'})
    } {
        EventSystemActor[Effects].EventWait({'IsWaitEnd': True, 'Frames': 60})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventTriggerEmitXLink({'ELinkKey': 'Dm_GE_0023_Enm_DungeonBoss_Gerudo_Roar', 'SLinkKey': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'IsLoop': False, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorInstanceName': '', 'TargetActorName': '', 'SceneName': 'C02-1', 'InterpolateFrame': 25.0, 'CalcUpInInterpolate': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 33})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GE_0023_Enm_DungeonBoss_Gerudo_Roar', 'SLinkKey': '', 'IsKill': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'SceneName': 'C03-1', 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam3', 'CalcUpInInterpolate': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    } {
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'GerudoBoss_Link', 'IsWaitEnd': False, 'UseDemoWait': True})
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 62})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'ReactionField', 'KeyName': 'ReactionEffect'})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.4700000286102295, -4.909999847412109], 'AtVector': [0.0, 3.25, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'Player', 'PosVector': [-0.009999999776482582, 0.8199999928474426, -4.440000057220459], 'AtVector': [-0.029999999329447746, 2.3499999046325684, -0.46000000834465027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventDoNothing({'IsWaitEnd': False})
    } {
        Npc_Gerudo_Queen_Young[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [-1.600000023841858, 0.0, -2.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'LinkPos'})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Rouge:Talk_47', 'IsWaitEnd': True, 'IsDelay': False})
}

void C04_Notclear() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Player.EventDoNothing({'IsWaitEnd': True})
        Event35:
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.4700000286102295, -4.909999847412109], 'AtVector': [0.0, 3.25, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'Player', 'PosVector': [-0.009999999776482582, 0.8199999928474426, -4.440000057220459], 'AtVector': [-0.029999999329447746, 2.3499999046325684, -0.46000000834465027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    } else {
        GameSystemActor.EventWarpSageFollowersFormationPos({'isOverrideParam': True, 'Dist': 5.0, 'Space': 4.0, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        goto Event35
    }
}

void C02_Notclear() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfGerudo_ZombieNestOpen', 'Value': True})
    SoundSystemActor.EventSoundChangeListenerPreset({'FadeTime': 2.0, 'ListenerPresetName': 'CameraFront_10m'})

    fork {
        DungeonBoss_Gerudo_EventStarter[Boss2].EventWait({'IsWaitEnd': True, 'Frames': 20})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossRoar({'ASName': 'C02_Boss', 'IsWaitEnd': False})
        EventSystemActor[boss].EventWait({'IsWaitEnd': True, 'Frames': 150})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 20.0, 'ASName': 'Hovering'})
    } {
        EventSystemActor[Effects].EventWait({'IsWaitEnd': True, 'Frames': 60})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0023_Enm_DungeonBoss_Gerudo_Roar_MinusField'})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorInstanceName': '', 'TargetActorName': '', 'IsLoop': False, 'IsWaitEnd': False, 'SceneName': 'C02-1', 'InterpolateFrame': 25.0, 'CalcUpInInterpolate': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 33})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_GE_0023_Enm_DungeonBoss_Gerudo_Roar_MinusField', 'IsKill': True})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'SceneName': 'C03-1', 'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam3', 'CalcUpInInterpolate': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    } {
        VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Rouge:Talk_47', 'IsWaitEnd': True, 'IsDelay': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 62})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'ReactionField', 'KeyName': 'ReactionEffect'})
    }

    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 2.0})
}

void C01_Under() {

    fork {
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_GerudoBoss_Under'})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventPlayAS({'Partial': '', 'ASName': 'C01_Boss', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 10.0, 'IsWaitEnd': False})
        EventSystemActor[boss].EventWait({'IsWaitEnd': True, 'Frames': 61})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossGerudoFlyToAnchor({'AnchorInstanceName': 'Demo_Transform', 'FaceAnchorInstanceName': 'Demo_Transform_Facing', 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C01-2', 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam3', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 80})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam3', 'PosVector': [-1.100000023841858, 4.230000019073486, 34.689998626708984], 'AtVector': [-1.100000023841858, 4.760000228881836, 33.84000015258789], 'TargetFovy': 53.84000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {

        call nest()

    } {

        call BossBattle_Common.BossBattle_CommonB()

        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'GerudoBoss_Link', 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C01_NoClear() {

    fork {
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GerudoBoss_NotClear'})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventPlayAS({'Partial': '', 'ASName': 'C01_Boss', 'IsAllSlot': True, 'IsAnimeDriven': True, 'ForceFadeInFrame': 10.0, 'IsWaitEnd': False})
        EventSystemActor[boss].EventWait({'IsWaitEnd': True, 'Frames': 61})
        DungeonBoss_Gerudo_EventStarter[Boss2].EventDungeonBossGerudoFlyToAnchor({'AnchorInstanceName': 'Demo_Transform', 'FaceAnchorInstanceName': 'Demo_Transform_Facing', 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsIgnoreRootRot': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'C01-2', 'IsReferenceRootOnce': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'cam3', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 80})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam3', 'PosVector': [-1.4600000381469727, 4.389999866485596, 33.220001220703125], 'AtVector': [-1.4199999570846558, 4.909999847412109, 32.369998931884766], 'TargetFovy': 53.84000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
        EventSystemActor[cam].EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {

        call nest()

    } {

        call BossBattle_Common.BossBattle_CommonB()

        Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'GerudoBoss_Link', 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
    }

}
