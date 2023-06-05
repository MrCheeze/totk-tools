-------- EventFlow: Dm_ZO_0044 --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventWarpToTargetPosAndRot', 'EventTriggerChangeEmotion', 'EventTriggerEquipmentUserRequestChangeState', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsGrounding': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0044/Dm_ZO_0044_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0044_Npc_Zora_Prince_Sage.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_ZoraFencer[ParkYona]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventWarpToTargetPosAndRot', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant001[ParkHifumi]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0044/Dm_ZO_0044_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0044_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora_Attendant002[ParkImu]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0044/Dm_ZO_0044_UMii_Zora_BodyC_W_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0044_UMii_Zora_BodyC_W_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_Zora034[Npc_Zora034_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventPlayAS']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsWorld': False, 'IsGrounding': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWaitForActorPresence', 'EventCloseMessageDialog', 'EventOpenDemoNicknameUI', 'EventCloseDemoNicknameUI', 'EventOpenActionGuideWithPictScreen', 'EventTriggerNoticeActionGuideWithPictScreenClosable', 'EventCloseActionGuideWithPictScreen', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventGoOffstageForUser', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerGetOff']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Enemy_LikeLike_Tar
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0044/Dm_ZO_0044_Enemy_LikeLike_Tar/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0044_Enemy_LikeLike_Tar.root.as', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerStartBgmSimple', 'EventTriggerSoundControlBGM', 'EventSoundReleaseDucking', 'EventSoundRequestDucking', 'EventTriggerSoundBeginForbidDialogDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Tar_S_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerEmitXLink']
queries: []
params: {'IsGrounding': False, 'IsWorld': True, 'Position': [3899.97412109375, 590.8958740234375, -590.8051147460938], 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0044/Dm_ZO_0044_FldObj_Tar_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0044_FldObj_Tar_A.root.as', 'EventMemberCreateMethod': 1, 'Rotation': [0.0, 42.0, 0.0], 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventReserveHintVoice']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zora031
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

void EntryPoint0() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        Player.EventTriggerPlayerGetOff()
        LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [3864.510986328125, 591.7908935546875, -597.665283203125], 'IsWaitEnd': False})
        Event7:
        LastRiddenAnimal_ForEvent.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': False, 'IsRidingTargetGoOffstage': False})

        call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


        call C01()


        call C02()


        call C03()


        call C04()


        call C05()


        call C06()


        call C07()


        call C08()


        call C09()


        call C10()


        call C11()


        call C12()


        call C13()

    } else {
        goto Event7
    }
}

void InitDemo() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_MiddleBossAppear', 'Index': -1, 'Value': True})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'Enemy_LikeLike_Tar', 'IsWaitEnd': True, 'InstanceName': ''})

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'ParkYona', 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 0, 'EquipmentState': 2})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C01-Npc_Zora_Prince_Sage_Discussion_Loop'})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'PosOffset': [0.0, 1.0, 0.0], 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    } {
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[ParkYona].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Npc_Zora_Attendant002[ParkImu].EventTriggerParticipateEvent()
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'ASName': 'Act_CleanWater_Wait', 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_Zora_Attendant001[ParkHifumi].EventTriggerParticipateEvent()
        Npc_Zora_Attendant001[ParkHifumi].EventPlayAS({'ASName': 'Act_CleanWater_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Zora034[Npc_Zora034_01].EventTriggerParticipateEvent()
        Npc_Zora034[Npc_Zora034_01].EventWarpToTargetPosAndRot({'YAngle': -67.0, 'Position': [3797.468994140625, 591.0510864257812, -562.7083129882812], 'IsWaitEnd': True})
        Npc_Zora034[Npc_Zora034_01].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    Enemy_LikeLike_Tar.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -73.0, 'Position': [3899.97412109375, 590.8958740234375, -590.8051147460938]})
    Enemy_LikeLike_Tar.EventTriggerParticipateEvent()
    Enemy_LikeLike_Tar.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    Dm_Tar_S_01.EventTriggerParticipateEvent()
}

void C01() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.559999942779541, 2.2300000190734863, 4.25], 'AtVector': [1.25, 6.230000019073486, 0.36000001430511475], 'TargetFovy': 34.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-1.840000033378601, 1.7599999904632568, 4.539999961853027], 'AtVector': [1.6100000143051147, 2.4800000190734863, -0.6200000047683716], 'TargetFovy': 34.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 120, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call ActorPos()


        call InitDemo()

        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_17', 'ASName': 'C01-Npc_Zora_Prince_Sage_Discussion', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'IsActFaceOnly': True, 'EmotionType': 0})
    }

}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Tar_S_01', 'PosVector': [11.930000305175781, 2.9000000953674316, 5.949999809265137], 'AtVector': [10.069999694824219, 2.75, 4.989999771118164], 'TargetFovy': 18.100000381469727, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 73})
    } {
        Dm_Tar_S_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0044_MiddleBoss_Born', 'SLinkKey': ''})
        Dm_Tar_S_01.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C02-Dm_Tar_S_01_appear', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

}

