-------- EventFlow: HorseInnChallenge003 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp008
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventClearActorsAroundAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Ready_Npc_FirstColony004_HorseInn003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_BaseCamp008.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Event1:
            Npc_BaseCamp008.EventTalk({'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_1000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:

                call Attention_RecycleBox()

                Event5:
                EventCamera.EventTriggerCameraSavePoint()
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3794.0400390625, 199.89999389648438, -1567.06005859375], 'AtVector': [3798.260009765625, 199.36000061035156, -1565.3299560546875], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_1001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HorseInnChallenge003', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'CupsuleDrop', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True})
              case [2, 3, 6, 7, 8]:

                call Attention_RecycleBox()

                goto Event5
            }
          case [2, 3, 6, 7, 8]:

            call RainMovingTalk()

        }
    } else {
        goto Event1
    }
}

void Ready_Npc_FirstColony004_HorseInn003_Near() {
    if !Npc_BaseCamp008.EventQueryAIScheduleCheckActorAction14() {
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
            Npc_BaseCamp008.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0001', 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        Npc_BaseCamp008.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0001', 'IsChallenge': True, 'IsIgnoreDisplayKeepDepth': False, 'DisplayFrame': 300, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void DropCapsule() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge003_IsCompleted_Exp'})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge003_TalkBranch1', 'Index': -1}) {
        EventCamera.EventDoNothing({'IsWaitEnd': True})
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        Npc_BaseCamp008.EventTriggerBecomeSpeaker()
        Npc_BaseCamp008.EventTriggerParticipateEvent()
        Npc_BaseCamp008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
        Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_BaseCamp008', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'MoveTime': 30, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [-0.33000001311302185, 2.190000057220459, 3.5299999713897705], 'AtVector': [0.10000000149011612, 0.9800000190734863, -0.7200000286102295], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_BaseCamp008', 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2000', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventClearActorsAroundAnchor({'AnchorInstanceName': 'HorseInn003', 'Radius': 1.0, 'IsWaitEnd': True, 'Height': 3.0, 'AnchorActorName': 'DestinationAnchor', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
        Npc_BaseCamp008.EventAIScheduleWarpToAnchor({'InstanceName': 'HorseInn003', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'AnchorType': 22, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_BaseCamp008.EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        Npc_BaseCamp008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_BaseCamp008', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1InstanceName': '', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [5.699999809265137, 2.8499999046325684, 1.7699999809265137], 'AtVector': [-0.009999999776482582, 1.350000023841858, 1.6799999475479126], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge003_IsAfter_Ready_Exp'}) {
            Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2004', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2001', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_PlantGet_R'}) {
            Event23:

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_PlantGet_R'})

            Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInnChallenge003_NpcClearDelete', 'Index': -1, 'Value': True})
            Player.EventTriggerPlayerRequestLookAtTheFrontLock()
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Wait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HorseInnChallenge003', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            Npc_BaseCamp008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        } else {
            Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2008', 'NotPlayLipSyncAnim': False, 'ASName': 'Talk', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInnChallenge003_TalkBranch1'})
            if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HorseInnChallenge003_IsAfter_Ready_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HorseInnChallenge003', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'CupsuleDrop', 'IsWaitEnd': True})
            }
            Npc_BaseCamp008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
        }
    }
}

void CupsuleDrop_Npc_FirstColony004_HorseInn003_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_BaseCamp008.EventQueryAIScheduleCheckActorAction14() {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Event77:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge003_TalkBranch1'}) {
                Npc_BaseCamp008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
                if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_PlantGet_R'}) {
                    Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call ClearEvent()

                    Event28:
                    Npc_BaseCamp008.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': False})
                } else {
                    Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event28
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInnChallenge003_DropCapsule_isFirstTalk', 'Index': -1}) {
                if !Npc_BaseCamp008.EventQueryIsOnRecentTalkFlag() {
                    Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_1002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_1002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call WeatherTalk()

                }
            } else {
                Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_1002', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call WeatherTalk()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HorseInnChallenge003_DropCapsule_isFirstTalk'})
            }
          case [2, 3, 6, 7, 8]:

            call RainMovingTalk()

        }
    } else
    goto Event77
}

void Attention_RecycleBox() {

    fork {
        Npc_BaseCamp008.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'WorldPos': [3807.6201171875, 202.0, -1561.5400390625]})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0, 'WorldPos': [3807.6201171875, 202.0, -1561.5400390625]})
    }

}

void CupsuleDrop_Npc_BaseCamp008_Near() {
    if !Npc_BaseCamp008.EventQueryAIScheduleCheckActorAction14() {
        if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [0, 1] {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge003_TalkBranch1'}) {
                if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_PlantGet_R'}) {
                    Npc_BaseCamp008.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_BaseCamp008.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'DisplayFrame': 90})
                }
            } else {
                Npc_BaseCamp008.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0002', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInnChallenge003_TalkBranch1'}) {
        if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Item_PlantGet_R'}) {
            Npc_BaseCamp008.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': True, 'DisplayFrame': 300, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_BaseCamp008.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False, 'DisplayFrame': 90})
        }
    } else {
        Npc_BaseCamp008.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/HorseInnChallenge003:Near_0002', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void RainMovingTalk() {
    Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void WeatherTalk() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [2, 3, 8]:
        Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_BaseCamp008.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HorseInnChallenge003:Talk_2007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ClearEvent() {
    goto Event23
}
