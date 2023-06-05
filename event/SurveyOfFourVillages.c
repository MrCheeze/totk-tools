-------- EventFlow: SurveyOfFourVillages --------

Actor: Npc_AncientDoctor[WatchTowerPurah]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Tool': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron033[BaseCamp]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis007[BaseCamp]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent', 'EventTriggerLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain009[BaseCamp]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Zora004[BaseCamp]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventTriggerSelectChallenge', 'EventSwitchVisiblePlacementHyruleCastle', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMinusMenu', 'EventWait', 'EventEventFadeIn', 'EventShowMap', 'EventEventFadeOut', 'EventCloseTelescopeUI']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryTalkMainChallengeComplate', 'EventQueryOrderedBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void 2ndSageClear_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        Npc_oasis007[BaseCamp].EventTriggerParticipateEvent()
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        Npc_Zora004[BaseCamp].EventTriggerParticipateEvent()
    }

    call SageClear_Praise()


    call SageClear_Praise2()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Purah_After1', 'Index': -1}) {
        if !Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk20_1', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event32:
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk20', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call 2ndsageClear_FourVillage()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_30', 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Info()

            }

            call Seeya()

          case 1:

            call Info()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_35', 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
                }

                call 2ndsageClear_FourVillage()

                Event60:

                call Seeya()

            } else {
                goto Event60
            }
          case 2:

            call Seeya()

        }
    } else {

        call SageClear_Praise3()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BaseCamp_Purah_After1', 'Index': -1, 'Value': True})
        goto Event32
    }
}

void 3rdSageClear_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        Npc_oasis007[BaseCamp].EventTriggerParticipateEvent()
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        Npc_Zora004[BaseCamp].EventTriggerParticipateEvent()
    }

    call SageClear_Praise()


    call SageClear_Praise2()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BaseCamp_Purah_After2'}) {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk44', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event90:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call 3rdsageClear_FourVillage()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_30', 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Info()

            }

            call Seeya()

          case 1:

            call Info()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_35', 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
                }

                call 3rdsageClear_FourVillage()

                Event105:

                call Seeya()

            } else {
                goto Event105
            }
          case 2:

            call Seeya()

        }
    } else {

        call SageClear_Praise3()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_Purah_After2'})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk20', 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event90
    }
}

void 4thSageClear_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        Npc_oasis007[BaseCamp].EventTriggerParticipateEvent()
    }
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        Npc_Zora004[BaseCamp].EventTriggerParticipateEvent()
    }

    call SageClear_Praise()


    call SageClear_Praise2()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BaseCamp_Purah_After3'}) {
        if !Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 3, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk23_1', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event88:
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 7, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 20, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk23', 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call 4thsageClear_FourVillage()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_37', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Info()

            }

            call Seeya()

          case 1:

            call Info()

            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_38', 'ChoiceLabel1': 3, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
                }

                call 4thsageClear_FourVillage()

                Event169:

                call Seeya()

            } else {
                goto Event169
            }
          case 2:

            call Seeya()

        }
    } else {

        call SageClear_Praise3()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_Purah_After3'})
        goto Event88
    }
}

void ReturnBCAfter4Sage_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38', 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call SageClear_Praise()


    call SageClear_Praise3()

    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor[WatchTowerPurah].EventTriggerLookAtObject({'Target': 0, 'WorldPos': [-247.38999938964844, 163.81900024414062, -249.9080047607422], 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': True, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk53', 'IsNotOpenIfSkipedMostRecent': False})
    Event395:
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'Switch': False, 'IsWaitEnd': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_BZ_0002', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventCloseTelescopeUI({'IsWaitEnd': True, 'DirectClose': True})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': False, 'IsNoPlayAnime': True})
    ChallengeSystemActor.EventSwitchVisiblePlacementHyruleCastle({'IsWaitEnd': True, 'Switch': True})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'IsWaitEnd': False, 'EnableCameraAlpha': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_AncientDoctor[WatchTowerPurah].EventNPCTurnToTarget({'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'FaceControlType': 1, 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientDoctor[WatchTowerPurah].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
    Npc_AncientDoctor[WatchTowerPurah].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Talk_Normal'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastleIncident_ToLand_4SageClear'}) {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player', 'PosVector': [-1.649999976158142, 1.7300000190734863, -1.9800000190734863], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor2InstanceName': 'WatchTowerPurah', 'AtVectorSetType': 4, 'AtVector': [-0.6299999952316284, 1.1299999952316284, 0.05000000074505806], 'Actor2ActorName': 'Npc_AncientDoctor', 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        Npc_AncientDoctor[WatchTowerPurah].EventTriggerBecomeSpeaker()
        Event330:
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Normal_L', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HyruleCastleIncident_ToLand_4SageClear'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Normal', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_16', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_12', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Normal', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_12_02', 'ASName': 'Talk_Normal_L', 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_13', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkYes', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk38_14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BZ_Chase_State_Ninomaru'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BZ_Chase_State_Square'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'BZ_Chase_SubState_00'})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsCompleted_Exp'}) {
            Event476:
            Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'HyruleCastleIncident', 'StepName': 'ResearchCastle', 'IsWaitEnd': True})
        } else {
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': True})
            GameSystemActor.EventWait({'Frames': 150, 'IsWaitEnd': True})
            goto Event476
        }
    } else {
        goto Event330
    }
}

