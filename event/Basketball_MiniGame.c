-------- EventFlow: Basketball_MiniGame --------

Actor: Npc_MiniGame_Basketball
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToObjectGreeting', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventPlayAS']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerIncreaseRupee', 'EventCloseRupeeDisplay', 'EventOpenRupeeDisplay', 'EventTriggerRequestAutoSave', 'EventWaitStableNumDisplay', 'EventResetGimmick']
queries: ['EventQueryTalkChoice2', 'EventQueryHasRuppe', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerWait', 'EventPlayerHorseGetOff', 'EventPlayerOnStopMode', 'EventPlayerOffStopMode', 'EventPlayerTurnAndLook', 'EventWait', 'EventTriggerPlayerRequestParasail', 'EventPlayerPlayASForFlowchart', 'EventPlayerStopInAir']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerMiniGameTimerSetting', 'EventTriggerResetMiniGameScore', 'EventTriggerMiniGameTimerStart', 'EventTriggerShowMiniGameScoreNum', 'EventTriggerMiniGameTimerStop', 'EventTriggerUnshowMiniGameScoreNum', 'EventShowFinish', 'EventTriggerEnableShowRecordUpdate', 'EventTriggerMiniGameIntBestScoreSetting', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep', 'EventTriggerProgressChallengeStep']
queries: ['EventQueryMiniGameTimeOver']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryCompareGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_MiniGame_BasketBall_Launcher
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventPlayAS', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventBasketBallDeleteBalls', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerRemovePouchContentAll']
queries: ['EventQueryIsPouchContent', 'EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventTriggerSetNpcVoiceFarMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_MiniGame_Basketball_Near() {
    Event149:
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_MiniGame_Basketball.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Basketball_MiniGame:Near_0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_MiniGame_Basketball.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Basketball_MiniGame:Near_0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MiniGame_Basketball_Talk() {
    GameSystemActor.EventTriggerRequestAutoSave()
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        if !Npc_MiniGame_Basketball.EventQueryHaveTalked() {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if Npc_MiniGame_Basketball.EventQueryIsOnRecentTalkFlag() {
                Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0020', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0016', 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
            Event52:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0005', 'IsNotOpenIfSkipedMostRecent': False})
                Event56:
                EventCamera.EventTriggerCameraSavePoint()

                fork {
                    Npc_MiniGame_Basketball.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_MiniGame_BasketBall_Launcher', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventWait({'Frames': 15, 'IsWaitEnd': True})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_MiniGame_BasketBall_Launcher', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                }

                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'PosVector': [-3346.469970703125, 270.05999755859375, -451.8599853515625], 'AtVector': [-3328.860107421875, 271.75, -415.0199890136719], 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0034', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                EventCamera.EventMoveToTargetPosCamera({'PosVector': [-3331.409912109375, 266.0400085449219, -412.010009765625], 'AtVector': [-3329.510009765625, 265.54998779296875, -401.4800109863281], 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_MiniGame_BasketBall_Launcher.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
                Npc_MiniGame_BasketBall_Launcher.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_MiniGame_BasketBall_Launcher.EventPlayAS({'ASName': 'Act_Happy_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0046', 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'PosVector': [-3331.110107421875, 268.5899963378906, -435.4200134277344], 'AtVector': [-3330.800048828125, 263.0, -422.1499938964844], 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0003', 'IsNotOpenIfSkipedMostRecent': False})

                fork {
                    Npc_MiniGame_Basketball.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_MiniGame_Basketball', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                }

                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                Npc_MiniGame_BasketBall_Launcher.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0022', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0004', 'ChoiceLabel2': 7, 'ChoiceLabel1': 8, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event68:
                    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                        GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0012', 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Npc_MiniGame_Basketball.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_MiniGame_BasketBall_Launcher', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

                        call GameStart()

                    } else {
                        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0010', 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Event61:
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Basketball_MiniGame', 'StepName': 'Retry', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
                    }
                } else {
                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0025', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event61
                }
            } else {
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0018', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

            Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0033', 'ChoiceNumber': 1, 'ChoiceLabel1': 10, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Basketball.EventNPCTurnToObjectGreeting({'GreetType': 4, 'TurnType': 4, 'IsWaitEnd': True})
            Npc_MiniGame_Basketball.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0001', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event47:
            Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0035', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0002', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event52
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        if !Npc_MiniGame_Basketball.EventQueryHaveTalked() {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            if Npc_MiniGame_Basketball.EventQueryIsOnRecentTalkFlag() {
                Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0020', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0030', 'ChoiceLabel3': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event52
        } else {

            call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

            Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0033', 'ChoiceNumber': 1, 'ChoiceLabel1': 10, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Basketball.EventNPCTurnToObjectGreeting({'GreetType': 4, 'TurnType': 4, 'IsWaitEnd': True})
            Npc_MiniGame_Basketball.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0001', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0007', 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event47
        }
    }
}

void GameStart() {

    call SoundStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})

    call MovePlayerToAnchor({'AnchorName': 'Player_Start', 'CameraPos': [0.0, 2.5, -5.0]})

    Npc_MiniGame_Basketball.EventAIScheduleWarpToAnchor({'ActionType': 0, 'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_MiniGame_BasketBall_Launcher.EventAIScheduleWarpToAnchor({'AnchorType': 0, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'PosVector': [-3330.639892578125, 280.8999938964844, -437.94000244140625], 'AtVector': [-3330.639892578125, 287.70001220703125, -417.94000244140625], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerSetting({'IsCountDown': True, 'TimerLimit': 2160})
    ChallengeSystemActor.EventTriggerResetMiniGameScore()
    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'BasketBall_MiniGame_Score'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Basketball_MiniGame_IsPlaying'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Basketball_MiniGame', 'StepName': 'Playing', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0026', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'CameraCollisionMode': 0, 'PosVector': [-3330.639892578125, 270.8999938964844, -437.94000244140625], 'AtVector': [-3330.639892578125, 266.0, -406.0], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_BasketBall_Launcher.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1001', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})

    call Common.EventTriggerShowReadyGoWithCountIn()

    ChallengeSystemActor.EventTriggerEnableShowRecordUpdate({'IntBestScore': 'Basketball_MiniGame_BestScore', 'IsFinishedFirstTake': 'Basketball_MiniGame_IsFinishFirstTake'})
    ChallengeSystemActor.EventTriggerShowMiniGameScoreNum({'MiniGameScoreIconType': 7})
    ChallengeSystemActor.EventTriggerMiniGameTimerStart()

    call SoundStartMinigameBgm()

}

void Playing_Npc_MiniGame_Basketball_EachFrame() {
    Event281:
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_Basketball_MiniGame', 'Value': 'Playing', 'Index': -1}) {
        if !ChallengeSystemActor.EventQueryMiniGameTimeOver() {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'Basketball_MiniGame', 'StepName': 'Finish', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
        } else {
            GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'BasketBall_MiniGame_Score', 'DstGameDataName': 'MiniGame_Score'})
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event281
        }
    }
}

