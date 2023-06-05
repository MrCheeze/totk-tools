-------- EventFlow: Dm_GE_0040 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[camera]
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'IsWorld': True, 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'Position': [-4394.671875, 131.20199584960938, 3486.876953125], 'Rotation': [180.0, 45.0, 180.0], 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetFogDensityForFlowchart', 'Event_ResetFogDensityForFlowchart', 'Event_SetClimateForFlowchart', 'Event_ResetClimateForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerOnStopMode', 'EventPlayerOffStopMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': ''})
    Dm_Locator[camera].EventDoNothing({'IsWaitEnd': False})
    EventWorldManagerController.Event_SetFogDensityForFlowchart({'IsMul': False, 'Near': 50.0, 'FogDensity': 0.8999999761581421, 'Far': 2500.0})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'CameraName': '', 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': 'camera', 'IsLoop': False, 'SceneName': 'C03', 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LargeDungeonThunder.game__location__Location.gyml'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventWorldManagerController.Event_ResetFogDensityForFlowchart()
}

void EntryPoint() {
    Player.EventPlayerOnStopMode({'StopAnm': True})
    EventWorldManagerController.Event_SetClimateForFlowchart({'ClimateType': 30})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfGerudo_PyramidDungeonArriveNow', 'Value': True, 'Index': -1})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_GE_0040_Sub'})
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    Player.EventPlayerOffStopMode()
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfGerudo_PyramidDungeonArriveNow', 'Value': False, 'Index': -1})
    EventWorldManagerController.Event_ResetClimateForFlowchart()
}
