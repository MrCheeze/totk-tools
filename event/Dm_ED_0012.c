-------- EventFlow: Dm_ED_0012 --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerStopInAir', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestGlide', 'EventPlayerGlide', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0012/Dm_ED_0012_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0012.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundStartSound', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[forBgm]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Npc_Zelda_Catch
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerZeldaStartFall', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ED_0012/Dm_ED_0012_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ED_0012_zelda.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor[kaze]
entrypoint: None()
actions: ['EventClothRequestExtraWind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Length': 2, 'Color': 1, 'IsNoPlayAnime': True})
    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -180.0, 'Position': [200.0, 2750.0, -70.0], 'UseDemoWait': True})
    Player.EventPlayerStopInAir({'EnableCalcAnm': True, 'IsWaitEnd': False})
    GameSystemActor[kaze].EventClothRequestExtraWind({'ActorName': 'Player', 'Elevation': 90.0, 'InstanceName': '', 'Azimuth': 0.0, 'IsWaitEnd': False, 'Speed': 17.0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Dm_Npc_Zelda_Catch', 'KeyName': 'Diving'})

    fork {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0012_Player_Wind_C01', 'SLinkKey': ''})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'c01_link', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'c01-0', 'RootType': 3, 'TargetActorName': 'Player', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2, 'Color': 1})
    } {
        EventSystemActor[forBgm].EventWait({'IsWaitEnd': True, 'Frames': 135})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_LastCatch', 'IsReleaseDucking': True, 'CommandLife': 2})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ED_0012_C01_Env_Wind', 'IsIgnoreDucking': False})
    }

    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ED_0012_Player_Wind_C01', 'SLinkKey': '', 'IsKill': False})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': 0.0, 'ASCommand': 'c02_link', 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'IsLoop': False, 'SceneName': 'c01-6', 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'TargetActorInstanceName': '', 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'SceneName': 'c01-5', 'InterpolateFrame': 20.0, 'IsWaitEnd': False, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        Dm_Npc_Zelda_Catch.EventPlayAS({'ASName': 'c01_zelda', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'IsAllSlot': True})
    } {

        call C02_EF_Start()

    }


    call C02_EF_Stop()


    fork {
        Player.EventPlayerGlide({'IsWaitEnd': False, 'ASCommand': ''})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'Dm_Npc_Zelda_Catch', 'TargetActorInstanceName': '', 'IsWaitEnd': False, 'SceneName': 'c03_zelda-0', 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
    } {
        Dm_Npc_Zelda_Catch.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'c03_zeldafall', 'IsAllSlot': True})
        Dm_Npc_Zelda_Catch.EventTriggerZeldaStartFall()
    } {
        Dm_Npc_Zelda_Catch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0012_Zelda_Diving_Body_Air_C03', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ED_0012_C03_Zelda_Flap', 'IsIgnoreDucking': False})
    }

    Dm_Npc_Zelda_Catch.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ED_0012_Zelda_Diving_Body_Air_C03', 'SLinkKey': '', 'IsKill': False})

    fork {
        Dm_Npc_Zelda_Catch.EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Act_Fall', 'IsWaitEnd': False, 'IsAllSlot': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'TargetActorName': 'Player', 'TargetActorInstanceName': '', 'IsWaitEnd': True, 'SceneName': 'C04-1', 'CalcUpInInterpolate': False})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0012_Player_Wind_C04', 'SLinkKey': ''})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_ED_0012_C01_Env_Wind', 'GroupName': '', 'FadeFrame': -1})
    }

    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ED_0012_Player_Wind_C04', 'SLinkKey': '', 'IsKill': False})
    Player.EventTriggerPlayerRequestGlide()

    call Common.SetPlayerCameraOffsetDiffToEventCamera()

}

void C02_EF_Stop() {

    fork {
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ED_0012_Player_Wind_C02', 'SLinkKey': '', 'IsKill': False})
    } {
        Dm_Npc_Zelda_Catch.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ED_0012_Zelda_Diving_Body_Air_C02', 'SLinkKey': '', 'IsKill': False})
    }

}

void C02_EF_Start() {

    fork {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0012_Player_Wind_C02', 'SLinkKey': ''})
    } {
        Dm_Npc_Zelda_Catch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ED_0012_Zelda_Diving_Body_Air_C02', 'SLinkKey': ''})
    } {
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_ED_0012_C02_Link_Flap', 'IsIgnoreDucking': False})
    }

}
