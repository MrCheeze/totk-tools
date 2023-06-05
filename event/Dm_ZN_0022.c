-------- EventFlow: Dm_ZN_0022 --------

Actor: Npc_RaumiGolem_Sage[DynamicGenerateSage]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerRaumiGolemHeadLightOn', 'EventNPCTurnToTarget', 'EventTriggerRaumiGolemHeadLightOff']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'Position': [0.0, 5.309999942779541, 0.0], 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0022_Npc_RaumiGolem_Sage.root.as', 'UseEventModelAnime': 'Work/Model/Event/Dm_ZN_0022/Dm_ZN_0022_Npc_RaumiGolem_Sage/workspace.pp__ModelProject.gyml', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[voiceActor]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[posPlayer]
entrypoint: None()
actions: ['EventDmLocatorWarpToNearAnchor']
queries: []
params: {'IsGrounding': False, 'EventMemberCreateMethod': 1, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Dm_Locator[posTana]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventTriggerSoundStopSound', 'EventTriggerStartBgmSimple', 'EventTriggerStartInGameBgm', 'EventTriggerSoundStopBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerPlayASForFlowchart', 'EventPlayerWait', 'EventWait', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMinusMenu', 'EventWait', 'EventEventFadeIn', 'EventOpenActionGuideWithPictScreen', 'EventTriggerNoticeActionGuideWithPictScreenClosable', 'EventCloseActionGuideWithPictScreen', 'EventShowMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerSelectChallenge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_MineruGolemStand_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_Zonau_Rack_A_01[ZonauRack01]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_Zonau_Rack_A_01[ZonauRack02]
entrypoint: None()
actions: ['EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor[sleepEventCamera]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusObj_Zonau_RaumiGolem_Storage_A_01
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': 'Work/AS/Root/Event/Dm_ZN_0020_MinusObj_Zonau_RaumiGolem_Storage_A_01.root.as', 'IsBindNearestActor': False}

Actor: DgnObj_Zonau_A_57
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsWorld': True, 'IsBindNearestActor': False, 'IsGrounding': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'Position': [868.0, -465.0, 2110.0]}

void Dm_ZN_0022() {

    call Pre()


    call C01()


    call C02()


    call C03()


    call C04()


    call C05()


    call C06()


    call C08()


    call End()

}

void SetPosition() {
    Dm_Locator[posPlayer].EventDmLocatorWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'EnterDungeon'})
    Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posPlayer', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.20000000298023224, 0.0], 'YAngle': 0.0, 'UseDemoWait': True})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 5.0], 'YAngle': 180.0, 'InstanceName': ''})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'LookingControllerName': 'Head', 'LookIKParameterVariationName': 'HeadSlight', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'Target': 2, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Dm_Locator[posTana].EventWarpToTargetActor({'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'TargetActorKind': 1, 'ActorName': 'Player', 'OffsetBase': 1, 'PositionOffset': [0.0, 8.720000267028809, -67.0]})
}

void Pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': False, 'Position': [868.0, -454.70599365234375, 2159.22900390625], 'YAngle': 180.0})
    DgnObj_Zonau_A_57.EventTriggerParticipateEvent()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_GolemStorage_Off', 'Index': -1, 'Value': True})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerParticipateEvent()
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'Wait', 'IsAllSlot': True, 'Partial': '', 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
    Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOn({'IsImmediate': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'SageOfSoul_RaumiGolem_Conversation'})
    Player.EventTriggerParticipateEvent()

    call SetPosition()


    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})

    Player.EventPlayerWait({'IsWaitEnd': True})
    Player.EventTriggerPlayerLookAtObject({'Direction': 0.0, 'InstanceName': 'DynamicGenerateSage', 'Target': 3, 'ActorName': 'Npc_RaumiGolem_Sage', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, -2.5, 0.0], 'TurnFaceControlType': 1})
    MinusObj_MineruGolemStand_A_03.EventTriggerParticipateEvent()
    MinusObj_MineruGolemStand_A_03.EventPlayAS({'ASName': 'FullOpen', 'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': ''})
    MinusObj_Zonau_RaumiGolem_Storage_A_01.EventTriggerParticipateEvent()
    MinusObj_Zonau_RaumiGolem_Storage_A_01.EventPlayAS({'IsAllSlot': True, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False, 'Partial': '', 'ASName': 'AS-C06-MinusObj_Zonau_RaumiGolem_Storage_A_01-A-0'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoLookUp', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void C01() {
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsNoPlayAnime': False, 'IsWaitEnd': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-0.8500000238418579, 1.7999999523162842, 1.7699999809265137], 'AtVector': [2.240000009536743, 0.49000000953674316, -2.2899999618530273], 'TargetFovy': 46.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 170, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'PosVector': [-0.9599999785423279, 1.8600000143051147, 1.690000057220459], 'AtVector': [2.359999895095825, 0.550000011920929, -2.180000066757202], 'TargetFovy': 46.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Signal', 'IsIgnoreDucking': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    } {
        CameraXLinkControl.EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0022_AncientCall', 'SLinkKey': ''})
    }

}

void C02() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'CameraCollisionMode': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 4.5, 2.299999952316284], 'PosVector': [-7.190000057220459, 11.180000305175781, -4.059999942779541], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'CameraCollisionMode': 0, 'MoveTime': 520, 'IsLinearMove': True, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [-8.739999771118164, 11.180000305175781, -1.3700000047683716], 'AtVector': [0.0, 4.5, 2.299999952316284], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 70})
    } {
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 20})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_006_b', 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 20})
        SystemTextNPC.EventTalk({'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_007_b', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 20})
    }

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_DungeonIntroduction', 'Value': True, 'Index': -1})
}

