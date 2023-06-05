-------- EventFlow: DmF_SY_ClothColorChange --------

Actor: EventSystemActor[CntWait0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoTrapFloor_A_01[gimic_01]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPhysicsChangeCollisionModeAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_ClothColorChange/DmF_SY_ClothColorChange_TwnObj_Village_HatenoTrapFloor_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_ClothColorChange_TwnObj_Village_HatenoTrapFloor_A.root.as', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoTrapFloor_A_01[gimic_02]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPhysicsChangeCollisionModeAll']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_ClothColorChange/DmF_SY_ClothColorChange_TwnObj_Village_HatenoTrapFloor_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_ClothColorChange_TwnObj_Village_HatenoTrapFloor_A.root.as', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventDoNothing', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd', 'EventWait', 'EventRequestQuit']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToNearAnchor', 'EventPlayerWait', 'EventTriggerEmitXLink', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerDyeCurrentEquipArmor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerStainWait', 'EventPlayerStainCarryWait', 'EventTriggerEquipmentUserRequestSetVisible', 'EventTriggerEquipmentUserRequestStaticEquipmentSetVisible', 'EventTriggerXLinkFadeByKey', 'EventGoOffstageForUser', 'EventWait', 'EventDoNothing']
queries: ['EventQueryCheckPlayerState', 'EventQueryIsAnyOfSlotNotEquip']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_ClothColorChange/DmF_SY_ClothColorChange_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_ClothColorChange_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerIncreaseRupee', 'EventCloseMessageDialog', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventTriggerSetMessageLogDisableSectionStart']
queries: ['EventQueryRandomChoice4', 'EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum', 'EventTriggerSetGameDataBool']
queries: ['EventQueryBranchByDyeColor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventOpenDyeShopSelectArmorUI', 'EventOpenDyeShopSelectColorUI', 'EventWaitDyeShopUIInput', 'EventCloseDyeShopUI', 'EventOpenDyeShopSelectMaterialUI', 'EventTriggerResetDyeDecidedColor']
queries: ['EventQueryIsDyeShopSelectColorUIInput', 'EventQueryIsDyeShopSelectMaterialUIInput']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage001
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryHasDyeableArmor', 'EventQueryHasDyeMaterial', 'EventQueryIsEquippedWithDyeableArmor', 'EventQueryIsEquippedWithDyedArmor', 'EventQueryHasDyedArmor', 'EventQueryHasMaterialToDyeInSelectedColor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Bleaching() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0})
    EventCamera.EventDoNothing({'IsWaitEnd': True})
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call Bleaching_main()

    EventSystemActor.EventTriggerSkipEnd({'BlackInSkipEnd': True, 'SpecialEventActionType': 4})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_Smoke', 'SLinkKey': 'Dm_Smoke', 'IsKill': True})
            TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Default', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
        } {
            Player.EventDoNothing({'IsWaitEnd': False})

            call bleach({'Frame': 1})

        } {
            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': False})
        }

        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'DyeShop_PlayerPos4', 'UseDemoWait': True, 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.0, 3.5], 'AtVector': [0.0, 0.6000000238418579, 0.0], 'CameraCollisionMode': 0, 'MoveTotargetPosType': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Event13:
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_ClothColorChange_Bleached', 'CommandLife': 2, 'IsReleaseDucking': False})

        call Outro()

        Player.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_ClothColorChange_Player_Shine', 'IsKill': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 0})
    } else {
        GameSystemActor.EventEventFadeOut({'Color': 1, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call bleach({'Frame': 1})

        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'DyeShop_PlayerPos4', 'UseDemoWait': True, 'IsWaitEnd': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.0, 3.5], 'AtVector': [0.0, 0.6000000238418579, 0.0], 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 1, 'IsWaitEnd': False})
        goto Event13
    }
}

void Intro() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Player', 'OverwriteEndFrame': 5.0, 'OverwriteStartFrame': 0.0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'Frames': 25, 'IsWaitEnd': True})
}

void camera_3StepsCloseup() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'Player', 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 45.0, 'IsReferenceRootOnce': False, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'SceneName': 'C07-0', 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 54.0, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 40.0, 'SceneName': 'C08-0', 'CalcUpInInterpolate': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 22.0, 'SceneName': 'C09-0', 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'RootType': 3, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 20.0, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
}

