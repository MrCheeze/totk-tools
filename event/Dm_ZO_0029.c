-------- EventFlow: Dm_ZO_0029 --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Demo_Pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToTargetActor', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Zora_EventStarter
entrypoint: None()
actions: ['EventDungeonBossZoraPreAction', 'EventDungeonBossZoraTurn', 'EventDungeonBossZoraJump', 'EventDungeonBossZoraScatterTar', 'EventDungeonBossZoraReturn', 'EventPlayAS']
queries: ['EventQueryDungeonBossPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[chakuchi_Pos]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWarpSageFollowersFormationPos', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: ['EventQueryRidableIsRidden']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

void EntryPoint2() {

    call C01_2()


    call C02_2()


    call C2.5()


    call C04_2()

}

void C01_2() {
    switch DungeonBoss_Zora_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        Dm_Locator[Demo_Pos].EventWarpToTargetPosAndRot({'Position': [3372.320068359375, 1848.31005859375, -730.1300048828125], 'YAngle': 0.0, 'IsWaitEnd': False})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'PosVector': [3.819999933242798, 3.1600000858306885, 6.480000019073486], 'AtVector': [-1.190000057220459, 1.649999976158142, -1.5299999713897705], 'TargetFovy': 42.400001525878906, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 2, 'Actor1ActorName': '', 'AtVectorSetType': 2, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': False})
        } {

            call ride()

        } {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraPreAction({'IsWaitEnd': True})
        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraTurn({'IsWaitEnd': True})
        DungeonBoss_Zora_EventStarter.EventPlayAS({'ASName': 'WaitBattle', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [3.819999933242798, 3.1600000858306885, 6.480000019073486], 'AtVector': [-1.190000057220459, 1.649999976158142, -1.5299999713897705], 'TargetFovy': 42.400001525878906, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 2, 'Actor1ActorName': '', 'AtVectorSetType': 2, 'IsAtVectorReferenceActorPosOnce': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [3351.39794921875, 1855.9339599609375, -794.9484252929688], 'IsWaitEnd': False})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'GuardWait'})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

      case 1:
        Dm_Locator[Demo_Pos].EventDmLocatorWarpToStarterLinkAnchor({'InstanceName': 'Dm_ZoraBoss_Under', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'IsWaitEnd': False})
        Event88:

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'PosVector': [3.819999933242798, 3.1600000858306885, 6.480000019073486], 'AtVector': [-1.190000057220459, 1.649999976158142, -1.5299999713897705], 'TargetFovy': 42.400001525878906, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 2, 'Actor1ActorName': '', 'AtVectorSetType': 2, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'IsPosVectorReferenceActorPosOnce': False})
        } {

            call ride()

        }

        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraPreAction({'IsWaitEnd': True})
        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraTurn({'IsWaitEnd': True})
        DungeonBoss_Zora_EventStarter.EventPlayAS({'ASName': 'WaitBattle', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [3.819999933242798, 3.1600000858306885, 6.480000019073486], 'AtVector': [-1.190000057220459, 1.649999976158142, -1.5299999713897705], 'TargetFovy': 42.400001525878906, 'IsAtVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 2, 'Actor1ActorName': '', 'AtVectorSetType': 2, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
      case 2:
        Dm_Locator[Demo_Pos].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-249.19850158691406, -2367.006103515625, -731.5048828125], 'IsWaitEnd': False})
        goto Event88
    }
}

void C02_2() {

    fork {
        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraJump({'IsWaitEnd': True})
        Dm_Locator[chakuchi_Pos].EventWarpToTargetActor({'TargetActorKind': 0, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsWaitEnd': True, 'ActorName': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 38})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Demo_Pos', 'PosVector': [-35.369998931884766, 16.059999465942383, -16.18000030517578], 'AtVector': [-0.20000000298023224, 0.5799999833106995, -0.25999999046325684], 'TargetFovy': 36.93000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C04_2() {

    fork {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.0})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'SceneName': 'C01-1', 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraReturn({'IsWaitEnd': True})
    } {
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Demo_Pos', 'YAngle': 20.0, 'OffsetBase': 0, 'IsWaitEnd': False, 'PositionOffset': [-9.0, 0.0, -25.0], 'UseDemoWait': True})
        if Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        switch DungeonBoss_Zora_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
          case [1, 2]:
            GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
        }
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Large'})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void C2.5() {

    fork {
        DungeonBoss_Zora_EventStarter.EventDungeonBossZoraScatterTar({'IsWaitEnd': True})
        DungeonBoss_Zora_EventStarter.EventPlayAS({'ASName': 'WaitBattle', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        switch DungeonBoss_Zora_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsIgnoreRootRot': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'IsLoop': False, 'SceneName': 'c02_camera-1', 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'chakuchi_Pos', 'IsReferenceRootOnce': True, 'OverwriteStartFrame': 9.0, 'CalcUpInInterpolate': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_24m', 'FadeTime': 0.0})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'IsLoop': False, 'RootType': 2, 'TargetActorInstanceName': '', 'TargetActorName': '', 'IsReferenceRootOnce': False, 'SceneName': 'c02_camera-2', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
          case [1, 2]:
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsIgnoreRootRot': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'IsLoop': False, 'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'chakuchi_Pos', 'IsReferenceRootOnce': True, 'OverwriteStartFrame': 9.0, 'SceneName': 'c02_camera-1_under', 'CalcUpInInterpolate': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_24m', 'FadeTime': 0.0})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'IsLoop': False, 'RootType': 2, 'TargetActorInstanceName': '', 'TargetActorName': '', 'IsReferenceRootOnce': False, 'SceneName': 'c02_camera-2', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    } {
        VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Shido:NewText_14', 'IsWaitEnd': True, 'IsDelay': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Small'})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
    }

}

void ride() {

    call BossBattle_Common.BossBattle_CommonB()

    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Demo_Pos', 'YAngle': 20.0, 'OffsetBase': 0, 'IsWaitEnd': False, 'PositionOffset': [-9.0, 0.0, -25.0], 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': True})
    if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }
}
