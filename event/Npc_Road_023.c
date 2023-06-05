-------- EventFlow: Npc_Road_023 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTriggerLookAtObject', 'EventAIScheduleWarpToAnchor', 'EventPlayAS']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventClearActorsAroundAnchor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_023
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundStartSound', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_FirstTalked', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_JoinTalked', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_Joined'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_BoardChecked'}) {

                    call AfterJoinenedTalk()

                } else {

                    call BeforeCheckBoardTalk()

                }
            } else {

                call OnceJoinDeniedTalk()

            }
        } else {

            call BeforeJoinedTalk()

        }
    } else {

        call FirstTalk()

    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_FirstTalked', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_Joined'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuinsTreasure_IsAfter_Ready_Exp'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuinsTreasure_IsAfter_Ready_Exp'}) {
            Event306:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_Is1MainChallangeCleared'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_01', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
        } else {
            goto Event306
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuinsTreasure_IsAfter_Ready_Exp'}) {
        Event303:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_Is1MainChallangeCleared'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_00', 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False})
    } else {
        goto Event303
    }
}

void FirstTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_21', 'ChoiceNumber': 1, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BlindRuins_FirstTalked', 'Index': -1, 'Value': True})
        Event6:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_Is1MainChallangeCleared'}) {

            call CheckKakarikoChoiceExist()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_TalkAboutKakariko'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_HeardAboutKakariko'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_27', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 10, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call HearFromKakariko2nd()

                      case 1:
                        Event55:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event56:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_61', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BlindRuins_JoinTalked', 'Index': -1, 'Value': True})
                            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkYes', 'IsAllSlot': True, 'ClothWarpMode': 0})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventEventFadeOut({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})

                            fork {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_62', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                  case [0, 1]:

                                    fork {
                                        Npc_EventStarter.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                    } {
                                        Player.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'BlindRuins_BoardFrontPlayerPos', 'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
                                    }

                                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.8999999761581421, 3.450000047683716, -6.269999980926514], 'AtVector': [-0.8999999761581421, 1.7999999523162842, -0.07000000029802322], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                    Event64:
                                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BlindRuins_Joined'})
                                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                                  case [2, 3, 4, 5, 6, 7, 8]:

                                    fork {
                                        Npc_EventStarter.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'AnchorType': 3, 'EnableArrivalState': False})
                                    } {
                                        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'BlindRuins_BoardFrontPlayerPos_Rain', 'NotChangeRot': False, 'UseDemoWait': True})
                                    }

                                    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player', 'PosVector': [-0.8999999761581421, 3.450000047683716, -6.269999980926514], 'AtVector': [-0.8999999761581421, 1.7999999523162842, -0.07000000029802322], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                                    goto Event64
                                }
                            } {
                                SoundSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                                SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Dm_BlindRuinsTreasure_SignboardStone_Land', 'IsIgnoreDucking': False})
                                SoundSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
                            }

                            GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'Height': 3.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'AnchorInstanceName': 'Clean', 'Radius': 5.0, 'IsDeleteActor': True})
                            GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'IsWaitEnd': True, 'Color': 0, 'Length': 1})
                            Event74:

                            call LookAtNotChallanageStartedBoard()

                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BlindRuins_NewBoardTalked', 'Index': -1, 'Value': True})
                            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuinsTreasure_IsAfter_Ready_Exp'}) {
                                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'LookAtBoard_1', 'ChallengeName': 'BlindRuinsTreasure', 'IsWaitEnd': True})
                            }
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_78', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BlindRuins_JoinTalked', 'Index': -1, 'Value': True})
                        }
                      case 2:
                        Event245:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_79', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_27', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 1, 'ChoiceLabel1': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call HearFromKakariko1st()

                      case 1:
                        goto Event55
                      case 2:
                        goto Event245
                    }
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_27', 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event55
                } else {
                    goto Event245
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Greet() {
    if Npc_Road_023.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_TalkAboutNextBoard_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_GetWindTreasure', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_ReportWindTreasure'}) {
                    Event289:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_GetFireTreasure', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_ReportFireTreasure'}) {
                            Event291:
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_GetWaterTreasure'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_ReportWaterTreasure'}) {
                                    Event292:
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_GetThunderTreasure'}) {
                                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_ReportThunderTreasure'}) {
                                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_92', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                                        } else
                                        Event43:
                                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_JoinTalked', 'Index': -1}) {
                                            switch EventWorldManagerController.EventQueryTimeDivision() {
                                              case [0, 1]:
                                                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                                  case [0, 1]:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                  case [2, 3, 4, 5, 6, 7, 8]:
                                                    Event28:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_88', 'IsNotOpenIfSkipedMostRecent': False})
                                                }
                                              case [2, 3, 4, 5]:
                                                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                                  case [0, 1]:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                  case [2, 3, 4, 5, 6, 7, 8]:
                                                    goto Event28
                                                }
                                              case [6, 7]:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            }
                                        } else
                                        switch EventWorldManagerController.EventQueryTimeDivision() {
                                          case [0, 1]:
                                            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                              case [0, 1]:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_52', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                              case [2, 3, 4, 5, 6, 7, 8]:
                                                Event25:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_87', 'IsNotOpenIfSkipedMostRecent': False})
                                            }
                                          case [2, 3, 4, 5]:
                                            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                                              case [0, 1]:
                                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_53', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                              case [2, 3, 4, 5, 6, 7, 8]:
                                                goto Event25
                                            }
                                          case [6, 7]:
                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_54', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        }
                                    }
                                } else
                                goto Event43
                            } else
                            goto Event292
                        } else
                        goto Event43
                    } else
                    goto Event291
                } else
                goto Event43
            } else
            goto Event289
        } else
        goto Event43
    }
}

