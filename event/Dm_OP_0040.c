-------- EventFlow: Dm_OP_0040 --------

Actor: Obj_SecretStone_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventWait', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventWait', 'EventPlayerStopInAir', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/Dm_OP_0040/Dm_OP_0040_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_OP_0040_Link.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerControllerRumble', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetWindForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[wind]
entrypoint: None()
actions: ['EventClothRequestExtraWind', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsRidableGetOff': True, 'IsUnequip': True})

    Obj_SecretStone_A_02.EventTriggerParticipateEvent()

    call C01()


    call C02()


    call C03()

}

void C01() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    Obj_SecretStone_A_02.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_Appear_loop'})
    Player.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 1, 'DuckingName2': '', 'DuckingName': 'DmF:WorldSEミュート(フェード長い)'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_SecretStone_A_02', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, -0.38999998569488525, 0.7900000214576721], 'PosVector': [0.0, -1.2000000476837158, 2.859999895095825], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_SecretStone_A_02', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, -0.9200000166893005, 2.0], 'AtVector': [0.0, -0.38999998569488525, 0.7900000214576721], 'MoveTime': 70, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [453.4849853515625, 1561.1929931640625, 821.8930053710938], 'IsWaitEnd': True, 'YAngle': 0.0, 'UseDemoWait': True})
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 68})
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'SageOfSky_GetRR_PlayerPos', 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Obj_SecretStone_A_02', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_SecretStone_A_02', 'PosVector': [2.5199999809265137, 2.2300000190734863, -4.239999771118164], 'AtVector': [1.5399999618530273, 0.9599999785423279, -1.9800000190734863], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventWait({'Frames': 40, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ASCommand': 'Link_TouchStone_C02', 'IsWaitEnd': True, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_SecretStone_A_02', 'PosVector': [1.440000057220459, -2.309999942779541, 5.079999923706055], 'AtVector': [1.190000057220459, -2.009999990463257, 4.369999885559082], 'TargetFovy': 28.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -180.0, 'Position': [453.56988525390625, 1561.947998046875, 815.4813232421875], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'Link_TouchStone_C03', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
        Player.EventPlayerStopInAir({'IsWaitEnd': False, 'EnableCalcAnm': True})
    } {
        Obj_SecretStone_A_02.EventWait({'IsWaitEnd': True, 'Frames': 75})
        Obj_SecretStone_A_02.EventTriggerEmitXLink({'ELinkKey': 'Dm_OP_0040_SecretStone_Touch', 'SLinkKey': 'Dm_OP_0040_SecretStone_Touch'})
        Obj_SecretStone_A_02.EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_Appear_loop', 'IsKill': False})
    } {
        GameSystemActor.EventWait({'Frames': 75, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Small'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Dooon'})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 106})
        Player.EventTriggerEmitXLink({'SLinkKey': 'PV726_00', 'ELinkKey': ''})
    } {
        GameSystemActor[wind].EventWait({'IsWaitEnd': True, 'Frames': 85})
        GameSystemActor[wind].EventClothRequestExtraWind({'ActorName': 'Player', 'InstanceName': '', 'Azimuth': 0.0, 'Elevation': 0.0, 'IsWaitEnd': False, 'Speed': 10.0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 55, 'Actor1ActorName': 'Obj_SecretStone_A_02', 'PosVector': [1.5700000524520874, -2.4800000190734863, 5.440000057220459], 'AtVector': [1.340000033378601, -2.200000047683716, 4.769999980926514], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        GameSystemActor.EventEventFadeOut({'Color': 1, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    }

    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'SageOfSky_GetRR_PlayerPos', 'UseDemoWait': True})
    Player.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    EventWorldManagerController.Event_ResetWindForFlowchart({'IsWaitEnd': True, 'IsImmTrans': False})
}
