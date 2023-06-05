-------- EventFlow: DmF_SY_MapOpen --------

Actor: GameSystemActor[com]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Demo_Reel[cannon]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerModelBind', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_MapOpen/DmF_SY_MapOpen_Item_CannonReel/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_MapOpen_Item_CannonReel.root.as', 'Position': [0.0, 0.0, 0.0], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerRequestGlide', 'EventPlayerPlayASForFlowchart', 'EventPlayerOffStopMode', 'EventPlayerOnStopMode', 'EventPlayerGlide', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventPlayerSetHeadArmorInvisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_MapOpen/DmF_SY_MapOpen_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_MapOpen-Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundReleaseDucking', 'EventSoundRequestDucking', 'EventTriggerStartBgmSimple']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerShowMapOpen', 'EventCloseMinusMenu', 'EventChangeMapLayerForMapOpenDemo', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerSetupBeforeShowMapOpen', 'EventWarpFollowersBehindCamera', 'EventTriggerBeforehandLoadSkyOcclusionCulling', 'EventTriggerControllerRumble', 'EventTriggerForceUpdateSkyOcclusion', 'EventTriggerChangeMergeTarLodCenter', 'EventTriggerResetMergeTarLodCenter']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusMenuSystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Accessory_SupportDevice
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_CannonLauncher_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Demo_Reel
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_MapOpen/DmF_SY_MapOpen_Item_CannonReel/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_MapOpen_Item_CannonReel.root.as', 'IsBindNearestActor': False}

Actor: FldObj_Cannon_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_MapOpen_FldObj_Cannon_A_01.root.as', 'IsBindNearestActor': False}

Actor: GameSystemActor[Kaze]
entrypoint: None()
actions: ['EventClothRequestExtraWind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectCloudDisplayOff', 'EventEffectCloudDisplayOn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_FldObj_SnowDome_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsWorld': True, 'Position': [-3960.5419921875, 533.961669921875, 1305.9580078125]}

void MainFlow() {

    call Ready({'MapNumber': 'MapNumber', 'OffsetX': 'OffsetX', 'OffsetZ': 'OffsetZ'})


    call Scan()

    GameSystemActor.EventTriggerResetMergeTarLodCenter()

    call HoldPad()


    call ZoomPad()


    call Map({'MapNo': 'MapNumber'})


    call PadOut()

}

void DmF_SY_MapOpen() {

    call MainFlow({'MapNumber': 1, 'OffsetX': 0.0, 'OffsetZ': 0.0})

}

void DmF_SY_MapOpen01() {

    call MainFlow({'MapNumber': 1, 'OffsetX': -250.0, 'OffsetZ': 500.0})

}

void DmF_SY_MapOpen02() {

    call MainFlow({'MapNumber': 2, 'OffsetZ': 0.0, 'OffsetX': 300.0})

}

void DmF_SY_MapOpen03() {

    call MainFlow({'MapNumber': 3, 'OffsetX': 300.0, 'OffsetZ': 450.0})

}

void DmF_SY_MapOpen04() {

    call MainFlow({'MapNumber': 4, 'OffsetX': 500.0, 'OffsetZ': 520.0})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MapData.LargeDungeon.Fire.IsGetMap', 'Index': -1})
}

void DmF_SY_MapOpen05() {

    call MainFlow({'MapNumber': 5, 'OffsetZ': 550.0, 'OffsetX': -110.0})

}

void DmF_SY_MapOpen06() {

    call MainFlow({'MapNumber': 6, 'OffsetX': 200.0, 'OffsetZ': 500.0})

}

void DmF_SY_MapOpen07() {
    GameSystemActor.EventTriggerChangeMergeTarLodCenter({'Position': [2860.0, 481.0, -583.0]})

    call MainFlow({'MapNumber': 7, 'OffsetZ': 700.0, 'OffsetX': -50.0})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MapData.LargeDungeon.Water.IsGetMap', 'Value': True, 'Index': -1})
}

void DmF_SY_MapOpen08() {

    call MainFlow({'MapNumber': 8, 'OffsetZ': -250.0, 'OffsetX': 150.0})

}

void DmF_SY_MapOpen09() {

    call MainFlow({'MapNumber': 9, 'OffsetX': 0.0, 'OffsetZ': -50.0})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MapData.LargeDungeon.Electric.IsGetMap', 'Index': -1})
}

