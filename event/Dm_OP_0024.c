-------- EventFlow: Dm_OP_0024 --------

Actor: EventSystemActor[Cam]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_071_Broken[BrokenMasterSword]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerSwitchEquipment', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0024/Dm_OP_0024_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0024_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble', 'EventTriggerRequestAutoSave']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventTriggerRequestAutoSave()

    call InitDemo()


    call C01()


    call C02()


    call C03()


    call C04()

}

void DispGetWindow() {

    call GetPouchContent.PreGetWindowByActorName({'ActorName': 'ActorName'})


    call GetPouchContent.OpenGetWindowByActorName({'ActorName': 'ActorName', 'IsSuccess': True, 'IsEnableOpenPouch': True})


    call GetPouchContent.WaitCloseGetWindow()


    call GetPouchContent.EquipWeaponByActorName({'EquipmentActorName': 'ActorName'})

}

void OpenActionGuide() {

    call GetPouchContent.PostGetWindowByActorName({'ActorName': 'ActorName'})

}

void InitDemo() {

    call Common.InitPlayStateTrigger({'IsRidableGetOff': True, 'IsUnequip': True})

    Weapon_Sword_071_Broken[BrokenMasterSword].EventTriggerParticipateEvent()

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Weapon_Sword_071_Broken', 'Actor1InstanceName': 'BrokenMasterSword', 'PosVector': [-0.699999988079071, -1.2699999809265137, -0.7400000095367432], 'AtVector': [-0.2800000011920929, -0.5299999713897705, -0.20999999344348907], 'TargetFovy': 27.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 115.0, 'Position': [348.1200866699219, 2385.873046875, 1753.053955078125], 'UseDemoWait': True, 'IsWaitEnd': False})
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C01() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Weapon_Sword_071_Broken', 'Actor1InstanceName': 'BrokenMasterSword', 'PosVector': [-0.699999988079071, -1.2699999809265137, -0.7400000095367432], 'AtVector': [-0.2800000011920929, -0.5299999713897705, -0.20999999344348907], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 100, 'TargetFovy': 25.0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void C02() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'C02-0.camera', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {

        fork {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C02-Link', 'UseAnmDriven': False, 'IsAllSlot': True, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Weapon_Sword_071_Broken[BrokenMasterSword].EventTriggerModelBind({'ActorName': 'Player', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Weapon_R'})
            EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
            Weapon_Sword_071_Broken[BrokenMasterSword].EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0024_MasterSword_Broken_FallDust', 'SLinkKey': ''})
        } {
            EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 84})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        }

    }

}

void C03() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C03-0.camera', 'RootType': 3, 'TargetActorName': 'Player', 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C03-Link', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Weapon_Sword_070_Broken', 'Num': 1, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsEquipDIrect': False, 'IsSetOnlyEquipIndex': False})

    call DispGetWindow({'ActorName': 'Weapon_Sword_070_Broken'})

    EventSystemActor.EventWait({'Frames': 40, 'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'SceneName': 'C03-1.camera', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': True, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        EventSystemActor[Cam].EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C04-Link_Loop', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_Destroy_Weapon_Sword_070_Broken_Demo'})
    Player.EventPlayerSwitchEquipment({'EquipmentWeaponName': 'Weapon_Sword_070_Broken', 'IsWaitEnd': True, 'DisarmWeapon': False, 'DisarmShield': False, 'DisarmBow': False, 'DisarmHeadGear': False, 'DisarmUpperArmor': False, 'DisarmLowerArmor': False, 'EquipmentShieldName': '', 'EquipmentBowName': '', 'EquipmentHeadGearName': '', 'EquipmentUpperArmorName': '', 'EquipmentLowerArmorName': '', 'EquipmentArrowName': ''})
    Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 1})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-0.8199999928474426, 1.2899999618530273, -3.140000104904175], 'AtVector': [-0.949999988079071, 1.2799999713897705, -2.4700000286102295], 'TargetFovy': 40.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-0.800000011920929, 1.2899999618530273, -3.630000114440918], 'AtVector': [-0.9800000190734863, 1.2799999713897705, -2.6500000953674316], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 80, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'C04-Link', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
    }

    EventSystemActor[Cam].EventWait({'IsWaitEnd': True, 'Frames': 25})

    call OpenActionGuide({'ActorName': 'Weapon_Sword_070_Broken'})

    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}
