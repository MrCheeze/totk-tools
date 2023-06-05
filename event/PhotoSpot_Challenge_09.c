-------- EventFlow: PhotoSpot_Challenge_09 --------

Actor: TwnObj_StableHostelFrame_A_01[GerudoHatago_1]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_GerudoCanyonHatago001
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerForceSetRecentTalkFlag', 'EventTriggerSetRecentTalkFlag']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice3', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWaitAlbumSelectPictureUIInput', 'EventCloseAlbumSelectPictureUI', 'EventWait', 'EventOpenAlbumSelectPictureUIFromChallengeTarget', 'EventChangeAlbumModeDetail', 'EventReplacePictureAsAlbumSelect', 'EventChangeAlbumModeList']
queries: ['EventQueryAlbumSelectPictureUIInput', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: ['EventQueryHasChallengeTargetPhotograph']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerMoveToAnchor', 'EventPlayerUnequip', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventStartSound', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContentForCooking', 'EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_AttentionPoster_A_01[GerudoHatago_1]
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Ready_TwnObj_StableHostelFrame_A_01_GerudoHatago_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotospotChallenge_Is_Available'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'RescueHost_Reward'}) {
            Event1:

            call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="TwnObj_StableHostelFrame_A_01", sub_name="GerudoHatago_1")})


            call StartEvent()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_09_Decide_02'}) {

                call Challenge1()

                Event305:
                Npc_GerudoCanyonHatago001.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_09_Decide_01'}) {

                call PhotoSpot_Challenge_09_2.Challenge2()

                goto Event305
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Decide_02', 'Index': -1, 'Value': True})

                call Challenge1()

                goto Event305
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'RescueHost_IsCompleted_Exp'}) {
            goto Event1
        } else {
            Event372:
            FldObj_AttentionPoster_A_01[GerudoHatago_1].EventTriggerBecomeSpeaker()
            TwnObj_StableHostelFrame_A_01[GerudoHatago_1].EventTriggerParticipateEvent()

            fork {

                call InitTalk.InitTalkBookExceptCameraOnEvent({'Arg_Greeting': 3, 'Self': ActorIdentifier(name="FldObj_AttentionPoster_A_01", sub_name="GerudoHatago_1")})

            } {
                EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': True})
            }

            Player.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'Direction': 0.0, 'InstanceName': 'GerudoHatago_1'})
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 1.0})
        }
    } else {
        goto Event372
    }
}

void Step01_TwnObj_StableHostelFrame_A_01_GerudoHatago_Talk() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_06', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})

    call CameraSet_Gerudo()

    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 9001, 'ChoiceLabel2': 9002, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_09', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Event15:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_04', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_07', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call UtsushieSelect()

        } else {
            Event105:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_05', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
                if !Npc_GerudoCanyonHatago001.EventQueryAvoidDuplicationRandomChoice2() {
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        }
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_03', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event105
    }
}

void After_Complete() {
    if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Event192:
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_107', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_22', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event122:

            call CameraSet_Gerudo()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1}) {
                if !Npc_GerudoCanyonHatago001.EventQueryIsOnRecentTalkFlag()
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk02', 'Index': -1}) {
                    Event182:
                    Npc_GerudoCanyonHatago001.EventTriggerForceSetRecentTalkFlag({'value': True})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Change_Photo_1', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_96', 'IsNotOpenIfSkipedMostRecent': False})
                        Event186:
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
                        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
                        GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'StepName': 'Step01', 'IsWaitEnd': True, 'ChallengeName': 'PhotoSpot_Challenge_09', 'WithFigureTarget': False})
                        Event57:
                        GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
                        switch GameSystemActor.EventQueryAlbumSelectPictureUIInput() {
                          case 0:
                            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_99', 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': False})
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_09_Decide_02'}) {
                                    GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'GerudoHatago_1'})

                                    call SelectFinish_AfterClear()

                                    Event139:
                                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'TalkWait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
                                    Npc_GerudoCanyonHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
                                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                } else {
                                    GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'GerudoHatago_2'})

                                    call PhotoSpot_Challenge_09_2.SelectFinish_AfterClear()

                                    goto Event139
                                }
                            } else {
                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                                goto Event57
                            }
                          case 1:
                            GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                            switch Npc_GerudoCanyonHatago001.EventQueryAvoidDuplicationRandomChoice3() {
                              case 0:
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                                Event234:
                                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1}) {
                                    Event236:
                                    GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                                    goto Event57
                                } else {
                                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': True})
                                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 9004, 'ChoiceLabel2': 9005, 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_06', 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event236
                                }
                              case 1:
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event234
                              case 2:
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event234
                            }
                          case 2:
                            GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_95', 'ChoiceLabel1': 1, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                goto Event186
                            } else {
                                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_100', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        }
                    } else {
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_108', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_24', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk02', 'Index': -1, 'Value': True})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_10', 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event182
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_09_Thank2'}) {
                Event224:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1, 'Value': True})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_Thank', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event182
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_09_Thank1', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_09_Thank2'})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChangeMstxtForActor': True, 'ChoiceLabel2': 9007, 'ChoiceLabel1': 9006, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Photo_03', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event182
            } else {
                goto Event224
            }
        } else {
            goto Event192
        }
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_103', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event122
    }
}

