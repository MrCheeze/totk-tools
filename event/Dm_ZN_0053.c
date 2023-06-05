-------- EventFlow: Dm_ZN_0053 --------

Actor: Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0053/Dm_ZN_0053_Obj_Zonau_DeepElevator_A_01/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0053_Obj_Zonau_DeepElevator_A_01.root.as', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Obj_Zonau_GolemPrats_HeadBase_A_01[Underground_HeadBase_02]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 2, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_GolemPrats_HeadBase_A_01[PartsStorage_01]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerParticipateEvent', 'EventTriggerModelUnbind']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_SkyObj_StoneLantern_A_01[Lantern_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_SkyObj_StoneLantern_A_01[Lantern_02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerModelBind', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerModelBindWithDependency', 'EventTriggerClearModelBindAndDependency', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0053/Dm_ZN_0053_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0053_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventTriggerRequestStopCameraShake', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataEnum', 'EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: RaumiGolem_Parts_Head_B
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Zonau_A_57
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [868.0, -465.0, 2110.0]}

void EntryPoint0() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})


    call Ready()


    call Entry()


    call World()


    call Link()


    call TouchDown()


    call Beam()


    call End()

}

void Ready() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventTriggerParticipateEvent()
    RaumiGolem_Parts_Head_B.EventTriggerParticipateEvent()
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventTriggerParticipateEvent()
    Obj_Zonau_GolemPrats_HeadBase_A_01[PartsStorage_01].EventTriggerParticipateEvent()
    Dm_SkyObj_StoneLantern_A_01[Lantern_01].EventTriggerParticipateEvent()
    Dm_SkyObj_StoneLantern_A_01[Lantern_02].EventTriggerParticipateEvent()
    DgnObj_Zonau_A_57.EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_RaumiHeadParts_YUpConst', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_HeadPartsLock02'})
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01', 'BoneName': 'Root', 'TransOffset': [0.0, 0.17000000178813934, 0.0], 'RotOffset': [0.0, 180.0, 0.0]})
    Obj_Zonau_GolemPrats_HeadBase_A_01[Underground_HeadBase_02].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01', 'BoneName': 'Root', 'RotOffset': [180.0, 180.0, 0.0], 'TransOffset': [0.0, -0.6000000238418579, 0.0]})
    Obj_Zonau_GolemPrats_HeadBase_A_01[PartsStorage_01].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01', 'BoneName': 'PartsStorage_01', 'TransOffset': [0.0, 0.28999999165534973, 0.0], 'RotOffset': [0.0, 157.5, 0.0]})
    Dm_SkyObj_StoneLantern_A_01[Lantern_01].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01', 'BoneName': 'Lantern_01', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 135.0, 0.0]})
    Dm_SkyObj_StoneLantern_A_01[Lantern_02].EventTriggerModelBind({'InstanceName': 'UndergroundElevator_01', 'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'BoneName': 'Lantern_02', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Rise_Wait', 'IsWaitEnd': False, 'Partial': 'Root', 'ForceFadeInFrame': -1.0})
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Head_Lock', 'IsWaitEnd': True, 'Partial': 'Lock', 'ForceFadeInFrame': -1.0})
    Player.EventPlayerWarpToTargetActor({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01', 'OffsetBase': 1, 'YAngle': 180.0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'PositionOffset': [0.0, 0.0, 1.600000023841858], 'UseDemoWait': True})
    Player.EventTriggerModelBindWithDependency({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'RotOffset': [0.0, 180.0, 0.0], 'InstanceName': 'UndergroundElevator_01', 'TransOffset': [0.0, 0.0, 1.600000023841858], 'BoneName': 'Root'})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoLookAround', 'ClothWarpMode': 2})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void End() {
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 4.0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_HeadPartsUnLock'})

    fork {
        Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Release', 'Partial': 'Lock', 'IsWaitEnd': True, 'ForceFadeInFrame': -1.0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_RaumiHeadParts_YUpConst', 'Index': -1, 'Value': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    }

}

void Entry() {

    fork {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventPlayAS({'Partial': '', 'IsWaitEnd': False, 'ASName': 'Down1', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsAllSlot': True})
        EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [40.540000915527344, 84.9000015258789, 28.719999313354492], 'AtVector': [8.75, 76.69999694824219, -12.210000038146973], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [40.540000915527344, 63.88999938964844, 28.719999313354492], 'AtVector': [8.75, 55.689998626708984, -12.210000038146973], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 200, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': True})
    }

}

void Link() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.9299999475479126, -36.4900016784668], 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 38.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 102})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'StartAccelerateRate': 0.5, 'MoveTime': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [0.0, 4.409999847412109, 15.180000305175781], 'AtVector': [0.0, 4.690000057220459, 8.479999542236328], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'StartAccelerateRate': 0.699999988079071, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [0.0, 4.409999847412109, 15.180000305175781], 'AtVector': [0.0, 3.6700000762939453, 8.520000457763672], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 112, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Down3', 'IsAllSlot': True, 'IsWaitEnd': False})
    }

}

void TouchDown() {
    EventCamera.EventTriggerRequestCameraShake({'ApplyType': 1, 'LoopEndCount': 1, 'Pattern': 2, 'Power': 0.10000000149011612, 'IsRumbleController': False})
    GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
    Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0053_Zonau_DeepElevator_Land', 'SLinkKey': ''})
    Player.EventTriggerClearModelBindAndDependency({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_01'})
    Obj_Zonau_GolemPrats_HeadBase_A_01[Underground_HeadBase_02].EventTriggerModelUnbind()
    Obj_Zonau_GolemPrats_HeadBase_A_02[Pedestal02].EventTriggerModelUnbind()
    Obj_Zonau_GolemPrats_HeadBase_A_01[PartsStorage_01].EventTriggerModelUnbind()
    Dm_SkyObj_StoneLantern_A_01[Lantern_01].EventTriggerModelUnbind()
    Dm_SkyObj_StoneLantern_A_01[Lantern_02].EventTriggerModelUnbind()

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 0.0})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventPlayAS({'ASName': 'Light_Off', 'IsWaitEnd': False, 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 93})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoLockOn', 'IsWaitEnd': True, 'ClothWarpMode': 3})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 3})
    }

}

void Beam() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [1.4600000381469727, 0.6299999952316284, 2.5], 'AtVector': [0.4300000071525574, 1.1100000143051147, 0.5699999928474426], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    RaumiGolem_Parts_Head_B.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0053_CompassBeam_Launch', 'SLinkKey': ''})
    GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    GameDataActor.EventTriggerSetGameDataEnum({'GameDataName': 'SageOfSoul_Beam_CheckPoint', 'Value': 'Beam_CheckPoint04', 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': False, 'StartAccelerateRate': 1.0, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [1.4600000381469727, 0.6299999952316284, 2.5], 'AtVector': [0.8500000238418579, 0.8999999761581421, 0.3700000047683716], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void World() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [55.310001373291016, 30.700000762939453, 83.22000122070312], 'AtVector': [7.75, 35.61000061035156, 3.559999942779541], 'TargetFovy': 45.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsLinearMove': False, 'CameraCollisionMode': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Obj_Zonau_DeepElevator_A_01', 'Actor1InstanceName': 'UndergroundElevator_01', 'PosVector': [35.86000061035156, 30.700000762939453, 91.9800033569336], 'AtVector': [7.75, 35.61000061035156, 3.559999942779541], 'TargetFovy': 45.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 200, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_01].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Down2', 'IsWaitEnd': False, 'IsAllSlot': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 77})
    }

}
