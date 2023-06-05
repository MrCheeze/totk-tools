-------- EventFlow: Npc_RitoHatago001 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTakeSelectOwnedHorse', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleIsWokeUp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenOwnedHorseList', 'EventWaitOwnedHorseListInput', 'EventCloseOwnedHorseList', 'EventTriggerSaveObjectsOfOwnedHorse', 'EventOpenRupeeDisplay', 'EventOpenLastWildHorseInfo', 'EventCloseRupeeDisplay', 'EventInputHorseName', 'EventRegisterLastWildHorse', 'EventTriggerRequestAutoSave', 'EventTriggerIncreaseRupee', 'EventTriggerRemoveOwnedHorse', 'EventEventFadeIn', 'EventEventFadeOut', 'EventEntrustOutsideOwnedHorse', 'EventTriggerCloseGuideForOwnedHorseList', 'EventTriggerOpenGuideForOwnedHorseList']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsExistRegisteredHorseAny', 'EventQueryCheckIsWildHorseAssociated', 'EventQueryIsOwnedHorseListInput', 'EventQueryIsOwnedHorseOneOrNot', 'EventQueryCheckIsMaxRegisteredHorseNum', 'EventQueryIsSuccessInputHorseName', 'EventQueryHasRuppe', 'EventQueryTalkChoice4', 'EventQueryRandomChoice3', 'EventQueryCheckIsOwnedHorseAssociated', 'EventQueryIsLastRiddenAnimalOwnedHorse', 'EventQueryExistActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp', 'EventQueryCompareGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: ['EventQueryCheckPlayerState', 'EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_RitoHatago001
entrypoint: None()
actions: []
queries: ['EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWaitState']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Les_Talk_AfterP', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event2:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_01', 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_03', 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event452:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                        Event7:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_04', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_19', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {
                    goto Event7
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_03', 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event452
              case 2:
                goto Event452
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Les_Talk_AfterP', 'Index': -1, 'Value': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_24', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event2
        }
    } else
    if !Npc_RitoHatago001.EventQueryHaveTalked() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_23', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_21', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_30', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
}

void IsByeTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk06'}) {
        Event122:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_87', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk06', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_ReturnBCAfterBlackZelda_Exp'}) {
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else
                Event314:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_ArrivedMaritta', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_ArrivedMori', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedFutago'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedHeigen'}) {
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedSitsugen'}) {
                                    goto Event122
                                } else {
                                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_79', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                            } else {
                                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_86', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_80', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else {
                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_73', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk02'}) {
                    goto Event122
                } else {
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_27', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildingMaterialsTutorial:Talk_01_19', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        goto Event314
    }
}

void OutSide() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'}) {

        call ChallengeTalk()

    } else {

        call General_OutsideTalk_Rito()

    }

    call FirstVisit_Point()


    call IsByeTalk()


    call TalkEnd_OutSide_Rito()

}

void Outside_Return() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Index': -1, 'Value': True})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Event19:
    if !GameSystemActor.EventQueryIsExistRegisteredHorseAny() {
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'OutsideOwnedHorseIndex', 'Value': -1, 'Index': -1}) {
          case [0, 2]:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Value': False, 'Index': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_11', 'ChoiceNumber': 4, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event298:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:

                    call TakeHorse_Rito()

                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isCanceledTakeHorse'}) {
                        Event76:

                        call Outside_Return()

                    }
                  case 1:

                    call EntrustHorse()

                    goto Event76
                  case 2:

                    call SimpleHorseInn_Explain()

                    goto Event76
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_78', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_10', 'ChoiceLabel2': 7, 'ChoiceNumber': 4, 'ChoiceLabel1': 6, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event298
          case 1:
            switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
              case [0, 1, 2, 3, 4, 5, 6, 8, 9, 10]:
                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                  case [0, 1, 2, 3, 8, 9, 10]:
                    Event365:
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Value': False, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_11', 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event73:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call Register_Horse()

                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Index': -1}) {
                            Event97:

                            call Outside_Return()

                        }
                      case 1:

                        call TakeHorse_Rito()

                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isCanceledTakeHorse'}) {
                            goto Event97
                        }
                      case 2:

                        call SimpleHorseInn_Explain()

                        goto Event97
                    }
                  case [4, 5, 6, 7]:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Index': -1}) {
                        goto Event365
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_78', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event73
                }
              case 7:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Index': -1}) {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Value': False, 'Index': -1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_11', 'ChoiceNumber': 4, 'ChoiceLabel1': 6, 'ChoiceLabel2': 8, 'ChoiceLabel3': 28, 'ChoiceLabel4': 255, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event294:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call TakeHorse_Rito()

                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isCanceledTakeHorse'}) {
                            Event68:

                            call Outside_Return()

                        }
                      case 1:

                        call Explain_GetHorse_Rito()

                        goto Event68
                      case 2:

                        call SimpleHorseInn_Explain()

                        goto Event68
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel2': 8, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_78', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_10', 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 4, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event294
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isReturnTalk_HorseInMaster', 'Value': False, 'Index': -1})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_11', 'ChoiceLabel2': 8, 'ChoiceLabel1': 5, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event70:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call Register_Horse()

            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Index': -1}) {
                Event66:

                call Outside_Return()

            }
          case 1:

            call Explain_GetHorse_Rito()

            goto Event66
          case 2:

            call SimpleHorseInn_Explain()

            goto Event66
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Not_Proceeding'}) {
                Event96:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_10', 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_78', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event70
        } else {
            goto Event96
        }
    } else {

        call FirstTime_Not_Resistered_Association()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceNumber': 4, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_26', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event70
    }
}