void DyeWaterEffect() {
    switch GameDataActor.EventQueryBranchByDyeColor() {
      case 0:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Default', 'SLinkKey': 'Dm_Dyeing'})
      case 1:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Blue', 'SLinkKey': 'Dm_Dyeing'})
      case 2:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Red', 'SLinkKey': 'Dm_Dyeing'})
      case 3:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Yellow', 'SLinkKey': 'Dm_Dyeing'})
      case 4:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_White', 'SLinkKey': 'Dm_Dyeing'})
      case 5:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Black', 'SLinkKey': 'Dm_Dyeing'})
      case 6:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Purple', 'SLinkKey': 'Dm_Dyeing'})
      case 7:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Green', 'SLinkKey': 'Dm_Dyeing'})
      case 8:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_LightBlue', 'SLinkKey': 'Dm_Dyeing'})
      case 9:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_DarkBlue', 'SLinkKey': 'Dm_Dyeing'})
      case 10:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Orange', 'SLinkKey': 'Dm_Dyeing'})
      case 11:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Pink', 'SLinkKey': 'Dm_Dyeing'})
      case 12:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_WineRed', 'SLinkKey': 'Dm_Dyeing'})
      case 13:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Cream', 'SLinkKey': 'Dm_Dyeing'})
      case 14:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Brown', 'SLinkKey': 'Dm_Dyeing'})
      case 15:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Gray', 'SLinkKey': 'Dm_Dyeing'})
    }
}

void DyeingSmoke() {
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_Smoke', 'SLinkKey': 'Dm_Smoke'})
}

void Bleaching_main() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'InWaterfall'})

    call Intro()

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'Wait', 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

    fork {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_ClothColorChange_Bleaching', 'CommandLife': 2, 'IsReleaseDucking': False})

        call camera_3StepsCloseup()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C03-Link', 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    }


    fork {
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 1})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C05-HatenoTrapFloor_A-Open', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C05-Link', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.0})
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C05-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 0, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 120.0, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Default', 'SLinkKey': 'Dm_Dyeing'})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        GameSystemActor.EventTriggerControllerRumble({'Length': 1.0, 'RumbleCall': 'Small'})
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [3398.527099609375, 225.48440551757812, 2151.050048828125], 'YAngle': 130.0, 'IsWaitEnd': False, 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        call DyeingSmoke2()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    }

}

void dye() {
    Player.EventTriggerDyeCurrentEquipArmor()
    EventSystemActor.EventWait({'Frames': 'Frame', 'IsWaitEnd': True})
    Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_ClothColorChange_Player_Shine'})
}

void CleaningUp() {
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'DyeShop_PlayerPos2', 'IsWaitEnd': False, 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVector': [0.0, 0.6000000238418579, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 1.0, 5.0], 'IsWaitEnd': False, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
}

void Outro() {
    Player.EventPlayerWait({'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04-0', 'RootType': 3, 'TargetActorName': 'Player', 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 120.0, 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'Frames': 120, 'IsWaitEnd': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'C06-Link', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void DyeingSmoke2() {
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    TwnObj_Village_HatenoTrapWater_A_01[Dye_Water2].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_Smoke', 'SLinkKey': 'Dm_Smoke'})
}

void Deying() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IsDyeingCurrentEquipArmor'})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0})
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})

    call Deying_main()

    EventSystemActor.EventTriggerSkipEnd({'BlackInSkipEnd': True, 'SpecialEventActionType': 4})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {
            TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_Smoke', 'SLinkKey': 'Dm_Smoke', 'IsKill': True})

            call DyeWaterEffectStop()

        } {
            Player.EventDoNothing({'IsWaitEnd': False})

            call dye({'Frame': 1})

        } {
            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        }


        call CleaningUp()

        Event106:
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_ClothColorChange_Stained', 'CommandLife': 2, 'IsReleaseDucking': False})

        call Outro()

        Player.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_ClothColorChange_Player_Shine', 'IsKill': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'IsDyeingCurrentEquipArmor', 'Value': False})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 0})
    } else {
        GameSystemActor.EventEventFadeOut({'Color': 1, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})

        call dye({'Frame': 1})


        call CleaningUp()

        GameSystemActor.EventEventFadeIn({'Color': 1, 'IsNoPlayAnime': False, 'Length': 1, 'IsWaitEnd': False})
        goto Event106
    }
}

void Deying_main() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Player', 'KeyName': 'InWaterfall'})

    call Intro()

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C01-Link', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_ClothColorChange_Staining', 'CommandLife': 2, 'IsReleaseDucking': False})

    call camera_3StepsCloseup()


    fork {
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].EventTriggerPhysicsChangeCollisionModeAll({'CollisionMode': 1})
        TwnObj_Village_HatenoTrapFloor_A_01[gimic_01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C05-HatenoTrapFloor_A-Open', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'C05-Link', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 0.0})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV700_00', 'ELinkKey': ''})
        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': False, 'SceneName': 'C03-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'RootType': 0, 'OverwriteStartFrame': 0.0, 'OverwriteEndFrame': 120.0, 'CalcUpInInterpolate': False})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})

        call DyeWaterEffect()

        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [3401.30810546875, 225.48440551757812, 2154.64404296875], 'YAngle': 130.0, 'IsWaitEnd': False, 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

        call DyeingSmoke()

    }


    fork {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    } {
        EventSystemActor[CntWait0].EventWait({'Frames': 5, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 1.0})
    }

}