void Retry_Npc_MiniGame_Basketball_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BasketBall_MiniGame_Reward', 'Value': 1, 'Index': -1}) {
      case 0:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            if Npc_MiniGame_Basketball.EventQueryIsOnRecentTalkFlag() {
                Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0020', 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0031', 'ChoiceLabel2': 12, 'ChoiceLabel3': 9, 'ChoiceLabel1': 8, 'IsNotOpenIfSkipedMostRecent': False})
            Event80:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event68
              case 1:
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                goto Event56
              case 2:
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0018', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [2, 3, 4, 5, 6, 7, 8]:
            if Npc_MiniGame_Basketball.EventQueryIsOnRecentTalkFlag() {
                Npc_MiniGame_Basketball.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0020', 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0032', 'ChoiceLabel2': 12, 'ChoiceLabel3': 9, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event80
        }
      case 1:
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_131'}) {
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0044', 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_131'})

            Event223:

            call RetryFlow()

            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            Event218:
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0043', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0042', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 2:
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Spear_132'}) {
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0044', 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Spear_132'})

            goto Event223
        } else {
            goto Event218
        }
    }
}

void Retry_Npc_MiniGame_Basketball_Near() {
    goto Event149
}

void Finish_Npc_MiniGame_Basketball_StepStart() {
    Player.EventPlayerOnStopMode({'StopAnm': True})

    call SoundStopMinigameBgm_Finished()

    if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'Basketball_MiniGame_BestScore', 'Operator': 2})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Basketball_MiniGame_IsFinishFirstTake', 'Index': -1}) {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
    } else {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    }
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0008', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionMode': 0, 'PosVector': [-3330.639892578125, 280.8999938964844, -437.94000244140625], 'AtVector': [-3330.639892578125, 287.70001220703125, -417.94000244140625], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0037', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})

    call PouchCheck()

    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'CameraCollisionMode': 0, 'PosVector': [-3330.639892578125, 270.8999938964844, -437.94000244140625], 'AtVector': [-3330.639892578125, 266.0, -406.0], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_BasketBall_Launcher.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1002', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerOffStopMode()
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call MovePlayerToAnchor({'AnchorName': 'Player_End', 'CameraPos': [4.5, 1.7999999523162842, -3.5]})

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'MiniGame_Basketball_Quit', 'FadeInTypeEventEnd': 2})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_MiniGame_Basketball.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Talk', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'MiniGame_Basketball_Result'})
}

