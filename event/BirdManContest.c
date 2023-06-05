-------- EventFlow: BirdManContest --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Minigame_BirdMan001
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventNPCTurnToObjectGreeting', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_FarthestIsland002
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventNPCTurnToObjectGreeting', 'EventDisableRecentTalkFlag', 'EventAIScheduleWarpToAnchor', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerIncreaseRupee', 'EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice3', 'EventQueryHasRuppe', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventShowFinish', 'EventTriggerShowTimerUI', 'EventTriggerUnshowTimerUI', 'EventExecuteProgressChallengeStep', 'EventExecuteRollbackChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerWait', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerClimbOff', 'EventPlayerHorseGetOff', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryIsOwnedHorseNear']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerCopyGameDataFloat']
queries: ['EventQueryIsGameDataFloat', 'EventQueryCompareGameDataFloat', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataEnum']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventSuspend', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_RequestImmTrans']
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStartBgmSimple', 'EventTriggerSoundStopBGM', 'EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerSetNpcVoiceFarMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventHorseWarpToNearAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_Minigame_BirdMan001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001"), 'Arg_Turn': 0})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event188:
        Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Event227:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdManContest_HaveTalked', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BirdmanContest_HaveExplained'}) {
                if !Npc_Minigame_BirdMan001.EventQueryIsOnRecentTalkFlag() {
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 6, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/BirdManContest:Talk10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 6, 'ChoiceLabel3': 1, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/BirdManContest:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Event20:
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk03', 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                            Npc_Minigame_BirdMan001.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_FarthestIsland002', 'ResetArriveTransformFixed': False})
                            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                            call Prepare()

                            Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_Minigame_BirdMan001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk44', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdmanContest_IsPlayed', 'Index': -1}) {
                                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk30', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 9, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event158:
                                    Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                                    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk42', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    EventCamera.EventTriggerCameraSavePoint()
                                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': 'Obj_RingGoal_A_02', 'PosVector': [4473.47021484375, 161.9199981689453, 3666.830078125], 'AtVector': [4464.8701171875, 158.6199951171875, 3664.219970703125], 'MoveTime': 75, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                      case [0, 1, 4, 5]:
                                        Event113:
                                        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk43', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                                        Event77:
                                        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BirdmanContest_IsPlayed'})
                                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BirdmanContest_Calc', 'Index': -1, 'Value': True})

                                        call Common.EventTriggerShowReadyGoWithCountIn()


                                        call SoundStartMingameBgm()

                                        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 1})
                                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'BirdManContest', 'StepName': 'Game', 'IsWaitEnd': True})
                                      case [2, 3, 6, 7, 8]:
                                        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk57', 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event113
                                    }
                                } else {
                                    goto Event77
                                }
                            } else {
                                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event158
                            }
                        } else {
                            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk07', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        }
                    } else {
                        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                    }
                  case 1:
                    Npc_Minigame_BirdMan001.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_FarthestIsland002', 'ResetArriveTransformFixed': False})
                    Event70:
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_FarthestIsland002.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [4739.0, 218.0, 3756.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [4739.0, 218.0, 3756.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'WorldPos': [4739.0, 218.0, 3756.0], 'OffsetBase': 0})
                    EventCamera.EventTriggerCameraSavePoint()
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 30, 'Actor1ActorName': 'Obj_RingGoal_A_02', 'PosVector': [4724.14990234375, 219.55999755859375, 3753.27490234375], 'AtVector': [4732.0, 218.0, 3755.1298828125], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Player.EventPlayerTurnAndLook({'WorldPos': [4732.0, 222.0, 3756.0], 'Target': 3, 'ActorName': 'Npc_Minigame_BirdMan001', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BirdmanContest_HaveExplained'})
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
                    EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Speaker2SetType': 1, 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'IsWaitEnd': False, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Speaker3SetType': 0, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Speaker4SetType': 0, 'Spearker4ActorName': '', 'Spearker4InstanceName': ''})
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/BirdManContest:Talk36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event20
                    } else {
                        Event16:
                        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk04', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_FarthestIsland002.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
                    }
                  case 2:
                    goto Event16
                }
            } else {
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/BirdManContest:Talk58', 'IsNotOpenIfSkipedMostRecent': False})
                Event121:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event70
                } else {
                    goto Event16
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BirdManContest_HaveTalked', 'Value': True, 'Index': -1})
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk00', 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk37', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk38', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_FarthestIsland002.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk41', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk02', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 13, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event121
        }
      case [2, 3, 6, 7, 8]:
        if Npc_Minigame_BirdMan001.EventQueryIsOnRecentTalkFlag() {
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk51', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event188
    }
}

void Ready_Npc_FarthestIsland002_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001"), 'Arg_Turn': 0})

    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Event170:
        Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk49', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_Minigame_BirdMan001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        goto Event227
      case [2, 3, 6, 7, 8]:
        if Npc_FarthestIsland002.EventQueryIsOnRecentTalkFlag() {
            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk50', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event170
    }
}