void 2ndSageClear_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Goron1_First_PosChange'}) {

        call Npc_Goron033.Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_Goron033[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron033_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Goron033[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron033_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BaseCamp_Goron1_First', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Goron1_First_NotChangePos'})
    }
}

void 2ndSageClear_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Gerudo_First_PosChange'}) {

        call Npc_oasis007.HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        Npc_AncientDoctor[WatchTowerPurah].EventTriggerParticipateEvent()
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Gerudo_First', 'Index': -1}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_oasis007[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_oasis007_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Event14:
                Npc_oasis007[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_oasis007_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BaseCamp_Gerudo_First', 'Index': -1, 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_Gerudo_NotChangePos'})
        } else {
            Npc_oasis007[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_oasis007_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event14
        }
    }
}

void 3rdSageClear_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk()

}

void 3rdSageClear_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk()

}

void 3rdSageClear_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk()

}

void 3rdSageClear_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk()

}

void 4thSageClear_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk()

}

void 4thSageClear_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk()

}

void 4thSageClear_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk()

}

void 4thSageClear_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk() {

    call 2ndSageClear_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk()

}

void ReturnBCAfter4Sage_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Goron1_First', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Goron033_TalkFirst_BlackZeruda', 'Index': -1, 'Value': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_Goron033[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron033_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Goron033[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron033_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReturnBCAfter4Sage_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Rito_First', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HighMountain009_TalkFirst_BlackZeruda', 'Index': -1, 'Value': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain009[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_HighMountain009_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HighMountain009[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_HighMountain009_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReturnBCAfter4Sage_Npc_oasis007_BaseCamp_SageOfGerudo_IsCompleted_Exp_Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Gerudo_First', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'oasis007_TalkFirst_BlackZeruda', 'Index': -1, 'Value': True})
    }

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_oasis007[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_oasis007_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_oasis007[BaseCamp].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_oasis007[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_oasis007_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void ReturnBCAfter4Sage_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Zora_First', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Zora004_TalkFirst_BlackZeruda', 'Index': -1, 'Value': True})
    }

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_Zora004[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_ZoraFencer_08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void ReturnBCAfter4Sage_Npc_Goron011_Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Goron2_First', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Goron011_TalkFirst_BlackZeruda'})
    }

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron011_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void 2ndSageClear_Npc_Goron011_BaseCamp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BaseCamp_Goron2_First_PosChange'}) {

        call Npc_Goron011.Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 34, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron011_03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsPlayASAllSlot': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 34, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron011_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 34, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_Goron011_02', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_Goron2_First'})
        }
    }
}

void 3rdSageClear_Npc_Goron011_BaseCamp_Talk() {

    call 2ndSageClear_Npc_Goron011_BaseCamp_Talk()

}

void 4thSageClear_Npc_Goron011_BaseCamp_Talk() {

    call 2ndSageClear_Npc_Goron011_BaseCamp_Talk()

}

void 2ndSageClear_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BaseCamp_Rito_First_PosChange'}) {

        call Npc_HighMountain009.HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_HighMountain009[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_HighMountain009_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_HighMountain009[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_HighMountain009_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BaseCamp_Rito_First', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_Rito_First_NotChangePos'})
    }
}

void 2ndSageClear_Npc_ZoraFencer_BaseCamp_SageOfZora_IsCompleted_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BaseCamp_Zora_First_PosChange'}) {

        call Npc_Zora004.HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp_Talk()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_Laboratory_OnTheDesk', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 16, 'ChoiceLabel2': 17, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/HyruleCastleIncident:talk_ZoraFencer_OnTheDesk', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTriggerParticipateEvent()
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_Zora004[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_ZoraFencer_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Zora004[BaseCamp].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel4': 7, 'ChoiceLabel3': 6, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_ZoraFencer_01', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BaseCamp_Zora_First', 'Index': -1, 'Value': True})
        }
    }
}

