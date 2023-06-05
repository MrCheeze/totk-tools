-------- EventFlow: Dm_GA_0027 --------

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness
entrypoint: None()
actions: ['EventPlayAS', 'EventSignalDeathProcedure', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0027/Dm_GA_0027_Enemy_Dragon_Darkness/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0027_dragon.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForKeyInput', 'EventOpenDoCommand', 'EventCloseDoCommand', 'EventEventFadeIn', 'EventEventFadeOut', 'EventWait', 'EventTriggerControllerRumble', 'EventTriggerMasterSwordForcedResurrection']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventGoOffstageForUser', 'EventPlayerSwitchEquipment', 'EventPlayerUnequip', 'EventWaitCreationFinishedEquipment', 'EventTriggerEquipmentUserRequestChangeState']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_GA_0027/Dm_GA_0027_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_GA_0027.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness_SecretStone
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[FxWait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call cut1()


    call cut2()


    call controller()

}

void pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Enemy_Dragon_Darkness_SecretStone.EventTriggerParticipateEvent()
    Player.EventTriggerModelBindWithDependency({'ActorName': 'Enemy_Dragon_Darkness', 'InstanceName': '', 'BoneName': 'Forehead_SecretStone', 'TransOffset': [0.6904000043869019, 1.7965999841690063, -0.28279998898506165], 'RotOffset': [0.0, -39.94900131225586, 0.0]})
    Enemy_Dragon_Light_002.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventTriggerMasterSwordForcedResurrection()
    Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070', 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'IsWaitEnd': True})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsCancelMasterSwordTrueFormTemp', 'Value': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ASCommand': 'link_c02_pre', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void cut2() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ASCommand': 'link_c02_zenhan', 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 256})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
        } {
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
            Weapon_Sword_070.EventTriggerEmitXLink({'ELinkKey': 'Dm_GA_0027_MasterSwordGlow', 'SLinkKey': 'Dm_GA_0027_MasterSwordGlow'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsCancelMasterSwordTrueFormTemp', 'Value': False})
        }

    } {
        Enemy_Dragon_Darkness.EventTriggerEmitXLink({'SLinkKey': 'Dm_GA_0027_Dragon_Darkness_Fly_loop', 'ELinkKey': ''})
        Enemy_Dragon_Darkness.EventPlayAS({'Partial': '', 'ForceFadeInFrame': 0.0, 'ASName': 'dragon_c02_z', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'InterpolateFrame': 0.0, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsLoop': False, 'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'SceneName': 'c02_link_todome-7_z', 'CalcUpInInterpolate': False})
    }

}

void cut1() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GoroGoro', 'Length': 4.0})
    } {
        Enemy_Dragon_Darkness.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'dragon_c01_abare', 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'CameraName': '', 'IsWaitEnd': True, 'SceneName': 'c02_link_todome-0', 'TargetActorName': 'Enemy_Dragon_Darkness', 'TargetActorInstanceName': '', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        EventWorldManagerController.Event_SetWindForFlowchart({'Speed': 9.0, 'IsImmTrans': True, 'Azimuth': 180.0, 'IsWaitEnd': False, 'Elevation': 0.0})
    }

}

void controller() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'link_c02_loop', 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventOpenDoCommand({'IsWaitEnd': True, 'DoActionType': 17})
        GameSystemActor.EventWaitForKeyInput({'IsWaitEnd': True, 'KeyInputValue': 4})
        GameSystemActor.EventCloseDoCommand({'IsWaitEnd': True})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 95})
        Enemy_Dragon_Darkness_SecretStone.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_GA_0027_Enm_Dragon_Darkness_SecretStone_Break_Light'})
    } {
        Enemy_Dragon_Darkness.EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'ASName': 'dragon_c02_l', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'CameraName': '', 'InterpolateFrame': 0.0, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsIgnoreRootRot': False, 'IsLoop': True, 'IsWaitEnd': False, 'SceneName': 'c02_link_todome-7_l', 'CalcUpInInterpolate': False})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'link_c02_kouhan', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

        fork {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 4.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        }

    } {
        GameSystemActor[FxWait].EventWait({'IsWaitEnd': True, 'Frames': 59})
        Enemy_Dragon_Darkness_SecretStone.EventTriggerEmitXLink({'ELinkKey': 'Dm_GA_0027_Enm_Dragon_Darkness_SecretStone_Break', 'SLinkKey': 'Dm_GA_0027_Enm_Dragon_Darkness_SecretStone_Break'})
        Enemy_Dragon_Darkness.EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_GA_0027_Dragon_Darkness_Fly_loop', 'ELinkKey': '', 'IsKill': False})
    } {
        Enemy_Dragon_Darkness.EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'ASName': 'dragon_c02_k', 'IsAnimeDriven': False, 'ForceFadeInFrame': 60.0, 'IsAllSlot': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'CameraName': '', 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsIgnoreRootRot': False, 'IsWaitEnd': False, 'IsLoop': False, 'SceneName': 'c02_link_todome-7_k', 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 3.0, 'CalcUpInInterpolate': False})
    }

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Enemy_Dragon_Darkness.EventSignalDeathProcedure({'IsWaitEnd': True})
    Enemy_Dragon_Darkness_SecretStone.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GA_0027_Enm_Dragon_Darkness_SecretStone_Break', 'IsKill': True, 'SLinkKey': ''})
}