void PlayerOutOfArea() {

    call Common.AirStartUP_Player()

    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0028', 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0038', 'ChoiceLabel1': 15, 'ChoiceLabel2': 16, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0017', 'IsNotOpenIfSkipedMostRecent': False})

            call PouchCheck()


            call SoundStopMinigameBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            EventSystemActor.EventTransition({'EventName': 'MiniGame_Basketball_ForceQuit', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        } else {
            Event116:
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0019', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call MovePlayerToAnchor({'AnchorName': 'Player_Start', 'CameraPos': [0.0, 1.7999999523162842, -5.289999961853027]})

            GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventTriggerMiniGameTimerStart()
        }
    } else {
        goto Event116
    }
}

void MovePlayerToAnchor() {
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'InstanceName': 'AnchorName', 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'AtVectorSetType': 3, 'PosVectorSetType': 3, 'AtVector': [0.0, 1.7999999523162842, 0.0], 'PosVector': 'CameraPos', 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Ready_Npc_MiniGame_BasketBall_Launcher_Near() {
    Event157:
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_MiniGame_BasketBall_Launcher.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Basketball_MiniGame:Near_1001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_MiniGame_BasketBall_Launcher.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Basketball_MiniGame:Near_1002', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Ready_Npc_MiniGame_BasketBall_Launcher_Talk() {
    Event184:

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_MiniGame_BasketBall_Launcher.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1003', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 14, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event139:
            Npc_MiniGame_Basketball.EventTriggerParticipateEvent()

            fork {
                Npc_MiniGame_BasketBall_Launcher.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Npc_MiniGame_Basketball', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Player.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_MiniGame_Basketball', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            EventCamera.EventTriggerCameraSavePoint()
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'PosVector': [-3325.60009765625, 275.5, -432.0], 'AtVector': [-3327.0, 274.3999938964844, -438.3699951171875], 'MoveTotargetPosType': 0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            Npc_MiniGame_BasketBall_Launcher.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_BasketBall_Launcher.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1009', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                Npc_MiniGame_BasketBall_Launcher.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Target': 1, 'ActorName': 'Npc_MiniGame_BasketBall_Launcher', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            Npc_MiniGame_BasketBall_Launcher.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_MiniGame_BasketBall_Launcher.EventTalk({'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1008', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event163:
            Npc_MiniGame_BasketBall_Launcher.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1010', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_MiniGame_BasketBall_Launcher.EventTalk({'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_1006', 'ChoiceLabel2': 14, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event139
        } else {
            goto Event163
        }
    }
}

void Retry_Npc_MiniGame_BasketBall_Launcher_Near() {
    goto Event157
}

void Retry_Npc_MiniGame_BasketBall_Launcher_Talk() {
    goto Event184
}

void ForceQuit() {
    if Player.EventQueryCheckPlayerState({'State': 23}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Basketball_MiniGame', 'ChallengeStep': 'Retry', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})

    call GameEnd_Common()

    ChallengeSystemActor.EventTriggerResetMiniGameScore()
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6})
    && !Player.EventQueryCheckPlayerState({'State': 11})
    && !Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Fall', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False})
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': True})
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        Event199:
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventTriggerPlayerRequestParasail()
    } else {
        goto Event199
    }
}

void GameEnd_Common() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Basketball_MiniGame_IsPlaying', 'Value': False})
    ChallengeSystemActor.EventTriggerMiniGameTimerStop()
    ChallengeSystemActor.EventTriggerUnshowMiniGameScoreNum()
    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'MiniGame_Basketball_Ball'})
    PouchSystemActor.EventTriggerRemovePouchContentAll({'Actor': 'MiniGame_Basketball_Ball_HighScore'})
    Npc_MiniGame_BasketBall_Launcher.EventBasketBallDeleteBalls()
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'Option': 0, 'IsResetCamera': False})
    Npc_MiniGame_Basketball.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_MiniGame_Basketball.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
}

