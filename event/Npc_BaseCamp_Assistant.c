-------- EventFlow: Npc_BaseCamp_Assistant --------

Actor: Npc_BaseCamp_Assistant[WatchTower]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction', 'EventQueryOwningObjectPlayerInterference', 'EventQueryHasControllerSet', 'EventQueryNeedEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor_Hateno
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventGoOffstageForUser', 'EventWait', 'EventPlayerUnequip', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventTriggerPlayerLookAtObject', 'EventPlayerWait', 'EventPlayerClimbOff', 'EventPlayerStopInAir']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenDemoNicknameUI', 'EventCloseDemoNicknameUI', 'EventShowPhotograph', 'EventCloseMinusMenu', 'EventEventFadeOut', 'EventEventFadeIn']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventSendMultiEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundChangeListenerPreset']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)]
entrypoint: Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)
actions: ['EventTriggerSetHaveTalked', 'EventTriggerSetRecentTalkFlag', 'EventUnequipWeapon', 'EventNPCTurnToObjectGreeting']
queries: ['EventQueryNeedEquipWeapon', 'EventQueryHasControllerSet']
params: None

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsCompleted_Exp'}) {
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_00_002', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_00_001', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_Assistant:talk_21', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_Assistant:talk_08', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call GetCamera.Talk_Zelda_InCastleC()

}

void Obj_Interference() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
        }
        Event10:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ToLand_Exp'}) {
            if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'ActionType': 2, 'AIScheduleState': 0}) {
                Event3:
                EventCamera.EventTriggerCameraSavePoint()
                if !Player.EventQueryCheckPlayerState({'State': 5}) {

                    call InitTalk.InitTalkInAir({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientDoctor_Hateno")})

                } else {

                    call Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientDoctor_Hateno")})

                }
                if Npc_BaseCamp_Assistant[WatchTower].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': True}) in [1, 2, 3, 4, 5, 6] {
                    Npc_AncientDoctor_Hateno.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'IsConfront': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_81', 'IsNotOpenIfSkipedMostRecent': False})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_AncientDoctor_Hateno', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

                    fork {
                        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                    } {
                        EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 1.0, 'LongShiftRange': 0.5, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'PosVector': [-0.05999999865889549, 1.4500000476837158, 2.880000114440918], 'AtVector': [-0.029999999329447746, 1.1100000143051147, 1.7999999523162842], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
                    }

                    Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_82', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp'}) {
                        if !Npc_AncientDoctor_Hateno.EventQueryHaveTalked() {
                            Event555:
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

                            fork {
                                Player.EventWait({'IsWaitEnd': True, 'Frames': 0})
                            } {
                                EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
                            }

                        } else {
                            Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_67', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            fork {
                                Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                            } {
                                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'PosVector': [0.1599999964237213, 1.4700000286102295, 2.049999952316284], 'AtVector': [-0.1899999976158142, -0.05999999865889549, -2.259999990463257], 'TargetFovy': 36.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                            }

                            GameSystemActor.EventOpenDemoNicknameUI({'DemoNicknameType': 0, 'IsWaitEnd': True, 'NameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Name', 'NicknameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Alias'})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                            GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})
                            Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_80', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_66', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_79', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk01', 'Index': -1, 'Value': True})
                            goto Event555
                        }
                    } else
                    if !Npc_AncientDoctor_Hateno.EventQueryHaveTalked() {
                        goto Event555
                    } else {
                        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_00', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                        } {
                            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'PosVector': [0.1599999964237213, 1.4700000286102295, 2.049999952316284], 'AtVector': [-0.1899999976158142, -0.05999999865889549, -2.259999990463257], 'TargetFovy': 36.400001525878906, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        }

                        GameSystemActor.EventOpenDemoNicknameUI({'DemoNicknameType': 0, 'IsWaitEnd': True, 'NameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Name', 'NicknameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Alias'})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
                        GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})
                        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_69', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event555
                    }
                }
            } else {
                EventCamera.EventTriggerCameraSavePoint()
                if !Player.EventQueryCheckPlayerState({'State': 5}) {

                    call InitTalk.InitTalkInAir({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_BaseCamp_Assistant", sub_name="WatchTower")})

                } else {

                    call Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_BaseCamp_Assistant", sub_name="WatchTower")})

                }
                if Npc_BaseCamp_Assistant[WatchTower].EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': True}) in [1, 2, 3, 4, 5, 6] {
                    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'IsConfront': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_Assistant:talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_BaseCamp_Assistant', 'InstanceName': 'WatchTower', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0})
                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_BaseCamp_Assistant', 'Actor1InstanceName': 'WatchTower', 'AtVector': [-0.019999999552965164, 1.0499999523162842, 1.7599999904632568], 'TargetFovy': 40.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2ActorName': 'Player', 'PosVectorSetType': 4, 'PosVector': [1.690000057220459, 2.4000000953674316, -2.950000047683716], 'IsWaitEnd': True, 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 26, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    if !Player.EventQueryCheckPlayerState({'State': 4}) {
                        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    }
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_Assistant:talk_20', 'IsNotBecomeSpeaker': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'EnableCameraAlpha': False})
                }
            }
        } else {
            goto Event3
        }
    } else {
        Player.EventPlayerWait({'IsWaitEnd': True})
        goto Event10
    }
}

