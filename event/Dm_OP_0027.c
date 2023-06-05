-------- EventFlow: Dm_OP_0027 --------

Actor: EventSystemActor[Link]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Camera]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0027/Dm_OP_0027_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0027_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_02
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SkyObj_FirstIslandDoor_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[ninsyou]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SkyObj_FirstIsland_ZonauSpurGear_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})


    call C01()


    call C02()


    call C03()


    call C04()

}

void C01() {

    fork {

        fork {
            DgnObj_Terminal_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0027_Terminal_Authentication', 'SLinkKey': 'Dm_OP_0027_Terminal_Authentication'})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_Terminal_A_01', 'KeyName': 'Active'})
        } {
            EventSystemActor[ninsyou].EventWait({'IsWaitEnd': True, 'Frames': 113})
            DgnObj_Terminal_A_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'DM_OP_Activate'})
            DgnObj_Terminal_A_01.EventPlayAS({'ASName': 'ActivatedWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.4600000381469727, 1.4600000381469727, -2.7100000381469727], 'AtVector': [1.899999976158142, 1.2899999618530273, 2.890000104904175], 'TargetFovy': 34.59000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 97.0, 'Position': [374.80999755859375, 2386.580078125, 1752.02001953125], 'IsWaitEnd': False, 'UseDemoWait': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'C01-Link_FirstAccess', 'UseAnmDriven': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ForceFadeFrame': 0.0, 'IsAllSlot': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'ClothWarpMode': 0})
        EventSystemActor[Link].EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        EventSystemActor.EventWait({'Frames': 155, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    } {
        DgnObj_WarpPoint_Zonau_A_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'OffWait', 'IsWaitEnd': False})
    }

}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [-1.5499999523162842, 3.930000066757202, 8.920000076293945], 'AtVector': [0.3199999928474426, 1.809999942779541, -0.3199999928474426], 'TargetFovy': 34.59000015258789, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        DgnObj_WarpPoint_Zonau_A_02.EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        DgnObj_WarpPoint_Zonau_A_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'OnWait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_IsActivateWarpMarkerInWakeUpRoom'})
        EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoLookAround2nd', 'ClothWarpMode': 0})
    }

    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Sky_Bell_Rings', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoLookAround1st', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 220})
}

void C04() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.15000000596046448, 6.769999980926514, 2.3299999237060547], 'AtVector': [-0.23000000417232513, 7.539999961853027, 7.579999923706055], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        SkyObj_FirstIslandDoor_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0027_FirstIslandDoor_Open', 'SLinkKey': 'Dm_OP_0027_FirstIslandDoor_Open'})

        fork {
            SkyObj_FirstIslandDoor_A_01.EventPlayAS({'ASName': 'Slide', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 3.0, 'RumbleCall': 'Demo_Large_GoroGoro'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 108})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doon'})
            SkyObj_FirstIslandDoor_A_01.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_OP_0027_FirstIslandDoor_Open_End'})
        }

    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1, 'WorldPos': [392.0423889160156, 2394.16796875, 1750.239013671875]})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        EventSystemActor[Camera].EventWait({'IsWaitEnd': True, 'Frames': 100})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': False, 'IsPosVectorReferenceActorPosOnce': False, 'CameraCollisionMode': 0, 'IsLinearMove': False, 'Actor1ActorName': 'Player', 'PosVector': [0.20000000298023224, 3.5899999141693115, -11.149999618530273], 'AtVector': [0.09000000357627869, 3.4800000190734863, -5.849999904632568], 'TargetFovy': 45.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 120, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_IsOpenShutterInWakeUpRoom'})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventTriggerRequestAutoSave()
}

void C03() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-6.389999866485596, 1.5499999523162842, -6.059999942779541], 'AtVector': [-2.369999885559082, 2.059999942779541, -2.640000104904175], 'TargetFovy': 34.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 65})

    fork {
        SkyObj_FirstIsland_ZonauSpurGear_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0027_Obj_ZonauSpurGear_Move', 'SLinkKey': 'Dm_OP_0027_Obj_ZonauSpurGear_MoveStart'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'SageOfSky_IsActivateGearInWakeUpRoom'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Target': 3, 'Direction': 0.0, 'PosOffset': [6.0, 0.0, 6.0], 'ActorName': 'SkyObj_FirstIsland_ZonauSpurGear_A_01'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 135})
    } {
        EventSystemActor[Camera].EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'Actor1ActorName': 'Player', 'PosVector': [-6.389999866485596, 1.5499999523162842, -6.059999942779541], 'AtVector': [-2.1700000762939453, 2.6700000762939453, -3.049999952316284], 'TargetFovy': 34.5, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 65, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}
