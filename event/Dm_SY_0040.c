-------- EventFlow: Dm_SY_0040 --------

Actor: Enemy_DungeonBoss_Zora_Underground
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossWarpToReferencedAnchor', 'EventTriggerEmitXLink', 'EventTriggerDeathSignal']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0040/Dm_SY_0040_Enemy_DungeonBoss_Zora/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0040_DungeonBoss_Zora.root.as', 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWait', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[FxWait]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStopPreDieBossSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'Dm_ZoraBoss_Under_Link', 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Enemy_DungeonBoss_Zora_Underground.EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_ZoraBoss_Under'})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 0})

    fork {

        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 65})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Zora_Underground', 'CalcUpInInterpolate': False})
        }


        fork {
            GameSystemActor[FxWait].EventWait({'Frames': 7, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 13, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 13, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 20, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 85, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 20, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Zora_Underground', 'SceneName': 'C01-1', 'CalcUpInInterpolate': False})
        }

    } {
        Enemy_DungeonBoss_Zora_Underground.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0040_Enm_DungeonBoss_Zora_Dead', 'SLinkKey': ''})
        Enemy_DungeonBoss_Zora_Underground.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 260})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    }

    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 1, 'AtVectorSetType': 1, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_DungeonBoss_Zora_Underground.EventTriggerDeathSignal()
    Player.EventPlayerWait({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}
