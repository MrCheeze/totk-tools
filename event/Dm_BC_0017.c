-------- EventFlow: Dm_BC_0017 --------

Actor: Npc_TamourHatago004[CoH]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerSetHaveTalked', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'UseEventModelAnime': 'Work/Model/Event/Dm_BC_0017/Dm_BC_0017_UMii_Hylia_BodyC_M_000/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_BC_0017_UMii_Hylia_BodyC_M_000.root.as', 'IsBindNearestActor': False}

Actor: Npc_TabantaBridgeHatago005[CoH]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerParticipateEvent', 'EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerSetHaveTalked', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor[wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator[cam]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'Position': [-333.3562927246094, 238.96560668945312, -843.0], 'Rotation': [0.0, 100.13480377197266, 0.0], 'IsWorld': True, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot', 'EventTriggerPlayerLookAtObject', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser', 'EventPlayerTurnAndLookNow', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zelda_Black_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerEmitXLink', 'EventPlayAS', 'EventWarpToTargetPosAndRot', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': True, 'UseEventModelAnime': 'Work/Model/Event/Dm_BC_0017/Dm_BC_0017_Npc_Zelda_AncientHyrule/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_BC_0017_Npc_Zelda_Black_Event.root.as', 'TextureReplaceType': 0, 'Position': [0.0, 0.0, 0.0], 'Rotation': [0.0, 0.0, 0.0], 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TerrainCalcCenterTag
entrypoint: None()
actions: ['EventTerrainCalcCenter']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: TerrainResourcePinner
entrypoint: None()
actions: ['EventTerrainPinResource', 'EventTerrainPinResourceCamera']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MS_Hylia002_CoH
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTalkWithSpeakerName', 'EventWait', 'EventTriggerControllerRumble', 'EventClothRequestExtraWind', 'EventTriggerEnableAreaCulling', 'EventTriggerDisableAreaCulling']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventTriggerRequestStopCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor[sound]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['Event_ResetDisableGrassForFlowchart', 'Event_SetDisableGrassForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {

    call pre()


    call c01()


    call c02()

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_AncientAssistant001_Talk02', 'Index': -1}) {

        call c03()

    }

    call c04()


    call c05()


    call c06()


    call c07()


    call c08()


    call c09()


    call c10()

}

void c01() {

    fork {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_TabantaBridgeHatago005[CoH].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 15.0})
    } {
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 39, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_44', 'ASName': 'C01_Look_1', 'IsCloseDialog': False, 'EndDialogOption': 1, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[CoH].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})

        fork {
            Npc_TamourHatago004[CoH].EventPlayAS({'ASName': 'C01_notice', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'IsAllSlot': False})
        } {
            EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor.EventTalkWithSpeakerName({'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_69', 'EndDialogOption': 0, 'SpeakerActor': 'Npc_TamourHatago004', 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    }

}

void pre() {

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})


    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerWarpToTargetPosAndRot({'YAngle': 109.79039764404297, 'IsWaitEnd': False, 'Position': [-339.779296875, 238.96600341796875, -844.0993041992188], 'UseDemoWait': True})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    } {
        Npc_TamourHatago004[CoH].EventTriggerParticipateEvent()
        Npc_TamourHatago004[CoH].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-334.9276123046875, 238.96539306640625, -845.9420166015625], 'YAngle': 104.04930114746094})
        Npc_TamourHatago004[CoH].EventTriggerRequestLookAtTheFront()
        Npc_TamourHatago004[CoH].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': 10.0, 'IsWaitEnd': False})
    } {
        Npc_TabantaBridgeHatago005[CoH].EventTriggerParticipateEvent()
        Npc_TabantaBridgeHatago005[CoH].EventWarpToTargetPosAndRot({'Position': [-333.3562927246094, 238.96560668945312, -843.0], 'YAngle': 104.67259979248047, 'IsWaitEnd': False})
        Npc_TabantaBridgeHatago005[CoH].EventTriggerRequestLookAtTheFront()
    } {
        Npc_MS_Hylia002_CoH.EventTriggerParticipateEvent()
        Npc_MS_Hylia002_CoH.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Zelda_Black_Event.EventTriggerParticipateEvent()
        Npc_Zelda_Black_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        TerrainResourcePinner.EventTerrainPinResourceCamera({'SceneName': 'MainField', 'IsWaitEnd': False, 'Level': 0})
        TerrainResourcePinner.EventTerrainPinResource({'SceneName': 'MainField', 'IsWaitEnd': False, 'Level': 0, 'Position': [-236.82400512695312, 249.91319274902344, -855.7626953125]})
    } {
        Dm_Locator[cam].EventTriggerParticipateEvent()
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [2.3299999237060547, 1.4900000095367432, -3.1600000858306885], 'AtVector': [2.690000057220459, 1.5099999904632568, -2.2300000190734863], 'TargetFovy': 39.29999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventTriggerEnableAreaCulling({'IsIgnoreLODDisableOfAIPauseForEvent': False})
    }

    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'CoH', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void c02() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_AncientAssistant001_Talk02', 'Index': -1}) {

        fork {
            Player.EventPlayerWarpToTargetPosAndRot({'Position': [-336.9151916503906, 238.96560668945312, -845.1090698242188], 'YAngle': 109.79039764404297, 'IsWaitEnd': False, 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'Talk', 'KeepOneTimeAnm': True, 'ForceFadeFrame': 30.0, 'ClothWarpMode': 0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [-2.509999990463257, 1.5700000524520874, -6.440000057220459], 'AtVector': [2.140000104904175, 1.25, -2.680000066757202], 'TargetFovy': 18.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Npc_TamourHatago004[CoH].EventPlayAS({'ASName': 'c02_toTalk-0', 'IsAnimeDriven': True, 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True})
            Npc_TamourHatago004[CoH].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_84', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkYes', 'ClothWarpMode': 0})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_85', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [-2.509999990463257, 1.5700000524520874, -6.440000057220459], 'AtVector': [2.140000104904175, 1.25, -2.680000066757202], 'TargetFovy': 18.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        } {
            Player.EventPlayerWarpToTargetPosAndRot({'Position': [-336.9151916503906, 238.96560668945312, -845.1090698242188], 'YAngle': 109.79039764404297, 'IsWaitEnd': False, 'UseDemoWait': True})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ForceFadeFrame': 30.0, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
        } {
            Npc_TamourHatago004[CoH].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_87', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C01_surprise', 'IsNotOpenIfSkipedMostRecent': False})
        }

        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
    }
}