void C07() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [-0.23000000417232513, 2.059999942779541, 4.429999828338623], 'AtVector': [-0.2199999988079071, 2.140000104904175, 3.430000066757202], 'TargetFovy': 30.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [3899.97412109375, 590.8958740234375, -590.8051147460938], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_12', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_MiddleBoss_Zora', 'CommandLife': 2, 'IsReleaseDucking': True})
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Enemy_LikeLike_Tar.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void C08() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'SceneName': 'C04-0', 'TargetActorName': 'Enemy_LikeLike_Tar', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'InterpolateFrame': 0.0, 'IsLoop': False, 'CalcUpInInterpolate': False})
    } {
        Enemy_LikeLike_Tar.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0044_MiddleBoss_Born_Foot', 'SLinkKey': ''})
        Enemy_LikeLike_Tar.EventPlayAS({'ASName': 'C04-Enemy_LikeLike_Tar_appear', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 183})
        Enemy_LikeLike_Tar.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0044_LikeLike_Tar_Roar', 'SLinkKey': ''})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_GataGata', 'Length': 2.5})
        VoicePlayActor.EventReserveHintVoice({'ReserveMessageID': 'ShoutMsg/ShoutVoice_Shido:NewText_26', 'IsDelay': True, 'IsWaitEnd': True})
    } {
        Dm_Tar_S_01.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C04-Dm_Tar_S_01_burst', 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 180})
        GameSystemActor.EventOpenDemoNicknameUI({'DemoNicknameType': 1, 'IsWaitEnd': False, 'NameMessageLabel': 'ActorMsg/Boss:Enemy_LikeLike_Tar_Name', 'NicknameMessageLabel': 'ActorMsg/Nickname:LikeLike_Tar'})
        EventSystemActor[01].EventWait({'Frames': 120, 'IsWaitEnd': True})
        GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'Position': [3864.702880859375, 590.1934814453125, -580.57177734375], 'IsWaitEnd': True, 'YAngle': 114.0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Talk_Prince_Normal'})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3864.511962890625, 590.2587890625, -583.2979736328125], 'YAngle': 102.0, 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'LockOnWait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_ZoraFencer[ParkYona].EventWarpToTargetPosAndRot({'YAngle': 120.0, 'Position': [3861.639892578125, 590.1934814453125, -583.8499755859375], 'IsWaitEnd': True})
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Enemy_LikeLike_Tar', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    Dm_Tar_S_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}

void C09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.4099999964237213, 2.890000104904175, -1.0099999904632568], 'AtVector': [-0.4099999964237213, 2.9100000858306885, -0.029999999329447746], 'TargetFovy': 18.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.4399999976158142, 2.890000104904175, -7.480000019073486], 'AtVector': [-0.46000000834465027, 2.759999990463257, -6.510000228881836], 'TargetFovy': 39.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 12, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventSoundRequestDucking({'CommandLife': 2, 'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': ''})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_13', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'C09-Npc_Zora_Prince_Sage_Loop', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[ParkYona].EventPlayAS({'ASName': 'Notice', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Enemy_LikeLike_Tar.EventPlayAS({'IsAllSlot': False, 'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C09-Enemy_LikeLike_Tar_Wait'})
    }

}

void C11() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [1.0499999523162842, 1.4800000190734863, 4.989999771118164], 'AtVector': [0.9599999785423279, 1.659999966621399, 4.010000228881836], 'TargetFovy': 30.260000228881836, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_15', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': True, 'ASName': 'C11-Npc_Zora_Prince_Sage_Talk', 'NotPlayLipSyncAnim': True, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C12() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [3.0999999046325684, 1.6799999475479126, 1.1799999475479126], 'AtVector': [2.130000114440918, 1.8899999856948853, 1.0700000524520874], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 34.34000015258789, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_16', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'C13-Npc_Zora_Prince_Sage_Loop', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    } {
        Npc_ZoraFencer[ParkYona].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Zora_Attendant001[ParkHifumi].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Zora_Attendant002[ParkImu].EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Zora_Attendant002[ParkImu].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZO_0044_Npc_Zora_CleanWater'})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 18})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [3864.409912109375, 591.8699951171875, -584.0], 'AtVector': [3865.25, 592.0599975585938, -583.5], 'TargetFovy': 39.540000915527344, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Enemy_LikeLike_Tar', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsAnimeDriven': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C11-Npc_Zora_Prince_Sage_Run', 'IsWaitEnd': False})
    } {
        Enemy_LikeLike_Tar.EventPlayAS({'IsAllSlot': False, 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'ASName': 'C09-Enemy_LikeLike_Tar_Wait', 'ForceFadeInFrame': -1.0})
    }

    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 94})
}

