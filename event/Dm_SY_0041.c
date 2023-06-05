-------- EventFlow: Dm_SY_0041 --------

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

Actor: Enemy_DungeonBoss_Rito_Underground
entrypoint: None()
actions: ['EventPlayAS', 'EventDungeonBossWarpToReferencedAnchor', 'EventTriggerEmitXLink', 'EventTriggerDeathSignal']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0041/Dm_SY_0041_Enemy_DungeonBoss_Rito/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0041_DungeonBoss_Rito.root.as', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[FxWait]
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_RitoBoss_Under_Link', 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Enemy_DungeonBoss_Rito_Underground.EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_RitoBoss_Under'})

    fork {

        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 45})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge00', 'Length': 3.5})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 125})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'Frames': 20, 'IsWaitEnd': True})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Rito_Underground', 'IsReferenceRootOnce': False, 'SceneName': 'C01-1', 'CalcUpInInterpolate': False})
        }

    } {
        Enemy_DungeonBoss_Rito_Underground.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0041_Enm_DungeonBoss_Rito_Dead', 'SLinkKey': ''})
        Enemy_DungeonBoss_Rito_Underground.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': False, 'IsAnimeDriven': False})
    } {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    }

    Player.EventPlayerWait({'IsWaitEnd': True})
    Enemy_DungeonBoss_Rito_Underground.EventTriggerDeathSignal()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}