void RetryFlow() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'BasketBall_MiniGame_Reward', 'Value': 0, 'Index': -1})
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0023', 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'ChoiceLabel1': 8, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0027', 'IsNotOpenIfSkipedMostRecent': False})

            call WaitAndRupeeUIOff()


            call GameStart()

        } else {
            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0010', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        }
    } else {
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0015', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void EndFinishState() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Basketball_MiniGame_IsFinishFirstTake'})
    ChallengeSystemActor.EventTriggerResetMiniGameScore()
    ChallengeSystemActor.EventExecuteRollbackChallengeStep({'ChallengeName': 'Basketball_MiniGame', 'ChallengeStep': 'Retry', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
}

void PouchCheck() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'MiniGame_Basketball_Ball', 'IsExcludeAttachment': False, 'Num': 0, 'IsExcludeAttached': False}) {
        Event226:
        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0045', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'IsExcludeAttachment': False, 'Actor': 'MiniGame_Basketball_Ball_HighScore', 'Num': 0, 'IsExcludeAttached': False}) {
        goto Event226
    }
}

void SoundStartMinigameBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_04'})
}

void SoundStopMinigameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'WithPlayableEvent': True, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': True, 'BGMName': 'BGM_Minigame_04'})
}

void SoundStopMinigameBgm_Finished() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'IsUseSuspendFade': False, 'BGMName': 'BGM_Minigame_04'})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': True, 'IsForceFadeTime': False})
}

void WaitAndRupeeUIOff() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
    GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}

void Result() {
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 0}) {
      case [0, 1]:
        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0011', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0036', 'IsNotOpenIfSkipedMostRecent': False})
        Event206:

        call EndFinishState()


        call RetryFlow()

      case 2:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'MiniGame_Score', 'GameDataB': 'Basketball_MiniGame_BestScore', 'Operator': 2}) {
            ChallengeSystemActor.EventTriggerMiniGameIntBestScoreSetting({'IntBestScore': 'Basketball_MiniGame_BestScore'})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Basketball_MiniGame_IsFinishFirstTake', 'Index': -1}) {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 17}) {
                  case [0, 1]:
                    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0029', 'IsNotOpenIfSkipedMostRecent': False})
                    Event63:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 4}) {
                      case [0, 1]:
                        Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0021', 'IsNotOpenIfSkipedMostRecent': False})

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

                        goto Event206
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 12}) {
                          case [0, 1]:
                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0013', 'IsNotOpenIfSkipedMostRecent': False})

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

                            goto Event206
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 17}) {
                              case [0, 1]:
                                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0013', 'IsNotOpenIfSkipedMostRecent': False})

                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                                goto Event206
                              case 2:
                                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0014', 'IsNotOpenIfSkipedMostRecent': False})
                                Event77:

                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'MiniGame_Score', 'Index': -1, 'Value': 20}) {
                                  case 0:
                                    goto Event206
                                  case [1, 2]:
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'BasketBall_MiniGame_Reward', 'Value': 1, 'Index': -1})
                                        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_131'}) {
                                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0039', 'IsNotOpenIfSkipedMostRecent': False})

                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_131'})

                                            goto Event206
                                        } else {
                                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0040', 'IsNotOpenIfSkipedMostRecent': False})
                                            Event211:
                                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0042', 'IsNotOpenIfSkipedMostRecent': False})

                                            call EndFinishState()

                                        }
                                    } else {
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'BasketBall_MiniGame_Reward', 'Value': 2, 'Index': -1})
                                        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Spear_132'}) {
                                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0039', 'IsNotOpenIfSkipedMostRecent': False})

                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Spear_132'})

                                            goto Event206
                                        } else {
                                            Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0041', 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event211
                                        }
                                    }
                                }
                            }
                        }
                    }
                  case 2:
                    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0029', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0024', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event77
                }
            } else {
                Event27:
                Npc_MiniGame_Basketball.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Basketball_MiniGame:Talk_0009', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event63
            }
        } else {
            goto Event27
        }
    }
}

void Quit() {

    call GameEnd_Common()

}
