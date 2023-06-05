-------- EventFlow: DmF_SY_SmallDungeon1Open --------

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventTriggerPlayerResetBoneControl', 'EventWarpOnGround']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/DmF_SY_SmallDungeon1Open/DmF_SY_SmallDungeon1Open_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/DmF_SY_SmallDungeon1Open_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntranceGate_A_01
entrypoint: None()
actions: ['EventDoNothing', 'EventTriggerSetOpenOwnGameData']
queries: ['EventQueryIsSameDungeonNo']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntranceGateMark_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayAS', 'EventTriggerXLinkFadeByKey', 'EventTriggerSetIsAuthentication']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: DgnObj_ZonauShrineEntrance_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetModelUnitVisible']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void DmF_SY_SmallDungeon1Open() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'DmF_SY_SmallDungeon1Open'}) {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

        fork {
            DgnObj_ZonauShrineEntranceGate_A_01.EventDoNothing({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AuthenticationPos', 'NotChangeRot': False, 'IsWaitEnd': False, 'UseDemoWait': True})
            Player.EventPlayerUnequip({'IsWaitEnd': False})
            Player.EventTriggerPlayerResetBoneControl({'Type': 1})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ASCommand': 'OpenCDungeonGate', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventTriggerSetIsAuthentication()
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeon1Open_DungeonEntrance_Authentication', 'SLinkKey': 'Dm_Zonau_Authentication'})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
        } {
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'ShrineRegisterNumber'})
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 1})
            EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 42})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        }


        fork {
            if !DgnObj_ZonauShrineEntranceGate_A_01.EventQueryIsSameDungeonNo({'DungeonNo': 78}) {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'IsWaitEnd': True, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.0, 2.5, 6.0], 'AtVector': [0.0, 1.7000000476837158, -5.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 180, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 2.799999952316284, -5.0], 'PosVector': [0.0, 2.700000047683716, 7.5], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
            } else {
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'IsWaitEnd': True, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'PosVector': [0.0, 2.5, 7.0], 'AtVector': [0.0, 2.0, -5.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'TargetFovy': 50.0, 'IsWaitEnd': True, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'AtVector': [0.0, 4.0, -5.0], 'PosVector': [0.0, 3.0, 13.0], 'MoveTime': 180, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 20})
            }
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'ASCommand': 'C02_2-Link-A-0', 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'C03_2-Link-A-2', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 6.0, 'ClothWarpMode': 0})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 10})
            DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'OpenWait', 'ForceFadeInFrame': -1.0})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 60})
            DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetModelUnitVisible({'IsVisible': True, 'SearchKey': 'ZonauShrineEntrance_Internal'})
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'ASName': 'Open', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
        }

        Event16:
        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'BlackInSkipEnd': True})
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 0, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'TargetFovy': 50.0, 'Actor1ActorName': 'Player', 'AtVector': [0.0, 1.7999999523162842, 0.0], 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 100.0, 'LongShiftRange': 100.0, 'CameraCollisionMode': 1, 'PosVector': [0.0, 1.7999999523162842, -5.099999904632568], 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AuthenticationPos', 'NotChangeRot': False, 'IsWaitEnd': True, 'UseDemoWait': True})
            Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 0.0, 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventTriggerPlayerResetBoneControl({'Type': 1})
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'DmF_SY_SmallDungeon1Open_DungeonEntrance_Authentication', 'SLinkKey': '', 'IsKill': True})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'OpenWait', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'IsNoPlayAnime': False, 'Length': 0, 'IsWaitEnd': False})
            Event92:
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'OpenWait', 'ForceFadeInFrame': -1.0})
            EventRequestActor.EventTriggerSetEventBool({'Bool': True})
            DgnObj_ZonauShrineEntranceGate_A_01.EventTriggerSetOpenOwnGameData()
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            goto Event92
        }
    } else {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})

        fork {
            DgnObj_ZonauShrineEntranceGate_A_01.EventDoNothing({'IsWaitEnd': False})
        } {
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'AuthenticationPos', 'NotChangeRot': False, 'IsWaitEnd': False, 'UseDemoWait': True})
            Player.EventPlayerUnequip({'IsWaitEnd': False})
            Player.EventTriggerPlayerResetBoneControl({'Type': 1})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'C01_1-Link-A-0', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventTriggerSetIsAuthentication()
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeon1Open_DungeonEntrance_Authentication_First', 'SLinkKey': 'Dm_Zonau_Authentication_First'})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 80})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        } {
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'ShrineRegisterNumber'})
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 1})
        }


        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsReferenceRootOnce': False, 'RootType': 3, 'SceneName': 'C03-0', 'TargetActorName': 'DgnObj_ZonauShrineEntrance_A_01', 'IsWaitEnd': True, 'IsIgnoreRootRot': False, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C02_1-Link-A-0', 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 45})
            DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
            DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        }


        fork {
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'IsWaitEnd': True, 'AtVector': [0.0, 2.0, -5.0], 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'PosVector': [0.0, 2.0, 2.0], 'TargetFovy': 30.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'TargetFovy': 30.0, 'PosVector': [0.0, 2.5, 5.0], 'AtVector': [0.0, 2.299999952316284, -5.0], 'IsLinearMove': False, 'MoveTime': 80, 'EndRecelerateRate': 0.5, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'IsWaitEnd': True, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'AtVector': [0.0, 4.0, -5.0], 'PosVector': [0.0, 2.5, 10.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'TargetFovy': 50.0, 'MoveTime': 120, 'IsWaitEnd': True, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'AtVector': [0.0, 6.0, -5.0], 'StartAccelerateRate': 0.5, 'PosVector': [0.0, 3.0, 15.0], 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 30})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsWaitEnd': True, 'ASCommand': 'C03_1-Link-A-0', 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'C03_1-Link-A-2', 'IsWaitEnd': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        } {
            DgnObj_ZonauShrineEntranceGateMark_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'OpenWait', 'ForceFadeInFrame': -1.0})
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 25})
            DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetModelUnitVisible({'IsVisible': True, 'SearchKey': 'ZonauShrineEntrance_Internal'})
            DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'ASName': 'Open', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        }

        goto Event16
    }
}

void Parts_PreSequence() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'ShrineRegisterNumber'})
    Player.EventPlayerUnequip({'IsWaitEnd': True})
}

void Parts_OpenEntrance() {
    DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0, 'ASName': 'OffWait'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 2, 'AtVectorSetType': 2, 'PosVector': [0.0, 1.5, 15.0], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'AtVector': [0.0, 0.0, 0.0], 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetFovy': 50.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 170})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 60})
        DgnObj_ZonauShrineEntrance_A_01.EventTriggerSetModelUnitVisible({'IsVisible': True, 'SearchKey': 'ZonauShrineEntrance_Internal'})
        DgnObj_ZonauShrineEntrance_A_01.EventPlayAS({'ASName': 'Open', 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    }

}

void Parts_PostSequence() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    DgnObj_ZonauShrineEntranceGate_A_01.EventTriggerSetOpenOwnGameData()
    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
}
