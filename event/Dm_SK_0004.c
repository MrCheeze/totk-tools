-------- EventFlow: Dm_SK_0004 --------

Actor: EventSystemActor[Cam_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor[Wepon_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Dm_Locator[demo]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0004_Weapon_Sword_070.root.as', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0004/Dm_SK_0004_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0004_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_002
entrypoint: None()
actions: ['EventPlayAS', 'EventDragonControlHoldingActorVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0004/Dm_SK_0004_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0004_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Hair]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_Hair
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerStartFadeOut']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: GameSystemActor[fade]
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventSoundRequestDucking', 'EventWait', 'EventSoundStartSound', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerModelBindWithDependency']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SK_0004/Dm_SK_0004_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SK_0004_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[Npc_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetDisableLensFlareForFlowchart', 'Event_ResetDisableLensFlareForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[SndDuck_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

void EntryPoint0() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'MasterSword_ForGrabEvent_Shine', 'ActorName': 'Weapon_Sword_070_ForGrabEvent'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Dm_Locator[demo].EventWarpToTargetPosAndRot({'Position': [1074.0, 3403.69189453125, 1373.656005859375], 'YAngle': -3.0, 'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.07999999821186066, 0.5099999904632568, 6.010000228881836], 'AtVector': [0.05999999865889549, 0.550000011920929, 5.010000228881836], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[Cam_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C02-1', 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
        } {
            Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01-Enemy_Dragon_Light-A-0_ManeShrink', 'ForceFadeInFrame': 0.0})
        }

    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C01-Link-A-0_SwordGet', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 12.0, 'ClothWarpMode': 3})
    } {
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.5})
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Stairs00', 'Length': 0.699999988079071})
    } {
        EventSystemActor[Wepon_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        Weapon_Sword_070_ForGrabEvent.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player', 'BoneName': 'Weapon_R'})
    } {
        EventSystemActor[Hair].EventWait({'Frames': 100, 'IsWaitEnd': True})
        Enemy_Dragon_Light_Hair.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hair_Anm2'})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Pulled'})
    }


    fork {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SK_0004', 'CommandLife': 2, 'IsReleaseDucking': False})

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'IsReferenceRootOnce': False, 'SceneName': 'C01-2', 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0007_RayShaft_C03'})
        } {
            CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0007_RayShaft', 'IsKill': False})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'SceneName': 'C01-3', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_001', 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0007_RayShaft_C03', 'IsKill': False})
        } {
            CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0007_RayShaft_C04'})
        }

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 675})
        GameSystemActor[fade].EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'KeyName': 'Under_Restoration'})
    } {
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': 'Dm_SK_0004_MasterSword_PeelOff', 'SLinkKey': ''})
        EventSystemActor[Wepon_Wait].EventWait({'IsWaitEnd': True, 'Frames': 582})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SK_0004_MasterSword_Shine'})
    } {
        Enemy_Dragon_Light_Hair.EventTriggerStartFadeOut({'FadeFrame': 10})
    } {
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 196})
        Weapon_Sword_070_ForGrabEvent.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Weapon_Sword_070_Intensify_Dm_SK_0004', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventWait({'Frames': 39, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_PeelOff'})
        SoundSystemActor.EventWait({'Frames': 511, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Charge'})
        SoundSystemActor.EventWait({'Frames': 57, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Shine'})
    }

    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'Frames': 70, 'IsWaitEnd': True})
}

