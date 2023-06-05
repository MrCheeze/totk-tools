-------- EventFlow: SageOfSky_GetBattery --------

Actor: Dm_Locator[Battery]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_10
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventAIScheduleMoveToAnchor', 'EventNPCTurnToTarget', 'EventTriggerTalk', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': 'Work/AS/Root/Event/SageOfSky_GetBattery_Npc_ZonauGolem_Servant.root.as', 'UseEventModelAnime': 'Work/Model/Event/SageOfSky_GetBattery/SageOfSky_GetBattery_Npc_ZonauGolem_Servant_A/workspace.pp__ModelProject.gyml', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/SageOfSky_GetBattery/SageOfSky_GetBattery_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/SageOfSky_GetBattery_Link.root.as', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWaitCompleteMessageDialog']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: DgnObj_WarpPoint_Zonau_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Accessory_Battery_Demo
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventGoOffstageForUser', 'EventDoNothing', 'EventTriggerParticipateEvent']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 1, 'TextureReplaceType': 1, 'IsBindNearestActor': False, 'Position': [0.0, 0.0, 0.0]}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectCloudRestrictedAreaSphereEnable', 'EventEffectCloudRestrictedAreaSphereDisable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void BatteryGetCamera() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Firstskyisland_IsDisp_Battery', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_Battery_Get'})

    } {

        call BatteryUpshotCamera()

    }

}

void BatteryUpshotCamera() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'PosVector': [0.6100000143051147, 0.8899999856948853, 0.75], 'AtVector': [0.054999999701976776, 0.8050000071525574, 0.0], 'LatShiftRange': 45.0, 'LongShiftRange': 45.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'Wait', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0})
    }

}