void DmF_SY_MapOpen10() {
    Dm_FldObj_SnowDome_A_01.EventTriggerParticipateEvent()

    call MainFlow({'MapNumber': 10, 'OffsetX': 300.0, 'OffsetZ': 100.0})

}

void DmF_SY_MapOpen11() {

    call MainFlow({'MapNumber': 11, 'OffsetX': 0.0, 'OffsetZ': 0.0})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MapData.LargeDungeon.Soul.IsGetMap', 'Index': -1})
}

void DmF_SY_MapOpen12() {

    call MainFlow({'MapNumber': 12, 'OffsetZ': 600.0, 'OffsetX': 0.0})

}

void DmF_SY_MapOpen13() {

    call MainFlow({'MapNumber': 13, 'OffsetZ': 100.0, 'OffsetX': 0.0})

}

void DmF_SY_MapOpen14() {

    call MainFlow({'MapNumber': 14, 'OffsetZ': 0.0, 'OffsetX': -110.0})

}

void DmF_SY_MapOpen15() {

    call MainFlow({'MapNumber': 15, 'OffsetZ': 0.0, 'OffsetX': -300.0})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'MapData.LargeDungeon.Wind.IsGetMap', 'Index': -1})
}

void Ready() {
    EventEffectEmitter.EventEffectCloudDisplayOff()
    Player.EventPlayerOnStopMode({'StopAnm': False})

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'MapOpenGlide', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'ASName': 'MapOpenGlide', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [0.0, 9.510000228881836, -2.200000047683716], 'AtVector': [0.0, 1.2999999523162842, 0.0], 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor[Kaze].EventClothRequestExtraWind({'ActorName': 'Player', 'InstanceName': '', 'IsWaitEnd': False, 'Elevation': 90.0, 'Azimuth': 180.0, 'Speed': 31.0})
    }

    Demo_Reel[cannon].EventTriggerParticipateEvent()
    Demo_Reel[cannon].EventDoNothing({'IsWaitEnd': True})
    Demo_Reel[cannon].EventTriggerModelBind({'ActorName': 'FldObj_CannonLauncher_A_01', 'BoneName': 'Root', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 180.0], 'TransOffset': [0.0, 105.0, 0.0]})
    GameSystemActor.EventTriggerSetupBeforeShowMapOpen({'No': 'MapNumber', 'OffsetX': 'OffsetX', 'OffsetZ': 'OffsetZ'})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)'})
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_DmF_SY_MapOpen', 'CommandLife': 2, 'IsReleaseDucking': False})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'MapOpenNumber', 'Value': 1, 'Index': -1})
    FldObj_Cannon_A_01.EventTriggerParticipateEvent()
    FldObj_CannonLauncher_A_01.EventTriggerParticipateEvent()
    Accessory_SupportDevice.EventPlayAS({'ASName': 'EyeOpen', 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True})
}

