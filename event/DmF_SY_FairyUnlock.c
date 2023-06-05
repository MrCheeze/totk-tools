-------- EventFlow: DmF_SY_FairyUnlock --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble', 'EventCloseMessageDialog', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm', 'EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_DressFairy_03[DmF_SY_FairyUnlock(Npc_DressFairy_03)]
entrypoint: DmF_SY_FairyUnlock(Npc_DressFairy_03)
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerEmitXLink']
queries: []
params: None

Actor: TwnObj_FairySpringClose_D_01[DmF_SY_FairyUnlock(TwnObj_FairySpringClose_D_01)]
entrypoint: DmF_SY_FairyUnlock(TwnObj_FairySpringClose_D_01)
actions: []
queries: []
params: None

Actor: TwnObj_FairySpring_D_01[DmF_SY_FairyUnlock(TwnObj_FairySpring_D_01)]
entrypoint: DmF_SY_FairyUnlock(TwnObj_FairySpring_D_01)
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock(Miroyan)]
entrypoint: DmF_SY_FairyUnlock(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_DressFairy_03[DmF_SY_FairyUnlock0(Npc_DressFairy_03)]
entrypoint: DmF_SY_FairyUnlock0(Npc_DressFairy_03)
actions: ['EventPlayAS']
queries: []
params: None

Actor: TwnObj_FairySpringClose_D_01[DmF_SY_FairyUnlock0(TwnObj_FairySpringClose_D_01)]
entrypoint: DmF_SY_FairyUnlock0(TwnObj_FairySpringClose_D_01)
actions: ['EventPlayAS']
queries: []
params: None

Actor: TwnObj_FairySpring_D_01[DmF_SY_FairyUnlock0(TwnObj_FairySpring_D_01)]
entrypoint: DmF_SY_FairyUnlock0(TwnObj_FairySpring_D_01)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock0(Miroyan)]
entrypoint: DmF_SY_FairyUnlock0(Miroyan)
actions: []
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C01_Miroyan(Miroyan)]
entrypoint: DmF_SY_FairyUnlock_C01_Miroyan(Miroyan)
actions: ['EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C02_Miroyan(Miroyan)]
entrypoint: DmF_SY_FairyUnlock_C02_Miroyan(Miroyan)
actions: ['EventWarpToTargetActor']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C04_Miroyan(Miroyan)]
entrypoint: DmF_SY_FairyUnlock_C04_Miroyan(Miroyan)
actions: ['EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)]
entrypoint: DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)
actions: ['EventWait', 'EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: None

void DmF_SY_FairyUnlock() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call DmF_SY_FairyUnlock0({'Npc_DressFairy_03': 'Npc_DressFairy_03', 'TwnObj_FairySpringClose_D_01': 'TwnObj_FairySpringClose_D_01', 'TwnObj_FairySpring_D_01': 'TwnObj_FairySpring_D_01', 'Actor1ActorName': 'Actor1ActorName', 'TargetActorName': 'TargetActorName', 'TargetActorName_000': 'TargetActorName_000', 'Miroyan': 'Miroyan'})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GameDataName'})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'FairyRevivalNum', 'Value': 1, 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'TargetActorName_000', 'SceneName': 'C02-1', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        TwnObj_FairySpring_D_01[DmF_SY_FairyUnlock(TwnObj_FairySpring_D_01)].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_FairyUnlock_FlowerOpen'})

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
            TwnObj_FairySpring_D_01[DmF_SY_FairyUnlock(TwnObj_FairySpring_D_01)].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_FairyUnlock_SplashOmen'})
        } {
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
        }

    } {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_FairyUnlock_01', 'CommandLife': 2, 'IsReleaseDucking': False})
    } {

        call DmF_SY_FairyUnlock_C02_Miroyan({'ActorName': 'TargetActorName', 'Miroyan': 'Miroyan'})

    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C03-0', 'IsReferenceRootOnce': True, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'TargetActorName_000', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 4, 'LoopEndCount': 5, 'ApplyType': 0, 'Power': 0.10000000149011612, 'IsRumbleController': False})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Small', 'Length': 1.2000000476837158})
    } {
        Npc_DressFairy_03[DmF_SY_FairyUnlock(Npc_DressFairy_03)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Appearance', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'SceneName': 'C04-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'TargetActorName_000', 'IsLoop': False, 'CalcUpInInterpolate': False})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_FairyUnlock_02', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'SceneName': 'C05-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'TargetActorName_000', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': True, 'IsReferenceRootOnce': True, 'SceneName': 'C06-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'TargetActorName_000', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'LoopEndCount': 1, 'Power': 1.0, 'ApplyType': 0, 'IsRumbleController': False})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'LoopEndCount': 1, 'Power': 1.0, 'ApplyType': 0, 'IsRumbleController': False})
        EventCamera.EventTriggerRequestCameraShake({'Pattern': 4, 'Power': 0.5, 'LoopEndCount': 3, 'ApplyType': 0, 'IsRumbleController': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dohoon'})
    } {
        Npc_DressFairy_03[DmF_SY_FairyUnlock(Npc_DressFairy_03)].EventTalk({'IsWaitEnd': False, 'IsAnimeDriven': False, 'ASName': 'Act_Appearance', 'MessageId': 'EventFlowMsg/DmF_SY_FairyWorking:DmF_SY_FairyWorking_Fairy02_07', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_DressFairy_03[DmF_SY_FairyUnlock(Npc_DressFairy_03)].EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_FairyUnlock_AppearSplash', 'SLinkKey': ''})
        TwnObj_FairySpring_D_01[DmF_SY_FairyUnlock(TwnObj_FairySpring_D_01)].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_FairyUnlock_SplashOmen', 'IsKill': False})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {

        call DmF_SY_FairyUnlock_C04_Miroyan({'ActorName': 'TargetActorName', 'Miroyan': 'Miroyan'})

    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 88})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsPosVectorReferenceActorPosOnce': True, 'PosVector': [0.8095700144767761, 8.55584716796875, 18.701969146728516], 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [0.9663090109825134, 8.819915771484375, 0.42132601141929626], 'TargetFovy': 13.829019546508789, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TargetActorName_000', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [2.638916015625, 3.350677013397217, 8.82708740234375], 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVector': [-0.10449200123548508, 5.462769031524658, 3.821197986602783], 'MoveTime': 100, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'TargetFovy': 50.00001907348633, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TargetActorName_000', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_DressFairy_03[DmF_SY_FairyUnlock(Npc_DressFairy_03)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Appearance_Ed', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
    } {

        call DmF_SY_FairyUnlock_C07_Miroyan({'ActorName': 'TargetActorName', 'Miroyan': 'Miroyan'})

    }

    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'IsControlSpotBgm': True, 'WithPlayableEvent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}

void DmF_SY_FairyUnlock0() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'SceneName': 'C01-1', 'IsLoop': False, 'TargetActorName': 'TargetActorName', 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Large', 'Length': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
    } {
        TwnObj_FairySpringClose_D_01[DmF_SY_FairyUnlock0(TwnObj_FairySpringClose_D_01)].EventPlayAS({'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Act_Open', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
    } {

        call DmF_SY_FairyUnlock_C01_Miroyan({'ActorName': 'TargetActorName', 'Miroyan': 'Miroyan'})

    }

    Npc_DressFairy_03[DmF_SY_FairyUnlock0(Npc_DressFairy_03)].EventPlayAS({'IsWaitEnd': False, 'SlotIdx': 0, 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Act_Wait', 'Partial': '', 'DefaultMorphFrame': 0.0, 'ForceFadeInFrame': -1.0})
}

void DmF_SY_FairyUnlock_C01_Miroyan() {
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C01_Miroyan(Miroyan)].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C01_Miroyan(Miroyan)].EventNPCTurnToTarget({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'Target': 3, 'FaceControlType': 0, 'ActorName': 'ActorName', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C01_Miroyan(Miroyan)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}

void DmF_SY_FairyUnlock_C02_Miroyan() {
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C02_Miroyan(Miroyan)].EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'TargetActorKind': 1, 'PositionOffset': [0.05000000074505806, 3.0, 7.099999904632568], 'YAngle': 180.0, 'ActorName': 'ActorName'})
    Player.EventPlayerWarpToTargetActor({'InstanceName': '', 'OffsetBase': 1, 'YAngle': 180.0, 'TargetActorKind': 1, 'IsWaitEnd': False, 'ActorName': 'ActorName', 'PositionOffset': [2.0999999046325684, 1.0, 12.600000381469727], 'UseDemoWait': True})
    Player.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void DmF_SY_FairyUnlock_C04_Miroyan() {
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C04_Miroyan(Miroyan)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsPauseCloth': False, 'IsPauseHelperBone': False, 'IsPauseAS': False, 'IsDisableIK': False, 'IsRidingTargetGoOffstage': False})
}

void DmF_SY_FairyUnlock_C07_Miroyan() {
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)].EventWait({'IsWaitEnd': True, 'Frames': 110})
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_MiloyanTact'})
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)].EventPlayAS({'ASName': 'Act_Orchestra_Random_B', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_Orchestra_M_00[DmF_SY_FairyUnlock_C07_Miroyan(Miroyan)].EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}