void 1stSageClear_Npc_AncientDoctor_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'ChoiceLabel2': 20, 'ChoiceNumber': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_16', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'ChoiceLabel2': 20, 'ChoiceNumber': 3, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
        }

        call 1stsageClear_FourVillage()

        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel3': 24, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_30', 'ChoiceNumber': 2, 'ChoiceLabel1': 20, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Info()

        }

        call Seeya()

      case 1:

        call Info()

        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_29', 'ChoiceNumber': 2, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel3': 24, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 24, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_12', 'IsNotOpenIfSkipedMostRecent': False})
            }

            call 1stsageClear_FourVillage()

            Event84:

            call Seeya()

        } else {
            goto Event84
        }
      case 2:

        call Seeya()

    }
}

void Info() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked.Npc_Kakariko002', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IchikaraChallenge01_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWithSensors_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_34', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_33', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event188:
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_28', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_31', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_32', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event188
        }
    } else {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event188
    }
}

void Seeya() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetCamera_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetCamera_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DeepHoleSurvey2_IsAfter_Ready_Exp'}) {
                Event157:
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_36', 'ASName': 'Talk_Special', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event393:

                call Npc_AncientDoctor.Reaction()

                Npc_AncientDoctor[WatchTowerPurah].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BaseCamp_ReturnedAway_01', 'Index': -1}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk36', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                goto Event157
            }
            goto Event393
        } else {
            goto Event157
        }
    } else {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk25', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk26', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event393
    }
}

void SageClear_Praise() {
    Event212:
    switch Npc_EventStarter.EventQueryTalkMainChallengeComplate() {
      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_TalkRitoChallengeComplete'})
        Event259:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'Num_ComplimentingChallenges'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        goto Event212
      case 2:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_TalkGoronChallengeComplete'})
        goto Event259
      case 3:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_TalkZoraChallengeComplete'})
        goto Event259
      case 4:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'BaseCamp_TalkGerudoChallengeComplete'})
        goto Event259
    }
}

void SageClear_Recommend() {
    switch Npc_EventStarter.EventQueryOrderedBranch({'EnableSaveResultGameData': False, 'SaveResultGameDataName': '', 'SaveResultGameDataName2': '', 'Key': 'SurveyOfFourVillages_Recommend', 'IsChoiceRandom': False}) {
      case 0:

        call SageClear_UnclearPlace()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
            Event262:
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk49', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            fork {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk16', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
                  case 0:
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'EventLightSpot1', 'ChallengeName': 'SurveyOfFourVillages'})
                    Event264:
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                  case [1, 2]:
                    goto Event264
                }
            }

            goto Event262
        }
      case 1:

        call SageClear_UnclearPlace()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Event268:
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
        } else {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk13', 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
                  case 0:
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'EventLightSpot2', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages'})
                    Event270:
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                  case [1, 2]:
                    goto Event270
                }
            }

            goto Event268
        }
      case 2:

        call SageClear_UnclearPlace()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Event273:
            GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
        } else {
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

            fork {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            } {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
                  case 0:
                    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'EventLightSpot3', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages'})
                    Event275:
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                  case [1, 2]:
                    goto Event275
                }
            }

            goto Event273
        }
      case 3:

        call SageClear_UnclearPlace()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        fork {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk15', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NumOfSageClear', 'Value': 3, 'Index': -1}) {
              case 0:
                ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': 'EventLightSpot4', 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SurveyOfFourVillages'})
                Event280:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
              case [1, 2]:
                goto Event280
            }
        }

        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk33', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SageClear_UnclearPlace() {
    ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SurveyOfFourVillages', 'IsRestoreWhenEventEnd': False})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventShowMap({'CenterPos': [0.0, 0.0, 0.0], 'ZoomLevel': 3, 'InShowIcon': True, 'IsShowPlayerNavi': True, 'IsShowChallenge': True, 'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})

    fork {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk60', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk59', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk56', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk58', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk54', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk52', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk19', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk57', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk51', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk50', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk34', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk42', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk40', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk41', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    }

}

