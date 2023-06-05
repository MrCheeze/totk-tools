-------- EventFlow: Npc_Kakariko008 --------

Actor: Npc_Kakariko008
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventTriggerSetHaveTalked', 'EventTriggerRequestLookAtTheFront']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventStartSound', 'EventTriggerStopInGameBgm', 'EventTriggerStartInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventResetGimmick', 'EventTriggerRequestAutoSave', 'EventClearActorsAroundAnchor']
queries: ['EventQueryRandomChoice2', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToNearAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerUnequip', 'EventPlayerTalk', 'EventTriggerPlayerRequestKeepLifting']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'UseEventModelAnime': 'Work/Model/Event/GetAngry_PlumGarden/GetAngry_PlumGarden_Link/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/GetAngry_PlumGarden.root.as', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Umii_Kakariko_Scholar_C
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventPlayAS', 'EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventTalk']
queries: ['EventQueryAIScheduleCheckActorAction', 'EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_Kokko_B2[Event_Angry]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerSetCctForwardSpeedZero']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_Kokko_B2[Event_Angry_Sub01]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetCctForwardSpeedZero', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Animal_Kokko_B2[Event_Angry_Sub02]
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerSetCctForwardSpeedZero', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    if !Npc_Kakariko008.EventQueryHaveTalked() {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
            if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

                call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_Kakariko008', 'Spearker2ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'Actor2': ActorIdentifier(name="Npc_Umii_Kakariko_Scholar_C"), 'Actor1': ActorIdentifier(name="Npc_Kakariko008"), 'Spearker1InstanceName': '', 'Spearker2InstanceName': ''})

                Event55:
                if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag()
                && !Npc_Umii_Kakariko_Scholar_C.EventQueryIsOnRecentTalkFlag() {
                    Npc_Umii_Kakariko_Scholar_C.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_38', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Kakariko008.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_39', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Kakariko008.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_35', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Umii_Kakariko_Scholar_C.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                    Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GetAngry_PlumGarden_Return'}) {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_52', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                    call Second()

                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_47', 'IsNotOpenIfSkipedMostRecent': False})
                } else
                if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_48', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_47', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_19', 'IsNotOpenIfSkipedMostRecent': False})
                    Event99:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                        call Second()

                    } else {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_47', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {

                    call Greeting()

                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_17', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event99
                }
            } else
            if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_19', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                    call Second()

                } else {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_48', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_Kakariko008.EventTriggerRequestLookAtTheFront()

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_21', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_Kakariko008.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})

                call Greeting()

                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_17', 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                    call Second()

                } else {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_47', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
          case 2:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag() {
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1, 4, 5]:
                    Event149:
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_24', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                        call Second()

                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                            Event80:
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_45', 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Event78:
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_43', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                        goto Event80
                    } else {
                        goto Event78
                    }
                  case [2, 3, 6, 7, 8]:
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_55', 'ChoiceCancelNo': 1, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event149
                }
            } else {

                call Greeting()

                goto Event149
            }
          case 10:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kakariko008_IsComeHome', 'Index': -1}) {
                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_22', 'IsNotOpenIfSkipedMostRecent': False})
            } else
            if !Npc_Kakariko008.EventQueryIsOnRecentTalkFlag() {
                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_34', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                Event68:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})

                    call Second()

                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                        Event73:
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_42', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_44', 'IsNotOpenIfSkipedMostRecent': False})
                        Event70:
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_43', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                    goto Event73
                } else {
                    goto Event70
                }
            } else {

                call Greeting()

                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_04', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event68
            }
          case 11:
            Event8:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_16', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13]:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            Event64:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_30', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko008_Talked_PlumTree', 'Index': -1, 'Value': True})
            } else {
                Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_31', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event64
          case 3:
            Npc_Kakariko008.EventTriggerRequestLookAtTheFront()

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_21', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_Kakariko008.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event64
        }
      case 11:
        goto Event8
    }
}

