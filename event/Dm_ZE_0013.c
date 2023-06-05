-------- EventFlow: Dm_ZE_0013 --------

Actor: TerrainResourcePinner[base]
entrypoint: None()
actions: ['EventTerrainPinResourceCamera']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[shizuku]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[fade]
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Enemy_Dragon_Light_001
entrypoint: None()
actions: ['EventDragonEndRailMove', 'EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0013/Dm_ZE_0013_Enemy_Dragon_Light/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0013_Enemy_Dragon_Light.root.as', 'ModelFixedType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZE_0013/Dm_ZE_0013_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZE_0013_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['EventTerrainCalcCenter', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMinusMenu', 'EventShowMessageDialogArrowOnly', 'EventTraverseAroundAndWaitCreateActor', 'EventShowMap', 'EventTriggerControllerRumble', 'EventTriggerRequestAutoSave', 'EventTriggerRollOverChallengeUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TerrainResourcePinner
entrypoint: None()
actions: ['EventTerrainPinResource', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting', 'EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Weapon_Sword_070_ForGrabEvent
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStartBgmSimple', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetWeatherForFlowchart', 'Event_ResetWeatherForFlowchart', 'Event_SetDisableGrassForFlowchart', 'Event_ResetDisableGrassForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EftLoc_MiasmaAppearance_17
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsGrounding': False, 'Position': [4032.7939453125, 121.7583999633789, -2176.449951171875], 'IsBindNearestActor': False}

Actor: Cave_Akkala_0013
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'Position': [4032.169921875, 125.18499755859375, -2174.419921875], 'IsBindNearestActor': False}

Actor: GameSystemActor[invisibleskyisland]
entrypoint: None()
actions: ['EventSetSkyVisible', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventDragonManagerController
entrypoint: None()
actions: ['EventDragonWarpToNearestRailPos']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: FldObj_Rock_Geoglyph_A_12
entrypoint: None()
actions: ['EventWait', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [4534.81982421875, 106.5999984741211, -2144.06005859375], 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: FldObj_Rock_Geoglyph_A_13
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [4534.81982421875, 106.5999984741211, -2144.06005859375], 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

Actor: Miasma_Sphere_Middle_ForDemo
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [4032.169921875, 125.18499755859375, -2174.419921875], 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Ready()


    call LookAround()


    call Appear()


    call Up()


    fork {
        GameSystemActor[invisibleskyisland].EventSetSkyVisible({'IsWaitEnd': False, 'SkyPrefabBaseName1': '', 'SkyPrefabBaseName': ''})
    } {

        call Makyuzu()

    }

    GameSystemActor[invisibleskyisland].EventDoNothing({'IsWaitEnd': True})

    call Map()

    GameSystemActor.EventTriggerRequestAutoSave()
}

void Ready() {
    TerrainResourcePinner[base].EventTerrainPinResourceCamera({'SceneName': 'MainField', 'IsWaitEnd': False, 'Level': 16})
    TerrainResourcePinner.EventTerrainPinResource({'SceneName': 'MainField', 'Position': [4523.0, 106.0, -2136.0], 'IsWaitEnd': False, 'Level': 16})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': False})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'Breath', 'ActorName': 'Player'})
    Enemy_Dragon_Light_001.EventDragonEndRailMove()
    Dm_Locator[shizuku].EventWarpToTargetPosAndRot({'Position': [4534.658203125, 106.56929779052734, -2143.965087890625], 'IsWaitEnd': True, 'YAngle': 0.0})
    EftLoc_MiasmaAppearance_17.EventTriggerParticipateEvent()
    FldObj_Rock_Geoglyph_A_13.EventTriggerParticipateEvent()
    FldObj_Rock_Geoglyph_A_12.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Miasma_Sphere_Middle_ForDemo.EventTriggerParticipateEvent()
    Cave_Akkala_0013.EventTriggerParticipateEvent()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
        Weapon_Sword_070_ForGrabEvent.EventTriggerParticipateEvent()
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Weapon_Sword_070_ForGrabEvent', 'KeyName': 'MasterSword_ForGrabEvent_Shine'})
        Weapon_Sword_070_ForGrabEvent.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0013_MasterSword_Shine', 'SLinkKey': ''})
    }
}

void LookAround() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_BuBuBu', 'Length': 2.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'ASCommand': 'C01', 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 98})
    EventWorldManagerController.Event_SetDisableGrassForFlowchart({'IsWaitEnd': False, 'IsDraw': True, 'IsDisableNarrowFovExtend': False})
}