void TakeHorse_Rito() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isTalking_TakeHorse', 'Value': True, 'Index': -1})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event39:
    GameSystemActor.EventOpenOwnedHorseList({'IsWaitEnd': True})
    GameSystemActor.EventTriggerOpenGuideForOwnedHorseList()
    GameSystemActor.EventWaitOwnedHorseListInput({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsOwnedHorseListInput() {
        GameSystemActor.EventTriggerCloseGuideForOwnedHorseList()
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'ChoiceNumber': 2, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_13', 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})

            call TakeStart({'IsUseHarness': False})

            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'isCanceledTakeHorse'})
        } else
        if !GameSystemActor.EventQueryIsOwnedHorseOneOrNot() {

            call TakeCancel()

        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_14', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call HorseSelectReturn()

        }
    } else {

        call TakeCancel()

    }
}

void HorseSelectReturn() {
    goto Event39
}

void TakeCancel() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'isCanceledTakeHorse'})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_31', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
}

void SecondTalk_RegisterHorse_Rito() {
    Event415:
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 6, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_37'})
        Event153:
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Register_Horse()

        } else {
            Npc_EventStarter.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
            switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 50.0}) {
              case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_38', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case 10:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Register16_01', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case [2, 3, 9]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:KyoukaiTalk04_02', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event153
      case 8:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RitoHatago001_Talk05', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_114', 'IsNotOpenIfSkipedMostRecent': False})
            Event383:
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
                if !GameSystemActor.EventQueryCheckIsMaxRegisteredHorseNum() {
                    Event435:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus03', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 19, 'ChoiceLabel2': 16, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_71', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_39', 'ChoiceLabel1': 19, 'ChoiceLabel2': 16, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Release_RegistTalk()

                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus03', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_70', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                } else {

                    call StartRegister()

                }
            } else {
                Npc_EventStarter.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_104', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'RitoHatago001_Talk05'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_89', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event383
        }
      case 10:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune09_IsCompleted_Exp'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:KyoukaiTalk04_01', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event153
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Register00_4', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Explain_GetHorse_Rito() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_15', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call Common.OpenActionGuideScreen({'ActionGuideType': 18})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_61', 'ChoiceLabel1': 26, 'ChoiceLabel2': 24, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void TalkEnd_OutSide_Rito() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'isCanceledTakeHorse'})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isTalking_TakeHorse', 'Value': False, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'RitoHatago001_Talk01'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Proceeding'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'FindWhiteHorse_Is_Not_Proceeding'})
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'RitoHatago001_Talk02'})
    GameSystemActor.EventTriggerSaveObjectsOfOwnedHorse()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void BaseCamp_MainChallengeProgress_IsAfter_Ready_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'IsRidingAny': False, 'ActorFileName': ''}) {
        Event178:

        call OutSide({'HorseInnBoolean': 'HorseInn_ArrivedBaseCamp'})

    } else
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 1, 'IsRidingAny': False, 'ActorFileName': ''}) {
        goto Event178
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 4, 'IsRidingAny': False, 'ActorFileName': ''}) {
        goto Event178
    } else
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 12, 'IsRidingAny': False, 'ActorFileName': ''}) {
        goto Event178
    } else
    if !GameSystemActor.EventQueryExistActor({'IsCheckLife': True, 'ActorName': 'LastRiddenAnimal_ForEvent', 'IsCheckEquipmentStand': False, 'IsCheckEquippedNPC': False, 'IsCheckEquippedEnemy': False, 'IsCheckAttached': False, 'IsCheckGolemAttachment': False}) {
        if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'RiderType': 1, 'IsCheckRiderType': False}) {
            LastRiddenAnimal_ForEvent.EventWaitState({'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'HasToCue': False, 'IsNoMorph': False, 'IsWaitEnd': False})
        }
        goto Event178
    } else {
        goto Event178
    }
}