void Ready_Npc_Minigame_BirdMan001_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 100, 'MessageID': 'EventFlowMsg/BirdManContest:Near00', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 100, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/BirdManContest:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Game_Npc_Minigame_BirdMan001_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Arg_Turn': 4, 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001"), 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': ''})

    Event6:
    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk08', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Minigame_BirdMan001.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_FarthestIsland002', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk23', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk52', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_FarthestIsland002.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'ResetArriveTransformFixed': False})
            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call SoundStopMingameBgm()


            call CleanUp()

            Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'BirdManContest', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestAutoSave()
        } else {
            Event28:
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventTriggerRequestAutoSave()
        }
    } else {
        goto Event28
    }
}

void Game_Npc_FarthestIsland002_Talk() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001"), 'Arg_Turn': 0})

    Npc_FarthestIsland002.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 3, 'GreetType': 3})
    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Minigame_BirdMan001.EventNPCTurnToObjectGreeting({'GreetType': 3, 'TurnType': 3, 'IsWaitEnd': True})
    goto Event6
}

void Prepare() {

    call SoundStopInGameBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'BirdmanContest_AppearActor', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BirdManContest_PlayerNotRide', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BirdmanContest_OutOfRange'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BirdmanContest_Landing'})
    GameSystemActor.EventResetGimmick({'Option': 0, 'IsResetCamera': True, 'IsWaitEnd': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Event254:
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Event255:
            LastRiddenAnimal_ForEvent.EventHorseWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'BirdManContestHorse'})
            Event32:
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'StartPos', 'IsWaitEnd': True, 'InstanceName': 'Birdman_Player', 'UseDemoWait': True})
            Npc_FarthestIsland002.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 22, 'InstanceName': 'Minigame_Mimoji', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_Minigame_BirdMan001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 0, 'InstanceName': 'Minigame_Boot', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_FarthestIsland002.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_Minigame_BirdMan001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 2.0, 0.0], 'MoveTime': 0, 'TargetFovy': 50.0, 'PosVector': [0.0, 5.0, -10.0], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 1}) {
            goto Event254
        } else
        if !Player.EventQueryPlayerCheckRideHorse({'ActorFileName': '', 'IsRidingAny': False, 'Type': 12}) {
            goto Event254
        } else {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
            Event292:
            if !Player.EventQueryIsOwnedHorseNear({'Distance': 30.0}) {
                goto Event255
            }
            goto Event32
        }
    } else
    goto Event292
}

void CleanUp() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BirdmanContest_AppearActor', 'Value': False, 'Index': -1})
    Player.EventPlayerClimbOff({'IsWaitEnd': True})
    Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'StartPos', 'InstanceName': 'Birdman_Result', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
    GameSystemActor.EventResetGimmick({'Option': 0, 'IsResetCamera': True, 'IsWaitEnd': True})
    EventWorldManagerController.EventTrigger_RequestImmTrans()
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BirdManContest_PlayerNotRide', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BirdmanContest_OutOfRange'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'BirdmanContest_Landing'})
    ChallengeSystemActor.EventTriggerUnshowTimerUI()
    Npc_FarthestIsland002.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 0, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Minigame_BirdMan001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 0, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': '', 'Arg_Turn': 3, 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001")})

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'MoveTime': 1, 'Actor1ActorName': 'Player', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [4724.89990234375, 217.5500030517578, 3751.2099609375], 'AtVector': [4730.26611328125, 216.25, 3752.47998046875]})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Game_Npc_Minigame_BirdMan001_EachFrame() {
    Event237:
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_BirdManContest', 'Value': 'Game', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdmanContest_Landing', 'Index': -1}) {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Result', 'ChallengeName': 'BirdManContest'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdManContest_PlayerNotRide', 'Index': -1}) {
            Event65:
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'BirdManContest', 'StepName': 'Retire'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BirdmanContest_OutOfRange'}) {
            goto Event65
        } else {
            EventSystemActor.EventSuspend({'IsWaitEnd': True, 'SpecialEventActionType': 2})
            goto Event237
        }
    }
}

