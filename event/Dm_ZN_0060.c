-------- EventFlow: Dm_ZN_0060 --------

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerRaumiGolemHeadLightOff', 'EventTriggerRaumiGolemThirdEyeOpen']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EventMemberCreateMethod': 4, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0060/Dm_ZN_0060_Npc_RaumiGolem_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0060_Npc_RaumiGolem.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_02[Tarminal01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWait', 'EventTriggerModelBind', 'EventTriggerModelUnbind', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0060/Dm_ZN_0060_Obj_Zonau_DeepElevator_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0060_Obj_Zonau_DeepElevator_A.root.as', 'IsBindNearestActor': False}

Actor: EventSystemActor[taiki_02]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_SecretStone_A_03[SecretStone02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 4, 'IsBindNearestActor': False}

Actor: Dm_SkyObj_StoneLantern_A_01[Lantern_03]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerParticipateEvent', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_SkyObj_StoneLantern_A_01[Lantern_04]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventTriggerParticipateEvent', 'EventTriggerModelUnbind']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerStopInAir', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble', 'EventWaitUpdate', 'EventWarpSoulFollowersFormationPos', 'EventWaitForActorPresence']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0060_Obj_Zonau_DeepElevator_A.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0060/Dm_ZN_0060_Obj_Zonau_DeepElevator_A/workspace.pp__ModelProject.gyml', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_01[LDungeonSoulEntrance]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Dm_ZN_0060() {
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    GameSystemActor.EventWaitUpdate({'UpdateCount': 3, 'IsWaitEnd': True})

    fork {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    } {
        DgnObj_Terminal_A_02[Tarminal01].EventTriggerParticipateEvent()
    } {
        Dm_SkyObj_StoneLantern_A_01[Lantern_03].EventTriggerParticipateEvent()
    } {
        Dm_SkyObj_StoneLantern_A_01[Lantern_04].EventTriggerParticipateEvent()
    }

    GameSystemActor.EventTriggerRequestAutoSave()
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Dungeon_Entrance', 'ChallengeName': 'SageOfSoul'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'Position': [1399.6300048828125, -492.2467041015625, 3222.876953125], 'YAngle': -19.999990463256836, 'IsWaitEnd': False})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_02', 'BoneName': 'PlayerPosition', 'RotOffset': [0.0, 180.0, 0.0], 'TransOffset': [-0.035999998450279236, -0.1599999964237213, -0.014000000432133675]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.7099999785423279, 4.119999885559082, 2.940000057220459], 'AtVector': [2.490000009536743, 5.449999809265137, -4.21999979019165], 'TargetFovy': 65.26000213623047, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_Terminal_A_02[Tarminal01].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'ASName': 'c02_Elevator_wait'})
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'DmF:Bgmミュート(フェード普通)'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

    fork {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'C01_RaumiGolem', 'Partial': '', 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0, 'IsAllSlot': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemThirdEyeOpen({'IsImmediate': False})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0060_RaumiGolem_Sage_CompassBeam_Launch', 'SLinkKey': ''})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZN_0060_RaumiGolem_Sage_CompassBeam_Launch', 'SLinkKey': '', 'IsKill': False})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZN_0060_RaumiGolem_Sage_CompassBeam_Disappear'})

    fork {
        DgnObj_Terminal_A_02[Tarminal01].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_02', 'BoneName': 'PartsStorage_01', 'RotOffset': [0.0, 160.0, 0.0], 'TransOffset': [-0.34200000762939453, 0.1177000030875206, 0.9390000104904175]})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_02', 'BoneName': 'PlayerPosition', 'RotOffset': [0.0, 180.0, 0.0], 'TransOffset': [-0.035999998450279236, -0.1599999964237213, -0.014000000432133675]})
    } {
        Dm_SkyObj_StoneLantern_A_01[Lantern_03].EventTriggerModelBind({'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_02', 'BoneName': 'Lantern_02', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    } {
        Dm_SkyObj_StoneLantern_A_01[Lantern_04].EventTriggerModelBind({'BoneName': 'Lantern_01', 'ActorName': 'Obj_Zonau_DeepElevator_A_01', 'InstanceName': 'UndergroundElevator_02', 'TransOffset': [0.0, 0.0, 0.0], 'RotOffset': [0.0, 45.0, 0.0]})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-2.609999895095825, 5.199999809265137, -0.07000000029802322], 'AtVector': [0.3700000047683716, 3.9200000762939453, 2.7899999618530273], 'TargetFovy': 51.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_Terminal_A_02[Tarminal01].EventWait({'IsWaitEnd': True, 'Frames': 0})
    }

    DgnObj_Terminal_A_02[Tarminal01].EventPlayAS({'ASName': 'Light_On', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 111})
    DgnObj_Terminal_A_02[Tarminal01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 15.0, 'ASName': 'Light_Off', 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    DgnObj_Terminal_A_02[Tarminal01].EventPlayAS({'ASName': 'Eye_Light_On', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': True, 'IsWaitEnd': False, 'ForceFadeInFrame': 30.0, 'ASName': 'C02_wait_RaumiGolem'})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-7.619999885559082, 5.110000133514404, -11.649999618530273], 'AtVector': [-7.460000038146973, 5.019999980926514, -11.489999771118164], 'TargetFovy': 51.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 70, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'OpenWarpPoint_LargeDungeonSoul'})
    } {
        DgnObj_WarpPoint_Zonau_A_01[LDungeonSoulEntrance].EventPlayAS({'ASName': 'On', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        DgnObj_WarpPoint_Zonau_A_01[LDungeonSoulEntrance].EventPlayAS({'ASName': 'OnWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    GameSystemActor.EventWarpSoulFollowersFormationPos({'IsWaitEnd': True, 'IsOverrideParam': False, 'Dist': 5.0, 'Space': 4.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call EvStart()

}

void EvStart() {
    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Obj_Zonau_DeepElevator_A_01', 'RootType': 3, 'TargetActorInstanceName': 'UndergroundElevator_02', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'C04-0', 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 24})
    Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Down', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Down'})

    fork {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'c04_Elevator', 'IsAnimeDriven': True, 'IsWaitEnd': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02].EventTriggerXLinkFadeByKey({'IsKill': False, 'ELinkKey': '', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Down'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 33})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'TargetActorName': 'Obj_Zonau_DeepElevator_A_01', 'RootType': 3, 'TargetActorInstanceName': 'UndergroundElevator_02', 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'SceneName': 'C04-1', 'IsReferenceRootOnce': True, 'CalcUpInInterpolate': False})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Middle', 'Length': 0.0})
    }


    fork {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'SageOfSoul_LDungeonElevatorDown', 'Index': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_GimmickActivation03'})
    } {
        GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    } {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03].EventTriggerParticipateEvent()
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 39})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    DgnObj_Terminal_A_02[Tarminal01].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Eye_Light_Off'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsLinearMove': True, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVector': [1413.030029296875, -635.5399780273438, 3223.14990234375], 'AtVector': [1405.4000244140625, -636.8699951171875, 3224.320068359375], 'TargetFovy': 55.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_Terminal_A_02[Tarminal01].EventTriggerModelUnbind()
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerModelUnbind()
        Dm_SkyObj_StoneLantern_A_01[Lantern_04].EventTriggerModelUnbind()
        Dm_SkyObj_StoneLantern_A_01[Lantern_03].EventTriggerModelUnbind()
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -16.2181396484375, 'Position': [1399.573974609375, -632.9719848632812, 3222.75390625]})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_02].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Down', 'IsKill': False, 'SLinkKey': ''})
    }


    call EvEnd()

}