void bleach() {
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'Dye_DecidedColor', 'Index': -1, 'Value': 'None'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Player.EventTriggerDyeCurrentEquipArmor()
    Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_ClothColorChange_Player_Shine'})
}

void PaintColor() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
        if !PouchSystemActor.EventQueryHasDyeableArmor() {
            Npc_HatenoVillage001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_24', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event159:
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !PouchSystemActor.EventQueryHasDyeMaterial() {
            Npc_HatenoVillage001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_13', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event159
        } else {
            Npc_HatenoVillage001.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_15', 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTriggerResetDyeDecidedColor()
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Sage_Dyeing_Now', 'Index': -1, 'Value': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            call PlayerSetVisibleWeapon({'IsVisible': False})

            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3401.472900390625, 229.70309448242188, 2154.468017578125], 'YAngle': 135.0, 'UseDemoWait': True})
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 30.329999923706055, 'PosVector': [3404.68994140625, 230.5399932861328, 2151.300048828125], 'AtVector': [3403.030029296875, 230.47999572753906, 2152.919921875], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
            switch GameSystemActor.EventQueryRandomChoice4() {
              case 0:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_45', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event180:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_05', 'ChoiceNumber': 3, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event181:
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    switch PouchSystemActor.EventQueryIsEquippedWithDyeableArmor() {
                      case 0:

                        call SelectColor()

                      case 1:
                        if !Player.EventQueryIsAnyOfSlotNotEquip() {
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_21', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 10, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_22', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 10, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call SelectColor()

                        } else {
                            Event210:
                            Npc_EventStarter.EventOpenDyeShopSelectArmorUI({'IsWaitEnd': True})

                            call SelectColor_2()

                        }
                      case 2:
                        if !Player.EventQueryCheckPlayerState({'State': 0}) {
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_23', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                goto Event210
                            } else {
                                Event190:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                call Npc_HatenoVillage001.ResetArmor()

                            }
                        } else {
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_38', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                goto Event210
                            } else {
                                goto Event190
                            }
                        }
                    }
                  case 1:
                    goto Event210
                  case 2:
                    goto Event190
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_46', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event180
              case 2:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_47', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event180
              case 3:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_48', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event180
            }
        }
    } else {
        Npc_HatenoVillage001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_11', 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event159
    }
}

void SelectColor_2() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_19', 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event181
}

void ClothColorChange() {
    Npc_HatenoVillage001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 12, 'ChoiceLabel3': 3, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_56', 'ChoiceLabel4': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice3() {

        call PaintColor()

    } else {

        call ResetColor()

    }
}

void ResetColor() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
        if !PouchSystemActor.EventQueryHasDyedArmor() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event313:
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call PlayerSetVisibleWeapon({'IsVisible': False})

            Player.EventPlayerWait({'IsWaitEnd': True})
            Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3398.35791015625, 229.7042999267578, 2151.35595703125], 'YAngle': 135.0, 'UseDemoWait': True})
            EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 30.329999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3401.570068359375, 230.5399932861328, 2148.18994140625], 'AtVector': [3399.919921875, 230.47000122070312, 2149.800048828125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_28', 'ChoiceNumber': 3, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event218:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                if !PouchSystemActor.EventQueryIsEquippedWithDyedArmor() {
                    if !Player.EventQueryCheckPlayerState({'State': 0}) {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_33', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_69', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event243:
                        Npc_EventStarter.EventOpenDyeShopSelectArmorUI({'IsWaitEnd': True})

                        call ResetColor_2()

                    } else {
                        Event232:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        call Npc_HatenoVillage001.ResetArmor()

                    }
                } else {
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_31', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_20', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryRandomChoice4() {
                          case 0:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_41', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event350:
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                            call Bleaching()

                            Player.EventPlayerWait({'IsWaitEnd': True})
                            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 55.0, 'PosVector': [-0.015137000009417534, 0.7072139978408813, 2.004883050918579], 'AtVector': [0.09277299791574478, 0.9738460183143616, -0.9812009930610657], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_32', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})

                            call PlayerSetVisibleWeapon({'IsVisible': True})

                            GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                          case 1:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_42', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event350
                          case 2:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_53', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event350
                          case 3:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_44', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event350
                        }
                    } else {
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        goto Event232
                    }
                }
              case 1:
                goto Event243
              case 2:
                goto Event232
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_11', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event313
    }
}