void ShotRiverScrabuild() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [25.84000015258789, 1515.56005859375, 1503.219970703125], 'AtVector': [30.18000030517578, 1515.5899658203125, 1505.8399658203125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [43.75, 1517.25, 1514.18994140625], 'AtVector': [47.36000061035156, 1516.3599853515625, 1517.6300048828125], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 60, 'TargetFovy': 35.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void setup() {

    fork {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTriggerParticipateEvent()
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTriggerLookAtObject({'ActorName': 'Player', 'Target': 2, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } {
        DgnObj_WarpPoint_Zonau_A_01.EventTriggerParticipateEvent()
    } {
        Accessory_Battery_Demo.EventTriggerParticipateEvent()
        Accessory_Battery_Demo.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Dm_Locator[Battery].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'OffsetBase': 1})
}

void Give() {
    Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_03', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 2, 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventAIScheduleMoveToAnchor({'ASName': '', 'AnchorType': 2, 'InstanceName': '', 'DesiredGear': 1, 'ActionType': 0, 'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'PosVector': [1.5199999809265137, 0.6700000166893005, -1.7300000190734863], 'AtVector': [-1.7100000381469727, 1.059999942779541, 1.5399999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTriggerTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_00', 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False})
        GameSystemActor.EventWaitCompleteMessageDialog({'IsWaitEnd': True})
    }


    call Give_Battery()


    fork {
        Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Firstskyisland_IsDisp_Battery', 'Index': -1, 'Value': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Demo_BatteryAttach', 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.7699999809265137, 0.9900000095367432, 1.600000023841858], 'AtVector': [1.4800000190734863, 2.0899999141693115, -2.0299999713897705], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
        Accessory_Battery_Demo.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'PosVector': [1.5199999809265137, 0.6700000166893005, -1.7300000190734863], 'AtVector': [-1.7100000381469727, 1.059999942779541, 1.5399999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    call BatteryGetCamera()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DgnObj_WarpPoint_Zonau_A_01', 'PosVector': [0.3799999952316284, 1.2599999904632568, -1.1699999570846558], 'AtVector': [-2.25, 1.2899999618530273, 3.1600000858306885], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void PoV_Scra() {
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereEnable({'Radius': 37.5, 'Id': 0, 'Center': [106.0, 1500.0, 1576.0]})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {

        call ShotRiverScrabuild()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_04', 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereDisable({'Id': 0})
}

void EntryUltraHand() {

    call setup()


    call Give()


    call PoV_UltraHand()


    call End()

}

void EntryTooreroof() {

    call setup()


    call GiveToreroof()


    call PoV_Tooreroof()


    call End()

}

void End() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_05', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [0.0, 1.7999999523162842, -5.300000190734863], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void EntryPoint0() {

    call setup()


    call Give()


    call PoV_Scra()


    call End()

}

void PoV_UltraHand() {
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereEnable({'Id': 0, 'Center': [245.0, 1535.0, 978.0], 'Radius': 50.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [274.44000244140625, 1567.5400390625, 911.969970703125], 'AtVector': [272.17999267578125, 1567.3299560546875, 917.3900146484375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 60, 'PosVector': [266.8399963378906, 1569.06005859375, 930.1500244140625], 'AtVector': [264.2200012207031, 1567.760009765625, 935.5999755859375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_13', 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereDisable({'Id': 0})
}

void PoV_Tooreroof() {
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereEnable({'Id': 0, 'Center': [655.0, 1610.0, 1362.0], 'Radius': 70.0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 0, 'WorldPos': [229.0, 1503.0, 1593.0], 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [711.5999755859375, 1693.7900390625, 1376.8900146484375], 'AtVector': [705.7899780273438, 1691.3199462890625, 1379.989990234375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [684.280029296875, 1699.02001953125, 1378.0699462890625], 'AtVector': [680.9400024414062, 1690.5899658203125, 1377.050048828125], 'TargetFovy': 50.0, 'MoveTime': 60, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_12', 'IsNotOpenIfSkipedMostRecent': False})
    }

    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventEffectEmitter.EventEffectCloudRestrictedAreaSphereDisable({'Id': 0})
}

void GiveToreroof() {
    Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_03', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 2, 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventAIScheduleMoveToAnchor({'ASName': '', 'AnchorType': 2, 'InstanceName': '', 'DesiredGear': 1, 'ActionType': 0, 'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [706.75, 1691.449951171875, 1381.52001953125], 'AtVector': [711.1500244140625, 1691.260009765625, 1381.6300048828125], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTriggerTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_00', 'EndDialogOption': 3, 'NotPlayLipSyncAnim': False, 'IsEndDialogOptionAuto': False})
        GameSystemActor.EventWaitCompleteMessageDialog({'IsWaitEnd': True})
    }


    call Give_Battery()


    fork {
        Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Firstskyisland_IsDisp_Battery', 'Index': -1, 'Value': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Demo_BatteryAttach', 'UseAnmDriven': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.7699999809265137, 0.9900000095367432, 1.600000023841858], 'AtVector': [1.4800000190734863, 2.0899999141693115, -2.0299999713897705], 'TargetFovy': 33.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait'})
        Accessory_Battery_Demo.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [706.2899780273438, 1691.1700439453125, 1381.47998046875], 'AtVector': [711.3499755859375, 1691.300048828125, 1381.3299560546875], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    call BatteryGetCamera()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [707.0399780273438, 1691.4599609375, 1381.449951171875], 'AtVector': [711.8800048828125, 1691.47998046875, 1381.4100341796875], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        Player.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoWait', 'IsWaitEnd': False, 'IsAllSlot': False, 'UseAnmDriven': False, 'ClothWarpMode': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Give_Battery() {

    fork {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_10:talk_11', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'PosVector': [0.9200000166893005, 1.899999976158142, 3.740000009536743], 'AtVector': [-0.6299999952316284, 1.659999966621399, -0.8399999737739563], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }


    fork {
        Npc_Zonau_Golem_Servant_FirstIsland_10.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Give', 'IsWaitEnd': False})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventCamera.EventWait({'IsWaitEnd': True, 'Frames': 140})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Accessory_Battery_Demo.EventDoNothing({'IsWaitEnd': True})
        Accessory_Battery_Demo.EventTriggerModelBind({'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_10', 'InstanceName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'BoneName': 'Weapon_R'})
    }

}
