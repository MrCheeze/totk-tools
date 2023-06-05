-------- EventFlow: Dm_ZN_0063 --------

Actor: Npc_AncientAssistant003_K1[ZonauRemain2]
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSelectSchedule']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerLookAtObject', 'EventPlayerWait', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk01() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedCryptography'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedTreasureBox'})

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': False, 'CheckHead': True}) {
        Event387:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_FirstTalked_RemainsTauro_Equipped'})
        Event388:

        call C01()

        ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'ZonauRemains_AppearsSkyIsland', 'ChallengeName': 'GotoFironeZonauRemains'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTriggerAIScheduleSelectSchedule()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckHead': False, 'CheckUpper': True}) {
        goto Event387
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
        goto Event387
    }
    goto Event388
}

void Balloon01() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0063:Near_001', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Balloon02() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Dm_ZN_0063:Near_001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Talk02() {

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': False})

    Player.EventPlayerWait({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedCryptography'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GotoFironeZonauRemains_AskedTreasureBox'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EquipAll', 'Index': -1}) {

        call AllEquipShowed()

    } else
    if !GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 3}) {
        Event20:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipA'}) {
            Event85:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
                Event89:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipC'}) {
                    Event109:
                    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckLower': True, 'CheckHead': True, 'CheckUpper': True}) {
                        Event98:

                        call ShowCloth()

                    } else {

                        call Sub_CheckNewCloth()


                        call NohaveNewCloth()

                    }
                } else
                if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
                    goto Event98
                } else
                goto Event109
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckLower': False, 'CheckHead': False, 'CheckUpper': True}) {
                goto Event98
            } else
            goto Event89
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': False}) {
            goto Event98
        } else
        goto Event85
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckLower': True, 'CheckHead': True, 'CheckUpper': True}) {
        goto Event20
    } else {

        call AllEquipShowedSeparately()

    }
}

void C01() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_000', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_002', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerTurnAndLook({'Target': 0, 'WorldPos': [999.2860107421875, 114.5, 2538.14990234375], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1, 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_003', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_Research', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})

    call TurnTauroLink_Return()

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'WorldPos': [999.2860107421875, 114.5, 2538.14990234375], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1})
    }

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_AncientAssistant003_K1', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'ZonauRemain2', 'TurnFaceControlType': 1})
    }

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_065', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    fork {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 0, 'WorldPos': [999.2860107421875, 114.5, 2538.14990234375], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 1})
    }

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_OpenTreasureBox'}) {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [989.9500122070312, 116.73999786376953, 2539.320068359375], 'AtVector': [995.5800170898438, 115.9000015258789, 2537.739990234375], 'TargetFovy': 50.0, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_006', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})

        call TurnTauroLink_WolrdPos({'WorldPos': [1005.7570190429688, 119.0, 2539.39794921875]})

        EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 0, 'AtVectorSetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 40, 'PosVector': [987.8200073242188, 122.48999786376953, 2538.739990234375], 'AtVector': [992.0399780273438, 121.47000122070312, 2538.81005859375], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_022', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'ReviseMode': 0, 'CollisionInterpolateSkip': False, 'MoveFrame': 0, 'IsWaitEnd': True, 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

        call TurnTauroLink_Return()

        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_023', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_TalkedTreasure', 'Index': -1, 'Value': True})
    }
}

void C12() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': False}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EquipA', 'Value': True, 'Index': -1})
    }
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': True, 'CheckHead': False}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_EquipB', 'Index': -1})
    }
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckHead': False, 'CheckUpper': False, 'CheckLower': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipC'})
    }
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Index': -1, 'Value': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EquipA', 'Index': -1}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 1, 'Index': -1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 1, 'Index': -1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipC'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 1, 'Index': -1})
    }
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipAll'})
    }
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': True, 'CheckLower': False}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipAB'})
    }
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': False, 'CheckLower': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipAC'})
    }
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckLower': True, 'CheckHead': False, 'CheckUpper': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipBC'})
    }
}

void Cryptography() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_AskedCryptography', 'Index': -1})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_041', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_020', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_009', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_AskedTreasureBox', 'Index': -1}) {
        Event13:

        call GoodBye()

    } else {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_038', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call TreasureBox()

        } else {
            goto Event13
        }
    }
}

void TreasureBox() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_AskedTreasureBox'})
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 0}) {
      case 1:
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_010', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_AskedCryptography', 'Index': -1}) {
            Event228:

            call GoodBye()

        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_039', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event229:
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Cryptography()

            } else {
                goto Event228
            }
        }
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_058', 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_AskedCryptography', 'Index': -1}) {
            goto Event228
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_040', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event229
        }
    }
}

void GoodBye() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_037', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void HaveNewCloth() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 0}) {
      case 1:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Event160:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_GetTreasure', 'Index': -1}) {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_062', 'IsNotOpenIfSkipedMostRecent': False})
                Event151:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_GetTreasure', 'Value': True, 'Index': -1})
                Event362:

                call C12()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_FirstTalked_RemainsTauro_Equipped', 'Value': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call LinkTalking()

                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_060', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event151
            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_1066_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            Event133:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedTreasure'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_GetTreasure', 'Index': -1}) {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_013', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event151
                } else {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call LinkTalking()

                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_012', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event151
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_GetTreasure', 'Index': -1}) {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_061', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event151
            } else {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_011', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call LinkTalking()

                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsCloseDialog': True, 'ASName': '', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_059', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event151
            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1067_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event133
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1068_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event133
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1069_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event133
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1070_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event133
        } else
        goto Event160
      case 2:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth03'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth05'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth04'}) {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_046', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event362
                } else {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_045', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth04'})
                    goto Event362
                }
            } else {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_044', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event362
            }
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_043', 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GotoFironeZonauRemains_ShowCloth03', 'Index': -1, 'Value': True})
            goto Event362
        }
    }
}