void c03() {

    fork {
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-339.66650390625, 238.96600341796875, -844.1602783203125], 'YAngle': 106.0, 'UseDemoWait': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [2.640000104904175, 1.399999976158142, -3.509999990463257], 'AtVector': [2.819999933242798, 1.4199999570846558, -2.5899999141693115], 'TargetFovy': 36.70000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_TamourHatago004[CoH].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_70', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c04() {
    TerrainCalcCenterTag.EventTerrainCalcCenter({'SceneName': 'MainField', 'IsWaitEnd': False, 'Position': [-236.82400512695312, 249.91319274902344, -855.7626953125]})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-331.7699890136719, 240.3000030517578, -843.7899780273438], 'AtVector': [-332.7799987792969, 240.30999755859375, -844.219970703125], 'TargetFovy': 29.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-336.2760009765625, 238.96560668945312, -844.6259765625], 'YAngle': 125.0, 'IsWaitEnd': False, 'UseDemoWait': False})
    } {
        Npc_MS_Hylia002_CoH.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_AncientAssistant001_Talk02', 'Index': -1}) {
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_88', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

    fork {
        Npc_TabantaBridgeHatago005[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_76', 'ASName': 'TalkSurprised', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TabantaBridgeHatago005[CoH].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_TamourHatago004[CoH].EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_TabantaBridgeHatago005', 'InstanceName': 'CoH', 'FaceControlType': 1, 'IsConfront': True, 'IsWaitEnd': False, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'LockOnWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 15.0, 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'InstanceName': 'CoH', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_TabantaBridgeHatago005', 'TurnFaceControlType': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'Actor1InstanceName': '', 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [-331.5, 240.22999572753906, -842.97998046875], 'AtVector': [-332.54998779296875, 240.25, -843.3200073242188], 'TargetFovy': 40.900001525878906, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_Zelda_Black_Event.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -49.0, 'Position': [-63.560001373291016, 274.0474853515625, -868.1500244140625]})
        Npc_Zelda_Black_Event.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'ZeldaWait', 'IsAllSlot': True, 'IsAnimeDriven': True})
        GameSystemActor.EventClothRequestExtraWind({'ActorName': 'Npc_Zelda_Black_Event', 'InstanceName': '', 'IsWaitEnd': False, 'Elevation': 1.0, 'Azimuth': 270.0, 'Speed': 10.0})
    } {
        EventSystemActor[sound].EventWait({'IsWaitEnd': True, 'Frames': 25})
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    }


    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_TamourHatago004[CoH].EventNPCTurnToTarget({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_Zelda_Black_Event', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_Zelda_Black_Event', 'InstanceName': '', 'TurnFaceControlType': 1})
    }

    EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void c05() {

    fork {
        EventWorldManagerController.Event_SetDisableGrassForFlowchart({'IsWaitEnd': False, 'IsDraw': False, 'IsDisableNarrowFovExtend': False})
    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'c05-01', 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'IsLoop': False, 'InterpolateFrame': 0.0, 'OverwriteStartFrame': -5.0, 'OverwriteEndFrame': -1.0, 'IsWaitEnd': True, 'CalcUpInInterpolate': False})
    }

}