void C01_Dm_GA_0023_C01() {
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    EventWorldManagerController.Event_SetDisableLensFlareForFlowchart({'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C02-2', 'IsWaitEnd': True, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'SceneName': 'C02-3', 'IsWaitEnd': True, 'TargetActorName': 'Player', 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C01-Link-A-0_LookSword', 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Enemy_Dragon_Light_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01-Enemy_Dragon_Light-A-0_LookSword', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Player.EventTriggerEmitXLink({'ELinkKey': 'Dm_GA_0023_RayShaft', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 85})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV723_00', 'ELinkKey': ''})
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 1, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': ''})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0023_RayDust'})
    } {
        Enemy_Dragon_Light_Hair.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Hair_Wait', 'ForceFadeInFrame': 0.0})
    } {
        GameSystemActor[fade].EventEventFadeIn({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
    }

}

void EntryPoint_Dm_GA_0023() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Grab_MasterSword_Subspace', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 1, 'DuckingName': 'DmF:Worldミュート(Dm_GA_0023用)'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Goose'})
    Player.EventTriggerModelBindWithDependency({'BoneName': 'Forehead_Link', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, -0.07000000029802322, 0.0], 'ActorName': 'Enemy_Dragon_Light_002'})
    Enemy_Dragon_Light_002.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C01-Enemy_Dragon_Light-A-0_LookSword', 'IsWaitEnd': False, 'ForceFadeInFrame': 15.0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C01-Link-A-0_LookSword', 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': 15.0, 'IsAllSlot': False, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call C01_Dm_GA_0023_C01()


    call C02_Dm_GA_0023()

}

void C02_Dm_GA_0023() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.07999999821186066, 0.5099999904632568, 6.010000228881836], 'AtVector': [0.05999999865889549, 0.550000011920929, 5.010000228881836], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[Cam_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_002', 'IsLoop': False, 'IsWaitEnd': True, 'SceneName': 'C02-1', 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'C01-Link-A-0_SwordGet', 'IsAllSlot': True, 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 12.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[Wepon_Wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        Weapon_Sword_070_ForGrabEvent.EventTriggerModelBind({'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player', 'BoneName': 'Weapon_R'})
    } {
        EventSystemActor[Hair].EventWait({'IsWaitEnd': True, 'Frames': 55})
        Enemy_Dragon_Light_Hair.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Hair_Anm3'})
    } {
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.5})
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Stairs00', 'Length': 0.699999988079071})
    } {
        SoundSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Pulled'})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード即)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
        EventSystemActor[SndDuck_Wait].EventWait({'IsWaitEnd': True, 'Frames': 12})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:WorldSEミュート(フェード即)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    }


    fork {
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_SK_0004', 'CommandLife': 2, 'IsReleaseDucking': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'IsReferenceRootOnce': False, 'SceneName': 'C01-2', 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_002', 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'RootType': 3, 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'SceneName': 'C01-3', 'IsWaitEnd': False, 'InterpolateFrame': 0.0, 'TargetActorName': 'Enemy_Dragon_Light_002', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 675})
        GameSystemActor[fade].EventEventFadeOut({'Color': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Length': 1})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'KeyName': 'Under_Restoration'})
    } {
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0023_MasterSword_PeelOff'})
        EventSystemActor[Wepon_Wait].EventWait({'IsWaitEnd': True, 'Frames': 582})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0023_MasterSword_Shine'})
    } {
        Enemy_Dragon_Light_Hair.EventTriggerStartFadeOut({'FadeFrame': 30})
    } {
        EventSystemActor[Npc_Wait].EventWait({'IsWaitEnd': True, 'Frames': 196})
        Weapon_Sword_070_ForGrabEvent.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Weapon_Sword_070_Intensify_Dm_SK_0004', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        SoundSystemActor.EventWait({'Frames': 39, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_PeelOff'})
        SoundSystemActor.EventWait({'Frames': 511, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Charge'})
        SoundSystemActor.EventWait({'Frames': 57, 'IsWaitEnd': True})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SK_0004_MasterSword_Shine'})
    }

    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_GA_0023_RayShaft', 'SLinkKey': '', 'IsKill': False})
    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_GA_0023_RayDust', 'IsKill': False})
    Player.EventTriggerModelBindWithDependency({'BoneName': 'Forehead_Link', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'ActorName': 'Enemy_Dragon_Light_002', 'TransOffset': [0.0, 0.0, 0.0]})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Enemy_Dragon_Light_002.EventDragonControlHoldingActorVisible({'IsVisible': False, 'BindBoneName': 'Forehead_Sword_Hair', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True})
    EventWorldManagerController.Event_ResetDisableLensFlareForFlowchart({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
}
