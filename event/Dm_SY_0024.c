-------- EventFlow: Dm_SY_0024 --------

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventPlayerUnequip', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMessageDungeon', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_01
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: ZonauShrine_EntranceGate
entrypoint: None()
actions: ['EventTriggerSetKeyCrystalDungeonState', 'EventTriggerEmitXLink', 'EventTriggerSetIsAuthentication']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_ZonauShrineEntranceGate_A_01
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': True}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'TargetActorKind': 1, 'ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'OffsetBase': 1, 'YAngle': 180.0, 'PositionOffset': [0.0, 0.0, -3.700000047683716], 'UseDemoWait': True})
        Player.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        ZonauShrine_EntranceGate.EventTriggerSetIsAuthentication()
        ZonauShrine_EntranceGate.EventTriggerEmitXLink({'ELinkKey': 'DmF_SY_SmallDungeon1Open_DungeonEntrance_Authentication', 'SLinkKey': 'Dm_Zonau_Authentication'})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_ZonauShrineEntranceGate_A_01', 'KeyName': 'Active'})
    } {
        DgnObj_ZonauShrineEntranceGate_A_01.EventDoNothing({'IsWaitEnd': False})
    }


    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'OpenCDungeonGate', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 42})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'AtVector': [0.0, 2.0, -5.0], 'PosVector': [0.0, 2.5, 7.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'TargetFovy': 50.0, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 180, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [0.0, 2.5, 10.0], 'AtVector': [0.0, 4.0, -5.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
        DgnObj_WarpPoint_Zonau_A_01.EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAllSlot': False, 'Partial': '', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 110})

        fork {
            if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_SY_0024'}) {
                EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 14})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoLookUp', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Event19:
                EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 200})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
            } else {
                EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 14})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoLookAround', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                goto Event19
            }
        } {
            GameSystemActor.EventOpenMessageDungeon({'IsWaitEnd': True, 'IsWithAncientGlyph': True, 'MessageID': 'EventFlowMsg/Dm_SY_0024:0000', 'IsUnder': False})
        }

    }

    Player.EventPlayerWait({'IsWaitEnd': False})
    ZonauShrine_EntranceGate.EventTriggerSetKeyCrystalDungeonState({'State': 'PointAndActiveWarp'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}
