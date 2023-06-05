-------- EventFlow: Dm_SY_0043 --------

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

Actor: Enemy_DungeonBoss_Gerudo_Underground[Boss2]
entrypoint: None()
actions: ['EventDungeonBossWarpToReferencedAnchor', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerDeathSignal']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_0043/Dm_SY_0043_Enemy_DungeonBoss_Gerudo/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_0043_DungeonBoss_Gerudo.root.as', 'IsBindNearestActor': False}

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

    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'Dm_GerudoBoss_Under', 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Enemy_DungeonBoss_Gerudo_Underground[Boss2].EventDungeonBossWarpToReferencedAnchor({'IsWaitEnd': True, 'InstanceName': 'Dm_GerudoBoss_Under'})
    SoundSystemActor.EventTriggerSoundStopPreDieBossSound({'CtrlType': 0})

    fork {

        fork {
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 12})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Biyoon'})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 36})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 65})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Camera_Converge00', 'Length': 2.0})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.0})
            GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor[FxWait].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 3.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Enemy_DungeonBoss_Gerudo_Underground', 'TargetActorInstanceName': 'Boss2', 'CalcUpInInterpolate': False})
        }

    } {
        Enemy_DungeonBoss_Gerudo_Underground[Boss2].EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_0043_Enm_DungeonBoss_Gerudo_Dead', 'SLinkKey': ''})
        Enemy_DungeonBoss_Gerudo_Underground[Boss2].EventPlayAS({'IsWaitEnd': True, 'ASName': 'C01', 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 180})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    }

    Player.EventPlayerWait({'IsWaitEnd': True})
    Enemy_DungeonBoss_Gerudo_Underground[Boss2].EventTriggerDeathSignal()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}
