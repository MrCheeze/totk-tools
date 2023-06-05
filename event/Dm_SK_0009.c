-------- EventFlow: Dm_SK_0009 --------

Actor: EventSystemActor[Cam_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerPlayASForFlowchart', 'EventPlayerSwitchEquipment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0009/Dm_SK_0009_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0009_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0009/Dm_SK_0009_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0009_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Weapon_Sheath_070_ForDemo
entrypoint: None()
actions: ['EventTriggerModelBind']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[fade]
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
    GameSystemActor.EventTriggerRequestAutoSave()

    call Common.InitPlayState({'IsUnequip': False, 'IsRidableGetOff': False})

    Enemy_Dragon_Light_001.EventPlayAS({'ASName': 'C01-Enemy_Dragon_Light-A-0_Stop', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    Player.EventTriggerPlayerRequestLookAtTheFront()
    Player.EventPlayerSwitchEquipment({'DisarmWeapon': True, 'IsWaitEnd': True, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentWeaponName': '', 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': ''})
    Dm_Locator[demo].EventWarpToTargetPosAndRot({'Position': [1074.0, 3403.69189453125, 1373.656005859375], 'YAngle': -3.0, 'IsWaitEnd': True})

    fork {

        call Dm_SK_0009_Cam()

    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Link-A-0_Raise', 'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Weapon_Sword_070_ForGrabEvent.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player', 'BoneName': 'Weapon_R'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 455})
        Weapon_Sword_070_ForGrabEvent.EventTriggerModelBind({'InstanceName': '', 'ActorName': 'Player', 'BoneName': 'Pod_A', 'RotOffset': [180.0, 120.0, -2.0], 'TransOffset': [0.20000000298023224, -0.004999999888241291, -0.11999999731779099]})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.30000001192092896})
    } {
        Weapon_Sheath_070_ForDemo.EventTriggerModelBind({'ActorName': 'Player', 'BoneName': 'Pod_A', 'RotOffset': [180.0, 120.0, -2.0], 'TransOffset': [0.20000000298023224, -0.004999999888241291, -0.11999999731779099], 'InstanceName': ''})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'KeyName': 'Under_Restoration'})
    }


    fork {
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SK_0007_RayShaft', 'SLinkKey': '', 'IsKill': False})
    } {
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_SK_0007_RayShaft_C04'})
    }

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void Dm_SK_0009_Cam() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_SK_0009_Subspace', 'IsIgnoreDucking': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01', 'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C02', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Enemy_Dragon_Light_001', 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor[fade].EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1})
        EventSystemActor[Cam_wait].EventWait({'IsWaitEnd': True, 'Frames': 785})
        GameSystemActor[fade].EventEventFadeOut({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1, 'Color': 0})
    }

}
