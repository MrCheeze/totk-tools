-------- EventFlow: DmF_SY_FairyWorking --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventWarpOnGround', 'EventTriggerPlayerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayerUpdateEquip', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_FairyWorking/DmF_SY_FairyWorking_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_FairyWorking_Link.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventAS': '', 'UseEventModelAnime': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TwnObj_FairySpring_E_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerControllerRumble', 'EventTriggerRequestAutoSave']
queries: ['EventQueryRandomChoice4', 'EventQueryCheckActorName']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DressFairy_03[1to2(Npc_DressFairy)]
entrypoint: 1to2(Npc_DressFairy)
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: None

Actor: Npc_DressFairy_03[2to3(Npc_DressFairy)]
entrypoint: 2to3(Npc_DressFairy)
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayASWithClothWarp']
queries: []
params: None

Actor: Npc_DressFairy_03[3to4(Npc_DressFairy)]
entrypoint: 3to4(Npc_DressFairy)
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayASWithClothWarp']
queries: []
params: None

Actor: Npc_DressFairy_03[ReAppearance(Npc_DressFairy)]
entrypoint: ReAppearance(Npc_DressFairy)
actions: ['EventWarpToTargetActor', 'EventPlayAS']
queries: []
params: None

Actor: Npc_DressFairy_03[Hi(Npc_DressFairy)]
entrypoint: Hi(Npc_DressFairy)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_DressFairy_03[Bye(Npc_DressFairy)]
entrypoint: Bye(Npc_DressFairy)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)]
entrypoint: ExitStartMessage(Npc_DressFairy)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_DressFairy_03[Exit(Npc_DressFairy)]
entrypoint: Exit(Npc_DressFairy)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_DressFairy_03[0to1(Npc_DressFairy)]
entrypoint: 0to1(Npc_DressFairy)
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: None

Actor: Npc_DressFairy_03[Exit_HorseGod001(Npc_DressFairy)]
entrypoint: Exit_HorseGod001(Npc_DressFairy)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_DressFairy_03[UpdateEquip(Npc_DressFairy)]
entrypoint: UpdateEquip(Npc_DressFairy)
actions: []
queries: ['EventQueryIsShopSelectTargetArmorEquiped']
params: None

void 1to2() {

    call Ready()


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DressFairy-Link-B-0', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_Player_Armor_PowerUp', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'B01-0', 'TargetActorName': 'TargetFairy', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_DressFairy_03[1to2(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge2', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 35})

        fork {
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 95})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Lip', 'SLinkKey': ''})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 25})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Finger', 'SLinkKey': ''})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 31})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_PlayerTouch', 'SLinkKey': ''})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 20})
        }

    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            call CameraChange({'TargetActorName': 'TargetFairy'})

        } {
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Lip', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Finger', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_PlayerTouch', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge2_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        } {
            Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        }

    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        fork {

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Lip', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_Finger', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_DressFairy_ThrowKiss_PlayerTouch', 'SLinkKey': '', 'IsKill': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 20})
            Npc_DressFairy_03[1to2(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge2_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        }


        call CameraChange({'TargetActorName': 'TargetFairy'})

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv2_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})
    }
}

void Ready() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 2, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
}

