-------- EventFlow: Dm_ZO_0023 --------

Actor: Npc_Zora_Prince_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerLookAtObject', 'EventTalk', 'EventWarpToTargetPosAndRot', 'EventWait', 'EventTriggerRequestLookAtTheFront', 'EventTriggerSetRecentTalkFlag']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0023/Dm_ZO_0023_Npc_Zora_Prince_Sage/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0023_Npc_Zora_Prince_Sage.root.as', 'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundStartSound', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
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

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectDeleteELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventShowMap', 'EventCloseMinusMenu', 'EventTriggerEmphasizeMapIcon', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01]
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 2, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_01_Demo_02
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'Position': [3347.60693359375, 1856.239013671875, -798.6326904296875], 'Rotation': [0.0, 20.0, 0.0], 'UseEventModelAnime': 'Work/Model/Event/Dm_ZO_0023/Dm_ZO_0023_DgnObj_Tar_A/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZO_0023_DgnObj_Tar_A.root.as', 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: DgnObj_TarSecretStone_A_01
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventGoOffstageForUser', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C07()


    call C08()

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-3.0799999237060547, 1.840000033378601, -3.950000047683716], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
}

void C05() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-4.590000152587891, 1.0299999713897705, 10.09000015258789], 'AtVector': [-1.2000000476837158, 2.4100000858306885, 1.0299999713897705], 'TargetFovy': 37.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 300, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'PosVector': [-4.010000228881836, 1.0299999713897705, 10.289999961853027], 'AtVector': [-1.2000000476837158, 2.4100000858306885, 1.0299999713897705], 'TargetFovy': 37.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'OverrideStyle': 4, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_000_c', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void pre() {

    fork {
        Obj_SecretStone_A_01.EventTriggerParticipateEvent()
        DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    } {
        DgnObj_TarSecretStone_A_02.EventTriggerParticipateEvent()
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Scale_Loop'})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -158.0, 'Position': [3366.18994140625, 1848.0999755859375, -747.5700073242188]})
    } {
        DgnObj_TarSecretStone_A_01.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [2.259999990463257, 3.5999999046325684, 3.240000009536743], 'AtVector': [1.7000000476837158, 3.3299999237060547, 2.4700000286102295], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void C01() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Zora_Prince_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [2.259999990463257, 3.5999999046325684, 3.240000009536743], 'AtVector': [1.7000000476837158, 3.3299999237060547, 2.4700000286102295], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'InstanceName': '', 'ActorName': 'Obj_SecretStone_A_01', 'ResetArriveTransformFixed': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_004_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_005_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [0.07999999821186066, -4.360000133514404, 33.56999969482422], 'AtVector': [0.09000000357627869, 0.3799999952316284, 18.190000534057617], 'TargetFovy': 29.65999984741211, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'DgnObj_TarSecretStone_A_01_Demo_02', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ScaleBack'})
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZO_0023_SludgeSplash_Return', 'SLinkKey': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventTriggerControllerRumble({'Length': 2.0, 'RumbleCall': 'Camera_Sin01'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_DoDon', 'Length': 0.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 17})

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_006_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 3, 'IsCloseDialog': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'YAngle': 180.0, 'OffsetBase': 1, 'ActorName': 'Npc_Zora_Prince_Sage', 'PositionOffset': [0.0, 0.0, 3.0], 'InstanceName': 'DynamicGenerateSage', 'UseDemoWait': True})
        Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [3308.5400390625, 1625.0, -762.3400268554688], 'Target': 3, 'ActorName': 'Npc_Zora_Prince_Sage', 'InstanceName': 'DynamicGenerateSage', 'TurnFaceControlType': 1})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void C03() {
    DgnObj_Water_Bucket_A_01[ZoraDungeon_Bucket_01].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZO_0023_SprinkleWater'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-2.7200000286102295, 0.7200000286102295, -2.069999933242798], 'AtVector': [-2.109999895095825, 0.9700000286102295, -1.3200000524520874], 'TargetFovy': 37.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        DgnObj_TarSecretStone_A_01_Demo_02.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ZO_0023_SludgeSplash_Return', 'SLinkKey': '', 'IsKill': False})
        DgnObj_TarSecretStone_A_01_Demo_02.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        DgnObj_TarSecretStone_A_01.EventWait({'Frames': 1, 'IsWaitEnd': True})
        DgnObj_TarSecretStone_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'Splash', 'SLinkKey': '', 'IsKill': False})
    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_007_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_009_b', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call AncientCall()

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_010_b', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'ASName': 'C03-Npc_Zora_Prince_Sage-A-0_LookAround', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void C04() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-11.760000228881836, 14.300000190734863, -1.1699999570846558], 'AtVector': [0.25999999046325684, 0.0, 1.2599999904632568], 'TargetFovy': 49.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-11.84000015258789, 14.300000190734863, 3.240000009536743], 'AtVector': [0.25999999046325684, 0.0, 1.2599999904632568], 'TargetFovy': 49.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsLinearMove': True, 'MoveTime': 300, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {

        call C01_Effects_ON()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'OverrideStyle': 4, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_000_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void MapOpen() {
    ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SageOfZora', 'IsRestoreWhenEventEnd': False})
    GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [3373.639892578125, 1848.1600341796875, -729.4500122070312], 'IsShowChallenge': True, 'IsWaitEnd': True, 'ZoomLevel': 2})
    GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 10, 'TargetIconName': ''})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Wait', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_LightSpotsOn', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SystemTextNPC.EventTalk({'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_002_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-2.7200000286102295, 0.7200000286102295, -2.069999933242798], 'AtVector': [-2.109999895095825, 0.9700000286102295, -1.3200000524520874], 'TargetFovy': 37.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
}

void C06() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [3360.469970703125, 1849.4000244140625, -762.27001953125], 'AtVector': [3358.4599609375, 1853.52001953125, -767.8400268554688], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': True, 'MoveTime': 300, 'IsWaitEnd': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [3360.469970703125, 1849.4000244140625, -762.260009765625], 'AtVector': [3358.570068359375, 1853.93994140625, -767.5399780273438], 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'OverrideStyle': 4, 'IsOverrideStyle': True, 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_001_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
}

