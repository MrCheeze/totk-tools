-------- EventFlow: Dm_RT_0045 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DungeonBoss_Rito_EventStarter
entrypoint: None()
actions: ['EventDungonBossRitoPutInOrder', 'EventPlayAS', 'EventDungeonBossWarpToReferencedAnchor', 'EventWarpToTargetPosAndRot']
queries: ['EventQueryDungeonBossPlacementType']
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_RT_0045/Dm_RT_0045_Enemy_DungeonBoss_Rito/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_RT_0045_RitoBoss.root.as', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'FadeType': 0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_Supercell_A', 'KeyName': 'StrongWind'})
    DungeonBoss_Rito_EventStarter.EventDungonBossRitoPutInOrder({'IsWaitEnd': False})
    if !DungeonBoss_Rito_EventStarter.EventQueryDungeonBossPlacementType() {
        DungeonBoss_Rito_EventStarter.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-2855.0, 1780.0, -2990.0], 'IsWaitEnd': False})
    } else {
        DungeonBoss_Rito_EventStarter.EventDungeonBossWarpToReferencedAnchor({'InstanceName': 'Dm_RitoBoss_Pos', 'IsWaitEnd': False})
    }

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'RootType': 2, 'TargetActorName': '', 'CalcUpInInterpolate': False})
    } {
        DungeonBoss_Rito_EventStarter.EventPlayAS({'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Don', 'Length': 1.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Don', 'Length': 1.0})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 1.0})
    } {

        call Common.AirStartUP_Player()

    }

}