void General_OutsideTalk_Rito() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWhiteHorse_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RitoHatago001_Talk03', 'Index': -1}) {
                Event375:

                call Weather()

                Event287:

                call FirstVisit_BasecampHorseInn()

                switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                  case [0, 1, 2, 3, 8, 9, 10]:
                    if !GameSystemActor.EventQueryIsExistRegisteredHorseAny() {

                        call SecondTalk_RegisterHorse_Rito()

                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Index': -1}) {

                            call Outside_Return()

                        }
                    } else
                    goto Event19
                  case [4, 5, 6, 7]:
                    goto Event19
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk03', 'Index': -1, 'Value': True})

                call Weather()

                Event370:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event287
            }
        } else {
            goto Event375
        }
    } else
    Event79:
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk07'}) {
        Event369:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWhiteHorse_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RitoHatago001_Talk03', 'Index': -1}) {
                goto Event287
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk03', 'Index': -1, 'Value': True})
                goto Event370
            }
        } else {
            goto Event287
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk07', 'Index': -1, 'Value': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_17', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event369
    }
}

void Register_Horse() {
    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
      case [0, 1, 2, 3, 5, 9]:
        Event423:
        Npc_EventStarter.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})
        if !GameSystemActor.EventQueryCheckIsMaxRegisteredHorseNum() {
            goto Event435
        } else {
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_43', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event17:

            call HorseImportCheck()

            Event189:
            GameSystemActor.EventOpenLastWildHorseInfo({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_44', 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_RegisterFirstHorse', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_GetHalfPrice'}) {
                        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                          case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10]:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_117', 'IsNotOpenIfSkipedMostRecent': False})
                            Event460:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                if !GameSystemActor.EventQueryHasRuppe({'Value': 10}) {
                                    GameSystemActor.EventTriggerIncreaseRupee({'Value': -10})
                                    Event448:
                                    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                                      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10]:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_46', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Event317:

                                        call Register_NewHorse_AddPoint()


                                        call PresentCheck()


                                        call ResisterName()

                                      case 8:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_102', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        goto Event317
                                    }
                                } else {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_119', 'IsNotOpenIfSkipedMostRecent': False})
                                    Event243:
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                }
                            } else
                            Event321:
                            switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                              case [0, 1, 2, 3, 4, 5, 6, 7, 9]:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_48', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event243
                              case 8:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_104', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event243
                              case 10:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Register16_01', 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event243
                            }
                          case 8:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_118', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event460
                        }
                    } else
                    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_45', 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event211:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            if !GameSystemActor.EventQueryHasRuppe({'Value': 20}) {
                                GameSystemActor.EventTriggerIncreaseRupee({'Value': -20})
                                goto Event448
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_47', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event243
                            }
                        } else
                        goto Event321
                      case 8:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_62', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event211
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_RegisterFirstHorse', 'Index': -1, 'Value': True})
                    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
                      case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_108', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event301:

                        call HorseFirstRegister()

                      case 8:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_106', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event301
                    }
                }
            } else {
                GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
                goto Event321
            }
        }
      case 4:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 6, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_63', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event422:
        Npc_EventStarter.EventTriggerLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 2, 'ResetArriveTransformFixed': False})

        call HorseImportCheck()

      case 6:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 6, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_65', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event422
      case 7:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_60', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event422
      case 8:
        goto Event415
      case 10:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Tribune09_IsCompleted_Exp'}) {
            goto Event423
        } else {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 6, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Register00_4', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event422
        }
    }
}

