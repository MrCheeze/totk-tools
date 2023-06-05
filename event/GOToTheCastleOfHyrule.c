-------- EventFlow: GOToTheCastleOfHyrule --------

Actor: Npc_BaseCamp_Assistant[WatchTower]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor[WatchTowerPurah]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Tool': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter[WatchTowerPurah]
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_TamourHatago004[CoH]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[CoH]
entrypoint: None()
actions: ['EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook']
queries: ['EventQueryIsEquipArmor', 'EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCampSoldier_Hylia013
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryHavePlayedEvent', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleGetChaseState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundRequestWaitSetupNextEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_SetCloudShape']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void MeetPurah_OpenLaboDoor() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_BaseCamp_Assistant", sub_name="WatchTower")})


    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked.Npc_AncientDoctor'})

    call Common.AirStartUP_Player_OnlyStopInAir()

    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

    fork {

        call HeadCheck_Joshua()

    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_BaseCamp_Assistant', 'InstanceName': 'WatchTower', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Event10:
    Npc_AncientDoctor[WatchTowerPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'DmT_BC_MeetAgain'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'Color': 0, 'Length': 1, 'IsNoPlayAnime': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-255.1999969482422, 133.6699981689453, -150.22999572753906], 'AtVector': [-252.9600067138672, 133.05999755859375, -154.50999450683594], 'TargetFovy': 34.29999923706055, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'FirstMeetPurah', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'Radius': 5.0, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'FirstMeetPurah', 'IsWaitEnd': True, 'UseDemoWait': True})
    Npc_BaseCamp_Assistant[WatchTower].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_BaseCamp_Assistant[WatchTower].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 4})
    Npc_AncientDoctor[WatchTowerPurah].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_AncientDoctor[WatchTowerPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_BaseCampSoldier_Hylia013.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_BaseCampSoldier_Hylia013.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'WatchTowerPurah', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    SoundSystemActor.EventTriggerSoundRequestWaitSetupNextEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_BC_0012_PreRender'})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_22', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventWorldManagerController.Event_SetCloudShape({'IsWaitEnd': True, 'PosX': 0.0, 'PosY': 0.0, 'ShapeSeed': 3774})

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerLookAtObject({'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [326.9800109863281, 1617.219970703125, 1125.530029296875], 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': [326.9800109863281, 1617.219970703125, 1125.530029296875], 'TurnFaceControlType': 1})
    }


    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_23', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-257.1300048828125, 133.41000366210938, -151.52000427246094], 'AtVector': [-256.80999755859375, 134.0399932861328, -150.82000732421875], 'TargetFovy': 50.0, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'EnableCameraAlpha': False})

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerLookAtObject({'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'WatchTowerPurah', 'TurnFaceControlType': 1})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'WorldPos': [-254.25, 151.8699951171875, -255.3699951171875], 'ActorName': '', 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'TurnFaceControlType': 1, 'WorldPos': [-254.25, 151.8699951171875, -255.3699951171875]})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsLinearMove': False, 'PosVector': [-255.1999969482422, 134.5800018310547, -150.47000122070312], 'AtVector': [-255.22999572753906, 135.82000732421875, -155.17999267578125], 'TargetFovy': 34.29999923706055, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_5', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerLookAtObject({'ActorName': 'Npc_BaseCampSoldier_Hylia013', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'WatchTowerPurah', 'TurnFaceControlType': 1})
    }

    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'ChoiceLabel1': 31, 'ChoiceLabel2': 32, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'ChoiceLabel1': 31, 'ChoiceLabel2': 32, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_25', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_AncientDoctor', 'InstanceName': 'WatchTowerPurah', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }


    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ASName': '', 'ChoiceLabel1': 31, 'ChoiceLabel2': 32, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_26', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerLookAtObject({'InstanceName': '', 'Target': 2, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    }

    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_SY_0009'}) {
        Event79:
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GOToTheCastleOfHyrule', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'CastleSurvey', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'IsWaitEnd': True})
    } else {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        EventSystemActor.EventTransition({'EventName': 'Dm_SY_0009', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        goto Event79
    }
}

void MeetPurah_Npc_BaseCamp_Assistant_WatchTower_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HaveTalked.Npc_AncientDoctor'})

    call Common.AirStartUP_Player_OnlyStopInAir()


    call HeadCheck_Joshua()

    goto Event10
}

void MeetPurah_Npc_BaseCamp_Assistant_WatchTower_Near() {
    Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 120, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_2', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
}

