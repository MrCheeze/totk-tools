-------- EventFlow: Dm_ZN_0029 --------

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetActor', 'EventTriggerRaumiGolemHeadLightOff']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWarpSageFollowersFormationPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Zonau_EventStarter
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventDungeonBossZonauSubArmEffectOnLeft', 'EventDungeonBossZonauSubArmEffectOnRight']
queries: ['EventQueryDungeonBossPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0029/Dm_ZN_0029_Enemy_DungeonBoss_Zonau/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0029_Boss.root.as', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventDoNothing', 'EventPlayerWarpToTargetActor', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call C01()


    call C02()


    call C03()


    call C04()

}

void C02() {
    DungeonBoss_Zonau_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0029_DungeonBoss_Zonau_Miasma_Appearance_LeftArm', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DungeonBoss_Zonau_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C02', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 194})

        fork {
            DungeonBoss_Zonau_EventStarter.EventDungeonBossZonauSubArmEffectOnLeft({'IsWaitEnd': True})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
        }

    } {

        call Link_position()

    }

}

void C03() {
    DungeonBoss_Zonau_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0029_DungeonBoss_Zonau_Miasma_Appearance_RightArm', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C01-2', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DungeonBoss_Zonau_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C03', 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

        fork {
            DungeonBoss_Zonau_EventStarter.EventDungeonBossZonauSubArmEffectOnRight({'IsWaitEnd': True})
        } {
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        }

    }

}

void C04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-3', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DungeonBoss_Zonau_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C04', 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    }

    Player.EventDoNothing({'IsWaitEnd': True})
    switch DungeonBoss_Zonau_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Raumi:Raumi_BossHint4_04', 'IsWaitEnd': True, 'IsDelay': False})
        Event32:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'IsWaitEnd': False, 'IsLoop': False, 'SceneName': 'C04-4', 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        switch DungeonBoss_Zonau_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_DungeonBoss_changed', 'Value': True, 'Index': -1})
            if !Player.EventQueryCheckPlayerState({'State': 5}) {
                Event33:
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'MoveTime': 45, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.340000152587891], 'AtVector': [0.0, 1.7999999523162842, -0.03999999910593033], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': False})
            }
          case 2:
            goto Event33
        }
      case 2:
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
        goto Event32
    }
}

void C01() {
    switch DungeonBoss_Zonau_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        DungeonBoss_Zonau_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01', 'IsAllSlot': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            DungeonBoss_Zonau_EventStarter.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [1376.2659912109375, -637.0869750976562, 3286.843994140625], 'YAngle': -31.0})
        } {

            call BossBattle_Common.BossBattle_CommonB()

            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
            Npc_RaumiGolem_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [1367.0469970703125, -637.0, 3312.2919921875]})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        }

      case 2:
        DungeonBoss_Zonau_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01', 'IsAllSlot': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            DungeonBoss_Zonau_EventStarter.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-249.2487030029297, -2366.873046875, -746.7531127929688], 'YAngle': 0.0})
        } {

            call BossBattle_Common.BossBattle_CommonB()

            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_RaumiGolem_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
        }

    }
}

void Link_position() {
    switch DungeonBoss_Zonau_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            if !Player.EventQueryCheckPlayerState({'State': 4}) {
                Event69:
                Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BossBattle', 'IsWaitEnd': True, 'UseDemoWait': True})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
                Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 2.0]})
                Event26:
                Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWait({'Frames': 1, 'IsWaitEnd': True})
            } else {
                Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BossBattle', 'IsWaitEnd': True, 'UseDemoWait': True})
                goto Event26
            }
        } else {
            goto Event69
        }
      case 2:
        Player.EventPlayerWarpToTargetActor({'TargetActorKind': 0, 'OffsetBase': 1, 'YAngle': 190.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PositionOffset': [3.5399999618530273, 0.0, 16.639999389648438], 'UseDemoWait': True})
        GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': True, 'Space': 2.0, 'Dist': 1.5})
    }
}