void Release_RegistTalk() {
    GameSystemActor.EventOpenOwnedHorseList({'IsWaitEnd': True})
    GameSystemActor.EventTriggerOpenGuideForOwnedHorseList()
    Event72:
    Npc_EventStarter.EventTalk({'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Register02', 'EndDialogOption': 2, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWaitOwnedHorseListInput({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsOwnedHorseListInput() {
        GameSystemActor.EventTriggerCloseGuideForOwnedHorseList()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_40', 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_41', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventTriggerRemoveOwnedHorse()
            GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_42', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ResistAgain()

        } else {
            goto Event72
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetHorseRegisterPlus03', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_70', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void StartRegister() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_116', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event17
}

void RetryInputName() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_51', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event197:
    GameSystemActor.EventInputHorseName({'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsSuccessInputHorseName() {
        GameSystemActor.EventOpenLastWildHorseInfo({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_52', 'ChoiceLabel1': 100, 'ChoiceLabel2': 200, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})
            Event244:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Value': True, 'Index': -1})

            call Registered()

        } else {
            GameSystemActor.EventCloseOwnedHorseList({'IsWaitEnd': True})

            call RetryInputName()

        }
    } else {

        call RetryInputName()

    }
}

void HorseInn_GuideWhistle() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Horse_Is_Registration', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_58', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Common.OpenActionGuideScreen({'ActionGuideType': 24})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_59', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Horse_Is_Registration', 'Index': -1, 'Value': True})
    }
}

void EntrustHorse() {
    if GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'OutsideOwnedHorseIndex', 'Index': -1}) in [1, 2] {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_35', 'ChoiceLabel1': 15, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 20, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_32', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !GameSystemActor.EventQueryIsLastRiddenAnimalOwnedHorse() {
                Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                Event408:
                switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
                  case [0, 1, 2, 3, 4, 5, 6]:
                    GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_36', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 7:
                    GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_83', 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            goto Event408
        } else {
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_31', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void TakeStart() {
    switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'OutsideOwnedHorseIndex', 'Index': -1}) {
      case 0:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event88:
        Npc_EventStarter.EventTakeSelectOwnedHorse({'IsWaitEnd': True, 'IsUseHarness': 'IsUseHarness', 'IsAutoIgnition': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWhiteHorse_IsCompleted_Exp'}) {
            Event386:
            switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
              case [0, 1, 2, 3, 4, 5, 6]:
                Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_34', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event399:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'}) {
                    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_57', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk06'}) {

                        call TalkEnd_OutSide_Rito()

                        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                    }
                }
              case 7:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_113', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event399
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FindWhiteHorse_Gift_NotReceive', 'Index': -1}) {
            goto Event386
        } else
        switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
          case [0, 1, 2, 3, 4, 5, 6]:
            goto Event386
          case 7:
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'GameRomHorseSpPattern', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FindWhiteHorse:Talk_0022', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'FindWhiteHorse_IsAfter_Ready_Exp'}) {

                call FindWhiteHorse.TakeHorse_ClearEvent_Step01()

            } else {

                call FindWhiteHorse.TakeHorse_ClearEvent()

            }

            call TalkEnd_OutSide_Rito()

            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
      case [1, 2]:
        if !GameDataActor.EventQueryCompareGameDataInt({'GameDataA': 'OutsideOwnedHorseIndex', 'GameDataB': 'Horse_SelectIndex', 'Operator': 0}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_33', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_32', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
        goto Event88
    }
}

void HyruleCastleIncident_IsAfter_UseCannon_Exp_Near() {
    if EventWorldManagerController.EventQueryTimeDivision() in [0, 1, 2, 3, 4, 5, 6] {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_RitoHatago001:near_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 1:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_RitoHatago001:near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 2:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_RitoHatago001:near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void SimpleHorseInn_Explain() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk01'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_77', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event81:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_74', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_29', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_107', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk01', 'Index': -1, 'Value': True})
            goto Event81
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk01'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_77', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RitoHatago001_Talk01', 'Index': -1, 'Value': True})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_29', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void ChallengeTalk() {
    goto Event79
}