void Near() {
    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() == 3 {
        if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
            Npc_Kakariko008.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Kakariko008:Balloon02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_Kakariko008.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_Kakariko008:Balloon01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void GetAngry_PlumGarden() {

    call Common.AirStartUP_Player()


    call StopBGM_ShortFade()


    call AngryBirds()

    if !Npc_Kakariko008.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        Event441:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call SE_Kokko_GetAngry()


        call RemoveObstacles()

        if !Npc_Kakariko008.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GetAngry_PlumGarden_Return'})
            if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

                call FadeWarp_Mero_Corinne()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call StartBGM_WithFade()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                call toTalk_Mero_Coline()

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko008_angry'}) {
                    Event35:
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_49', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_50', 'IsNotOpenIfSkipedMostRecent': False})

                    call StopBGM_NormalFade()

                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Utouto_Loop', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    switch EventWorldManagerController.EventQueryTimeDivision() {
                      case [0, 1]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
                        Event338:
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_51', 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_54', 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'Utouto_Getup', 'IsAllSlot': True, 'ClothWarpMode': 0})

                            call StartBGM_NoFade()

                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                        }

                        Event322:
                        if !Npc_Kakariko008.EventQueryHaveTalked() {
                            Event350:
                            GameSystemActor.EventTriggerRequestAutoSave()
                        } else {
                            Npc_Kakariko008.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_53', 'IsNotOpenIfSkipedMostRecent': False})

                            call choice()

                            goto Event350
                        }
                      case [2, 3]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
                        goto Event338
                      case [4, 5]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 7})
                        goto Event338
                      case [6, 7]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 7})
                        goto Event338
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Umii_Kakariko_Scholar_angry'}) {
                    goto Event35
                } else {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_20', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko008_angry', 'Index': -1, 'Value': True})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Umii_Kakariko_Scholar_angry'})
                    goto Event322
                }
            } else {

                call FadeWarp_Mero()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call StartBGM_WithFade()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                call toTalkMero()

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko008_angry'}) {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    fork {
                        EventSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
                        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    } {
                        if !GameSystemActor.EventQueryRandomChoice2() {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_14', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_15', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    }

                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_49', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_50', 'IsNotOpenIfSkipedMostRecent': False})

                    call StopBGM_NormalFade()

                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Utouto_Loop', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    switch EventWorldManagerController.EventQueryTimeDivision() {
                      case [0, 1]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
                        Event237:
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 140})
                        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_51', 'IsNotOpenIfSkipedMostRecent': False})

                        fork {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_54', 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'Utouto_Getup', 'IsAllSlot': True, 'ClothWarpMode': 0})

                            call StartBGM_NoFade()

                            Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                        }

                        goto Event322
                      case [2, 3]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
                        goto Event237
                      case [4, 5]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 7})
                        goto Event237
                      case [6, 7]:
                        EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 7})
                        goto Event237
                    }
                } else {
                    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_20', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko008_angry', 'Index': -1, 'Value': True})
                    goto Event350
                }
            }
        } else
        if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

            call FadeWarp_Corinne()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call StartBGM_WithFade()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
            Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})

            call toTalkColine()

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Umii_Kakariko_Scholar_angry'}) {
                Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Talk01_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event350
            } else {
                Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Talk01_20', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Umii_Kakariko_Scholar_angry'})
                goto Event350
            }
        } else {

            call FadeWarp_Alone()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call StartBGM_WithFade()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
            goto Event350
        }
    } else
    if Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) in [0, 1] {
        goto Event441
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5, 6, 7]:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_29', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void PairTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_Umii_Kakariko_Scholar_C"), 'Actor2': ActorIdentifier(name="Npc_Kakariko008"), 'Spearker1ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'Spearker2ActorName': 'Npc_Kakariko008'})

    goto Event55
}

void choice() {
    goto Event64
}

void Second() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kakariko008_Talked_PlumTree', 'Index': -1}) {
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Talk01_46', 'IsNotOpenIfSkipedMostRecent': False})
    }
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko008_Talked_PlumTree', 'Index': -1, 'Value': True})
}

void Npc_Kakariko008_ReturnHome() {

    call OwnerOfHouseSuprised.Init_OwnerOfHouseSurprised({'Npc': ActorIdentifier(name="Npc_Kakariko008")})


    fork {
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Notice', 'MessageId': 'EventFlowMsg/Npc_Kakariko008:ReturnHome_01', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call OwnerOfHouseSuprised.Staging_OwnerOfHouseSurprised({'InstanceName': '', 'Npc': 'Npc_Kakariko008'})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kakariko008_ReturnHome_Talk01'}) {
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:ReturnHome_03', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kakariko008_ReturnHome_Talk01'})
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:ReturnHome_02', 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_Kakariko008.EventQueryHaveTalked() {
            Npc_Kakariko008.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
    }
}

