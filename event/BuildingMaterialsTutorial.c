-------- EventFlow: BuildingMaterialsTutorial --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_RitoHatago001
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerNPCChangePosture', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage030
entrypoint: None()
actions: ['EventTalk', 'EventTriggerChangeEmotion', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerBecomeSpeaker', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon']
queries: ['EventQueryHasControllerSet', 'EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventClearActorsAroundAnchor', 'EventClosePlacementShopUI']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerHorseGetOff', 'EventTriggerPlayerRequestLookAtTheFront', 'EventGoOffstageForUser', 'EventPlayerUnequip', 'EventPlayerTalk']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm', 'EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_HatenoVillage030_Talk() {
    Event2:

    call InitTalk.InitTalk_Pair({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Actor1': ActorIdentifier(name="Npc_RitoHatago001"), 'Actor2': ActorIdentifier(name="Npc_HatenoVillage030"), 'Spearker1ActorName': 'Npc_RitoHatago001', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_HatenoVillage030', 'Spearker2InstanceName': ''})

    Npc_RitoHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_00', 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_HatenoVillage030.EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': 'Npc_RitoHatago001', 'FaceControlType': 1, 'IsConfront': False, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuildingMaterialsTutorial_MadeRoof', 'Index': -1}) {
        Event42:
        Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuildingMaterialsTutorial_MadeRoof', 'Index': -1}) {
            EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
        }
        Npc_RitoHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_08', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event6:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'BuildingMaterialsTutorial', 'StepName': 'GiveBuildingMaterials', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuildingMaterialsTutorial_MadeRoof', 'Index': -1}) {
                EventSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
                Npc_HatenoVillage030.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'IsConfront': False, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'Npc_HatenoVillage030', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
                Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_00_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_HatenoVillage030.EventNPCTurnToTarget({'IsWaitEnd': True, 'IsConfront': False, 'Target': 0, 'FaceControlType': 0, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [-247.41000366210938, 128.25999450683594, -52.43000030517578], 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

                call GiveBuildingMaterials_Repair_2()

            }
        } else {
            goto Event6
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'PosVector': [-247.82000732421875, 136.49000549316406, -61.77000045776367], 'AtVector': [-247.83999633789062, 129.07000732421875, -53.77000045776367], 'TargetFovy': 40.0, 'MoveTime': 30, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event42
    }
}

void Ready_Npc_HatenoVillage030_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'MessageID': 'EventFlowMsg/BuildingMaterialsTutorial:near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage030:near_10'})
    }
}

void GiveBuildingMaterials_Npc_HatenoVillage030_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'RitoBridgeRepair_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_01', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage030:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoBridgeRepair_Katsurada_Contact', 'Index': -1, 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_ReturnBCAfter4Sage_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
                    Event96:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_08', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event96
            }
        } else {
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_ReturnBCAfter4Sage_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
                    Event74:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_08', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                goto Event74
            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_01', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_ReturnBCAfter4Sage_Exp'})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
            Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_08', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void GiveBuildingMaterials_Npc_HatenoVillage030_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/BuildingMaterialsTutorial:near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage030:near_10', 'IsChallenge': False})
    }
}

void Ready_Npc_RitoHatago001_Talk() {
    goto Event2
}

void GiveBuildingMaterials_Npc_RitoHatago001_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildingMaterialsTutorial_Talked01'}) {
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'Target': 2, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_13', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_10', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_04', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'Target': 2, 'IsConfront': False, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_09', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_10', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildingMaterialsTutorial_Talked01', 'Index': -1, 'Value': True})
    }
}