void MinusYiga_IsAfter_Begin_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_Step01_Exp'}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_00_001', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_001', 'IsNotOpenIfSkipedMostRecent': False})

        call Talk_After_YigaDefeat_AfterReport()

        Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } else {

        call Talk()

    }
}

void Npc_BaseCamp_Assistant_TalkYiga_01_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event146:
                if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
                    Event253:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_005', 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_004', 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event70:

                call Question_1()

            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_013', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                goto Event70
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_012', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            goto Event70
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Naked', 'CheckHead': False, 'CheckLower': False}) {
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
            goto Event253
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_011', 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event70
    } else
    goto Event146
}

void MinusYiga_IsAfter_Again_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event87:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_001', 'IsNotOpenIfSkipedMostRecent': False})
                Event90:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_021', 'IsNotOpenIfSkipedMostRecent': False})
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'StepName': 'Step01'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02'}) {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_005', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1007, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_005', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1008, 'IsNotOpenIfSkipedMostRecent': False})
                    }

                    call Npc_BaseCamp_Assistant_ReactingStatue2()

                    Event128:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_007', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_015', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Value': True})

                    call Yiga()

                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_005', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event128
                }
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_016', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                goto Event90
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_015', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            goto Event90
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_013', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        goto Event87
    }
    goto Event90
}

void Npc_BaseCamp_Assistant_TalkYiga_02_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event16:
                if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_010', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_008', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event40:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'ChoiceLabel3': 1001, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_028', 'ChoiceLabel2': 1001, 'ChoiceNumber': 2, 'ChoiceLabel1': 1002, 'IsNotOpenIfSkipedMostRecent': False})

                call NewQuestion_2()

            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_017', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                goto Event40
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_014', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            goto Event40
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_012', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event40
    } else
    goto Event16
}