void Item_Plant_R_Kakariko008_Angry() {

    call Common.AirStartUP_Player()

    if !Npc_Kakariko008.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        switch Npc_Umii_Kakariko_Scholar_C.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 9]:
            Event44:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AboveThePlumGarden'}) {

                call StopBGM_ShortFade()


                call AngryBirds()

                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call SE_Kokko_GetAngry()


                call RemoveObstacles()

                if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

                    call FadeWarp_Mero_Corinne()

                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    call StartBGM_WithFade()

                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                    call toTalk_Mero_Coline()

                    Event366:
                    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk03'}) {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Item_Plant_R_Kakariko008_Angry_02', 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Item_Plant_R_Kakariko008_Angry_00', 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk03'})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk01', 'Index': -1}) {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Item_Plant_R_Kakariko008_Angry_02', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Item_Plant_R_Kakariko008_Angry', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk01', 'Index': -1, 'Value': True})
                    }
                } else {

                    call FadeWarp_Mero()

                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    call StartBGM_WithFade()

                    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                    call toTalkMero()

                    goto Event366
                }
            } else
            if Player.EventQueryCheckPlayerState({'State': 5}) {

                call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Kakariko008")})

            }
            goto Event366
          case 8:
            Event198:
            if Player.EventQueryCheckPlayerState({'State': 5}) {

                call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Kakariko008")})

            }
            Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:Item_Plant_R_Kakariko008_Angry_03', 'EndDialogOption': 3, 'IsCloseDialog': True, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !Player.EventQueryCheckPlayerState({'State': 5}) {
                Event32:
                if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {

                    call FadeWarp_Mero_Corinne()

                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                    call toTalk_Mero_Coline()

                    Event202:
                    Player.EventPlayerUnequip({'IsWaitEnd': True})
                    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
                    Event297:
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    goto Event366
                } else {

                    call FadeWarp_Mero()

                    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})

                    call toTalkMero()

                    goto Event202
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AboveThePlumGarden'}) {

                call RemoveObstacles()

                goto Event32
            } else {
                GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})
                Npc_Kakariko008.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                goto Event297
            }
        }
    } else
    if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
        switch Npc_Umii_Kakariko_Scholar_C.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 9]:
            Event179:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AboveThePlumGarden'}) {

                call StopBGM_ShortFade()


                call AngryBirds()

                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call SE_Kokko_GetAngry()


                call RemoveObstacles()


                call FadeWarp_Corinne()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                call StartBGM_WithFade()

                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
                Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})

                call toTalkColine()

                Event362:
                if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Kakariko008', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk04'}) {
                        Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Item_Plant_R_Kakariko008_Angry_07', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Item_Plant_R_Kakariko008_Angry_06', 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk04'})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk02', 'Index': -1}) {
                    Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Item_Plant_R_Kakariko008_Angry_02', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Item_Plant_R_Kakariko008_Angry', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Item_Plant_R_Kakariko008_Angry_Talk02', 'Index': -1, 'Value': True})
                }
            } else
            if Player.EventQueryCheckPlayerState({'State': 5}) {

                call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Umii_Kakariko_Scholar_C")})

            }
            goto Event362
          case 8:
            Event201:
            if Player.EventQueryCheckPlayerState({'State': 5}) {

                call InitTalk.InitTalkOnEvent({'Arg_Turn': 3, 'Self': ActorIdentifier(name="Npc_Umii_Kakariko_Scholar_C")})

            }
            Npc_Umii_Kakariko_Scholar_C.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Umii_Kakariko_Scholar_C:Item_Plant_R_Kakariko008_Angry_03', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !Player.EventQueryCheckPlayerState({'State': 5}) {
                Event42:

                call FadeWarp_Corinne()

                Player.EventPlayerTurnAndLook({'Target': 3, 'InstanceName': '', 'TurnFaceControlType': 1, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Umii_Kakariko_Scholar_C', 'KeepTalkWait': True, 'OffsetBase': 0})

                call toTalkColine()

                Player.EventPlayerUnequip({'IsWaitEnd': True})
                Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
                Event304:
                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                goto Event362
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AboveThePlumGarden'}) {

                call RemoveObstacles()

                goto Event42
            } else {
                GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})
                Npc_Umii_Kakariko_Scholar_C.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                goto Event304
            }
        }
    } else {
        Event451:
        EventCamera.EventTriggerCameraSavePoint()

        call StopBGM_ShortFade()


        call AngryBirds()

        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call SE_Kokko_GetAngry()

            Event145:

            call FadeWarp_Alone()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Down', 'IsAllSlot': True, 'ClothWarpMode': 0})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call StartBGM_WithFade()

            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'Standup', 'IsAllSlot': True, 'ClothWarpMode': 0})
            Event449:
            GameSystemActor.EventTriggerRequestAutoSave()
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'AboveThePlumGarden'}) {

            call SE_Kokko_GetAngry()


            call RemoveObstacles()

            goto Event145
        } else {
            GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})

            call kokko_wait()

            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call StartBGM_NoFade()

            goto Event449
        }
    }
}

