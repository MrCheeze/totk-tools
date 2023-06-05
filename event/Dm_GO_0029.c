-------- EventFlow: Dm_GO_0029 --------

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventNPCTurnToTarget', 'EventTriggerChangeAIScheduleEquipState', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerForbidEmitIfOutsideView', 'EventTriggerCancelForbidEmitIfOutsideView']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor].EventTriggerParticipateEvent()
    SoundSystemActor.EventTriggerForbidEmitIfOutsideView({'IsIgnoreLODResult': False})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'SceneName': 'C01-0', 'RootType': 3, 'TargetActorName': 'DgnObj_Fire_BossBattleRoomDoor_A_01', 'TargetActorInstanceName': 'BossDoor', 'IsWaitEnd': True, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor].EventPlayAS({'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'ASName': 'Error', 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor].EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0029_Fire_BossBattleRoomDoor_NotOpen', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
        DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor].EventTriggerEmitXLink({'ELinkKey': 'Dm_GO_0029_Fire_BossBattleRoomDoor_Stop', 'SLinkKey': ''})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'InstanceName': '', 'YAngle': -90.0, 'OffsetBase': 1, 'PositionOffset': [-1.0, 0.0, -5.0]})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeAIScheduleEquipState({'EquipState': 1})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -40.0, 'Position': [1291.635009765625, -697.4188232421875, -2863.572021484375], 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 45})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Sin00', 'Length': 2.799999952316284})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 90})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_DoDon', 'Length': 0.0})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 115})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Sin00', 'Length': 2.5})
    }

    SoundSystemActor.EventTriggerCancelForbidEmitIfOutsideView()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}