void MinusYiga_IsAfter_Continue_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Index': -1}) {
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                    Event121:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_001', 'IsNotOpenIfSkipedMostRecent': False})
                    Event515:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_003', 'IsNotOpenIfSkipedMostRecent': False})
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue3'}) {
                            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1009, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Event19:
                            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1006, 'IsNotOpenIfSkipedMostRecent': False})
                        }

                        call Npc_BaseCamp_Assistant_ReactingStatue3()

                        Event139:
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'ChoiceLabel3': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_002', 'IsNotOpenIfSkipedMostRecent': False})
                        Event167:
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_03', 'Value': True})
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_016', 'IsNotOpenIfSkipedMostRecent': False})

                        call Yiga()

                    } else
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
                        goto Event19
                    } else {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event139
                    }
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_016', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                    goto Event515
                }
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_015', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
                goto Event515
            }
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_013', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event121
        }
        goto Event515
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event54:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_001', 'IsNotOpenIfSkipedMostRecent': False})
                Event414:
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'StepName': 'Step01'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02'}) {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_020', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1007, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_020', 'ChoiceNumber': 2, 'ChoiceLabel1': 1004, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})
                    }

                    call Npc_BaseCamp_Assistant_ReactingStatue2()

                    Event23:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_008', 'IsNotOpenIfSkipedMostRecent': False})
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                        Event581:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02'}) {
                            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1009, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1006, 'IsNotOpenIfSkipedMostRecent': False})
                        }

                        call Npc_BaseCamp_Assistant_ReactingStatue3()

                        Event53:
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_002', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02'})
                        goto Event167
                    } else
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
                        goto Event581
                    } else {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event53
                    }
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_020', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event23
                }
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_016', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                goto Event414
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_015', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            goto Event414
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_013', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        goto Event54
    }
    goto Event414
}

void Npc_BaseCamp_Assistant_TalkYiga_03_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event57:
                if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_010', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_004', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event59:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 1001, 'ChoiceLabel3': 1003, 'ChoiceLabel1': 1003, 'ChoiceLabel2': 1001, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_021', 'IsNotOpenIfSkipedMostRecent': False})

                call NewQuestion_3()

            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_017', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                goto Event59
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_014', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            goto Event59
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_012', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event59
    } else
    goto Event57
}

void MinusYiga_IsCompleted_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_008', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_001', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_002', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_003', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_004', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_01', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_03', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_04', 'Value': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_Praise'}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_001', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventTriggerCameraSavePoint()

        fork {
            Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_BaseCamp_Assistant', 'Actor1InstanceName': 'WatchTower', 'PosVector': [-0.03999999910593033, 1.440000057220459, 1.059999942779541], 'AtVector': [0.1899999976158142, 0.5400000214576721, -3.440000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_004', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Complimented', 'Index': -1, 'Value': True})
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    }
}

void Npc_BaseCamp_Assistant_TalkYiga_04_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event564:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_006', 'IsNotOpenIfSkipedMostRecent': False})
                Event127:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_Praise'}) {
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_001', 'IsNotOpenIfSkipedMostRecent': False})
                    EventCamera.EventTriggerCameraSavePoint()

                    fork {
                        Player.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                    } {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Npc_BaseCamp_Assistant', 'Actor1InstanceName': 'WatchTower', 'PosVector': [-0.03999999910593033, 1.440000057220459, 1.059999942779541], 'AtVector': [0.1899999976158142, 0.5400000214576721, -3.440000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    }

                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_004', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Complimented', 'Index': -1, 'Value': True})
                    Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                } else {

                    call Yiga()

                }
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_010', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                goto Event127
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_009', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event127
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_011', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event127
    } else
    if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
        goto Event564
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_005', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event127
}

void Question_1() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk01'}) {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1007, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_026', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 2, 'ChoiceLabel1': 1004, 'ChoiceLabel2': 1005, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_006', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Npc_BaseCamp_Assistant_ReactingStatue()

            Event38:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_007', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_014', 'IsNotOpenIfSkipedMostRecent': False})
            Event173:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
            && !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_018', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_019', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event717:
                Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            } else {
                goto Event717
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_006', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event38
        }
    } else {
        goto Event38
    }
}