void SageClear_Praise2() {
    if Npc_AncientDoctor[WatchTowerPurah].EventQueryIsOnRecentTalkFlag()
    && GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Num_ComplimentingChallenges', 'Value': 1, 'Index': -1}) in [1, 2] {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk35', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SageClear_Praise3() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWind_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk22', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk28', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk07', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk30', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk12', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk06', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk31', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk17', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk18', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk08', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfZora_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk21', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfGerudo_IsCompleted_Exp'}) {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant001_Talk() {

    call Npc_BaseCamp_AncientAssistant001.ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant001_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia006_Talk() {

    call Npc_BaseCampSoldier_Hylia006.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia006_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia007_Talk() {

    call Npc_BaseCampSoldier_Hylia007.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia007_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant002_Talk() {

    call Npc_BaseCamp_AncientAssistant002.ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant002_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia001_Talk() {

    call Npc_BaseCampSoldier_Hylia001.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia001_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo002_Talk() {

    call Npc_BaseCamp_Gerudo002.ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo002_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo001_Talk() {

    call Npc_BaseCamp_Gerudo001.ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo001_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia002_Talk() {

    call Npc_BaseCampSoldier_Hylia002.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia002_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia013_Talk() {

    call Npc_BaseCampSoldier_Hylia013.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia013_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Zora001_Talk() {

    call Npc_BaseCamp_Zora001.ReturnBCAfter4Sage_Npc_BaseCamp_Zora001_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Zora002_Talk() {

    call Npc_BaseCamp_Zora002.ReturnBCAfter4Sage_Npc_BaseCamp_Zora002_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Zora003_Talk() {

    call Npc_BaseCamp_Zora003.ReturnBCAfter4Sage_Npc_BaseCamp_Zora003_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Zora004_Talk() {

    call Npc_BaseCamp_Zora004.ReturnBCAfter4Sage_Npc_BaseCamp_Zora003_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia003_Talk() {

    call Npc_BaseCampSoldier_Hylia003.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia003_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo004_Talk() {

    call Npc_BaseCamp_Gerudo004.ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo004_Talk()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo006_Talk() {

    call Npc_BaseCamp_Gerudo006.ReturnBCAfter4Sage_Npc_BaseCamp_Gerudo006_Talk()

}

void 1stsageClear_FourVillage() {
    ChallengeSystemActor.EventTriggerSelectChallenge({'ChallengeName': 'SurveyOfFourVillages', 'IsRestoreWhenEventEnd': False})
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk39', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventShowMap({'CenterPos': [0.0, 0.0, 0.0], 'ZoomLevel': 3, 'InShowIcon': True, 'IsShowPlayerNavi': True, 'IsShowChallenge': True, 'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    }

    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk_3_17', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void 2ndsageClear_FourVillage() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk39', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})

    call SageClear_Recommend()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': '2ndSageClear', 'ChallengeName': 'SurveyOfFourVillages', 'IsIgnoreChallengeProgressUI': True})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void 3rdsageClear_FourVillage() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk39', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})

    call SageClear_Recommend()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': '3rdSageClear', 'ChallengeName': 'SurveyOfFourVillages', 'IsIgnoreChallengeProgressUI': True})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void 4thsageClear_FourVillage() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk39', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})

    call SageClear_Recommend()

    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'StepName': '4thSageClear', 'ChallengeName': 'SurveyOfFourVillages', 'IsIgnoreChallengeProgressUI': True})
    Npc_AncientDoctor[WatchTowerPurah].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ChoiceLabel3': 5, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/SurveyOfFourVillages:talk24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia002_Near() {

    call Npc_BaseCampSoldier_Hylia002.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia002_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia001_Near() {

    call Npc_BaseCampSoldier_Hylia001.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia001_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia006_Near() {

    call Npc_BaseCampSoldier_Hylia006.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia006_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia003_Near() {

    call Npc_BaseCampSoldier_Hylia003.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia003_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia007_Near() {

    call Npc_BaseCampSoldier_Hylia007.ReturnBCAfter4Sage_Npc_BaseCampSoldier_Hylia007_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant002_Near() {

    call Npc_BaseCamp_AncientAssistant002.ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant002_Near()

}

void ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant001_Near() {

    call Npc_BaseCamp_AncientAssistant001.ReturnBCAfter4Sage_Npc_BaseCamp_AncientAssistant001_Near()

}

void ReturnBCAfter4Sage_Npc_Zora_NewFaceSoldier002_Talk() {

    call Npc_Zora_NewFaceSoldier002.ReturnBCAfter4Sage_Npc_Zora_NewFaceSoldier002_Talk()

}

void Clear4Sage_BeforeBeingAsked() {
    goto Event395
}

void 2ndSageClear_Npc_Goron033_BaseCamp_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron033_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void 2ndSageClear_Npc_Goron011_BaseCamp_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron011_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void 2ndSageClear_Npc_HighMountain009_BaseCamp_Near() {
    Event365:
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_HighMountain009_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void 2ndSageClear_Npc_HighMountain009_BaseCamp_BaseCamp_Rito_First_PosChange_Near() {
    goto Event365
}

void 2ndSageClear_Npc_oasis007_BaseCamp_Near() {
    if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_oasis007_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void 2ndSageClear_Npc_Zora004_BaseCamp_Near() {
    Event366:
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/HyruleCastleIncident:talk_ZoraFencer_32', 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_ZoraFencer_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void 3rdSageClear_Npc_Goron033_BaseCamp_Near() {

    call 2ndSageClear_Npc_Goron033_BaseCamp_Near()

}

void 3rdSageClear_Npc_Goron011_BaseCamp_Near() {

    call 2ndSageClear_Npc_Goron011_BaseCamp_Near()

}

void 3rdSageClear_Npc_HighMountain009_BaseCamp_Near() {
    Event378:

    call 2ndSageClear_Npc_HighMountain009_BaseCamp_Near()

}

void 3rdSageClear_Npc_HighMountain009_BaseCamp_BaseCamp_Rito_First_PosChange_Near() {
    goto Event378
}

void 3rdSageClear_Npc_oasis007_BaseCamp_Near() {

    call 2ndSageClear_Npc_oasis007_BaseCamp_Near()

}

void 3rdSageClear_Npc_Zora004_BaseCamp_Near() {

    call 2ndSageClear_Npc_Zora004_BaseCamp_Near()

}

void 4thSageClear_Npc_Goron033_BaseCamp_Near() {

    call 2ndSageClear_Npc_Goron033_BaseCamp_Near()

}

void 4thSageClear_Npc_Goron011_BaseCamp_Near() {

    call 2ndSageClear_Npc_Goron011_BaseCamp_Near()

}

void 4thSageClear_Npc_HighMountain009_BaseCamp_Near() {
    Event373:

    call 2ndSageClear_Npc_HighMountain009_BaseCamp_Near()

}

void 4thSageClear_Npc_HighMountain009_BaseCamp_BaseCamp_Rito_First_PosChange_Near() {
    goto Event373
}

void 4thSageClear_Npc_oasis007_BaseCamp_Near() {

    call 2ndSageClear_Npc_oasis007_BaseCamp_Near()

}

void 4thSageClear_Npc_Zora004_BaseCamp_Near() {

    call 2ndSageClear_Npc_Zora004_BaseCamp_Near()

}

void ReturnBCAfter4Sage_Npc_Goron033_BaseCamp_SageOfFire_IsCompleted_Exp_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron033_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron033_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void ReturnBCAfter4Sage_Npc_Goron011_BaseCamp_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron011_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_Goron011_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void ReturnBCAfter4Sage_Npc_oasis007_BaseCamp_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_oasis007_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_oasis007_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void ReturnBCAfter4Sage_Npc_Zora004_BaseCamp_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_ZoraFencer_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_ZoraFencer_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void ReturnBCAfter4Sage_Npc_HighMountain009_BaseCamp_SageOfWind_IsCompleted_Exp_Near() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_HighMountain009_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/SurveyOfFourVillages:Near_HighMountain009_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void ReturnBCAfter4Sage_Npc_BaseCamp006_Underground_Talk() {

    call Npc_BaseCamp006.BlackZelda()

}

void 2ndSageClear_Npc_Zora004_BaseCamp_BaseCamp_Zora_First_Near() {
    goto Event366
}

void 3rdSageClear_Npc_Zora004_BaseCamp_BaseCamp_Zora_First_Near() {

    call 2ndSageClear_Npc_Zora004_BaseCamp_BaseCamp_Zora_First_Near()

}

void 4thSageClear_Npc_Zora004_BaseCamp_BaseCamp_Zora_First_Near() {

    call 2ndSageClear_Npc_Zora004_BaseCamp_BaseCamp_Zora_First_Near()

}

void ReturnBCAfter4Sage_Npc_HatenoVillage015_Talk() {

    call Npc_HatenoVillage015.BlackZelda_BeforeApear()

}

void 1stSageClear_Npc_AncientDoctor_WatchTowerPurah_Near() {
    Event156:

    call Npc_AncientDoctor.DefeatGanondorf_IsAfter_FindWhereabouts_Exp_Near()

}

void 1stSageClear_Npc_AncientDoctor_WatchTowerPurah_MainChallenge_1stSagePulhaPosChange_Near() {
    goto Event156
}

void 2ndSageClear_Npc_AncientDoctor_WatchTowerPurah_Near() {
    goto Event156
}

void 3rdSageClear_Npc_AncientDoctor_WatchTowerPurah_Near() {
    goto Event156
}

void 4thSageClear_Npc_AncientDoctor_WatchTowerPurah_Near() {
    goto Event156
}
