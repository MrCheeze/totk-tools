-------- EventFlow: DmF_SY_WarpOut --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerPlayerSetModelWarpEffect']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetIsOpenLocationInEvent', 'EventTriggerControllerRumble', 'EventTriggerClearIsNeedOpenAtRequestFromScale']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': '', 'DuckingName': 'DmF:ローディング明けデモ専用'})

    fork {
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Player.EventTriggerPlayerSetModelWarpEffect({'FadeFrame': 1.0, 'WarpEffectSetType': 1})
    } {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
        EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_WarpOut_Warp', 'SLinkKey': ''})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_WarpOut', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    Player.EventTriggerPlayerSetModelWarpEffect({'WarpEffectSetType': 2, 'FadeFrame': 60.0})
    GameSystemActor.EventTriggerClearIsNeedOpenAtRequestFromScale()
    GameSystemActor.EventTriggerSetIsOpenLocationInEvent({'IsOpenLocation': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Small'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}
