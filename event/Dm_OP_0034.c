-------- EventFlow: Dm_OP_0034 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Zelda_Opening
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Accessory1': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Dm_Locator[Effect]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'Position': [67.83567810058594, 31.087810516357422, -154.33909606933594], 'IsGrounding': False, 'Rotation': [0.0, -165.8031005859375, 0.0], 'IsWorld': True, 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        Player.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [64.0, 30.0, -167.0], 'YAngle': -1.0, 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
    } {
        Npc_Zelda_Opening.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 0, 'InstanceName': 'LookAround', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Zelda_Opening.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 0, 'SceneName': 'C01-1', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Dm_Locator[Effect].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_OP_0034_Env_MiasmaCrawl_Opening_Cave_Addition'})
    }

}