void toGetupCamera() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTotargetPosType': 0, 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [0.029999999329447746, 2.4000000953674316, -5.789999961853027], 'AtVector': [0.019999999552965164, 1.7999999523162842, -0.07999999821186066], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void toTalkColine() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.25, 2.0199999809265137, -2.200000047683716], 'AtVector': [-0.009999999776482582, 1.2000000476837158, 0.5899999737739563], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void toTalkMero() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-3.2200000286102295, 1.909999966621399, -2.2699999809265137], 'AtVector': [-0.009999999776482582, 1.2000000476837158, 0.5899999737739563], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void toTalk_Mero_Coline() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-2.390000104904175, 1.7999999523162842, -3.009999990463257], 'AtVector': [-0.009999999776482582, 1.2100000381469727, 0.5899999737739563], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
}

void kokko_wait() {

    fork {
        Animal_Kokko_B2[Event_Angry].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait_Event'})
    } {
        Animal_Kokko_B2[Event_Angry_Sub01].EventWait({'IsWaitEnd': True, 'Frames': 1})
        Animal_Kokko_B2[Event_Angry_Sub01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait_Event'})
    } {
        Animal_Kokko_B2[Event_Angry_Sub02].EventWait({'IsWaitEnd': True, 'Frames': 2})
        Animal_Kokko_B2[Event_Angry_Sub02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Wait_Event'})
    }

}

void PlumGarden_Water() {
    Player.EventTriggerPlayerRequestKeepLifting()

    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_Kakariko008")})

    Npc_Kakariko008.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:PlumGarden_Kakariko008_Water_01', 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventTriggerPlayerLookAtObject({'WorldPos': [-785.1300048828125, -363.42999267578125, 433.4800109863281], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'ActorName': 'Npc_Kakariko008'})
    Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:PlumGarden_Kakariko008_Water_03', 'IsNotOpenIfSkipedMostRecent': False})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:PlumGarden_Kakariko008_Water_04', 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_Kakariko008.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ASName': '', 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko008:PlumGarden_Kakariko008_Water_05', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void FadeWarp_Mero_Corinne() {

    call CheckFire()


    fork {
        Player.EventPlayerWarpToNearAnchor({'InstanceName': 'DemoPlum', 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_Kakariko008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Kakariko008.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_Kakariko008.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Kakariko008.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_Umii_Kakariko_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Umii_Kakariko_Scholar_C.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_Umii_Kakariko_Scholar_C.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Umii_Kakariko_Scholar_C.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {

        call kokko_wait()

    }

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call toGetupCamera()


    fork {
        Npc_Kakariko008.EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
    } {
        Npc_Umii_Kakariko_Scholar_C.EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
    }

}

void FadeWarp_Mero() {

    call CheckFire()


    fork {
        Player.EventPlayerWarpToNearAnchor({'InstanceName': 'DemoPlum', 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_Kakariko008.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Kakariko008.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_Kakariko008.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Kakariko008.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {

        call kokko_wait()

    }

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call toGetupCamera()

    Npc_Kakariko008.EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
}

void FadeWarp_Corinne() {

    call CheckFire()


    fork {
        Player.EventPlayerWarpToNearAnchor({'InstanceName': 'DemoPlum', 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'UseDemoWait': True})
        Player.EventTriggerPlayerRequestLookAtTheFrontLock()
    } {
        Npc_Umii_Kakariko_Scholar_C.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_Umii_Kakariko_Scholar_C.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ForceFadeInFrame': -1.0})
        Npc_Umii_Kakariko_Scholar_C.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 6, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Npc_Umii_Kakariko_Scholar_C.EventNPCTurnToTarget({'ActorName': 'Player', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {

        call kokko_wait()

    }

    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call toGetupCamera()

    Npc_Umii_Kakariko_Scholar_C.EventTriggerLookAtObject({'ActorName': 'Player', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
}

void FadeWarp_Alone() {

    call CheckFire()

    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'DemoPlum2', 'UseDemoWait': True})
    Player.EventTriggerPlayerRequestLookAtTheFrontLock()

    call kokko_wait()


    call toGetupCamera()

}

void CheckFire() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Plant_R_Kakariko008_Onfire'}) {
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': False, 'Option': 1})
    }
}

void AngryBirds() {
    Animal_Kokko_B2[Event_Angry].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CoccoAtack_Kokko_Angry_Feather'})

    fork {
        Animal_Kokko_B2[Event_Angry_Sub01].EventPlayAS({'ASName': 'Run', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Animal_Kokko_B2[Event_Angry_Sub02].EventPlayAS({'ASName': 'Run', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    } {
        Animal_Kokko_B2[Event_Angry].EventPlayAS({'ASName': 'Run', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0})
    }


    call Common.InitPlayState({'IsRidableGetOff': True, 'IsUnequip': True})

    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.5199999809265137, 2.0, 2.9549999237060547], 'AtVector': [0.0, 0.800000011920929, 0.699999988079071], 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 15, 'Actor1InstanceName': 'Event_Angry', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1ActorName': 'Animal_Kokko_B2', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})

    fork {

        fork {
            Animal_Kokko_B2[Event_Angry].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
            Animal_Kokko_B2[Event_Angry].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Angry', 'IsWaitEnd': False})
        } {
            Animal_Kokko_B2[Event_Angry_Sub01].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
            Animal_Kokko_B2[Event_Angry_Sub01].EventWait({'IsWaitEnd': True, 'Frames': 1})
            Animal_Kokko_B2[Event_Angry_Sub01].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Angry_Event'})
        } {
            Animal_Kokko_B2[Event_Angry_Sub02].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})
            Animal_Kokko_B2[Event_Angry_Sub02].EventWait({'IsWaitEnd': True, 'Frames': 2})
            Animal_Kokko_B2[Event_Angry_Sub02].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Angry_Event'})
        }

        Animal_Kokko_B2[Event_Angry].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'DmF_SY_CoccoAtack_Kokko_Angry_Feather', 'IsKill': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 35})
    } {
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
        Player.EventTriggerPlayerLookAtObject({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': 'Event_Angry', 'ActorName': 'Animal_Kokko_B2'})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

}

void StartBGM_WithFade() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': True, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void StartBGM_NoFade() {
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'IsControlSpotBgm': True})
}

void StopBGM_ShortFade() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'FadeType': 2, 'IsForceFadeTime': False})
}

void StopBGM_NormalFade() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 2, 'FadeType': 1, 'WithPlayableEvent': False, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}

void SE_Kokko_GetAngry() {
    SoundSystemActor.EventStartSound({'SLinkKey': 'Dm_Kokko_GetAngry', 'IsWaitEnd': True, 'TimeoutFrame': 0})
}

void RemoveObstacles() {
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'Radius': 10.0, 'Height': 5.0, 'AnchorInstanceName': 'PlumGarden_RemovePos', 'IsDeleteActor': True})
}

void Item_Plant_R_Kakariko008_Angry2() {

    call Common.AirStartUP_Player()

    if !Npc_Kakariko008.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        switch Npc_Kakariko008.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 9]:
            goto Event44
          case 8:
            goto Event198
        }
    } else
    if !Npc_Umii_Kakariko_Scholar_C.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
        switch Npc_Kakariko008.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 9]:
            goto Event179
          case 8:
            goto Event201
        }
    } else {
        goto Event451
    }
}