void Result_Npc_Minigame_BirdMan001_StepStart() {

    call Common.AirStartUP_Player()


    call SoundStopMingameBgm_Goal()

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'BirdmanContest_Calc', 'Index': -1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BirdManContest_HaveRecord'})
    && !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'BirdmanContest_Score', 'GameDataB': 'BirdmanContest_ScoreHigh', 'Operator': 4}) {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': True})
    } else {
        ChallengeSystemActor.EventShowFinish({'IsWaitEnd': True, 'IsNewRecords': False})
    }

    call CleanUp()


    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

    Npc_Minigame_BirdMan001.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BirdmanContest_Score', 'Value': 1.0}) {
      case [0, 1]:
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Gold'})

        Event96:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BirdManContest_HaveRecord'}) {
            if !GameDataActor.EventQueryCompareGameDataFloat({'GameDataA': 'BirdmanContest_Score', 'GameDataB': 'BirdmanContest_ScoreHigh', 'Operator': 4}) {
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataName': 'BirdmanContest_Score', 'DstGameDataName': 'BirdmanContest_ScoreHigh', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
                Event68:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BirdManContest_HaveRecord'})
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk19', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk20', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Retry()

                    } else {
                        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                        Event57:
                        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'BirdManContest', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                        GameSystemActor.EventTriggerRequestAutoSave()
                    }
                } else {
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event57
                }
            } else {
                goto Event68
            }
        } else {
            GameDataActor.EventTriggerCopyGameDataFloat({'SrcGameDataName': 'BirdmanContest_Score', 'DstGameDataName': 'BirdmanContest_ScoreHigh', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
            goto Event68
        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BirdmanContest_Score', 'Value': 10.0}) {
          case [0, 1]:
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Silver'})

            goto Event96
          case 2:
            switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BirdmanContest_Score', 'Value': 30.0}) {
              case [0, 1]:
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

                goto Event96
              case 2:
                switch GameDataActor.EventQueryIsGameDataFloat({'Index': -1, 'GameDataName': 'BirdmanContest_Score', 'Value': 70.0}) {
                  case [0, 1]:
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

                    goto Event96
                  case 2:
                    Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event96
                }
            }
        }
    }
}

void Retire_Npc_Minigame_BirdMan001_StepStart() {

    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'BirdmanContest_Calc', 'Index': -1})

    call SoundStopMingameBgmWithFue()

    Npc_Minigame_BirdMan001.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 3, 'GreetType': 3})
    Npc_FarthestIsland002.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 3, 'GreetType': 3})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdmanContest_OutOfRange', 'Index': -1}) {
        SoundSystemActor.EventTriggerSetNpcVoiceFarMode()
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk53', 'IsNotOpenIfSkipedMostRecent': False})

        call RetireInit()

        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk54', 'IsNotOpenIfSkipedMostRecent': False})
        Event60:
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk19', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk20', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 8, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Retry()

            } else {
                Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                Event64:
                ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'BirdManContest', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
                GameSystemActor.EventTriggerRequestAutoSave()
            }
        } else {
            Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event64
        }
    } else {
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call RetireInit()

        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event60
    }
}

void Retry() {
    if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
        Npc_Minigame_BirdMan001.EventTriggerLookAtObject({'Target': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Npc_FarthestIsland002', 'ResetArriveTransformFixed': False})
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk05', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call Prepare()

        Npc_FarthestIsland002.EventNPCTurnToTarget({'Target': 3, 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'ActorName': 'Npc_Minigame_BirdMan001', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk44', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'Player', 'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/BirdManContest:Talk32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BirdmanContest_Calc', 'Index': -1, 'Value': True})

        call Common.EventTriggerShowReadyGoWithCountIn()


        call SoundStartMingameBgm()

        ChallengeSystemActor.EventTriggerShowTimerUI({'MeasureType': 1})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'BirdManContest', 'ChallengeStep': 'Game', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    } else {
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk07', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        ChallengeSystemActor.EventExecuteRollbackChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'BirdManContest', 'ChallengeStep': 'Ready', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void RetireInit() {

    call CleanUp()


    call Hebra_SkyRingChallenge.SoundStoptDuckWorldSE()

    Npc_Minigame_BirdMan001.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 3, 'GreetType': 3})
    Npc_FarthestIsland002.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'TurnType': 3, 'GreetType': 3})
}

void SoundStartMingameBgm() {
    SoundSystemActor.EventTriggerStartBgmSimple({'CommandLife': 2, 'IsReleaseDucking': True, 'BGMName': 'BGM_Minigame_03'})
}

void SoundStopMingameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': True})
}

void SoundStopInGameBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False})
}

void SoundStopMingameBgm_Goal() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'WithPlayableEvent': False, 'IsForceFadeTime': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': False})
}

void HandWing() {

    call InitTalk.InitTalk_Pair({'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_FarthestIsland002', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_Minigame_BirdMan001', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_FarthestIsland002"), 'Actor2': ActorIdentifier(name="Npc_Minigame_BirdMan001"), 'Arg_Turn': 0})

    Npc_Minigame_BirdMan001.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_FarthestIsland002.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BirdmanContest_AppearActor', 'Index': -1}) {
        Npc_Minigame_BirdMan001.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_Minigame_BirdMan001.EventTalk({'EndDialogOption': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk55', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_FarthestIsland002.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_FarthestIsland002.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BirdManContest:Talk56', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SoundStopMingameBgmWithFue() {

    call Hebra_SkyRingChallenge.SoundStartDuckWorldSE()

    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'IsImmediateOnAutoOff': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WithPlayableEvent': False})
    SoundSystemActor.EventTriggerSoundStopBGM({'BGMName': 'BGM_Minigame_03', 'IsUseSuspendFade': False})
    SoundSystemActor.EventStartSound({'TimeoutFrame': 60, 'IsWaitEnd': True, 'SLinkKey': 'Dm_Minigame_Retire'})
}