void BeforeJoinedTalk() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call Greet()

    }
    goto Event6
}

void AfterJoinenedTalk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_GetAllTreasureExp'}) {
        Event142:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_CaveDirectionTalkedTmp'}) {
            Event170:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_49', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BlindRuins_CaveDirectionTalkedTmp'})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_Joined'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtCaveDirection()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CameraBack()

            goto Event170
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_85', 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtCaveDirection()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_86', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraBack()

            goto Event170
        }
    } else {

        call Greet()


        call UnReportCheck()


        call NewBoardIsThere()


        call CheckKakarikoChoiceExist()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_TalkAboutKakariko'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_HeardAboutKakariko'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_71', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call HearFromKakariko2nd()

                } else {
                    Event263:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_76', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_71', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 7, 'ChoiceLabel2': 11, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call HearFromKakariko1st()

                } else {
                    goto Event263
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_TalkAboutNextBoard_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7, 'ChoiceLabel2': 11, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_80', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'Value': 0, 'GameDataName': 'BlindRuins_GetTreasureCount'}) {
          case 1:

            call LoopTalkCounter({'MaxValue': 2})

            Event269:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BlindRuins_TalkCounter', 'Value': 0, 'Index': -1}) {
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_71', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event77:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_NotCheckedBoardExist_Exp'}) {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_89', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BlindRuins_TalkCounter', 'Value': 1, 'Index': -1}) {
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event77
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BlindRuins_TalkCounter', 'Value': 2, 'Index': -1}) {
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event77
                      case 2:
                        if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BlindRuins_TalkCounter', 'Value': 3, 'Index': -1}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event77
                        }
                    }
                }
            }
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'GameDataName': 'BlindRuins_GetTreasureCount', 'Value': 1}) {
              case 1:

                call LoopTalkCounter({'MaxValue': 3})

                goto Event269
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': 0, 'GameDataName': 'BlindRuins_GetTreasureCount', 'Value': 2}) {
                  case 1:
                    Event275:

                    call LoopTalkCounter({'MaxValue': 4})

                    goto Event269
                  case 2:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_Is4MainChallangeCleared'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_40', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event77
                    } else {
                        goto Event275
                    }
                }
            }
        }
    }
}

void OnceJoinDeniedTalk() {
    goto Event56
}

void BeforeCheckBoardTalk() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_91', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event74
}

void LookAtNotChallanageStartedBoard() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_WindBoardNotChecked_Exp'}) {

        call LookAtRitoBoard()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_FireBoardNotChecked_Exp'}) {

        call LookAtGoronBoard()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_WaterBoardNotChecked_Exp'}) {

        call LookAtZoraBoard()

    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ThunderBoardNotChecked_Exp'}) {

        call LookAtGerudoBoard()

    }
}

