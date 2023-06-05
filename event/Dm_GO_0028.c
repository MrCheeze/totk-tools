-------- EventFlow: Dm_GO_0028 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventTriggerRequestAutoSave', 'EventTriggerSetEnableMiasmaRenderer', 'EventTriggerSetEnableEnvMapAndSkyOcclusion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': True, 'EventMemberCreateMethod': 1, 'Position': [1289.135009765625, -697.657470703125, -2863.572021484375], 'Rotation': [0.0, 90.0, 0.0], 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerOnStopMode', 'EventPlayerOffStopMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    Dm_Locator[camera].EventDoNothing({'IsWaitEnd': False})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DungeonPit', 'KeyName': 'George'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Miasma_Mist_Ground', 'ActorName': 'Camera'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'EftLoc_LostForest_BlackMist_UnderGround', 'KeyName': 'Always'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Always', 'ActorName': 'EftLoc_LostForest_WhiteMist_UnderGround'})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'camera', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C03', 'CalcUpInInterpolate': False})
    } {
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 35})
        GameSystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LargeDungeonFire.game__location__Location.gyml'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void EntryPoint() {
    GameSystemActor.EventTriggerSetEnableMiasmaRenderer({'Enable': False})
    GameSystemActor.EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': False, 'ApplyToSkyOcclusion': True})
    Player.EventPlayerOnStopMode({'StopAnm': True})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GO_0028_Sub'})
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    Player.EventPlayerOffStopMode()
    GameSystemActor.EventTriggerSetEnableMiasmaRenderer({'Enable': True})
    GameSystemActor.EventTriggerSetEnableEnvMapAndSkyOcclusion({'Enable': True, 'ApplyToSkyOcclusion': True})
}