void ResetColor_2() {
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_29', 'ChoiceNumber': 3, 'ChoiceLabel1': 13, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event218
}

void SelectColor() {
    Player.EventPlayerStainWait({'IsWaitEnd': False})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 30.329999923706055, 'MoveTime': 10, 'AtVector': [3402.909912109375, 230.5500030517578, 2153.75], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3404.14990234375, 230.5399932861328, 2151.800048828125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenDyeShopSelectColorUI({'IsWaitEnd': True})
    Npc_EventStarter.EventWaitDyeShopUIInput({'IsWaitEnd': True})
    Player.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsDyeShopSelectColorUIInput() {
        Npc_EventStarter.EventCloseDyeShopUI({'IsWaitEnd': True})
        Player.EventPlayerStainCarryWait({'IsWaitEnd': False})
        if !PouchSystemActor.EventQueryHasMaterialToDyeInSelectedColor() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call SelectColorCheck()

            Npc_EventStarter.EventTriggerResetDyeDecidedColor()
            Event254:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_27', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 11, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call SelectColor()

            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call Npc_HatenoVillage001.ResetArmor()

            }
        } else {
            Event355:
            GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_26', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventOpenDyeShopSelectMaterialUI({'IsWaitEnd': True})
            Npc_EventStarter.EventWaitDyeShopUIInput({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsDyeShopSelectMaterialUIInput() {
                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_12', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                    Npc_EventStarter.EventCloseDyeShopUI({'IsWaitEnd': True})
                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 30.329999923706055, 'PosVector': [3404.340087890625, 230.5399932861328, 2152.06005859375], 'AtVector': [3402.56005859375, 230.55999755859375, 2153.530029296875], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_20', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    switch GameSystemActor.EventQueryRandomChoice4() {
                      case 0:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_41', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event295:

                        call Deying()

                        Player.EventPlayerWait({'IsWaitEnd': True})
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 55.0, 'PosVector': [-0.015137000009417534, 0.7072139978408813, 2.004883050918579], 'AtVector': [0.09277299791574478, 0.9738460183143616, -0.9812009930610657], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        switch GameSystemActor.EventQueryRandomChoice4() {
                          case 0:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_16', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event278:
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_49', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event279:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_17', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                                call PlayerSetVisibleWeapon({'IsVisible': True})

                                GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
                                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                              case 1:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_50', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event279
                              case 2:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_51', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event279
                              case 3:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_52', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event279
                            }
                          case 1:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_07', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event278
                          case 2:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_08', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event278
                          case 3:
                            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_09', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event278
                        }
                      case 1:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_42', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event295
                      case 2:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_43', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event295
                      case 3:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:NewText_44', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event295
                    }
                } else {
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    goto Event355
                }
            } else {
                GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
                Npc_EventStarter.EventCloseDyeShopUI({'IsWaitEnd': True})
                goto Event254
            }
        }
    } else {
        Npc_EventStarter.EventCloseDyeShopUI({'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 30.329999923706055, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 10, 'PosVector': [3405.010009765625, 230.69000244140625, 2150.929931640625], 'AtVector': [3401.469970703125, 230.2899932861328, 2154.469970703125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        call SelectColor_2()

    }
}

void PlayerSetVisibleWeapon() {
    Player.EventTriggerEquipmentUserRequestSetVisible({'IsVisible': 'IsVisible', 'DynamicEquipmentSlot': 0})
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 3, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestSetVisible({'DynamicEquipmentSlot': 4, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestStaticEquipmentSetVisible({'StaticEquipmentSlot': 3, 'IsVisible': 'IsVisible'})
    Player.EventTriggerEquipmentUserRequestStaticEquipmentSetVisible({'StaticEquipmentSlot': 6, 'IsVisible': 'IsVisible'})
}

void SelectColorCheck() {
    switch GameDataActor.EventQueryBranchByDyeColor() {
      case 1:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 3:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 4:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 5:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 6:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 7:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 8:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 9:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 10:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 11:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 12:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 13:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0013', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 14:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 15:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage001:Talk_0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void DyeWaterEffectStop() {
    switch GameDataActor.EventQueryBranchByDyeColor() {
      case 0:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Default', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 1:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Blue', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 2:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Red', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 3:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Yellow', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 4:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_White', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 5:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Black', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 6:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Purple', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 7:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Green', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 8:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_LightBlue', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 9:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_DarkBlue', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 10:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Orange', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 11:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Pink', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 12:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_WineRed', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 13:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Cream', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 14:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Brown', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
      case 15:
        TwnObj_Village_HatenoTrapWater_A_01[Dye_Water1].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_ClothColorChange_TrapWater_WaterSplash_Gray', 'SLinkKey': 'Dm_Dyeing', 'IsKill': True})
    }
}