void 2to3() {

    call Ready()


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C01-0', 'TargetActorName': 'TargetFairy', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()

        fork {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'DressFairy-Link-C-0', 'IsWaitEnd': False, 'IsAllSlot': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_Player_Armor_PowerUp', 'SLinkKey': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'IsWaitEnd': False, 'SceneName': 'C02-0', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        }

    } {
        Npc_DressFairy_03[2to3(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge3', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 35})
        Npc_DressFairy_03[2to3(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_DressFairy_ApproachKiss', 'SLinkKey': ''})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 80})
    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            call CameraChange({'TargetActorName': 'TargetFairy'})

        } {
            Npc_DressFairy_03[2to3(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_DressFairy_ApproachKiss', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[2to3(Npc_DressFairy)].EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge3_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': 3})
        } {
            Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TargetFairy', 'TurnFaceControlType': 1})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'StaminaOut', 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
        }

    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TargetFairy', 'TurnFaceControlType': 1})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'StaminaOut', 'ClothWarpMode': 0})
        } {
            Npc_DressFairy_03[2to3(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_DressFairy_ApproachKiss', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[2to3(Npc_DressFairy)].EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge3_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': 3})
        }


        call CameraChange({'TargetActorName': 'TargetFairy'})

        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv3_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'IsAllSlot': False, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
    }
}

void CameraChange() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.0, 3.3499999046325684, 14.800000190734863], 'AtVector': [0.0, 6.400000095367432, -1.3300000429153442], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'TargetActorName', 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void 3to4() {

    call Ready()


    fork {
        Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ASCommand': 'DressFairy-Link-D-0', 'IsWaitEnd': False, 'UseAnmDriven': True, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'D01-0', 'TargetActorName': 'TargetFairy', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_DressFairy_03[3to4(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge4', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventCamera.EventTriggerRequestCameraShake({'Power': 0.699999988079071, 'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 0.0})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_Player_TakeAway', 'SLinkKey': ''})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_Player_Armor_PowerUp', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_Player_TakeAway', 'SLinkKey': '', 'IsKill': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_DressFairy_03[3to4(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_DressFairy_ReturnSplash', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 27})
    }

    Npc_DressFairy_03[3to4(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Wait', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            call CameraChange({'TargetActorName': 'TargetFairy'})

        } {
            Npc_DressFairy_03[3to4(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_DressFairy_ReturnSplash', 'SLinkKey': '', 'IsKill': True})
            Npc_DressFairy_03[3to4(Npc_DressFairy)].EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge4_Ed', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 3})
        } {
            Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
            Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': True})
            Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'ActorName': 'TargetFairy', 'PositionOffset': [0.0, 3.0, 7.0], 'UseDemoWait': True})

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ASCommand': 'DressFairy-Link-D-1', 'IsWaitEnd': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'DressFairy-Link-D-2', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 3})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

        Event276:
        Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_DressFairy_03[3to4(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': -1, 'ForceFadeInFrame': 0.0, 'ASName': 'Wait'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

        fork {
            Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'TargetActorKind': 1, 'OffsetBase': 1, 'YAngle': 180.0, 'ActorName': 'TargetFairy', 'PositionOffset': [0.0, 3.0, 7.0], 'UseDemoWait': True})

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ASCommand': 'DressFairy-Link-D-1', 'IsWaitEnd': False, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        } {

            call CameraChange({'TargetActorName': 'TargetFairy'})

        } {
            Npc_DressFairy_03[3to4(Npc_DressFairy)].EventPlayASWithClothWarp({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge4_Ed', 'ForceFadeInFrame': 0.0, 'ClothWarpMode': 3})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv4_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'DressFairy-Link-D-2', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        goto Event276
    }
}

void End() {
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)'})
}

void ReAppearance() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isAppearingGreatFairy', 'Value': True, 'Index': -1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'PosVector': [0.9277340173721313, 5.634582996368408, 6.274199962615967], 'AtVector': [-3.296143054962158, 2.189301013946533, 3.565764904022217], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'TargetPond', 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'YAngle': 180.0, 'TargetActorKind': 1, 'ActorName': 'TargetPond', 'PositionOffset': [0.0, 2.940000057220459, 7.0], 'UseDemoWait': True})
        Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
    } {
        Npc_DressFairy_03[ReAppearance(Npc_DressFairy)].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'TargetPond', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    }


    fork {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'TargetFairy', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})

        call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_DressFairy_03[ReAppearance(Npc_DressFairy)].EventPlayAS({'ASName': 'Act_ReAppearance', 'Partial': 'Lower', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_DressFairy_03[ReAppearance(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'ASName': 'Wait', 'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
    } {
        EventSystemActor.EventWait({'Frames': 25, 'IsWaitEnd': True})

        call Hi({'Npc_DressFairy': 'Npc_DressFairy', 'FiaryActorName': 'TargetFairy'})

        EventSystemActor.EventWait({'Frames': 6, 'IsWaitEnd': True})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 2, 'LoopEndCount': 1, 'Power': 0.05000000074505806, 'ApplyType': 0, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
        EventSystemActor.EventWait({'Frames': 8, 'IsWaitEnd': True})
        if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'HorseGod001', 'ActorName': 'TargetFairy'}) {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'HorseGod001', 'PosVector': [4.459228992462158, 2.645081043243408, 10.852829933166504], 'AtVector': [-0.7431640028953552, 8.046585083007812, 1.6323169469833374], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'TargetFairy', 'PosVector': [2.638916015625, 3.350677013397217, 8.82708740234375], 'AtVector': [-0.10449200123548508, 5.462769031524658, 3.821197986602783], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        EventCamera.EventTriggerRequestCameraShake({'LoopEndCount': 1, 'Pattern': 1, 'Power': 0.30000001192092896, 'ApplyType': 0, 'IsRumbleController': False})
        EventCamera.EventTriggerRequestCameraShake({'Power': 0.5, 'LoopEndCount': 2, 'Pattern': 4, 'ApplyType': 0, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.699999988079071})
    }

}

void Hi() {
    if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'Npc_DressFairy_00', 'ActorName': 'FiaryActorName'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_00', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_01', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_02', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_03', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_01'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_00', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_01', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_02', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_03', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_02'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_00', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_01', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_02', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_03', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_03'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_00', 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_01', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_02', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Hi(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_03', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'ASName': 'Act_ReAppearance', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Bye() {
    if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'Npc_DressFairy_00', 'ActorName': 'FiaryActorName'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_05', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_06', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_07', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_08', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_01'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_05', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_06', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_07', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_08', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_02'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_05', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_06', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_07', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_08', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_03'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_05', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_06', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_07', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_DressFairy_03[Bye(Npc_DressFairy)].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_08', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsWaitEnd': False, 'ASName': 'Act_Spring_Back', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void ExitStartMessage() {
    if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'Npc_DressFairy_00', 'ActorName': 'FiaryActorName'}) {
        Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy00_04', 'IsCloseDialog': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'Npc_DressFairy_01', 'ActorName': 'FiaryActorName'}) {
        Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy01_04', 'IsCloseDialog': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameSystemActor.EventQueryCheckActorName({'TargetName': 'Npc_DressFairy_02', 'ActorName': 'FiaryActorName'}) {
        Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_04', 'IsCloseDialog': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameSystemActor.EventQueryCheckActorName({'ActorName': 'FiaryActorName', 'TargetName': 'Npc_DressFairy_03'}) {
        Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy03_04', 'IsCloseDialog': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_DressFairy_03[ExitStartMessage(Npc_DressFairy)].EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'IsCloseDialog': True, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy04_04', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Exit() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call ExitStartMessage({'Npc_DressFairy': 'Npc_DressFairy', 'FiaryActorName': 'TargetFairy'})


    fork {
        Npc_DressFairy_03[Exit(Npc_DressFairy)].EventPlayAS({'ASName': 'Act_Spring_Back', 'Partial': 'Lower', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        EventSystemActor[0].EventWait({'Frames': 15, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVector': [7.492432117462158, 18.86635971069336, 13.298069953918457], 'AtVector': [4.102294921875, 13.244810104370117, 7.239044189453125], 'TargetFovy': 39.599979400634766, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TargetPond', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

        call Bye({'Npc_DressFairy': 'Npc_DressFairy', 'FiaryActorName': 'TargetFairy'})

        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 55})
        SystemTextNPC.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor[1].EventWait({'Frames': 65, 'IsWaitEnd': True})
        EventCamera.EventTriggerRequestCameraShake({'Power': 0.10000000149011612, 'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }

    Event140:
    Npc_DressFairy_03[Exit_HorseGod001(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'ASName': 'Act_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isAppearingGreatFairy', 'Value': False, 'Index': -1})
    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
}

void 0to1() {

    call Ready()


    fork {
        EventSystemActor.EventWait({'Frames': 75, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': False, 'ASCommand': 'DressFairy-Link-A-0', 'ClothWarpMode': 0})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_Player_Armor_PowerUp', 'SLinkKey': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'SceneName': 'A01-0', 'TargetActorName': 'TargetFairy', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Npc_DressFairy_03[0to1(Npc_DressFairy)].EventPlayAS({'ASName': 'Act_Give_Refuge', 'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_DressFairy_03[0to1(Npc_DressFairy)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_DressFairy_Breath', 'SLinkKey': 'Breath'})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 95})
    }

    EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': False})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {

        fork {

            call CameraChange({'TargetActorName': 'TargetFairy'})

        } {
            Npc_DressFairy_03[0to1(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_DressFairy_Breath', 'SLinkKey': '', 'IsKill': False})
            Npc_DressFairy_03[0to1(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        } {
            Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }

    } else {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        fork {

            call UpdateEquip({'Npc_DressFairy': 'Npc_DressFairy'})

            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_DressFairy_03[0to1(Npc_DressFairy)].EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_DressFairy_Breath', 'SLinkKey': '', 'IsKill': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 60})
            Npc_DressFairy_03[0to1(Npc_DressFairy)].EventPlayAS({'SlotIdx': 0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'DefaultMorphFrame': 0.0, 'IsAllSlot': True, 'ASName': 'Act_Give_Refuge_Ed', 'ForceFadeInFrame': -1.0, 'ClothWarpMode': -1})
        }


        call CameraChange({'TargetActorName': 'TargetFairy'})

        GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_FairyWorking_Lv1_Player_Armor_PowerUp', 'SLinkKey': '', 'IsKill': False})
    }
}

void Exit_HorseGod001() {
    GameSystemActor.EventTriggerRequestAutoSave()
    TwnObj_FairySpring_E_01.EventTriggerParticipateEvent()

    call ExitStartMessage({'Npc_DressFairy': 'Npc_DressFairy', 'FiaryActorName': 'TargetFairy'})


    fork {
        Npc_DressFairy_03[Exit_HorseGod001(Npc_DressFairy)].EventPlayAS({'ASName': 'Act_Spring_Back', 'Partial': 'Lower', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    } {
        EventSystemActor[0].EventWait({'Frames': 15, 'IsWaitEnd': True})
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'TargetFovy': 39.599979400634766, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TargetPond', 'PosVector': [5.389999866485596, 16.25, 13.970000267028809], 'AtVector': [4.079999923706055, 13.239999771118164, 10.630000114440918], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        SystemTextNPC.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventCamera.EventTriggerRequestCameraShake({'Power': 0.10000000149011612, 'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }

    goto Event140
}

void UpdateEquip() {
    if !Npc_DressFairy_03[UpdateEquip(Npc_DressFairy)].EventQueryIsShopSelectTargetArmorEquiped() {
        Player.EventPlayerUpdateEquip({'IsWaitEnd': False})
    }
}