void LookAtRitoBoard() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'RitoBoard', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventPlayAS({'ASName': 'Point', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'RitoBoard', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'RitoBoard', 'PosVector': [1.7100000381469727, 3.2899999618530273, 13.050000190734863], 'AtVector': [0.33000001311302185, 1.3700000047683716, 1.9299999475479126], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'RitoBoard', 'PosVector': [-3.109999895095825, 2.619999885559082, 10.579999923706055], 'AtVector': [0.10999999940395355, 1.3700000047683716, -0.10999999940395355], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void LookAtGoronBoard() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'GoronBoard', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventPlayAS({'ASName': 'Point', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'GoronBoard', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'GoronBoard', 'PosVector': [2.740000009536743, 3.4200000762939453, 12.199999809265137], 'AtVector': [0.27000001072883606, 1.3700000047683716, 1.2899999618530273], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'GoronBoard', 'PosVector': [-5.210000038146973, 2.869999885559082, 9.90999984741211], 'AtVector': [-0.5, 1.3700000047683716, 0.7900000214576721], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void LookAtZoraBoard() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'ZoraBoard', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventPlayAS({'ASName': 'Point', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'ZoraBoard', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'ZoraBoard', 'PosVector': [-2.509999990463257, 3.4200000762939453, 12.130000114440918], 'AtVector': [-0.25, 1.3700000047683716, 1.1799999475479126], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'ZoraBoard', 'PosVector': [-7.880000114440918, 2.259999990463257, 10.819999694824219], 'AtVector': [-0.7099999785423279, 1.3700000047683716, 0.7300000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void LookAtGerudoBoard() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'GerudoBoard', 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventPlayAS({'ASName': 'Point', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'GerudoBoard', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'GerudoBoard', 'PosVector': [-4.539999961853027, 3.109999895095825, 12.199999809265137], 'AtVector': [-0.4399999976158142, 1.3700000047683716, 1.75], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'GerudoBoard', 'PosVector': [-8.600000381469727, 2.2699999809265137, 12.260000228881836], 'AtVector': [-0.800000011920929, 1.3700000047683716, 1.4600000381469727], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        }
    }

}

void LookAtCaveDirection() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 5, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CaveDirection', 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'DesignateMatrixActor', 'Target': 5, 'InstanceName': 'CaveDirection', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'CaveDirection', 'PosVector': [-23.479999542236328, 0.07999999821186066, 22.059999465942383], 'AtVector': [-17.520000457763672, -0.28999999165534973, 18.579999923706055], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'CaveDirection', 'PosVector': [-17.969999313354492, 0.07999999821186066, 18.84000015258789], 'AtVector': [-12.010000228881836, -0.28999999165534973, 15.359999656677246], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void CameraBack() {

    fork {
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'Target': 1, 'ActorName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 2, 'CollisionInterpolateSkip': False, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    } {
        Npc_EventStarter.EventTriggerLookAtObject({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [0.0, 0.0, 0.0], 'Target': 2, 'InstanceName': '', 'ActorName': '', 'ResetArriveTransformFixed': False})
    }

}

void UnReportCheck() {

    call CheckUnreportedNotStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportWindTreasure', 'GetTreasureFlag': 'BlindRuins_GetWindTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Rito_IsAfter_Ready_Exp'})


    call CheckUnreportedNotStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportFireTreasure', 'GetTreasureFlag': 'BlindRuins_GetFireTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Goron_IsAfter_Ready_Exp'})


    call CheckUnreportedNotStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportWaterTreasure', 'GetTreasureFlag': 'BlindRuins_GetWaterTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Zora_IsAfter_Ready_Exp'})


    call CheckUnreportedNotStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportThunderTreasure', 'GetTreasureFlag': 'BlindRuins_GetThunderTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Gerudo_IsAfter_Ready_Exp'})


    call CheckUnreportedStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportWindTreasure', 'GetTreasureFlag': 'BlindRuins_GetWindTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Rito_IsAfter_Ready_Exp'})


    call CheckUnreportedStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportFireTreasure', 'GetTreasureFlag': 'BlindRuins_GetFireTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Goron_IsAfter_Ready_Exp'})


    call CheckUnreportedStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportWaterTreasure', 'GetTreasureFlag': 'BlindRuins_GetWaterTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Zora_IsAfter_Ready_Exp'})


    call CheckUnreportedStartedChallange({'ReportTreasureFlag': 'BlindRuins_ReportThunderTreasure', 'GetTreasureFlag': 'BlindRuins_GetThunderTreasure', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Gerudo_IsAfter_Ready_Exp'})

}

void ReportTalk() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Road_023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_45', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
    Npc_Road_023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event78:
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_Is4MainChallangeCleared'}) {
        Event220:

        call ActivateAllFlagTreasureGotButReported()

        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ShowWindBoard_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_GetWindTreasure', 'Index': -1}) {
            Event79:
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ShowFireBoard_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_GetFireTreasure', 'Index': -1}) {
                    Event80:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ShowWaterBoard_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_GetWaterTreasure'}) {
                            Event266:
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ShowThunderBoard_Exp'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_GetThunderTreasure'}) {
                                    Event314:
                                    Npc_Road_023.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_90', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                goto Event220
                            } else {
                                goto Event314
                            }
                        } else {
                            goto Event220
                        }
                    } else
                    goto Event266
                } else {
                    goto Event220
                }
            } else
            goto Event80
        } else {
            goto Event220
        }
    } else
    goto Event79
}