void Registered() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceCancelNo': 1, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_53', 'ChoiceLabel2': 23, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 22, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'OutsideOwnedHorseIndex', 'Index': -1}) {
          case 0:
            GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            Event200:
            GameSystemActor.EventRegisterLastWildHorse({'IsWaitEnd': True, 'IsLeaveRegisterHorse': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            switch GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) {
              case [0, 1, 2, 3, 4, 5, 6]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_56', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event250:

                call HorseInn_GuideWhistle()

                Event206:
                GameSystemActor.EventTriggerRequestAutoSave()
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'})
                && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_57', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk06'}) {

                        call TalkEnd_OutSide_Rito()

                        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                    }
                }
              case 7:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_113', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event250
            }
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_32', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            GameSystemActor.EventEntrustOutsideOwnedHorse({'IsWaitEnd': True})
            goto Event200
        }
    } else {
        GameSystemActor.EventEventFadeOut({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
          case [0, 1, 2, 3, 4, 5, 6, 7, 9, 10]:
            GameSystemActor.EventRegisterLastWildHorse({'IsLeaveRegisterHorse': True, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_54', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event206
          case 8:
            GameSystemActor.EventRegisterLastWildHorse({'IsLeaveRegisterHorse': True, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
            GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'Length': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_83', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event206
        }
    }
}

void ResisterName() {
    switch GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) {
      case [0, 2, 3, 4, 5, 6, 7, 9, 10]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_49', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event196:
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        goto Event197
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_50', 'ChoiceLabel1': 100, 'ChoiceLabel2': 21, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event208:
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            goto Event244
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_55', 'ChoiceLabel1': 100, 'ChoiceLabel2': 21, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event208
        }
      case 8:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_90', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event196
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_RitoHatago001:near_04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void FirstTime_Not_Resistered_Association() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_92', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ASCommand': 'Talk', 'ClothWarpMode': 0})
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingS', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_105', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_93', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ResisteredAssociation_AtBaseCamp', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInnMemberPoint', 'Value': 1, 'Index': -1})
}

void FirstVisit_Point() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HorseInn_RegisteredAssociation', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_94', 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 9, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_96', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_97', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'isSuccessRegisterHorse', 'Index': -1}) {
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInnMemberPoint', 'Index': -1, 'Value': -2})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_99', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_100', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call HorseInnMaster.PointCard_GetFlow({'AddPoint': 2, 'DecrementPoint': -2})

                Event285:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_101', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk02'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_76', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_110', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call TalkEnd_OutSide_Rito()

                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInnMemberPoint', 'Index': -1, 'Value': -1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_98', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_95', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call HorseInnMaster.PointCard_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

                goto Event285
            }
        }
    }
}

void PresentCheck() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'isPresentTalk'})
    && GameDataActor.EventQueryCompareGameDataInt({'GameDataB': 'HorseInn_RewardItemPresentedCount', 'GameDataA': 'HorseInn_RewardItemPresentNum', 'Operator': 5}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_84', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_ArrivedMaritta', 'Index': -1}) {
            Event299:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isPresentTalk', 'Value': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RitoHatago001_Talk02'}) {
            goto Event299
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_76', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'RitoHatago001_Talk02'})
            goto Event299
        }
    }
}

void HorseFirstRegister() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OwnedCustomizableHorseTack_Reins.GameRomHorseReins_00', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'OwnedCustomizableHorseTack_Saddle.GameRomHorseSaddle_00', 'Index': -1, 'Value': True})
    goto Event317
}

void Register_NewHorse_AddPoint() {
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_91', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})

    } else {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'HorseInnMemberPoint', 'Value': 1, 'Index': -1})
    }
}

void FirstVisit_BasecampHorseInn() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_RegisteredAssociation'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseInn_ArrivedBaseCamp'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_85', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 5, 'ChoiceLabel2': 8, 'ChoiceLabel4': 255, 'ChoiceLabel3': 28, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_115', 'IsNotOpenIfSkipedMostRecent': False})

        call HorseInnMaster.Point_GetFlow({'AddPoint': 1, 'DecrementPoint': -1})


        call PresentCheck()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    }
}

void Weather() {
    if !Npc_EventStarter.EventQueryAIScheduleIsWokeUp({'Type': 1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_69', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event371:
        if GameSystemActor.EventQueryCheckIsOwnedHorseAssociated({'IsRidden': False, 'CheckDistance': 50.0}) == 7 {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_82', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Player.EventQueryCheckPlayerState({'State': 0}) {
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1, 2, 3, 4]:
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_66', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event371
                  case [1, 4, 5]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_81', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event371
                  case [2, 3, 6, 7, 8]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_67', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event371
                }
              case [5, 6, 7]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_68', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event371
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseInn_isTopMember'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_22', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_18', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event371
    }
}

void HorseImportCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsExistImportHorse', 'Index': -1})
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Import01', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsFinishImportHorse', 'Index': -1, 'Value': True})
        if GameSystemActor.EventQueryCheckIsWildHorseAssociated({'CheckDistance': 20.0}) in [0, 1, 2, 3, 5, 8, 9, 10] {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_RitoHatago001:Talk_93', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void ResistAgain() {
    goto Event189
}
