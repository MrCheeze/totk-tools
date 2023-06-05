-------- EventFlow: Dm_GO_0019 --------

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerLookAtObject']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Demo_Pos]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventDmLocatorWarpToNearAnchor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[chr]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventDoNothing', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWarpToNearAnchorWithRidableActor']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Goron_EventStarter
entrypoint: None()
actions: ['EventDungeonBossGoronJumpToCeiling', 'EventPlayAS', 'EventDungeonBossGoronDownRecover', 'EventTriggerEmitXLink', 'EventDungeonBossWarpToNearAnchor', 'EventTriggerParticipateEvent', 'EventDungeonBossWarpToReferencedAnchor', 'EventLookIKArbiterForbid', 'EventLookIKArbiterForbidReset']
queries: ['EventQueryDungeonBossPlacementType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0019/Dm_GO_0019_Enemy_DungeonBoss_Goron/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0019_Boss.root.as', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventWarpSageFollowersFormationPos']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint2() {

    call pre()


    call c01()

    DungeonBoss_Goron_EventStarter.EventTriggerParticipateEvent()
    switch DungeonBoss_Goron_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:

        call c02()


        call c03A()

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
      case [1, 2]:

        call c03B()

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0})
    }
}

void pre() {
    switch DungeonBoss_Goron_EventStarter.EventQueryDungeonBossPlacementType() {
      case 0:
        DungeonBoss_Goron_EventStarter.EventDungeonBossGoronDownRecover({'IsWaitEnd': True})
        DungeonBoss_Goron_EventStarter.EventLookIKArbiterForbid({'IsForceImmediateDiactivate': True, 'IsWaitEnd': True})

        fork {
            Dm_Locator[Demo_Pos].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GoronBoss_Pos', 'IsWaitEnd': False})
        } {
            DungeonBoss_Goron_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01_pose', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAnimeDriven': False})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 2, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        } {
            DungeonBoss_Goron_EventStarter.EventDungeonBossWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GoronBoss_Pos', 'IsWaitEnd': True})
        } {
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'LargeDungeonFire_Boss', 'IsWaitEnd': True, 'UseDemoWait': True})
        }


        call BossBattle_Common.BossBattle_CommonB()

        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Locator[Demo_Pos].EventWarpToTargetActor({'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'TargetActorKind': 0, 'ActorName': '', 'IsWaitEnd': False})
      case 1:
        DungeonBoss_Goron_EventStarter.EventDungeonBossGoronDownRecover({'IsWaitEnd': True})
        DungeonBoss_Goron_EventStarter.EventLookIKArbiterForbid({'IsForceImmediateDiactivate': True, 'IsWaitEnd': True})

        fork {
            Dm_Locator[Demo_Pos].EventDmLocatorWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GoronBoss_Under', 'IsWaitEnd': False})
        } {
            DungeonBoss_Goron_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01_pose', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAnimeDriven': False})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 2, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        } {
            DungeonBoss_Goron_EventStarter.EventDungeonBossWarpToReferencedAnchor({'InstanceName': 'Dm_GoronBoss_Under', 'IsWaitEnd': True})
        } {
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Dm_GoronBoss_UnderTransform_Link'})
        }


        call BossBattle_Common.BossBattle_CommonB()

        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Locator[Demo_Pos].EventWarpToTargetActor({'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'TargetActorKind': 0, 'ActorName': '', 'IsWaitEnd': False})
      case 2:
        DungeonBoss_Goron_EventStarter.EventDungeonBossGoronDownRecover({'IsWaitEnd': True})
        DungeonBoss_Goron_EventStarter.EventLookIKArbiterForbid({'IsForceImmediateDiactivate': True, 'IsWaitEnd': True})

        fork {
            Dm_Locator[Demo_Pos].EventDmLocatorWarpToNearAnchor({'InstanceName': 'Dm_GoronBoss_NotClear', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': False})
        } {
            DungeonBoss_Goron_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01_pose', 'IsAllSlot': True, 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAnimeDriven': False})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 2, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        } {
            DungeonBoss_Goron_EventStarter.EventDungeonBossWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'Dm_GoronBoss_NotClear', 'IsWaitEnd': True})
        } {
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'Dm_GoronBoss_NotClear', 'UseDemoWait': True})
        }


        call BossBattle_Common.BossBattle_CommonB()

        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Dm_Locator[Demo_Pos].EventWarpToTargetActor({'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'TargetActorKind': 0, 'ActorName': '', 'IsWaitEnd': False})
    }
}