void c06() {

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'SceneName': 'c06-01', 'OverwriteStartFrame': 7.0, 'CalcUpInInterpolate': False})
    } {
        Npc_TamourHatago004[CoH].EventNPCTurnToTarget({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'IsConfront': True, 'WorldPos': [-327.54998779296875, 240.3800048828125, -938.030029296875], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TamourHatago004[CoH].EventTriggerLookAtObject({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'WorldPos': [-320.0, 240.77000427246094, -850.489990234375], 'ResetArriveTransformFixed': False})
    } {
        Player.EventPlayerTurnAndLookNow({'TurnFaceControlType': 0, 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-320.0, 240.77000427246094, -850.489990234375], 'OffsetBase': 0})
    }

    Npc_TabantaBridgeHatago005[CoH].EventNPCTurnToTarget({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 0, 'IsWaitEnd': True, 'ActorName': '', 'IsConfront': True, 'FaceControlType': 1, 'WorldPos': [-327.54998779296875, 240.3800048828125, -938.030029296875], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_56', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Zelda_Black_Event.EventPlayAS({'ASName': 'ZeldaUp', 'IsAnimeDriven': True, 'Partial': '', 'IsWaitEnd': False, 'IsAllSlot': True, 'ForceFadeInFrame': 10.0})

    fork {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 120})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-96.0, 273.80999755859375, -863.239990234375], 'TargetFovy': 10.0, 'AtVector': [-76.02999877929688, 276.5, -866.4099731445312], 'MoveTime': 105, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Npc_Zelda_Black_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_BC_0017_Zelda_Black_Disappear', 'SLinkKey': 'Dm_BC_0017_Zelda_Black_Disappear'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 115})

        fork {
            Npc_Zelda_Black_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': False, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Middle'})
        }

    }

    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 10.0, 'PosVector': [-96.0, 273.80999755859375, -863.239990234375], 'IsWaitEnd': False, 'MoveTime': 1, 'AtVector': [-76.0999984741211, 276.5, -866.4099731445312], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerRequestCameraShake({'Pattern': 4, 'LoopEndCount': 6, 'Power': 1.0, 'ApplyType': 1, 'IsRumbleController': False})
    EventCamera.EventTriggerRequestStopCameraShake({'DampEndFrame': 30.0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': 30.0, 'ASCommand': 'LockOnWait', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 9})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-96.0, 278.80999755859375, -863.239990234375], 'AtVector': [-77.05999755859375, 285.67999267578125, -866.1900024414062], 'TargetFovy': 10.0, 'MoveTime': 139, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_TabantaBridgeHatago005[CoH].EventWarpToTargetPosAndRot({'Position': [-333.3562927246094, 238.96560668945312, -843.0], 'YAngle': 104.67259979248047, 'IsWaitEnd': False})
    } {
        Player.EventPlayerWarpToTargetPosAndRot({'Position': [-336.2760009765625, 238.96560668945312, -844.6259765625], 'IsWaitEnd': False, 'YAngle': 128.0, 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-324.2300109863281, 243.00999450683594, -855.8400268554688]})
    } {
        Npc_TamourHatago004[CoH].EventWarpToTargetPosAndRot({'IsWaitEnd': False, 'Position': [-334.9276123046875, 238.96539306640625, -845.9420166015625], 'YAngle': 124.67259979248047})
        Npc_TamourHatago004[CoH].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-324.2300109863281, 242.00999450683594, -853.8400268554688], 'ResetArriveTransformFixed': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void c07() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [0.5099999904632568, 0.05000000074505806, 5.53000020980835], 'AtVector': [0.6299999952316284, 0.15000000596046448, 5.159999847412109], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})

    fork {
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_75', 'IsPlayASAllSlot': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[CoH].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'CoH', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    } {
        EventWorldManagerController.Event_ResetDisableGrassForFlowchart({'IsWaitEnd': False})
    }

    Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_95', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void c08() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [1.3600000143051147, 1.2599999904632568, -2.259999990463257], 'AtVector': [2.809999942779541, 1.4199999570846558, -1.3300000429153442], 'TargetFovy': 40.900001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ASCommand': 'DemoWait', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_TabantaBridgeHatago005[CoH].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'WorldPos': [-105.0, 237.0, -879.0], 'Target': 3, 'ActorName': 'Npc_TamourHatago004', 'InstanceName': 'CoH', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_TabantaBridgeHatago005[CoH].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_TabantaBridgeHatago005[CoH].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    } {
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_89', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_57', 'IsAnimeDriven': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }

}

void c09() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [-3.25, 1.149999976158142, -3.4600000381469727], 'AtVector': [0.27000001072883606, 1.2200000286102295, -2.450000047683716], 'TargetFovy': 17.799999237060547, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': True, 'ASCommand': 'DemoWait', 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    Npc_TamourHatago004[CoH].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_1_90', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void c10() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'cam', 'PosVector': [2.25, 2.140000104904175, -7.179999828338623], 'AtVector': [2.200000047683716, 1.9700000286102295, -6.019999980926514], 'TargetFovy': 48.20000076293945, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera()
    GameSystemActor.EventTriggerDisableAreaCulling()
}
