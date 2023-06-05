-------- EventFlow: Dm_RT_0017 --------

Actor: Npc_Tulin_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Bow_Strong': '', 'EquipmentUser_Bow_Strong_EquipmentState': 0, 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestGlide', 'EventGoOffstageForUser', 'EventPlayerGlide', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Rito_EventStarter
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossRitoOutFromPortal', 'EventDungonBossRitoPutInOrder', 'EventDungeonBossRitoCreateTornado', 'EventWarpToTargetPosAndRot', 'EventDungeonBossRitoMakeIntoPortalForward', 'EventWarpToTargetActor', 'EventDungeonBossWarpToReferencedAnchor']
queries: ['EventQueryDungeonBossPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0017/Dm_RT_0017_Enemy_DungeonBoss_Rito/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0017_DungeonBoss_Rito.root.as', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[Gate_pos]
entrypoint: None()
actions: ['EventDmLocatorWarpToNearAnchor', 'EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[Under]
entrypoint: None()
actions: ['EventDmLocatorWarpToStarterLinkAnchor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void pre2() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Tulin_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void c01_2() {

    fork {
        DungeonBoss_Rito_EventStarter.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_DungeonBoss_Rito'})
    } {
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 50, 'Power': 2.0, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 50, 'Power': 0.5, 'IsRumbleController': False})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 2.0})
    }

    DungeonBoss_Rito_EventStarter.EventDungeonBossRitoMakeIntoPortalForward({'IsWaitEnd': True})
    switch DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Link_Boss_End', 'NotChangeRot': False, 'UseDemoWait': False})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
      case 1:
        Dm_Locator[Under].EventDmLocatorWarpToStarterLinkAnchor({'InstanceName': 'Link_Boss_End', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'InstanceName': 'Under', 'PositionOffset': [0.0, -80.0, 0.0], 'UseDemoWait': False})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
      case 2:
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'Position': [-248.0, -2000.0, -670.0], 'UseDemoWait': False})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': True, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
}

void c02_2() {

    fork {
        switch DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            Event127:
            DungeonBoss_Rito_EventStarter.EventDungeonBossRitoOutFromPortal({'IsWaitEnd': True})
          case [1, 2]:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            goto Event127
        }
    } {
        switch DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'c02-0', 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'Gate_pos', 'CalcUpInInterpolate': False})
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Gate_pos', 'PosVector': [-53.040000915527344, 18.68000030517578, 161.3699951171875], 'AtVector': [-23.59000015258789, 3.5899999141693115, 83.31999969482422], 'TargetFovy': 23.25, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 50, 'Power': 0.5, 'IsRumbleController': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 50, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Gate_pos', 'PosVector': [-38.9900016784668, 5.869999885559082, 210.63999938964844], 'AtVector': [4.579999923706055, -4.630000114440918, 119.79000091552734], 'TargetFovy': 29.56999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
          case [1, 2]:
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'TargetActorInstanceName': 'Gate_pos', 'SceneName': 'c02-2', 'CalcUpInInterpolate': False})
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Gate_pos', 'PosVector': [-53.040000915527344, 18.68000030517578, 161.3699951171875], 'AtVector': [-23.59000015258789, 3.5899999141693115, 83.31999969482422], 'TargetFovy': 23.25, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 50, 'Power': 0.5, 'IsRumbleController': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
            EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 50, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'Gate_pos', 'PosVector': [-38.9900016784668, 5.869999885559082, 210.63999938964844], 'AtVector': [4.579999923706055, -4.630000114440918, 119.79000091552734], 'TargetFovy': 29.56999969482422, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
}

void c04_2() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'Actor1ActorName': 'Player', 'PosVector': [1.899999976158142, 1.7300000190734863, 0.20000000298023224], 'AtVector': [1.5199999809265137, -2.049999952316284, 0.9900000095367432], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        if !DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
            Npc_Tulin_Sage[DynamicGenerateSage].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'PositionOffset': [2.0, 3.0, 0.0], 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 0.0})
            VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Tuli:Tuli_BossHint4_12', 'IsWaitEnd': True, 'IsDelay': False})
        }
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'StartAccelerateRate': 0.5, 'MoveTime': 60, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 9.510000228881836, -2.200000047683716], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    Player.EventTriggerPlayerRequestGlide()
}

void c03_2() {

    fork {
        DungeonBoss_Rito_EventStarter.EventDungeonBossRitoCreateTornado({'IsWaitEnd': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C03-0', 'IsLoop': False, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 5.0, 'CalcUpInInterpolate': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 35})
        GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Demo_Large_Don'})
    } {
        switch DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Link_Boss_End', 'NotChangeRot': False, 'UseDemoWait': False})
            Event2:
            Player.EventPlayerGlide({'IsWaitEnd': True, 'ASCommand': ''})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 110})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
          case 1:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
            Dm_Locator[Under].EventDmLocatorWarpToStarterLinkAnchor({'InstanceName': 'Link_Boss_End', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False})
            Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Locator', 'YAngle': 0.0, 'OffsetBase': 1, 'TargetActorKind': 1, 'InstanceName': 'Under', 'PositionOffset': [0.0, -80.0, 0.0], 'UseDemoWait': False})
            Player.EventPlayerGlide({'IsWaitEnd': True, 'ASCommand': ''})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
          case 2:
            Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'Position': [-248.0, -2000.0, -670.0], 'UseDemoWait': False})
            goto Event2
        }
    }

}

void EntryPoint2() {
    switch DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        Dm_Locator[Gate_pos].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GatePos', 'IsWaitEnd': True})

        fork {
            DungeonBoss_Rito_EventStarter.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'Gate_pos', 'OffsetBase': 0, 'PositionOffset': [20.711000442504883, 19.731000900268555, 90.26200103759766], 'YAngle': 0.0})
            DungeonBoss_Rito_EventStarter.EventDungonBossRitoPutInOrder({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {

            call BossBattle_Common.BossBattle_CommonA()

        }

        Event81:
        DungeonBoss_Rito_EventStarter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C01_DungeonBoss_Rito', 'IsWaitEnd': False})

        call pre2()


        call c01_2()


        call c02_2()


        call c03_2()


        call c04_2()

      case 1:
        Dm_Locator[Gate_pos].EventDmLocatorWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GatePos', 'IsWaitEnd': True, 'NotChangeRot': False})

        fork {
            DungeonBoss_Rito_EventStarter.EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_RitoBoss_Pos'})
            DungeonBoss_Rito_EventStarter.EventDungonBossRitoPutInOrder({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {

            call BossBattle_Common.BossBattle_CommonA()

        }

        goto Event81
      case 2:
        Dm_Locator[Gate_pos].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Dm_GatePos_NotClear'})

        fork {
            DungeonBoss_Rito_EventStarter.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 60.0, 'Position': [-268.0, -2200.0, -578.0]})
            DungeonBoss_Rito_EventStarter.EventDungonBossRitoPutInOrder({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsReferenceRootOnce': True, 'SceneName': 'C01-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {

            call BossBattle_Common.BossBattle_CommonA()

        }

        goto Event81
    }
}