void C02() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [4.289999961853027, 5.429999828338623, 8.069999694824219], 'AtVector': [1.090000033378601, 3.119999885559082, 3.2100000381469727], 'TargetFovy': 15.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_18', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 25.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    }


    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_19', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-1.6100000143051147, 1.2400000095367432, -2.190000057220459], 'AtVector': [-0.03999999910593033, 1.9500000476837158, 3.8299999237060547], 'TargetFovy': 47.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ZoraFencer[ParkYona].EventTalk({'ASName': 'Talk', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_20', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }


    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_21', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
    }

}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-2.369999885559082, 1.2999999523162842, -2.0199999809265137], 'AtVector': [1.4900000095367432, 2.2699999809265137, 2.8299999237060547], 'TargetFovy': 34.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_22', 'ASName': 'Talk_Prince_Surprise', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_27', 'ASName': 'Talk_Prince_Joy', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_ZoraFencer[ParkYona].EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-1.1299999952316284, 1.4299999475479126, -1.9800000190734863], 'AtVector': [-0.2199999988079071, 1.7699999809265137, 4.210000038146973], 'TargetFovy': 47.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ZoraFencer[ParkYona].EventTalk({'ASName': 'Talk', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_29', 'IsNotOpenIfSkipedMostRecent': False})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [4.289999961853027, 5.429999828338623, 8.069999694824219], 'AtVector': [1.090000033378601, 3.119999885559082, 3.2100000381469727], 'TargetFovy': 15.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'ASName': 'Talk', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_24', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        EventSystemActor[01].EventWait({'IsWaitEnd': True, 'Frames': 6})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } {
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_25', 'ASName': 'C05-Npc_Zora_Prince_Sage_LookDown', 'IsWaitEnd': True, 'IsPlayASAllSlot': True, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_ZoraFencer[ParkYona].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_26', 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_10', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'IsWaitEnd': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
}

void C13() {
    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3871.5849609375, 594.205078125, -586.5477294921875], 'AtVector': [3872.55810546875, 594.12060546875, -586.31689453125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/SageOfZora:ShidoToLake_02', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'C13-Npc_Zora_Prince_Sage_Loop', 'IsNotOpenIfSkipedMostRecent': False})
    }

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfZora_InBattleLakeBoss'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.Companion.Water.IsFollowMode', 'Index': -1, 'Value': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'SageOfZora', 'StepName': 'DefeatLakeBoss', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [8.510000228881836, 0.9200000166893005, 8.520000457763672], 'AtVector': [7.860000133514404, 1.0, 7.760000228881836], 'TargetFovy': 17.399999618530273, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 1.2999999523162842, 0.0], 'ResetArriveTransformFixed': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SageOfZora:ShidoToLake_03', 'NotPlayLipSyncAnim': False, 'ASName': 'C13-Npc_Zora_Prince_Sage_Loop', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 112.0, 'Position': [3872.527099609375, 591.784912109375, -587.5682983398438], 'UseDemoWait': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'TurnFaceControlType': 1})
    }

    Npc_Zora031.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 14, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [1.5099999904632568, 2.1600000858306885, -5.71999979019165], 'AtVector': [1.2599999904632568, 2.1600000858306885, -4.739999771118164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'BeforeBattleWait', 'ForceFadeInFrame': 0.0})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    GameSystemActor.EventOpenActionGuideWithPictScreen({'IsWaitEnd': True, 'ActionGuideCompanionOrderType': 2})
    EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
    GameSystemActor.EventTriggerNoticeActionGuideWithPictScreenClosable()
    GameSystemActor.EventCloseActionGuideWithPictScreen({'IsWaitEnd': True})
}

void C10() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_ZoraFencer', 'Actor1InstanceName': 'ParkYona', 'PosVector': [2.390000104904175, 1.6699999570846558, 3.799999952316284], 'AtVector': [1.8200000524520874, 1.7100000381469727, 2.9800000190734863], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'TargetFovy': 18.0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_ZoraFencer[ParkYona].EventWarpToTargetPosAndRot({'Position': [3862.405029296875, 590.1934814453125, -582.0120239257812], 'IsWaitEnd': True, 'YAngle': 80.0})
        Npc_ZoraFencer[ParkYona].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_ZoraFencer[ParkYona].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_14', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventGoOffstageForUser({'IsSleepXLink': True, 'IsWaitEnd': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C13-Npc_Zora_Prince_Sage_Loop', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_ZoraFencer', 'InstanceName': 'ParkYona', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        Npc_Zora_Attendant002[ParkImu].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0044_Npc_Zora_CleanWater'})
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'IsWaitEnd': False, 'ASName': 'C11-Npc_Zora_Attendant_Look', 'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }


    fork {
        Npc_ZoraFencer[ParkYona].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0044:Dm_ZO_0044_30', 'ASName': 'Talk_Princess_Serious', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Npc_Zora_Attendant002[ParkImu].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'C10-Npc_Zora_Attendant_Nod'})
    }

}

void ActorPos() {

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'Position': [3864.702880859375, 590.19287109375, -580.57177734375], 'YAngle': -125.0, 'IsWaitEnd': True})
    } {
        Npc_ZoraFencer[ParkYona].EventWarpToTargetPosAndRot({'Position': [3862.405029296875, 590.19287109375, -582.0120239257812], 'YAngle': 60.0, 'IsWaitEnd': True})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -6.0, 'Position': [3864.697998046875, 590.3037719726562, -583.5977783203125], 'UseDemoWait': True})
    }

}