void Talk_After_YigaDefeat1() {
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_024', 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'Target': 0, 'FaceControlType': 1, 'IsWaitEnd': False, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [-255.9600067138672, 125.62999725341797, -153.44000244140625], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }

    Npc_BaseCamp_Assistant[WatchTower].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 12, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'InstanceName': 'Talk_After_YigaDefeat1_Pos', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'UseDemoWait': True})
    Npc_AncientDoctor_Hateno.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'AnchorType': 6, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': 'WatchTower', 'TurnFaceControlType': 1, 'ActorName': 'Npc_BaseCamp_Assistant', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'PosVector': [-253.0399932861328, 127.3499984741211, -149.72000122070312], 'AtVector': [-255.5500030517578, 126.73999786376953, -153.4199981689453], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_025', 'IsNotOpenIfSkipedMostRecent': False})
    Event5:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_01', 'Value': True})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'Step01', 'IsIgnoreChallengeProgressUI': True, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step01', 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step01', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': True, 'StepName': 'Step01', 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsAfter_Begin_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsAfter_Again_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'MinusYiga_IsCompleted_Exp'}) {
                Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_007', 'IsNotOpenIfSkipedMostRecent': False})
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_003', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_004', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_03', 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_04', 'Value': True})
            } else
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_018', 'ChoiceNumber': 2, 'ChoiceLabel1': 1004, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})

                call Npc_BaseCamp_Assistant_ReactingStatue()

                Event370:
                if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'StepName': 'Step01'}) {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_003', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1008, 'IsNotOpenIfSkipedMostRecent': False})

                    call Npc_BaseCamp_Assistant_ReactingStatue2()

                    Event247:
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_008', 'IsNotOpenIfSkipedMostRecent': False})
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                        Event248:
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1006, 'IsNotOpenIfSkipedMostRecent': False})

                        call Npc_BaseCamp_Assistant_ReactingStatue3()

                        Event258:
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_002', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Value': True})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_03', 'Value': True})
                    } else
                    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
                        goto Event248
                    } else {
                        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_009', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event258
                    }
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_003', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event247
                }
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_018', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event370
            }
        } else
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_003', 'ChoiceNumber': 2, 'ChoiceLabel1': 1004, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})

            call Npc_BaseCamp_Assistant_ReactingStatue()

            Event508:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_003', 'IsNotOpenIfSkipedMostRecent': False})
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'StepName': 'Step01'}) {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_005', 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1008, 'IsNotOpenIfSkipedMostRecent': False})

                call Npc_BaseCamp_Assistant_ReactingStatue2()

                Event260:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_007', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkYiga_02', 'Value': True})
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_005', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event260
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_003', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event508
        }
    } else
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_003', 'ChoiceNumber': 2, 'ChoiceLabel1': 1004, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})

        call Npc_BaseCamp_Assistant_ReactingStatue()

        Event261:
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_009', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_003', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event261
    }
}

void NewQuestion_2() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue2', 'StepName': 'Step01'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02'}) {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_006', 'ChoiceNumber': 2, 'ChoiceLabel1': 1007, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_006', 'ChoiceNumber': 2, 'ChoiceLabel1': 1008, 'ChoiceLabel2': 1005, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Npc_BaseCamp_Assistant_ReactingStatue2()

            Event667:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_011', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_015', 'IsNotOpenIfSkipedMostRecent': False})

            call Yiga()

        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_006', 'ChoiceLabel2': 1001, 'ChoiceLabel1': 1000, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event667
        }
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_010', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_015', 'IsNotOpenIfSkipedMostRecent': False})

        call Yiga()

    }
}

void NewQuestion_3() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
            Event681:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk03'}) {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_007', 'ChoiceLabel3': 1001, 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1009, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_007', 'ChoiceLabel3': 1001, 'ChoiceNumber': 2, 'ChoiceLabel2': 1005, 'ChoiceLabel1': 1006, 'IsNotOpenIfSkipedMostRecent': False})
            }

            call Npc_BaseCamp_Assistant_ReactingStatue3()

            Event679:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_010', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_016', 'IsNotOpenIfSkipedMostRecent': False})

            call Yiga()

        } else
        if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
            goto Event681
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 19, 'ChoiceLabel1': 1000, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_007', 'ChoiceLabel3': 1001, 'ChoiceLabel2': 1002, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event679
        }
    } else {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_010', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_016', 'IsNotOpenIfSkipedMostRecent': False})

        call Yiga()

    }
}

