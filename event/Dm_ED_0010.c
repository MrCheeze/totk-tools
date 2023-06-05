-------- EventFlow: Dm_ED_0010 --------

Actor: Player
entrypoint: None()
actions: ['EventPlayerSavePrincess', 'EventPlayerPlayASForFlowchart', 'EventPlayerGrabHand', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestGlide', 'EventPlayerGlide', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0010/Dm_ED_0010_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0010_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseDoCommand', 'EventOpenDoCommand', 'EventWait', 'EventEventFadeOut', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerStopInGameBgm', 'EventWait', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Npc_Zelda_Catch
entrypoint: None()
actions: ['EventPlayAS', 'EventMoveToGrabedHandPos', 'EventDoNothing', 'EventPrepareRetryGrabedHandEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: ['EventQueryGrabedHandEventBooType']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0010/Dm_ED_0010_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0010_Zelda.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryZeldaCatchChallengeResultState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWindForFlowchart', 'Event_ResetWindForFlowchart', 'Event_SetEnvPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[Sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZeldaCatch_CloudDelete', 'Value': True, 'Index': -1})
    EventWorldManagerController.Event_SetWindForFlowchart({'IsWaitEnd': False, 'Azimuth': 0.0, 'IsImmTrans': True, 'Elevation': 90.0, 'Speed': 16.0})
    if !Dm_Npc_Zelda_Catch.EventQueryGrabedHandEventBooType() {

        call C01_Do()


        call C01_End()

        Event51:
        switch ChallengeSystemActor.EventQueryZeldaCatchChallengeResultState() {
          case 0:

            call C02()

          case [1, 2]:

            call Fail()

        }
    } else {

        call C01_Distance()


        call C01_End()

        goto Event51
    }
}

void C01_Do() {

    call C01_EF_Start()


    fork {
        Player.EventPlayerSavePrincess({'IsWaitEnd': True, 'ReachFrame': 160.0, 'ActorName': 'Dm_Npc_Zelda_Catch', 'InstanceName': '', 'TargetOffsetRotY': 180.0, 'TargetOffsetPos': [0.0, -2.0, 1.0]})
    } {
        Dm_Npc_Zelda_Catch.EventMoveToGrabedHandPos({'ASName': 'C01_zelda', 'Frame': 160.0, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C01-0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'InterpolateFrame': 150.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': True, 'SceneName': 'C01-1-Loop', 'CalcUpInInterpolate': False})
    }

}

void C01_Distance() {

    call C01_EF_Start()


    fork {
        Player.EventPlayerSavePrincess({'IsWaitEnd': True, 'ActorName': 'Dm_Npc_Zelda_Catch', 'InstanceName': '', 'TargetOffsetRotY': 180.0, 'TargetOffsetPos': [0.0, -2.0, 1.0], 'ReachFrame': 280.0})
    } {
        Dm_Npc_Zelda_Catch.EventMoveToGrabedHandPos({'ASName': 'C01_zelda', 'IsWaitEnd': True, 'Frame': 280.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'SceneName': 'C01-2', 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'SceneName': 'C01-1', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'IsLoop': True, 'CalcUpInInterpolate': False})
    }

}

void C02() {

    fork {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Dm_Npc_Zelda_Catch', 'PositionOffset': [0.0, 1.600000023841858, 0.4000000059604645], 'InstanceName': '', 'OffsetBase': 0, 'YAngle': 180.0, 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C02_link', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Dm_Npc_Zelda_Catch.EventPlayAS({'ASName': 'C02_zelda', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': 0.0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'SceneName': 'C02-0', 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Don'})
    } {

        call C01_EF_Stop()

    } {
        EventWorldManagerController.Event_SetEnvPaletteForFlowchart({'ChangeSpeed': 4, 'IsWaitEnd': False, 'EnvTimeTableName': 'Dm_ED_0010', 'EnvPaletteName': ''})
    } {
        Dm_Npc_Zelda_Catch.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ED_0010_Zelda_Diving_Wind_C02'})
    } {
        GameSystemActor[Sound].EventWait({'IsWaitEnd': True, 'Frames': 47})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ED_0010_Grab_Last', 'IsIgnoreDucking': False})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 13})
        SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'FadeType': 0, 'IsForceFadeTime': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 1, 'Length': 0})
    Dm_Npc_Zelda_Catch.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ED_0010_Zelda_Diving_Wind_C02', 'IsKill': False})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
    Player.EventPlayerOffStopMode()

    call MainChallenge.CatchZelda()

}

void C01_End() {
    Dm_Npc_Zelda_Catch.EventDoNothing({'IsWaitEnd': False})
    GameSystemActor.EventOpenDoCommand({'IsWaitEnd': True, 'DoActionType': 15})
    Player.EventPlayerGrabHand({'IsWaitEnd': True, 'ActorName': 'Dm_Npc_Zelda_Catch', 'InstanceName': '', 'TargetOffsetRotY': 180.0, 'FinishCount': 100.0, 'TargetOffsetPos': [0.0, 1.6299999952316284, 0.3799999952316284]})
    GameSystemActor.EventCloseDoCommand({'IsWaitEnd': True})
    Player.EventPlayerOnStopMode({'StopAnm': False})
}

void Fail() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'RootType': 3, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C01-1-0', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'link_failure', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 44})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ED_0010_Failed_Wind', 'IsIgnoreDucking': False})
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV301', 'ELinkKey': ''})
    }


    call C01_EF_Stop()

    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
    Dm_Npc_Zelda_Catch.EventPrepareRetryGrabedHandEvent({'IsWaitEnd': True})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Dm_Npc_Zelda_Catch', 'InstanceName': '', 'TargetActorKind': 0, 'OffsetBase': 1, 'PositionOffset': [3.0, 100.0, 5.0], 'YAngle': 180.0, 'UseDemoWait': True})
    Player.EventPlayerGlide({'IsWaitEnd': True, 'ASCommand': 'Glide'})
    Player.EventTriggerPlayerRequestGlide()
    Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'Glide', 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 9.510000228881836, -2.200000047683716], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C01_EF_Start() {

    fork {
        Player.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ED_0010_Ply_Diving_Body_Air'})
    } {
        Dm_Npc_Zelda_Catch.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ED_0010_Zelda_Diving_Body_Air'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    }

}

void C01_EF_Stop() {

    fork {
        Player.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ED_0010_Ply_Diving_Body_Air'})
    } {
        Dm_Npc_Zelda_Catch.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ED_0010_Zelda_Diving_Body_Air'})
    }

}