void c01() {

    fork {
        DungeonBoss_Goron_EventStarter.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C01', 'IsAllSlot': True, 'IsWaitEnd': True, 'ForceFadeInFrame': 0.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 147})
        DungeonBoss_Goron_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0019_Enm_DungeonBoss_Goron_Foot_Land_Front_L', 'SLinkKey': ''})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        DungeonBoss_Goron_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0019_Enm_DungeonBoss_Goron_Foot_Land_Front_R', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        DungeonBoss_Goron_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0019_Enm_DungeonBoss_Goron_Foot_Land_Back_L', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        DungeonBoss_Goron_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0019_Enm_DungeonBoss_Goron_Foot_Land_Back_R', 'SLinkKey': ''})
    } {
        switch DungeonBoss_Goron_EventStarter.EventQueryDungeonBossPlacementType() {
          case 0:
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'InstanceName': 'LargeDungeonFire_Boss', 'IsWaitEnd': True, 'UseDemoWait': True})
            Dm_Locator[chr].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
            Event65:

            fork {
                Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } {
                if !DungeonBoss_Goron_EventStarter.EventQueryDungeonBossPlacementType() {
                    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'chr', 'OffsetBase': 0, 'PositionOffset': [-3.0, 0.0, 3.0], 'YAngle': -90.0})
                    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'BattleWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                    VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_YunBo:YunBo_BossHint4_12', 'IsWaitEnd': True, 'IsDelay': False})
                }
            }

          case 1:
            Player.EventPlayerWarpToNearAnchorWithRidableActor({'UseDemoWait': True, 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Dm_GoronBoss_UnderTransform_Link'})
            Event127:
            Dm_Locator[chr].EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'TargetActorKind': 0, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 40.0], 'YAngle': -172.0, 'ActorName': ''})
            goto Event65
          case 2:
            Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'InstanceName': 'Dm_GoronBoss_NotClearTransform_Link'})
            goto Event127
        }
    }

}

void c02() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'c02-1', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Demo_Pos', 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'Power': 1.0, 'LoopEndCount': 30, 'IsRumbleController': False})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 10.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'Power': 1.0, 'LoopEndCount': 30, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
    } {
        DungeonBoss_Goron_EventStarter.EventLookIKArbiterForbidReset({'IsWaitEnd': False})
        DungeonBoss_Goron_EventStarter.EventDungeonBossGoronJumpToCeiling({'IsWaitEnd': True})
    }

    DungeonBoss_Goron_EventStarter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'Wait_Ceiling'})
    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 40.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
}

void c03A() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'Demo_Pos', 'SceneName': '3A_01', 'IsReferenceRootOnce': True, 'IsIgnoreRootRot': True, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventDoNothing({'IsWaitEnd': False})
        } else {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        }
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'GuardWait'})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void c03B() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': '3B_01', 'IsWaitEnd': False, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'chr', 'CalcUpInInterpolate': False})
        GameSystemActor.EventWarpSageFollowersFormationPos({'IsWaitEnd': True, 'isOverrideParam': True, 'Space': 2.0, 'Dist': 1.5})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 22})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 20, 'Power': 0.800000011920929, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 60.0})
    } {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {
            Player.EventDoNothing({'IsWaitEnd': False})
        } else {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerLookAtObject({'Target': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        }
    } {
        DungeonBoss_Goron_EventStarter.EventPlayAS({'ASName': 'C03b', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 22})
        DungeonBoss_Goron_EventStarter.EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0019_Enm_DungeonBoss_Goron_Roar', 'SLinkKey': ''})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 12})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 2.5})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 96})
        DungeonBoss_Goron_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'IsAllSlot': True, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 15.0})
        DungeonBoss_Goron_EventStarter.EventLookIKArbiterForbidReset({'IsWaitEnd': False})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
}
