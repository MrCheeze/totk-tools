-------- EventFlow: Dm_ZO_0047 --------

Actor: DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[Cam_wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_SecretStone_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Terminal_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_01_Demo_02
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [3347.60693359375, 1856.239013671875, -798.6326904296875], 'Rotation': [0.0, 20.0, 0.0], 'IsGrounding': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0047/Dm_ZO_0047_DgnObj_Tar_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0047_DgnObj_Tar_A.root.as', 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_01
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsBindNearestActor': False}

Actor: EventSystemActor[effect]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call C01_00()

}

void pre() {

    fork {

        call C01_Effects_OFF()

    } {
        Obj_SecretStone_A_01.EventTriggerParticipateEvent()
    } {
        Player.EventTriggerParticipateEvent()
    } {
        DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01].EventPlayAS({'ASName': 'On', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 0.0})
        DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0023_SprinkleWater', 'SLinkKey': 'Dm_ZO_0023_SprinkleWater'})
    } {
        DgnObj_TarSecretStone_A_02.EventTriggerParticipateEvent()
    } {
        DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventTriggerParticipateEvent()
        DgnObj_TarSecretStone_A_01.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_TarSecretStone_A_01', 'KeyName': 'Splash'})
    }

}

void C01_Effects_OFF() {
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_WaterPlane_A_01', 'KeyName': 'WaterLeak'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_Water_Pipe_A_01', 'KeyName': 'WaterRapid'})
    EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'DgnObj_WaterPlane_A_01', 'KeyName': 'WaterSplash'})
}

void C01_00() {

    fork {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'CameraFront_30m', 'FadeTime': 0.0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.8799999952316284, 37.540000915527344, -19.75], 'AtVector': [0.4300000071525574, 47.459999084472656, 13.850000381469727], 'TargetFovy': 52.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.8799999952316284, 37.540000915527344, -19.75], 'AtVector': [0.4300000071525574, 47.459999084472656, 13.850000381469727], 'TargetFovy': 52.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 80, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 40, 'Actor1ActorName': 'Player', 'PosVector': [0.8799999952316284, 37.540000915527344, -19.75], 'AtVector': [0.4300000071525574, 47.459999084472656, 13.850000381469727], 'TargetFovy': 52.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EndRecelerateRate': 0.0, 'MoveTime': 140, 'Actor1ActorName': 'Player', 'PosVector': [0.8799999952316284, 37.540000915527344, -19.739999771118164], 'AtVector': [0.3100000023841858, 23.200000762939453, 12.239999771118164], 'TargetFovy': 52.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor[Cam_wait].EventWait({'IsWaitEnd': True, 'Frames': 110})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 230})
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Scale_Default_Loop'})
    } {
        EventSystemActor[effect].EventWait({'IsWaitEnd': True, 'Frames': 1})
        DgnObj_TarSecretStone_A_01_Demo_02.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0047_SludgeSplash_Weak'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'EndRecelerateRate': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'DgnObj_Terminal_A_01', 'PosVector': [-15.510000228881836, 12.109999656677246, 2.7200000286102295], 'AtVector': [4.760000228881836, 21.6299991607666, -32.720001220703125], 'TargetFovy': 55.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        fork {
            DgnObj_TarSecretStone_A_01_Demo_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Scale'})
        } {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 3, 'ApplyType': 1, 'IsRumbleController': False, 'Power': 0.8999999761581421, 'LoopEndCount': 23})
        }

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})
    } {
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Camera_Sin00', 'Length': 3.200000047683716})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZO_0023_SprinkleWater'})
    SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Normal', 'FadeTime': 0.30000001192092896})
}
