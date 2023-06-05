-------- EventFlow: Dm_RT_0041 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI', 'EventWait', 'EventTriggerEnterGameSafetySection']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
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
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_RT_0041() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:BgmBattleミュート', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    DgnObj_Terminal_A_01.EventDoNothing({'IsWaitEnd': False})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'CameraName': '', 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'OverwriteStartFrame': -1.0, 'TargetActorName': 'DgnObj_Terminal_A_01', 'TargetActorInstanceName': '', 'IsIgnoreRootRot': False, 'IsLoop': False, 'SceneName': 'C03', 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/LargeDungeonWind.game__location__Location.gyml'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_Supercell_A', 'KeyName': 'StrongWind'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsAfter_GoToHebra_Exp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWind_GoDungeonTalk', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Wind.IsFollowMode', 'Value': False})
        GameSystemActor.EventTriggerEnterGameSafetySection({'GameSafetySetting': 'SageOfWind'})
    }
}

void EntryPoint() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'FldObj_Supercell_A', 'KeyName': 'StrongWind'})
    Player.EventPlayerOnStopMode({'StopAnm': True})
    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_RT_0041_Sub'})
    EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    Player.EventPlayerOffStopMode()
}