void AncientCall() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': '', 'CommandLife': 2})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
    CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ZO_0023_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'DemoLookAround2nd', 'KeepOneTimeAnm': False, 'ForceFadeFrame': 20.0, 'ClothWarpMode': 0})
    } {
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'C03-Npc_Zora_Prince_Sage-A-0_LookAround', 'ForceFadeInFrame': -1.0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
}

void C07() {
    SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})

    call MapOpen()

    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_ZO_0023_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': ''})
}

void C08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player', 'PosVector': [-2.7200000286102295, 0.7200000286102295, -2.069999933242798], 'AtVector': [-2.109999895095825, 0.9700000286102295, -1.3200000524520874], 'TargetFovy': 37.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

        fork {
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_003_b', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Zora_Prince_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk_Prince_Normal', 'MessageId': 'EventFlowMsg/Dm_ZO_0023:Dm_ZO_0023_Text_003_c', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

    }

    Npc_Zora_Prince_Sage[DynamicGenerateSage].EventWait({'IsWaitEnd': True, 'Frames': 5})
}

void C01_Effects_ON() {
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'DgnObj_WaterPlane_A_01', 'KeyName': 'WaterLeak'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'DgnObj_Water_Pipe_A_01', 'KeyName': 'WaterRapid'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'DgnObj_WaterPlane_A_01', 'KeyName': 'WaterSplash'})
    EventEffectEmitter.EventEffectDeleteELinkHiddenSetting({'ActorName': 'DgnObj_TarSecretStone_A_01', 'KeyName': 'Splash'})
    DgnObj_TarSecretStone_A_01.EventTriggerEmitXLink({'ELinkKey': 'Splash', 'SLinkKey': ''})
}