void EvEnd() {
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Player.EventDoNothing({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'IsLinearMove': True, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'TargetFovy': 55.0, 'AtVector': [1405.4000244140625, -629.8699951171875, 3224.320068359375], 'PosVector': [1413.030029296875, -631.6400146484375, 3223.14990234375], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -16.2181396484375, 'Position': [1399.573974609375, -632.5, 3222.75390625]})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Obj_SecretStone_A_03[SecretStone02].EventTriggerParticipateEvent()
    }

    GameSystemActor.EventWaitForActorPresence({'IsWaitEnd': True, 'ActorName': 'Obj_SecretStone_A_03', 'InstanceName': 'SecretStone02'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_GimmickActivation04'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_LargeDungeonSoul_EleveterCheckPoint'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [1413.06005859375, -637.6400146484375, 3223.14990234375], 'AtVector': [1405.4000244140625, -638.969970703125, 3224.320068359375], 'TargetFovy': 55.0, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.5, 'IsWaitEnd': True, 'MoveTime': 180, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        GameSystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 2})
    } {
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Moving'})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 70})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_MoveSlow'})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03].EventTriggerXLinkFadeByKey({'ELinkKey': '', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Moving', 'IsKill': False})
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Obj_Zonau_DeepElevator_A_01[UndergroundElevator_03].EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_ZN_0060_Zonau_DeepElevator_Stop'})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'DgnObj_Terminal_A_02', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'c06', 'IsLoop': False, 'InterpolateFrame': 0.0, 'IsWaitEnd': False, 'CalcUpInInterpolate': False})
    } {
        EventSystemActor[taiki_02].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C06_RaumiGolem', 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': 10.0})
        EventSystemActor[taiki_02].EventWait({'IsWaitEnd': True, 'Frames': 50})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': 10.0, 'ASName': 'Walk'})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:WorldSEミュート(フェード普通)(Env除外)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventSystemActor[taiki_02].EventWait({'IsWaitEnd': True, 'Frames': 95})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_LDungeon_EVEnd', 'Value': True, 'Index': -1})
    Obj_SecretStone_A_03[SecretStone02].EventTriggerEmitXLink({'SLinkKey': 'Dm_ZN_0060_Appear_loop', 'ELinkKey': ''})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsLinearMove': True, 'Actor1ActorName': 'Obj_SecretStone_A_03', 'Actor1InstanceName': 'SecretStone02', 'PosVector': [-0.23999999463558197, -0.20999999344348907, 11.880000114440918], 'AtVector': [-0.28999999165534973, -0.5799999833106995, 6.260000228881836], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 90, 'EndRecelerateRate': -2.0, 'StartAccelerateRate': 1.0, 'Actor1ActorName': 'Obj_SecretStone_A_03', 'Actor1InstanceName': 'SecretStone02', 'PosVector': [-0.23999999463558197, -0.20999999344348907, 10.34000015258789], 'AtVector': [-0.2800000011920929, -0.5799999833106995, 4.710000038146973], 'TargetFovy': 50.04999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': True, 'IsAllSlot': True, 'ForceFadeInFrame': 10.0, 'ASName': 'Wait'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Obj_SecretStone_A_03[SecretStone02].EventTriggerXLinkFadeByKey({'SLinkKey': 'Dm_ZN_0060_Appear_loop', 'ELinkKey': '', 'IsKill': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.009999999776482582, 9.779999732971191, 8.8100004196167], 'AtVector': [-0.019999999552965164, 10.180000305175781, 16.600000381469727], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'YAngle': -20.0, 'Position': [1393.6619873046875, -643.0358276367188, 3239.5849609375], 'IsWaitEnd': True})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 2.0})
}