void Sub_CheckNewCloth() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipA'}) {
        Event330:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Event340:
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipC'}) {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1066_Lower', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    Event351:

                    call HaveNewCloth()

                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1067_Lower', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event351
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1068_Lower', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event351
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1069_Lower', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event351
                } else
                if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1070_Lower', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    goto Event351
                }
            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Armor_1066_Upper', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event351
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1067_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event351
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1068_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event351
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1069_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event351
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1070_Upper', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
            goto Event351
        } else
        goto Event340
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1066_Head', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event351
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1067_Head', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event351
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1068_Head', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event351
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1069_Head', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event351
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Armor_1070_Head', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        goto Event351
    } else
    goto Event330
}

void ShowClothAll() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_024', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_047', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_051', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_RequestPraise'})
}

void TurnTauroLink_WolrdPos() {
    Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'Target': 0, 'WorldPos': 'WorldPos', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': 'WorldPos', 'KeepTalkWait': True, 'OffsetBase': 0})
}

void TurnTauroLink_Return() {

    fork {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 10, 'IsWaitEnd': True})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_AncientAssistant003_K1', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'ZonauRemain2', 'TurnFaceControlType': 1})
    }

}

void ShowCloth() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth'}) {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckUpper': True, 'CheckHead': True, 'CheckLower': True}) {

            call ShowCloth_Again_All()

        } else {

            call ShowCloth_Again_NotAll()

        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_FirstTalked_RemainsTauro_Equipped'}) {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_052', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_014', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        call LinkTalking()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Event22:
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_025', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            Event8:
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckLower': True, 'CheckHead': True, 'CheckUpper': True}) {

                call ShowClothAll()

            } else {

                call ShowClothNotAll()

            }

            call C12()

            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_FirstTalked_RemainsTauro_Equipped', 'Value': False})
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': True, 'CheckHead': False}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedTreasure'}) {
                if !Npc_AncientAssistant003_K1[ZonauRemain2].EventQueryIsOnRecentTalkFlag() {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_054', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_053', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event8
            } else {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_053', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event8
            }
        } else {
            goto Event22
        }
    }
}

void ShowClothNotAll() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
        Event54:
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_015', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GuideSensorPlus()

        Event57:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_RequestPraise'})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': True, 'CheckHead': False}) {
        goto Event54
    } else {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_055', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event57
    }
}

void AllEquipShowed() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_ShowCloth02', 'Index': -1}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Event239:
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_030', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_048', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 0, 'IsConfront': True, 'OffsetBase': 0, 'Direction': 0.0, 'WorldPos': [999.2860107421875, 114.5, 2538.156982421875], 'PosOffset': [0.0, 0.0, 0.0], 'FaceControlType': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_049', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003_K1[ZonauRemain2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_050', 'IsNotOpenIfSkipedMostRecent': False})
            Event245:
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_037', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth02'})
        } else {
            goto Event245
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_016', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event239
    }
}

void LinkTalking() {
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': True, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void NohaveNewCloth() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipNum', 'Value': 0}) {
      case 1:
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_008', 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event222:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Cryptography()

          case 1:

            call TreasureBox()

          case 2:

            call GoodBye()

        }
      case 2:

        call PraiseDiscovery()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_028', 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsNotBecomeSpeaker': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'IsCloseDialog': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_056', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event222
    }
}

void GuideSensorPlus() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_TalkedSensorGet'}) {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_042', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_SheikSensorLv2', 'Index': -1}) {

            call LinkTalking()

            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_034', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'GotoFironeZonauRemains_TalkedSensorGet', 'Index': -1})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RoberyGoToHateno'}) {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_031', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void PraiseDiscovery() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_RequestPraise', 'Index': -1}) {
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_016', 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_017', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_RequestPraise', 'Value': False})
    }
}

void ShowCloth_Again_NotAll() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_026', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GotoFironeZonauRemains_EquipA', 'Index': -1}) {
        Event87:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
            Event90:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipC'}) {
                Event52:
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_063', 'IsNotOpenIfSkipedMostRecent': False})
                Event303:

                call C12()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_ShowCloth05'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GotoFironeZonauRemains_RequestPraise'})
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'ChemicalElectric', 'CheckUpper': False, 'CheckHead': False, 'CheckLower': True}) {
                goto Event52
            } else
            Event174:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GotoFironeZonauRemains_EquipB'}) {
                Event173:
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_029', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GuideSensorPlus()

                goto Event303
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckUpper': True, 'CheckHead': False}) {
                goto Event173
            } else {
                Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_057', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event303
            }
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckHead': False, 'CheckUpper': True}) {
            goto Event90
        } else
        goto Event174
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckLower': False, 'CheckSeries': 'ChemicalElectric', 'CheckHead': True, 'CheckUpper': False}) {
        goto Event87
    } else
    goto Event174
}

void ShowCloth_Again_All() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_027', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call ShowClothAll()


    call C12()

}

void AllEquipShowedSeparately() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    Npc_AncientAssistant003_K1[ZonauRemain2].EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsCloseDialog': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZN_0063:Talk_064', 'IsNotOpenIfSkipedMostRecent': False})
}