void GiveBuildingMaterials_Repair() {
    GameSystemActor.EventClosePlacementShopUI({'IsWaitEnd': True})

    call Common.SnappingInterval()

    Event62:
    Npc_RitoHatago001.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_HatenoVillage030.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_HatenoVillage030.EventTriggerBecomeSpeaker()

    fork {

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildingMaterialsTutorial_FrontOfCamera'}) {
                Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } else {
                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})
            }
        } {
            Npc_HatenoVillage030.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
            Npc_HatenoVillage030.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            if !Npc_HatenoVillage030.EventQueryNeedEquipWeapon() {
                Npc_HatenoVillage030.EventUnequipWeapon({'IsWaitEnd': True})
            }
            if !Npc_HatenoVillage030.EventQueryHasControllerSet() {
                Npc_HatenoVillage030.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 0})
            }
        } {
            SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        }

    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'PosVector': [-245.66000366210938, 125.04000091552734, -64.33000183105469], 'AtVector': [-246.82000732421875, 126.44999694824219, -59.689998626708984], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

    Npc_HatenoVillage030.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 0, 'WorldPos': [-250.47999572753906, 128.50999450683594, -50.9900016784668]})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildingMaterialsTutorial_FrontOfCamera'}) {
        Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_00', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event65:
        Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_20', 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildingMaterialsTutorial_Give', 'Index': -1, 'Value': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 2.0, 'Radius': 1.0, 'AnchorInstanceName': 'BuildingMaterialsCompletePos_HatenoVillage030', 'AnchorActorName': 'DestinationAnchor', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 2.0, 'Radius': 1.0, 'AnchorInstanceName': 'BuildingMaterialsCompletePos', 'AnchorActorName': 'DestinationAnchor', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
        GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 2.0, 'Radius': 1.0, 'AnchorInstanceName': 'BuildingMaterialsCompletePos_RitoHatago001', 'AnchorActorName': 'DestinationAnchor', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})

        fork {
            Npc_HatenoVillage030.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': 'BuildingMaterialsCompletePos_HatenoVillage030', 'AnchorType': 22, 'EnableArrivalState': False})
            Npc_HatenoVillage030.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
            Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_11', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_BuildStable', 'IsWaitEnd': True, 'TimeoutFrame': 0})
        } {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            }
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BuildingMaterialsCompletePos', 'IsWaitEnd': True, 'UseDemoWait': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'PosVector': [-4.920000076293945, 2.2899999618530273, -2.890000104904175], 'AtVector': [-1.659999966621399, 1.649999976158142, 0.6499999761581421], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        } {
            Npc_RitoHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 22, 'InstanceName': 'BuildingMaterialsCompletePos_RitoHatago001', 'EnableArrivalState': False})
            Npc_RitoHatago001.EventTriggerNPCChangePosture({'Posture': 0, 'IsPlayCurrentAS': False})
            Npc_RitoHatago001.EventNPCTurnToTarget({'IsWaitEnd': False, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'WorldPos': [-250.8800048828125, 127.52999877929688, -52.25], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_RitoHatago001.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 4})
            Npc_RitoHatago001.EventPlayAS({'ASName': 'TalkWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }

        Npc_HatenoVillage030.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 0, 'ActorName': 'Npc_RitoHatago001', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventTriggerPlayerRequestLookAtTheFront()

        fork {
            Npc_HatenoVillage030.EventPlayAS({'IsWaitEnd': True, 'IsAnimeDriven': False, 'ASName': 'Victory', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        } {
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
        }

        Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_05', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'EndDialogOption': 1, 'IsCloseDialog': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_RitoHatago001.EventTalk({'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_RitoHatago001.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_RitoHatago001.EventNPCTurnToTarget({'Target': 3, 'FaceControlType': 0, 'ActorName': 'Npc_HatenoVillage030', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_RitoHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_21', 'ASName': '', 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_RitoHatago001.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HatenoVillage030.EventNPCTurnToTarget({'FaceControlType': 0, 'ActorName': 'Player', 'Target': 2, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_RitoHatago001.EventTalk({'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                Npc_RitoHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_19', 'IsNotBecomeSpeaker': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event18:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'BuildingMaterialsTutorial', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            Npc_RitoHatago001.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            Npc_RitoHatago001.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Npc_HatenoVillage030.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            Npc_HatenoVillage030.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        } else {
            goto Event18
        }
    } else {

        fork {
            Npc_HatenoVillage030.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_00', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_HatenoVillage030', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        Npc_HatenoVillage030.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event65
    }
}

void GiveBuildingMaterials_Repair_2() {

    call Common.SnappingInterval()

    goto Event62
}
