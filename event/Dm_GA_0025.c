-------- EventFlow: Dm_GA_0025 --------

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerPlayASForFlowchart', 'EventPlayerSwitchEquipment', 'EventWaitCreationFinishedEquipment', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerEquipmentUserRequestCreateStaticEquipment']
queries: ['EventQueryCheckIsEquippedDynamicEquipment']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0025/Dm_GA_0025_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0025_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0025/Dm_GA_0025_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0025_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[fade]
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': True, 'Length': 0, 'IsWaitEnd': True})

    call GetPouchContent.GetPouchContentByActorNameImpl({'ActorName': 'Weapon_Sword_070'})


    call GetPouchContent.PostGetWindowByActorName({'ActorName': 'Weapon_Sword_070'})


    call GetPouchContent.EquipWeaponByActorName({'EquipmentActorName': 'Weapon_Sword_070'})

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !Player.EventQueryCheckIsEquippedDynamicEquipment({'DynamicEquipmentSlot': 0}) {
        Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070', 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'IsWaitEnd': True})
    } else {
        Player.EventTriggerEquipmentUserRequestCreateStaticEquipment({'EquipmentActorName': 'Weapon_Sword_070', 'DynamicEquipmentState': 1, 'AttachmentName': '', 'EffectType': 0, 'EffectValue': -1})
    }
    Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsCancelMasterSwordTrueFormTemp', 'Value': True, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})

    fork {
        Enemy_Dragon_Light_002.EventPlayAS({'ASName': 'C01-Enemy_Dragon_Light-A-0_Stop', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFront()
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_002', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C02', 'RootType': 3, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_002', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'C01-Link-A-0_RaiseSt', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor[fade].EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    }

}