void ChaseTalk() {

    call MeetPurah_Npc_BaseCamp_Assistant_WatchTower_Talk()

}

void ChaseNear() {
    switch Npc_EventStarter.EventQueryAIScheduleGetChaseState() {
      case 0:
        Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 60, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_2', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case 1:
        Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 30, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_5', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case 2:
        Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 30, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_6', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case 3:
        Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_7', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case 4:
        Npc_EventStarter[WatchTowerPurah].EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/GOToTheCastleOfHyrule:near_1_3', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
    }
}

void MeetPurah_Npc_TabantaBridgeHatago005_CastleOfHyrule_Talk() {
    Event77:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_AncientAssistant001_Talk02', 'Index': -1}) {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Spearker1ActorName': 'Npc_TamourHatago004', 'Spearker1InstanceName': 'CoH', 'Spearker2ActorName': 'Npc_TabantaBridgeHatago005', 'Spearker2InstanceName': 'CoH', 'Actor1': ActorIdentifier(name="Npc_TamourHatago004", sub_name="CoH"), 'Actor2': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="CoH"), 'Arg_Turn': 3})

        Npc_TabantaBridgeHatago005[CoH].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_83', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call InitTalk.InitTalk_Pair({'Arg_Greeting': 4, 'Arg_Turn': 0, 'Actor1': ActorIdentifier(name="Npc_TamourHatago004", sub_name="CoH"), 'Actor2': ActorIdentifier(name="Npc_TabantaBridgeHatago005", sub_name="CoH"), 'Spearker1ActorName': 'Npc_TamourHatago004', 'Spearker1InstanceName': 'CoH', 'Spearker2ActorName': 'Npc_TabantaBridgeHatago005', 'Spearker2InstanceName': 'CoH'})

        Npc_TamourHatago004[CoH].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_44', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_69', 'ChoiceLabel1': 39, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_87', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_TabantaBridgeHatago005[CoH].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsWaitEnd': True})
            Npc_TabantaBridgeHatago005[CoH].EventPlayAS({'ASName': 'TalkSurprised', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }

        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_82', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_AncientAssistant001_Talk02', 'Index': -1, 'Value': True})
    }
}

void MeetPurah_Npc_MercenarySoldier_Hylia003A_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia003A_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MercenarySoldier_Hylia004A_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia004A_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MercenarySoldier_Hylia005A_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia005A_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_TamourHatago004_CastleOfHyrule_Talk() {
    goto Event77
}

void MeetPurah_Npc_TamourHatago004_CastleOfHyrule_Near() {

    call HyruleCastleIncident.MeetPurah_Npc_TamourHatago004_CastleOfHyrule_Near()

}

void MeetPurah_Npc_MercenarySoldier_Hylia002_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia002_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MercenarySoldier_Hylia003_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia003_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MercenarySoldier_Hylia003_CastleOfHyrule_CastleOfHyrule_Near() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia003_CastleOfHyrule_CastleOfHyrule_Near()

}

void MeetPurah_Npc_MercenarySoldier_Hylia004_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia004_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MercenarySoldier_Hylia005_CastleOfHyrule_CastleOfHyrule_Talk() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia005_CastleOfHyrule_CastleOfHyrule_Talk()

}

void MeetPurah_Npc_MS_Hylia005A_CoH_Near() {

    call HyruleCastleIncident.MeetPurah_Npc_MS_Hylia005A_CoH_Near()

}

void HeadCheck_Joshua() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'LightEmission', 'CheckUpper': False, 'CheckLower': False}) {
        Event54:
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_2', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_4', 'ASName': 'Surprised_Big', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'UnderGround', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'AncientHeroSoul', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_160_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_056_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_171_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_180_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_172_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Awakening', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Ancient', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_176_Head', 'ArmorSlot': 0}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'ChemicalFire', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'ChemicalIce', 'CheckUpper': False, 'CheckLower': False}) {
        goto Event54
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1076_Head'}) {
        goto Event54
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': False, 'CheckLower': False, 'CheckSeries': 'Yiga'}) {
        goto Event54
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_1', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GOToTheCastleOfHyrule:talk_1_3', 'ASName': 'Surprised_Big', 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void MeetPurah_Npc_MercenarySoldier_Hylia004_CastleOfHyrule_CastleOfHyrule_Near() {

    call HyruleCastleIncident.MeetPurah_Npc_MercenarySoldier_Hylia004_CastleOfHyrule_CastleOfHyrule_Near()

}
