-------- EventFlow: Dm_ZO_0045 --------

Actor: Dm_Locator[FX_loc]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0045/Dm_ZO_0045_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0045_Dm_Locator.root.as', 'IsWorld': False, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerRequestCameraShake', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerRequestStopCameraShake', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Dm_ZO_0045_Arrow
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0045/Dm_ZO_0045_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0045_Dm_Locator.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundRequestDucking', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting', 'EventEffectNearestArrowEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SkyObj_Zora_TrickArt_Block_A_02
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[FX_loc2]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [4048.08203125, 693.5054931640625, -506.631591796875], 'Rotation': [149.14999389648438, 47.779998779296875, 176.77000427246094], 'IsGrounding': False, 'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False}

void Dm_ZO_0045() {

    call c01()


    call c03()


    call c04()


    call c05()


    call c06()


    call c07()

}

void c04() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'SceneName': 'C03-0', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Dm_Locator.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03_Dm_Locator', 'ForceFadeInFrame': 0.0})
    } {
        Dm_ZO_0045_Arrow.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C04'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 47})
        Dm_Locator[FX_loc].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0045_WaterSplash', 'SLinkKey': ''})
        Dm_ZO_0045_Arrow.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C04', 'IsKill': False})
        Dm_ZO_0045_Arrow.EventTriggerModelUnbind()
        Dm_ZO_0045_Arrow.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    Dm_Locator[FX_loc].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'Position': [3608.0, 317.0, -122.30000305175781]})
}

void c03() {

    fork {

        fork {
            Dm_ZO_0045_Arrow.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C03'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } {
            Dm_ZO_0045_Arrow.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C01', 'IsKill': False})
        }

        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C02-0', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'Pattern': 3, 'LoopEndCount': 5, 'Power': 20.0, 'IsRumbleController': False})
    } {
        Dm_Locator.EventPlayAS({'ASName': 'C02_Dm_Locator', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
    }


    fork {
        Dm_Locator[FX_loc2].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_DropShepe', 'IsKill': True})
    } {
        Dm_ZO_0045_Arrow.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C03', 'IsKill': True})
    } {
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
    }

}

void c01() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventEffectEmitter.EventEffectNearestArrowEmitXLink({'XLinkKey': 'Dm_ZO_0045_ArrowHit_C01', 'IsWaitEnd': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0045_00_C01_Drip', 'IsIgnoreDucking': False})

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'SageOfZora_lightPillarVisible', 'Value': True})
    } {
        Dm_Locator[FX_loc2].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_DropShepe'})
    } {

        fork {
            Dm_ZO_0045_Arrow.EventTriggerParticipateEvent()
        } {
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.0, 0.0, 0.0]})
        }


        fork {
            Dm_ZO_0045_Arrow.EventTriggerModelBind({'ActorName': 'Dm_Locator', 'InstanceName': '', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 0.0, 0.0], 'BoneName': 'Dm_Locator'})
        } {
            Dm_Locator.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsWaitEnd': False, 'ASName': 'C01_wait_Dm_Locator'})
        }

    } {
        Dm_Locator[FX_loc].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': False, 'Position': [3601.0, 317.0, -118.0999984741211]})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'EftLoc_HoleWhirlingWaves_LightPillar', 'KeyName': 'Always'})
    } {
        TerrainCalcCenterTag.EventTerrainCalcCenter({'SceneName': 'MainField', 'Position': [3608.0, 317.0, -122.30000305175781], 'IsWaitEnd': False})
    } {

        call Common.AirStartUP_Player()

    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }

    Dm_ZO_0045_Arrow.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0045_Arrow_C01'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'SceneName': 'C02_01-0', 'IsReferenceRootOnce': False, 'IsLoop': False, 'InterpolateFrame': 5.0, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        SkyObj_Zora_TrickArt_Block_A_02.EventPlayAS({'ASName': 'on', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }


    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'IsLoop': False, 'InterpolateFrame': 15.0, 'IsReferenceRootOnce': False, 'SceneName': 'C02_01-1', 'CalcUpInInterpolate': False})
    } {
        Dm_Locator.EventPlayAS({'ASName': 'C01_02_Dm_Locator', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0045_01_C01_Transition_C04_Drop', 'IsIgnoreDucking': False})
    }

}

void c05() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'c04', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Dm_Locator[FX_loc].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0045_LightPillar', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 160})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [0.0, 0.0, 0.0]})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ZO_0045_02_C05_Light_Pillar', 'IsIgnoreDucking': False})
    }

}

void c06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 0, 'IsWaitEnd': False, 'SceneName': 'c05', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'WaterBridgePlace', 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    } {
        EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'EftLoc_HoleWhirlingWaves_LightPillar', 'KeyName': 'Always'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Dm_ZO_0045_LightPillar', 'ActorName': 'Dm_Locator'})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PlayerStatus.Companion.Water.IsSageDynamicGenerate', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_RepairArmor', 'Value': 'SubmitMaterial', 'Index': -1}) {

        call SageOfZora.VillageYonaLightDelete()

    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'ReportToParkShido', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
}

void c07() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'StartAccelerateRate': 0.0, 'PosVector': [4078.580078125, 716.5700073242188, -532.7100219726562], 'AtVector': [4073.2099609375, 712.6900024414062, -527.9400024414062], 'TargetFovy': 15.800000190734863, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'StartAccelerateRate': 0.0, 'PosVector': [4078.580078125, 716.5700073242188, -532.7100219726562], 'AtVector': [4073.2099609375, 712.6900024414062, -527.9400024414062], 'TargetFovy': 16.799999237060547, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.0, 'CameraCollisionMode': 0, 'PosVector': [4078.580078125, 716.5700073242188, -532.7100219726562], 'AtVector': [4073.52001953125, 712.0, -528.22998046875], 'TargetFovy': 49.959999084472656, 'IsLinearMove': False, 'MoveTime': 15, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
