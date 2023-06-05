-------- EventFlow: Dm_ED_0002 --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerMasterSwordForcedResurrection', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerSwitchEquipment', 'EventPlayerPlayASForFlowchart', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerUnequip', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0002/Dm_ED_0002_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0002_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Darkness
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEnemyDragonDarknessRequestShootBullet', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0002/Dm_ED_0002_Enemy_Dragon_Darkness/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0002_Enemy_Dragon_Darkness.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventDragonRotateFixHorizontal', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0002/Dm_ED_0002_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0002_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[posDragonLight]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGMwithInput', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call C01()

    EventWorldManagerController.Event_ResetEnvPaletteForFlowchart({'IsWaitEnd': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MasterSwordCombatModeWithBlackDragon', 'Value': True, 'Index': -1})

    call C02()

    Enemy_Dragon_Darkness.EventTriggerEnemyDragonDarknessRequestShootBullet()
}

void C01() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-0_Loop', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    }
    Enemy_Dragon_Darkness.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C02_pre', 'IsAllSlot': True})
    Enemy_Dragon_Darkness.EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'Luminance_Wait', 'Partial': 'Luminance'})
    Enemy_Dragon_Darkness.EventPlayAS({'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'Partial': 'Color', 'ASName': 'Color'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
        GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': True, 'IsWaitEnd': True, 'Color': 0, 'Length': 0})
        Enemy_Dragon_Light_002.EventDragonRotateFixHorizontal()

        fork {
            Enemy_Dragon_Light_002.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-2.319999933242798, -0.4300000071525574, 3.619999885559082], 'AtVector': [-1.690000057220459, -0.30000001192092896, 2.8499999046325684], 'TargetFovy': 19.459999084472656, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        Player.EventPlayerUnequip({'IsWaitEnd': True})
        GameSystemActor.EventTriggerMasterSwordForcedResurrection()
        Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070', 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': '', 'IsWaitEnd': True})
        Player.EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsCancelMasterSwordTrueFormTemp', 'Value': True})

        fork {
            Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'C01-0_pre', 'IsAllSlot': False, 'ClothWarpMode': 0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

        Dm_Locator[posDragonLight].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_Dragon_Light_002', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 11.0]})
        GameSystemActor.EventEventFadeIn({'Length': 2, 'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 0})

        fork {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ASCommand': 'C01-0', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
        }

    } else {

        fork {
            Enemy_Dragon_Light_002.EventPlayAS({'ASName': 'C01', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'C01-1_loop', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            call GetPouchContent.OpenGetWindowByActorName({'ActorName': 'Weapon_Sword_070', 'IsSuccess': True, 'IsEnableOpenPouch': False})


            call GetPouchContent.WaitCloseGetWindow()

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveMasterSword'})
        }

        Dm_Locator[posDragonLight].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Enemy_Dragon_Light_002', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 11.0]})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C01-1', 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-1', 'IsAllSlot': True, 'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ForceFadeFrame': 10.0, 'ClothWarpMode': 0})
        }

    }
}

void C02() {

    fork {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Enemy_Dragon_Darkness', 'KeyName': 'WeakPoint'})
        Enemy_Dragon_Darkness.EventPlayAS({'ASName': 'C02', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': True, 'IsAnimeDriven': False})
        Enemy_Dragon_Darkness.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0002_Enm_Dragon_Darkness_Roar', 'SLinkKey': ''})
    } {

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'SceneName': 'C02-1', 'TargetActorName': 'Enemy_Dragon_Light_002', 'TargetActorInstanceName': '', 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'C02', 'ForceFadeFrame': 0.0, 'IsWaitEnd': True, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'ASCommand': 'ToInGame', 'ClothWarpMode': 0})
        } {
            Enemy_Dragon_Light_002.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsAllSlot': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsCancelMasterSwordTrueFormTemp', 'Value': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventTriggerControllerRumble({'Length': 6.0, 'RumbleCall': 'Demo_Large_GoroGoro'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 72})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 97})
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'IsControlSpotBgm': True, 'WithPlayableEvent': True})
            SoundSystemActor.EventTriggerSoundControlBGMwithInput({'BgmName': 'BGM_Dragon_Darkness', 'ControlType2': 0})
        }

        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'Pattern': 3, 'LoopEndCount': 10, 'Power': 1.0, 'IsRumbleController': False})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
    }

}