void ReportBeforeChallangeStart() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingS', 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_Road_023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_70', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
    Npc_Road_023.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event78
}

void CheckUnreportedNotStartedChallange() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ReportTreasureFlag'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetTreasureFlag'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ChallangeIsAfterReadyFlag'}) {

        call ReportBeforeChallangeStart()

    }
}

void CheckUnreportedStartedChallange() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ReportTreasureFlag'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetTreasureFlag'})
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ChallangeIsAfterReadyFlag'}) {

        call ReportTalk()

    }
}

void ActivateAllFlagTreasureGotButReported() {

    call ActivateAllFlagTreasureGotButReported_Sub({'ReportTreasureFlag': 'BlindRuins_ReportWindTreasure', 'GetTreasureFlag': 'BlindRuins_GetWindTreasure', 'ChallengeName': 'BlindRuinsTreasure_Rito', 'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Rito_IsAfter_Ready_Exp'})


    call ActivateAllFlagTreasureGotButReported_Sub({'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Goron_IsAfter_Ready_Exp', 'ChallengeName': 'BlindRuinsTreasure_Goron', 'GetTreasureFlag': 'BlindRuins_GetFireTreasure', 'ReportTreasureFlag': 'BlindRuins_ReportFireTreasure'})


    call ActivateAllFlagTreasureGotButReported_Sub({'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Zora_IsAfter_Ready_Exp', 'ChallengeName': 'BlindRuinsTreasure_Zora', 'GetTreasureFlag': 'BlindRuins_GetWaterTreasure', 'ReportTreasureFlag': 'BlindRuins_ReportWaterTreasure'})


    call ActivateAllFlagTreasureGotButReported_Sub({'ChallangeIsAfterReadyFlag': 'BlindRuinsTreasure_Gerudo_IsAfter_Search_Exp', 'ChallengeName': 'BlindRuinsTreasure_Gerudo', 'ReportTreasureFlag': 'BlindRuins_ReportThunderTreasure', 'GetTreasureFlag': 'BlindRuins_GetThunderTreasure'})

}

void ActivateAllFlagTreasureGotButReported_Sub() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ReportTreasureFlag'})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetTreasureFlag'}) {
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ChallangeIsAfterReadyFlag'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'ChallengeName', 'StepName': 'Complete', 'IsWaitEnd': True})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ReportTreasureFlag', 'Index': -1, 'Value': True})
    }
}

void NewBoardIsThere() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_NewBoardTalked', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_WindBoardNotChecked_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtRitoBoard()

            Event102:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_64', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BlindRuins_NewBoardTalked', 'Index': -1, 'Value': True})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_FireBoardNotChecked_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtGoronBoard()

            goto Event102
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_WaterBoardNotChecked_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtZoraBoard()

            goto Event102
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BlindRuins_ThunderBoardNotChecked_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call LookAtGerudoBoard()

            goto Event102
        }
    }
}

void BlindRuins_CaveAppeared_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    goto Event142
}

void BlindRuins_CaveAppeared_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_023:Near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void BlindRuins_TalkedInCave_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BlindRuins_RewardNotReceived', 'Index': -1}) {
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1})
        && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'SpObj_EnergyBank_Capsule_A_02'})
        && !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Ore_A'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_84', 'IsNotOpenIfSkipedMostRecent': False})

            call FldObj_SignboardStone_BlindRuins_A_01.Retry_GetPrize()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_RewardNotReceived', 'Value': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_83', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_67', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void LoopTalkCounter() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'BlindRuins_TalkCounter', 'Value': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'BlindRuins_TalkCounter', 'Index': -1, 'Value': 'MaxValue'}) in [1, 2] {
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'BlindRuins_TalkCounter', 'Value': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void CheckKakarikoChoiceExist() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClueTotheSixthSage_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClueTotheSixthSage_IsAfter_MeetTauro_Exp'}) {
            Event177:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'BlindRuins_TalkAboutKakariko', 'Value': False})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BlindRuins_TalkAboutKakariko'})
        }
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    } else {
        goto Event177
    }
}

void HearFromKakariko1st() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_66', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ASCommand': 'TalkingL', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_68', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_73', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BlindRuins_HeardAboutKakariko'})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Event249:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_74', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_023:Talk_75', 'IsNotOpenIfSkipedMostRecent': False})
}

void HearFromKakariko2nd() {
    goto Event249
}
