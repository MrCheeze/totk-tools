-------- EventFlow: Dm_SY_0042 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
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

Actor: Enemy_DungeonBoss_Goron_Underground
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossWarpToReferencedAnchor', 'EventTriggerEmitXLink', 'EventTriggerDeathSignal', 'EventDungeonBossGoronDownRecover']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0042/Dm_SY_0042_Enemy_DungeonBoss_Goron/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0042_DungeonBoss_Goron.root.as', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

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

    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_GoronBoss_Under_Link', 'NotChangeRot': False, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Enemy_DungeonBoss_Goron_Underground.EventDungeonBossGoronDownRecover({'IsWaitEnd': True})
    Enemy_DungeonBoss_Goron_Underground.EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_GoronBoss_Under'})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 0})

    fork {

        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 33})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Goron_Underground', 'CalcUpInInterpolate': False})
        }


        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge00', 'Length': 2.5})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'SceneName': 'C01-1', 'TargetActorName': 'Enemy_DungeonBoss_Goron_Underground', 'CalcUpInInterpolate': False})
        }


        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 72})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Goron_Underground', 'SceneName': 'C01-2', 'CalcUpInInterpolate': False})
        }

    } {
        Enemy_DungeonBoss_Goron_Underground.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0042_Enm_DungeonBoss_Goron_Dead', 'SLinkKey': ''})
        Enemy_DungeonBoss_Goron_Underground.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsAnimeDriven': True})
    } {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    }

    Player.EventPlayerWait({'IsWaitEnd': True})
    Enemy_DungeonBoss_Goron_Underground.EventTriggerDeathSignal()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}