void StartEvent() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_GerudoCanyonHatago001.EventTriggerParticipateEvent()
    Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'GerudoHatago_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
}

void CameraSet_Gerudo() {
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_GerudoCanyonHatago001', 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1InstanceName': '', 'PosVector': [-1.2000000476837158, 1.8300000429153442, 3.4100000858306885], 'AtVector': [-0.4099999964237213, 1.600000023841858, 2.549999952316284], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Npc_GerudoCanyonHatago001', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'Actor2ActorName': 'Player', 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 3, 'MoveTime': 60, 'EnableCameraAlpha': True})
    if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': 'GerudoHatago_1', 'IsCheckInstanceName': True, 'ActorName': 'EventRequestActor'}) {
        Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 3.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'PhotoChallenge_Link_01_Gerudo_1'})
    } else {
        Player.EventPlayerMoveToAnchor({'AnchorActorName': 'DestinationAnchor', 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 3.0, 'IsWaitEnd': True, 'AnchorInstanceName': 'PhotoChallenge_Link_01_Gerudo_2'})
    }
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Ready() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})

    call CameraSet_Gerudo()

    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 9001, 'ChoiceLabel2': 9003, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_01', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !ChallengeSystemActor.EventQueryHasChallengeTargetPhotograph({'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IgnoreShowedTarget': False}) {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ASCommand': 'TalkingS', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 9001, 'ChoiceLabel2': 9003, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_02', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})

            call UtsushieSelect()

        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Obj_Camera', 'Index': -1}) {
        Event23:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True})
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event23
}

void UtsushieSelect() {
    Event29:
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
    GameSystemActor.EventOpenAlbumSelectPictureUIFromChallengeTarget({'StepName': 'Step01', 'IsWaitEnd': True, 'ChallengeName': 'PhotoSpot_Challenge_09', 'WithFigureTarget': False})
    Event22:
    GameSystemActor.EventWaitAlbumSelectPictureUIInput({'IsWaitEnd': True})
    switch GameSystemActor.EventQueryAlbumSelectPictureUIInput() {
      case 0:
        GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'}) {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_19', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_08', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_26', 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_14', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_08', 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
            GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01', 'Value': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_09_Decide_02'}) {
                GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'GerudoHatago_1'})

                call SelectFinish()

                Event120:

                call GetReward()

                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
            } else {
                GameSystemActor.EventReplacePictureAsAlbumSelect({'IsWaitEnd': True, 'Key': 'GerudoHatago_2'})

                call PhotoSpot_Challenge_09_2.SelectFinish()

                goto Event120
            }
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'})
            goto Event22
        }
      case 1:
        GameSystemActor.EventChangeAlbumModeDetail({'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        switch Npc_GerudoCanyonHatago001.EventQueryAvoidDuplicationRandomChoice3() {
          case 0:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
            Event219:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1}) {
                Event194:
                GameSystemActor.EventChangeAlbumModeList({'IsWaitEnd': True})
                goto Event22
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': True})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 9004, 'ChoiceLabel2': 9005, 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_GerudoCanyonHatago001:Com_Photo_06', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event194
            }
          case 1:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event219
          case 2:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_23', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event219
        }
      case 2:
        GameSystemActor.EventCloseAlbumSelectPictureUI({'IsWaitEnd': True, 'withSound': True})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event29
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -2, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01'}) {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_15', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_16', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_01_Talk01', 'Value': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step01', 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True})
        }
    }
}

void SelectFinish() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

    fork {

        fork {
            Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_02', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'GerudoHatago_1', 'KeepTalkWait': True, 'OffsetBase': 0})
            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        } {
            Npc_GerudoCanyonHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'PhotoChallenge', 'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'GerudoHatago_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.1899999976158142, 0.0, 4.869999885559082], 'AtVector': [0.03999999910593033, -0.07000000029802322, 0.9800000190734863], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TwnObj_StableHostelFrame_A_01', 'Actor1InstanceName': 'GerudoHatago_1', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        SoundSystemActor.EventStartSound({'IsWaitEnd': True, 'TimeoutFrame': 0, 'SLinkKey': 'DrawAndDecoratePicture'})
    }

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Challenge1() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_IsCompleted_Exp'}) {

                call After_Complete()

            } else {

                call Step02()

            }
        } else {

            call Step01_TwnObj_StableHostelFrame_A_01_GerudoHatago_Talk()

        }
    } else {

        call Ready()

    }
}

