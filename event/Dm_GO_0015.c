-------- EventFlow: Dm_GO_0015 --------

Actor: Npc_Goron_Yunbo_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerLookAtObject', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventWarpToTargetActor', 'EventUnequipWeapon']
queries: ['EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0015_Npc_Goron_HeroDescendants_Sage.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_GO_0015/Dm_GO_0015_Npc_Goron_HeroDescendants_Sage/workspace.pp__ModelProject.gyml', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor', 'EventPlayerTurnAndLookNow', 'EventWarpOnGround', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_GO_0015_Link.root.as', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventSoundRequestDucking', 'EventSoundReleaseDucking', 'EventTriggerSoundStopSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMinusMenu', 'EventTriggerEmphasizeMapIcon', 'EventShowMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

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

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call Pre()


    call AncientCall()


    call Message1()


    call Message2()


    call Message3()


    call OpenMap()


    call AfterAncientCall()

}

void Pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    DgnObj_Terminal_A_01.EventTriggerParticipateEvent()
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
    Player.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'DgnObj_Terminal_A_01', 'InstanceName': '', 'OffsetBase': 1, 'IsWaitEnd': True, 'YAngle': -60.0, 'PositionOffset': [0.0, 0.23999999463558197, 2.700000047683716], 'UseDemoWait': True})
    Player.EventWarpOnGround({'IsWaitEnd': True, 'IsIncludeWater': True, 'OffsetY': 0.0, 'UseDemoWait': True})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'InstanceName': '', 'OffsetBase': 1, 'YAngle': -70.0, 'PositionOffset': [0.0, -0.3499999940395355, 3.0]})
    if !Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventQueryNeedEquipWeapon() {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventUnequipWeapon({'IsWaitEnd': True})
    }
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
    Player.EventPlayerTurnAndLookNow({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'InstanceName': 'BossDoor', 'ActorName': 'DgnObj_Fire_BossBattleRoomDoor_A_01', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'OffsetBase': 0})
    DgnObj_Fire_BossBattleRoomDoor_A_01[BossDoor].EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
}

void AncientCall() {
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DgnObj_Terminal_A_01', 'PosVector': [3.130000114440918, 1.2999999523162842, 6.980000019073486], 'AtVector': [-0.9399999976158142, 1.8200000524520874, 3.619999885559082], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'Target': 2, 'OffsetBase': 1, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_007_b', 'ASName': 'Wait', 'IsCloseDialog': False, 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Player.EventPlayerTurnAndLook({'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Goron_Yunbo_Sage', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName3': '', 'CommandLife': 2, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    CameraXLinkControl.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_GO_0015_AncientCall'})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerRequestLookAtTheFront()
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'DemoLookAround', 'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ForceFadeInFrame': -1.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 7})
        Player.EventTriggerPlayerLookAtObject({'InstanceName': 'DynamicGenerateSage', 'ActorName': 'Npc_Goron_Yunbo_Sage', 'Target': 3, 'PosOffset': [0.0, 4.0, 0.0], 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': True, 'ASCommand': 'Dm_GO_0015_AncientCall', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_004_a', 'IsCloseDialog': False, 'EndDialogOption': 3, 'ASName': 'DemoLookAround', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void AfterAncientCall() {
    CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_GO_0015_AncientCall'})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName': 'DmF:WorldSEミュート(フェード普通)', 'DuckingName2': ''})

    fork {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_004_b', 'IsAnonymous': False, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 0.0, 0.0], 'ActorName': 'Npc_Goron_Yunbo_Sage', 'InstanceName': 'DynamicGenerateSage', 'TurnFaceControlType': 1})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_005_b', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void OpenMap() {
    ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SageOfFire', 'IsRestoreWhenEventEnd': False})
    GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'IsShowChallenge': True, 'ZoomLevel': 2, 'CenterPos': [1334.0, -677.0, -2809.0], 'IsWaitEnd': True})
    GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 10, 'TargetIconName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'LargeDungeonFire_CheckPoint_On', 'Index': -1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_003_c', 'IsOverrideStyle': True, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'OverrideStyle': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'PosOffset': [0.0, 2.0, 0.0], 'OffsetBase': 1, 'ResetArriveTransformFixed': False})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'DemoWait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
}

void Message1() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_001_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [8.199999809265137, 18.75, -10.5], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.07000000029802322, 2.5, 1.1699999570846558], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'IsLinearMove': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [-5.260000228881836, 18.75, -12.010000228881836], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.07000000029802322, 2.5, 1.1699999570846558], 'MoveTime': 500, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void Message2() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_002_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DgnObj_Fire_BossBattleRoomDoor_A_01', 'Actor1InstanceName': 'BossDoor', 'PosVector': [0.0, 1.399999976158142, 19.790000915527344], 'AtVector': [0.0, 7.059999942779541, 5.78000020980835], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsLinearMove': True, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 400, 'Actor1ActorName': 'DgnObj_Fire_BossBattleRoomDoor_A_01', 'Actor1InstanceName': 'BossDoor', 'PosVector': [0.0, 2.7799999713897705, 16.360000610351562], 'AtVector': [0.0, 7.059999942779541, 5.78000020980835], 'TargetFovy': 65.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void Message3() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_GO_0015:Dm_GO_0015_Text_003_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [4.880000114440918, 0.33000001311302185, -3.640000104904175], 'AtVector': [-0.7099999785423279, 1.350000023841858, 2.2300000190734863], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsWaitEnd': False, 'IsLinearMove': False, 'MoveTime': 200, 'StartAccelerateRate': 0.5, 'Actor1ActorName': 'Player', 'PosVector': [3.9800000190734863, 0.49000000953674316, -2.690000057220459], 'AtVector': [-0.7099999785423279, 1.350000023841858, 2.2300000190734863], 'TargetFovy': 30.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Goron_Yunbo_Sage[DynamicGenerateSage].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAnimeDriven': False, 'IsAllSlot': True, 'ASName': 'DemoLookAroundEnd', 'ForceFadeInFrame': -1.0})
    }

}