void Npc_AncientDoctor_Praise_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'}) {
                Event26:
                if !Npc_BaseCamp_Assistant[WatchTower].EventQueryIsOnRecentTalkFlag() {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_003', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_05_002', 'IsNotOpenIfSkipedMostRecent': False})
                }

                call Yiga()

            } else {
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_010', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment2'})
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_009', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_Talk_YigaEquipment', 'Index': -1, 'Value': True})
        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckUpper': True, 'CheckHead': False, 'CheckLower': False}) {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_04_011', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    goto Event26
}

void Talk_FldObj_AmosStatue_A_02() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_BaseCamp_Assistant[WatchTower].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryNeedEquipWeapon() {
            Npc_BaseCamp_Assistant[WatchTower].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryHasControllerSet() {
            Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 0})
        }
    } {
        SoundSystemActor.EventSoundChangeListenerPreset({'ListenerPresetName': 'Talk', 'FadeTime': 0.0})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventSendMultiEventTalkMessageToPlayerCamera({'Speaker1SetType': 1, 'Speaker2SetType': 1, 'Speaker3SetType': 0, 'Speaker4SetType': 0, 'IsWaitEnd': False, 'Spearker3ActorName': '', 'Spearker3InstanceName': '', 'Spearker4ActorName': '', 'Spearker4InstanceName': '', 'Spearker2InstanceName': 'WatchTower', 'Spearker2ActorName': 'Npc_BaseCamp_Assistant', 'Spearker1InstanceName': '', 'Spearker1ActorName': 'FldObj_AmosStatue_A_02'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_BaseCamp_Assistant[WatchTower].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'IsConfront': False, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_Assistant:talk_24', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 25})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_BaseCamp_Assistant', 'InstanceName': 'WatchTower', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    }

}

void Yiga() {
    goto Event173
}

void Npc_BaseCamp_Assistant_ReactingStatue() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk01', 'Index': -1}) {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_022', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_01'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_023', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            Event314:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_020', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk01'})
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_021', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_01'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_019', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            goto Event314
        }
    }
}

void Npc_BaseCamp_Assistant_ReactingStatue2() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02', 'Index': -1}) {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_022', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_07'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_025', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            Event329:
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_024', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue2'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk02'})
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_021', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_07'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_02_023', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            goto Event329
        }
    }
}

void Npc_BaseCamp_Assistant_ReactingStatue3() {
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk03'}) {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_022', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_06'})
                Event654:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_016', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                Event346:
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_014', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue3'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_ReactingStatue_Talk03'})
            } else
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_06_End'})
                goto Event654
            }
        } else {
            Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_015', 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue3', 'IgnoreShowedTarget': False, 'StepName': 'Step01'}) {
                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_06'})
                Event653:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsNotBecomeSpeaker': True, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_03_011', 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                goto Event346
            } else
            if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'IgnoreShowedTarget': False, 'ChallengeName': 'Npc_BaseCamp_Assistant_ReactingStatue4', 'StepName': 'Step01'}) {
                GameSystemActor.EventShowPhotograph({'IsWaitEnd': True, 'Actor': 'FldObj_WisemanStatue_A_06_End'})
                goto Event653
            }
        }
    }
}

void Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent() {

    fork {
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } {
        Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
        Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
        if !Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventQueryNeedEquipWeapon() {
            Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventUnequipWeapon({'IsWaitEnd': True})
        }
        if !Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventQueryHasControllerSet() {
            Npc_AncientDoctor[Npc_BaseCamp_Assistant_InitTalkExceptCameraOnEvent(Self)].EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 'Arg_Turn'})
        }
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
    }

}

void Talk_After_YigaDefeat_AfterReport() {
    Npc_BaseCamp_Assistant[WatchTower].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_BaseCamp_Assistant[WatchTower].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 10, 'ChoiceLabel2': 12, 'ChoiceLabel3': 18, 'ChoiceLabel4': 19, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_BaseCamp_AssistantForMinus:Talk_New01_01_002', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event5
}