void C03() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player', 'PosVector': [-2.319999933242798, 3.619999885559082, 2.5], 'AtVector': [-0.15000000596046448, 1.7999999523162842, 0.2199999988079071], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': False, 'MoveTime': 290, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': True, 'Actor1ActorName': 'Player', 'PosVector': [-1.4900000095367432, 3.619999885559082, 3.0899999141693115], 'AtVector': [-0.11999999731779099, 1.7999999523162842, 0.25], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventWait({'IsWaitEnd': True, 'Frames': 60})
    } {
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 20})
        SoundSystemActor.EventTriggerStartBgmSimple({'BGMName': 'BGM_Dm_ZN_0022', 'CommandLife': 2, 'IsReleaseDucking': False})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_008_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 30})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop', 'GroupName': '', 'FadeFrame': -1})
    }

}

void C04() {

    fork {
        ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SageOfSoul', 'IsRestoreWhenEventEnd': False})
        GameSystemActor.EventShowMap({'InShowIcon': True, 'CenterPos': [868.52001953125, -453.739990234375, 2074.530029296875], 'ZoomLevel': 2, 'IsShowPlayerNavi': True, 'IsShowChallenge': True, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'LightSpotOn', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 130})

        fork {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfSoul_EnteredTheDungeon', 'Value': True, 'Index': -1})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [7.53000020980835, 4.21999979019165, -0.36000001430511475], 'AtVector': [4.920000076293945, 3.759999990463257, 0.49000000953674316], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

    } {
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 110})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_009_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 30})
    }

    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
}

void C05() {
    SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_AncientCall_Blur_loop2', 'IsIgnoreDucking': False})
    EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 20})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_011_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 10})
    SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_012_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        SystemTextNPC.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_013_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'EndDialogOption': 4, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_RaumiGolem_Sage', 'Actor1InstanceName': 'DynamicGenerateSage', 'PosVector': [6.460000038146973, 4.21999979019165, -3.890000104904175], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 15.0, 'AtVector': [6.0, 5.0, 2.0], 'StartAccelerateRate': 0.10000000149011612, 'EndRecelerateRate': 0.10000000149011612, 'IsWaitEnd': True, 'MoveTime': 120, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor[sleepEventCamera].EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor[sleepEventCamera].EventWait({'IsWaitEnd': True, 'Frames': 40})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Appear_GearRackForTutorial', 'Value': True})

        fork {
            MinusObj_Zonau_Rack_A_01[ZonauRack01].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0022_Obj_Zonau_Rack_Rise', 'SLinkKey': ''})
        } {
            MinusObj_Zonau_Rack_A_01[ZonauRack02].EventTriggerEmitXLink({'ELinkKey': 'Dm_ZN_0022_Obj_Zonau_Rack_Rise', 'SLinkKey': ''})
        }

    }

}

void C06() {

    fork {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': 'Player', 'OffsetBase': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'Target': 2, 'FaceControlType': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posTana', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 9.569999694824219, 15.670000076293945], 'AtVector': [0.0, 3.3499999046325684, -1.090000033378601], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})
    }

}

void C08() {

    fork {
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posPlayer', 'OffsetBase': 1, 'YAngle': 180.0, 'PositionOffset': [-4.0, 0.0, 8.0], 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posPlayer', 'PosVector': [-3.2100000381469727, 0.8999999761581421, 0.20999999344348907], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [-0.17000000178813934, 3.1500000953674316, 3.799999952316284], 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'posPlayer', 'PosVector': [-4.440000057220459, 1.0099999904632568, 2.0799999237060547], 'TargetFovy': 40.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 110, 'MoveTotargetPosType': 1, 'AtVector': [-1.4900000095367432, 3.240000009536743, 4.300000190734863], 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'posPlayer', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 5.5], 'YAngle': 180.0, 'UseDemoWait': True})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 2.5999999046325684, -0.5600000023841858], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'AtVector': [0.0, 2.5, 4.820000171661377], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 40.0, 'PosVector': [0.0, 2.5999999046325684, -0.5600000023841858], 'AtVector': [0.0, 2.0999999046325684, 4.800000190734863], 'MoveTime': 90, 'StartAccelerateRate': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Player.EventWait({'IsWaitEnd': True, 'Frames': 75})
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.9500000476837158, -5.420000076293945], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.0, 'MoveTime': 90, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 75})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0022:Dm_ZN_0022_Text_014_b', 'IsOverrideStyle': True, 'OverrideStyle': 4, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'EndDialogOption': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_ZN_0022_AncientCall', 'IsKill': False})
        SoundSystemActor.EventTriggerSoundStopSound({'SLinkKey': 'Dm_AncientCall_Blur_loop2', 'GroupName': '', 'FadeFrame': -1})
        EventSystemActor[voiceActor].EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'ASName': 'c08_Npc_RaumiGolem_Sage', 'IsAnimeDriven': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventTriggerRaumiGolemHeadLightOff({'IsImmediate': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        Npc_RaumiGolem_Sage[DynamicGenerateSage].EventPlayAS({'IsAllSlot': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Get_On', 'IsWaitEnd': False})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 40.0})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Dm_ZN_0022', 'IsUseSuspendFade': False})
}

void End() {
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Dungeon_DuringDungeonCapture', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSoul'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    GameSystemActor.EventOpenActionGuideWithPictScreen({'IsWaitEnd': True, 'ActionGuideCompanionOrderType': 4})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    GameSystemActor.EventTriggerNoticeActionGuideWithPictScreenClosable()
    GameSystemActor.EventCloseActionGuideWithPictScreen({'IsWaitEnd': True})
}