void Scan() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': False, 'InterpolateFrame': -1.0, 'IsLoop': False, 'SceneName': 'C01-1', 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})

    fork {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Link', 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {

        fork {
            EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
        } {
            Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'ASName': 'C01', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'IsReferenceRootOnce': True, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsWaitEnd': True, 'IsLoop': False, 'SceneName': 'C02-0', 'CalcUpInInterpolate': False})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C03-1', 'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'OverwriteEndFrame': 100.0, 'OverwriteStartFrame': 55.0, 'CalcUpInInterpolate': False})
    } {
        Accessory_SupportDevice.EventTriggerEmitXLink({'ELinkKey': 'DmF_Sy_MapOpen_ObjSupportDevice_Scan', 'SLinkKey': 'DmF_SY_MapOpen_Pad_Scan'})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Doon', 'Length': 0.5})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 18})
        GameSystemActor.EventTriggerControllerRumble({'Length': 6.199999809265137, 'RumbleCall': 'Middle'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'FldObj_CannonLauncher_A_01', 'PosVector': [14.720000267028809, 113.16000366210938, 4.690000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 90.9800033569336, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'FldObj_CannonLauncher_A_01', 'PosVector': [13.1899995803833, 113.47000122070312, 6.909999847412109], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': True, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 140, 'AtVector': [0.0, 90.9800033569336, 0.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            Demo_Reel[cannon].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0, 'ASName': 'Cannon_Receive', 'IsWaitEnd': False})
        } {
            FldObj_Cannon_A_01.EventPlayAS({'ASName': 'Receive', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            EventSystemActor.EventWait({'Frames': 45, 'IsWaitEnd': True})
            FldObj_Cannon_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Swich'})
            FldObj_Cannon_A_01.EventTriggerEmitXLink({'SLinkKey': 'DmF_SY_MapOpen_Scan_Return', 'ELinkKey': ''})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            FldObj_Cannon_A_01.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Returen'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        }

    } {
        GameSystemActor.EventTriggerForceUpdateSkyOcclusion()
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 75})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Biyoon', 'Length': 0.0})
    }

}

void HoldPad() {
    Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_LeftHand', 'SLinkKey': '', 'IsKill': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.8700000047683716, -0.9200000166893005, 2.930000066757202], 'AtVector': [0.36000001430511475, 1.0499999523162842, -0.41999998688697815], 'TargetFovy': 37.849998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsLinearMove': True, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 40, 'Actor1ActorName': 'Player', 'PosVector': [-1.8700000047683716, -0.4099999964237213, 2.930000066757202], 'TargetFovy': 37.849998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.36000001430511475, 1.3300000429153442, -0.41999998688697815], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'C05-Link', 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05'})
    }

}

void ZoomPad() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Accessory_SupportDevice', 'PosVector': [0.0, -0.23999999463558197, 0.009999999776482582], 'AtVector': [0.0, 0.6700000166893005, 0.009999999776482582], 'TargetFovy': 51.279998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'StartAccelerateRate': 0.5, 'MoveTime': 10, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Accessory_SupportDevice', 'PosVector': [0.0, -0.20999999344348907, 0.009999999776482582], 'AtVector': [0.0, 0.699999988079071, 0.009999999776482582], 'TargetFovy': 51.279998779296875, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerSetHeadArmorInvisible({'Flag': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'C06-Link', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C06', 'ForceFadeInFrame': 0.0})
    } {
        Accessory_SupportDevice.EventPlayAS({'ASName': 'Default_Pose', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

}

void Map() {
    GameSystemActor.EventTriggerShowMapOpen({'No': 'MapNo'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    Player.EventPlayerSetHeadArmorInvisible({'Flag': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_GroundMapDownload', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 55})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IsOpenCannonAll'}) {
        MinusMenuSystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_MapOpen:Comment_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        MinusMenuSystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/DmF_SY_MapOpen:Comment_01', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventChangeMapLayerForMapOpenDemo({'IsWaitEnd': True})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_SkyMapDownload', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IsOpenCannonAll'}) {
        MinusMenuSystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/DmF_SY_MapOpen:Comment_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        MinusMenuSystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/DmF_SY_MapOpen:Comment_00', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventEffectEmitter.EventEffectCloudDisplayOn()
}

void PadOut() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ASCommand': 'C07-Link', 'IsWaitEnd': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ASCommand': 'Glide', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:プレイヤ風・ケミカルミュート'})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 123})
        Player.EventPlayerOffStopMode()
        Player.EventPlayerGlide({'IsWaitEnd': True, 'ASCommand': 'Glide'})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventTriggerPlayerRequestGlide()
    } {
        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName2': 'DmF:環境系SE下げ', 'DuckingName': 'DmF:WorldSEミュート(フェード普通)'})
    } {
        Demo_Reel.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C07', 'ForceFadeInFrame': 0.0})
        Demo_Reel.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Demo_Reel[cannon].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Player', 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'IsWaitEnd': True, 'IsReferenceRootOnce': False, 'SceneName': 'C07-1', 'CalcUpInInterpolate': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.2999999523162842, 0.0], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'PosVector': [0.0, 9.510000228881836, -2.200000047683716], 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor[com].EventWait({'Frames': 60, 'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'Frames': 50, 'IsWaitEnd': True})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_LeftHand', 'SLinkKey': ''})
        Player.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_RightHand', 'SLinkKey': ''})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})

    fork {
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air', 'SLinkKey': '', 'IsKill': False})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_LeftHand', 'SLinkKey': '', 'IsKill': False})
        Player.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_Cannon_Ply_Scan_Air_RightHand', 'SLinkKey': '', 'IsKill': False})
    } {
        GameSystemActor.EventTriggerRequestAutoSave()
        GameSystemActor.EventWarpFollowersBehindCamera({'ActorName': 'Npc_Tulin_Sage', 'IsWaitEnd': False})
        GameSystemActor.EventWarpFollowersBehindCamera({'ActorName': 'Sage_Soul_Rito', 'IsWaitEnd': False})
        GameSystemActor.EventTriggerBeforehandLoadSkyOcclusionCulling({'Enable': True})
    }

}