void GetReward() {

    fork {
        Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_GerudoCanyonHatago001', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_04', 'ASName': 'TalkWait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'TalkWait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_38', 'IsNotOpenIfSkipedMostRecent': False})

    call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': 'TalkWait', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_Reward_09'})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName2': 'Item_Material_06', 'MaterialActorName1': 'Item_Mushroom_C'})

        } else {

            call GetPouchContent.GetCookResult4({'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName1': 'Item_Mushroom_B', 'MaterialActorName2': 'Item_Material_06'})

        }
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 15}) {
          case 0:
            Event103:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_DeathWestHatago_002:Com_Photo_07', 'IsAnimeDriven': True, 'ChangeMstxtForActor': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})
            Npc_GerudoCanyonHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
          case [1, 2]:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_20', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Value': True})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Cook_I_05_ReadyMade_Bundle_A'})

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_2'})
                    goto Event103
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_25', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Event202:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09'})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'IsWaitEnd': True, 'StepName': 'Step02'})
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_27', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event202
            }
        }
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_35', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
        goto Event202
    }
}

void TalkDirectly_Gerudo1() {
    goto Event29
}

void TalkDirectly_Gerudo1_Solo() {
    goto Event15
}

void Step02() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_32', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})

    call CameraSet_Gerudo()

    Event321:
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Reward_09', 'Index': -1}) {
        Event352:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Index': -1}) {
            Event337:
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Cook_I_05_ReadyMade_Bundle_A'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_2'})
                Event347:
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_37', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_36', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'}) {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True, 'ChallengeName': 'PhotoSpot_Challenge_09_2'})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'}) {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Event341:
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_25', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Event241:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event341
            }
        } else
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Value': True})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event337
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'}) {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Event342:
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_27', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event241
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'})
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event342
        }
    } else
    if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_Reward_09'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09'})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'PhotoSpot_Challenge_09_2_IsCompleted_Exp'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName2': 'Item_Material_06', 'MaterialActorName1': 'Item_Mushroom_C'})

        } else {

            call GetPouchContent.GetCookResult4({'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName1': 'Item_Mushroom_B', 'MaterialActorName2': 'Item_Material_06'})

        }
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 1})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'}) {
            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName2': 'Item_Material_06', 'MaterialActorName1': 'Item_Mushroom_C'})

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_Reward_09_2'})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 15}) {
                  case 0:
                    Event263:
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_37', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_36', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_09_2'})
                        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True, 'ChallengeName': 'PhotoSpot_Challenge_09_2'})
                    }
                  case [1, 2]:
                    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_20', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Index': -1}) {
                        Event255:
                        if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 5}) {

                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Cook_I_05_ReadyMade_Bundle_A'})

                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_2'})
                            goto Event263
                        } else {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_03'})
                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_25', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                            Event274:
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        }
                    } else
                    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Ore_A', 'Num': 1}) {

                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Ore_A'})

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'PhotoSpot_Challenge_GetRewardALL_1', 'Value': True})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_21', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event255
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'PhotoSpot_Challenge_GetReward1_02'})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_24', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_27', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event274
                    }
                }
            } else {
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_35', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'PhotoSpot_Challenge_09', 'StepName': 'Complete', 'IsWaitEnd': True})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PhotoSpot_Challenge_Clear', 'Index': -1, 'Value': 15}) {
              case 0:
                goto Event347
              case [1, 2]:
                Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_20', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event352
            }
        }
    } else {
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_33', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_35', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_31', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PhotoSpot_Challenge_Talk03', 'Index': -1, 'Value': False})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Step02_Direct_1() {
    Npc_GerudoCanyonHatago001.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/PhotoSpot_Challenge_01:Talk_32', 'IsNotBecomeSpeaker': True, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event321
}

void SelectFinish_AfterClear() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'PhotoChallenge_Link_02', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'GerudoHatago_1', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': False, 'ASCommand': 'Wait', 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    } {
        Npc_GerudoCanyonHatago001.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': 'PhotoChallenge', 'AnchorType': 22, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_GerudoCanyonHatago001.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'TwnObj_StableHostelFrame_A_01', 'InstanceName': 'GerudoHatago_1', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.1899999976158142, 0.0, 4.869999885559082], 'AtVector': [0.03999999910593033, -0.07000000029802322, 0.9800000190734863], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'TwnObj_StableHostelFrame_A_01', 'Actor1InstanceName': 'GerudoHatago_1', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}
