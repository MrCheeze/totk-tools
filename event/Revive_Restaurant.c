-------- EventFlow: Revive_Restaurant --------

Actor: Npc_HatenoVillage032[Uotori]
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventAIScheduleWarpToAnchor', 'EventTriggerRequestLookAtTheFront', 'EventNPCTurnToTarget', 'EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage006[event]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTalk', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage009[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage007[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage008[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage006[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventGoOffstageForUser', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_SouthernVillage013[Uotori]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventPlayAS', 'EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContentForCooking']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void EntryPoint0() {
    Npc_SouthernVillage006[Uotori].EventTriggerParticipateEvent()

    call StandbyFinishEvent()

    Npc_SouthernVillage006[Uotori].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})

    fork {
        Npc_SouthernVillage007[Uotori].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage009[Uotori].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage006[event].EventTriggerParticipateEvent()
    } {
        Npc_SouthernVillage008[Uotori].EventTriggerParticipateEvent()
    }

    Npc_HatenoVillage032[Uotori].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    fork {
        Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Revive_Restaurant_Link', 'UseDemoWait': True})
    } {
        Npc_HatenoVillage032[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Npc_SouthernVillage006[event].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Npc_SouthernVillage007[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    } {
        Npc_SouthernVillage009[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_SouthernVillage009[Uotori].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Wait'})
    } {
        Npc_SouthernVillage008[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [2.700000047683716, 1.5099999904632568, -5.340000152587891], 'AtVector': [2.3499999046325684, 1.7400000095367432, -3.7300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventTriggerCameraSavePoint()
    Npc_HatenoVillage032[Uotori].EventTriggerRequestLookAtTheFront()
    Npc_SouthernVillage006[event].EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call Uotori_RevivePlan.Sound_StartInGameBgm()

    Npc_HatenoVillage032[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0054', 'ASName': '', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_SouthernVillage006[event].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0055', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

        fork {
            Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_SouthernVillage006', 'InstanceName': 'event', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_SouthernVillage006', 'InstanceName': 'event', 'KeepTalkWait': True, 'OffsetBase': 0})
        }

    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 0, 'Actor1ActorName': 'Npc_SouthernVillage006', 'Actor1InstanceName': 'event', 'PosVector': [-1.1799999475479126, 1.7999999523162842, 4.230000019073486], 'AtVector': [-0.8199999928474426, 1.1200000047683716, -0.05000000074505806], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Npc_HatenoVillage032[Uotori].EventTriggerRequestLookAtTheFront()
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    }

    Npc_SouthernVillage009[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0061', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'TalkWait', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_SouthernVillage008[Uotori].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_SouthernVillage009', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
    Npc_SouthernVillage009[Uotori].EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_SouthernVillage008', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'Uotori', 'ResetArriveTransformFixed': False})
    Npc_SouthernVillage008[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0062', 'ASName': '', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_SouthernVillage006[event].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0056', 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        Npc_SouthernVillage008[Uotori].EventTriggerRequestLookAtTheFront()
        Npc_SouthernVillage009[Uotori].EventTriggerRequestLookAtTheFront()
    }

    if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

        call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_G', 'MaterialActorName2': 'Item_Material_03', 'MaterialActorName3': 'Item_Ore_H'})

        Npc_SouthernVillage007[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0192', 'IsNotOpenIfSkipedMostRecent': False})
        Event28:
        Npc_SouthernVillage007[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0057', 'ASName': '', 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Inn', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_Restaurant', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_TreasureShop', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_LeaderHouse', 'Index': -1})
        && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Revive_PrivateHouse', 'Index': -1}) {
            Npc_SouthernVillage013[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_SouthernVillage013[Uotori].EventTalk({'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Uotori_RevivePlan:Talk_0032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_Restaurant_Event'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            Npc_SouthernVillage006[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'Revive_Restaurant_Link_Finale', 'UseDemoWait': True})
            Npc_SouthernVillage013[Uotori].EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
            Npc_SouthernVillage013[Uotori].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})

            fork {
                Npc_HatenoVillage032[Uotori].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'Npc_SouthernVillage013', 'InstanceName': 'Uotori', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Npc_SouthernVillage013[Uotori].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': 'Uotori', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_SouthernVillage013', 'KeepTalkWait': True, 'OffsetBase': 0})
            }

        } else {
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Revive_Restaurant_Event'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
            Npc_SouthernVillage006[Uotori].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'Revive_Restaurant', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        }
    } else {

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

        goto Event28
    }
}

void StandbyFinishEvent() {
    Npc_SouthernVillage013[Uotori].EventTriggerParticipateEvent()
    Npc_SouthernVillage013[Uotori].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_SouthernVillage013[Uotori].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
}