void Appear() {
    SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZE_0013', 'IsReleaseDucking': False, 'CommandLife': 2})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [91.54889678955078, 117.06330108642578, -61.28129959106445], 'IsWaitEnd': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
            Enemy_Dragon_Light_001.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C01_HairOff', 'IsAllSlot': True})
        } else {
            Enemy_Dragon_Light_001.EventPlayAS({'ASName': 'C01', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'DuckingName': 'DmF:WorldSEミュート(フェード長い)', 'CommandLife': 2})
    }

}

void Up() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C02-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'DemoWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Enemy_Dragon_Light_001.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'IsWaitEnd': False, 'PositionOffset': [185.92489624023438, 172.15870666503906, -24.260499954223633]})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
            Enemy_Dragon_Light_001.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02_HairOff', 'IsAllSlot': True})
        } else {
            Enemy_Dragon_Light_001.EventPlayAS({'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'C02', 'IsAllSlot': True})
        }
    }

    Enemy_Dragon_Light_001.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0013_Enm_Dragon_Tears_OverFlow', 'SLinkKey': ''})
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C03-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'IsLoop': False, 'CalcUpInInterpolate': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C04-0', 'IsWaitEnd': False, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'RootType': 3, 'TargetActorName': 'Player', 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_Dragon_Light_001.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZE_0013_Enm_Dragon_Tears_OverFlow', 'SLinkKey': '', 'IsKill': False})
        Enemy_Dragon_Light_001.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0013_Enm_Dragon_Tears_Spill', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor[fade].EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Makyuzu() {
    TerrainCalcCenterTag.EventTerrainCalcCenter({'SceneName': 'MainField', 'Position': [4523.7431640625, 106.59040069580078, -2136.806884765625], 'IsWaitEnd': False})
    EventWorldManagerController.Event_SetWeatherForFlowchart({'IsImmTrans': True, 'WeatherType': 0})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Snow'})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveMasterSword'}) {
        Weapon_Sword_070_ForGrabEvent.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZE_0013_MasterSword_Shine', 'SLinkKey': '', 'IsKill': False})
    }
    Dm_Locator[shizuku].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZE_0013_DragonTears_Tears_Fall', 'SLinkKey': ''})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'Makyuzu', 'RootType': 0, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 195})
        FldObj_Rock_Geoglyph_A_13.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        FldObj_Rock_Geoglyph_A_12.EventWait({'IsWaitEnd': True, 'Frames': 0})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 21})
        GameSystemActor[fade].EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'IsWaitEnd': False, 'Length': 2})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Map() {

    fork {
        TerrainCalcCenterTag.EventDoNothing({'IsWaitEnd': True})
    } {
        TerrainResourcePinner.EventDoNothing({'IsWaitEnd': True})
    }

    GameSystemActor.EventShowMap({'ZoomLevel': 1, 'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [4523.7431640625, 106.59040069580078, -2136.806884765625], 'IsShowChallenge': True, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventWorldManagerController.Event_ResetWeatherForFlowchart({'IsImmTrans': True})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Snow'})
    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'MemoryOfTheDragon', 'StepName': 'Step2', 'IsIgnoreChallengeProgressUI': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Dragon_Stop'})
    EventWorldManagerController.Event_ResetDisableGrassForFlowchart({'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {
        GameSystemActor.EventShowMessageDialogArrowOnly({'IsWaitEnd': True})
    } {
        Enemy_Dragon_Light_001.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'Wait'})
    } {
        EventDragonManagerController.EventDragonWarpToNearestRailPos({'InstanceName': '', 'Pos': [4523.7431640625, 1200.0, -2136.0], 'ActorName': 'Enemy_Dragon_Light_001'})
    }

    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': 'DmF:WorldSEミュート(フェード長い)', 'IsImmediately': False, 'IsClearRefCount': False})
    GameSystemActor.EventTriggerRollOverChallengeUI({'IsRollOver': False})
}
