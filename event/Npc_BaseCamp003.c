-------- EventFlow: Npc_BaseCamp003 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: ['EventQueryRandomChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp003
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventUnequipWeapon', 'EventTriggerParticipateEvent', 'EventTriggerEmitXLink']
queries: ['EventQueryAvoidDuplicationRandomChoice3', 'EventQueryNeedEquipWeapon', 'EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsPouchContent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora003
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_Zora_NewFaceSoldier002
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora002
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora001
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Zora004
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp003_Talk01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp003_NoticeLink'}) {
            if !Npc_BaseCamp003.EventQueryNeedEquipWeapon() {
                Npc_BaseCamp003.EventUnequipWeapon({'IsWaitEnd': True})
            }
            Npc_BaseCamp003.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call Greeting()

                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event7:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event164:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event7
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event164
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event164
                  case 3:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_105', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case [2, 3, 4, 5, 6, 7, 8]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Greeting04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call Question()

        } else {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_First01', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_First02', 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
                if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_11', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event120:

                call Question()

            } else {
                goto Event120
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SurveyOfFourVillages_IsAfter_4thSageClear_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
            Event176:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_23', 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_First01', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_First02', 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_11', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    goto Event176
}

void Sword01() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_111', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword01', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword02', 'Index': -1}) {
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_110', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_119', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event40:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    Event41:
                    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_102', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_112'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp003_Talk01', 'Index': -1, 'Value': True})

                        call Get()

                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword01', 'Index': -1, 'Value': True})

                        call Get2()


                        call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Weapon_Sword_112', 'IsSuccess': True})

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp003_Sword04', 'Value': False})
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Value': 1, 'Index': -1})
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_116', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Index': -1, 'Value': 3}) {
                          case 0:
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_106', 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 3, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 1:

                                call SelectKnightSword()

                              case 2:

                                call SelectRoyalSword()

                              case 3:
                                Event44:
                                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_105', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                          case [1, 2]:
                            Event46:
                            Npc_BaseCamp003.EventUnequipWeapon({'IsWaitEnd': True})
                            Npc_BaseCamp003.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_120', 'ASName': 'Talk', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp003_NoticeLink', 'Index': -1, 'Value': True})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp003_ReMove01'})
                        }
                    } else {
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_117', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 1:
                    Event42:
                    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_103', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_113'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp003_Talk01', 'Index': -1, 'Value': True})

                        call Get()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp003_Sword02'})

                        call Get2()


                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_113'})

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Npc_BaseCamp003_Sword05'})
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Value': 1, 'Index': -1})
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_116', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Index': -1, 'Value': 3}) {
                          case 0:
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_106', 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 3, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:

                                call SelectSoldierSword()

                              case 2:

                                call SelectRoyalSword()

                              case 3:
                                goto Event44
                            }
                          case [1, 2]:
                            goto Event46
                        }
                    } else {
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_117', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 2:
                    Event43:
                    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_104', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !PouchSystemActor.EventQueryIsPouchContent({'ActorName': 'Weapon_Sword_124'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_BaseCamp003_Talk01', 'Index': -1, 'Value': True})

                        call Get()

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp003_Sword03'})

                        call Get2()


                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Weapon_Sword_124'})

                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Npc_BaseCamp003_Sword06'})
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Value': 1, 'Index': -1})
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_116', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Index': -1, 'Value': 3}) {
                          case 0:
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_106', 'ChoiceNumber': 4, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel4': 3, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            switch GameSystemActor.EventQueryTalkChoice4() {
                              case 0:

                                call SelectSoldierSword()

                              case 1:

                                call SelectKnightSword()

                              case 3:
                                goto Event44
                            }
                          case [1, 2]:
                            goto Event46
                        }
                    } else {
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_117', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 3:
                    goto Event44
                }
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_115', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_119', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event40
        } else {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_109', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_118', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event40
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword02', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_114', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_119', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event40
        } else {
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_112', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_118', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event40
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_113', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_118', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event40
    } else {
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_101', 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword01', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword02', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword03', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_118', 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event40
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Greeting01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Greeting02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Greeting03', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Question() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword01', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword02', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            } else {
                GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
            }
            Event45:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 8, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_02', 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_03', 'ChoiceLabel4': 8, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event112:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_29', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                Event117:
                if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_BaseCamp003_Sword_Num', 'Index': -1, 'Value': 2}) in [1, 2] {
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 8, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_22', 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_09', 'ChoiceNumber': 4, 'ChoiceLabel4': 8, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 11, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event112
                }
              case 1:
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_30', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event117
              case 2:
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_31', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event117
              case 3:
                Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_105', 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        } else {
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        }
        goto Event45
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword02', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        } else {
            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        }
        goto Event45
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_BaseCamp003_Sword03', 'Index': -1}) {
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData1': 'Npc_BaseCamp003_Sword04', 'ChoiceExcludeGameData2': 'Npc_BaseCamp003_Sword05', 'ChoiceExcludeGameData3': 'Npc_BaseCamp003_Sword06', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
        goto Event45
    }
}

void Near_Default() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_BaseCamp003:Ballon01_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 1:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_BaseCamp003:Ballon01_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 2:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_BaseCamp003:Ballon01_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_BaseCamp003:Ballon01_04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_BaseCamp003_PosChange_Talk() {

    call Event_Entry()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_BaseCamp003.EventQueryNeedEquipWeapon() {
        Npc_BaseCamp003.EventUnequipWeapon({'IsWaitEnd': True})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp003_Talk02'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {

            call Greeting()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp003_Talk02'})
    }
}

void Npc_BaseCamp003_PosChange_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {

        call Near_Default()

    }
}

void Npc_BaseCamp003_PosChange02_Talk() {

    call Event_Entry()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Npc_BaseCamp003_PosChange02_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_BaseCamp003:Ballon01_05', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Npc_BaseCamp003_PosChange03_Talk() {

    call Event_Entry()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_BaseCamp003.EventQueryNeedEquipWeapon() {
        Npc_BaseCamp003.EventUnequipWeapon({'IsWaitEnd': True})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp003_Talk04'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {

            call Greeting()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp003_Talk04'})
    }
}

void Npc_BaseCamp003_PosChange03_Near() {
    if !Npc_EventStarter.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {

        call Near_Default()

    }
}

void Get() {
    switch Npc_BaseCamp003.EventQueryAvoidDuplicationRandomChoice3() {
      case 0:
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_108', 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ASName': 'Act_AttackTraining', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event166:
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
      case 1:
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ASName': 'Act_AttackTraining', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_123', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event166
      case 2:
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ASName': 'Act_AttackTraining', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_124', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event166
    }
}

void SelectSoldierSword() {
    goto Event41
}

void SelectKnightSword() {
    goto Event42
}

void SelectRoyalSword() {
    goto Event43
}

void Get2() {

    fork {
        Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 3, 'ASName': 'Act_AttackTraining', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_121', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        Npc_BaseCamp003.EventTriggerEmitXLink({'SLinkKey': 'Dm_Sword01_Pull', 'ELinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_BaseCamp003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Act_AttackTraining', 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_BaseCamp003:Talk_122', 'IsNotOpenIfSkipedMostRecent': False})
}

void Event_Entry() {
    Npc_BaseCamp_Zora003.EventTriggerParticipateEvent()
    Npc_Zora_NewFaceSoldier002.EventTriggerParticipateEvent()
    Npc_BaseCamp_Zora002.EventTriggerParticipateEvent()
    Npc_BaseCamp_Zora001.EventTriggerParticipateEvent()
    Npc_BaseCamp_Zora004.EventTriggerParticipateEvent()
    if !Npc_BaseCamp003.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        Event205:
        Npc_BaseCamp003.EventTriggerParticipateEvent()
    } else
    if !Npc_BaseCamp003.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
        goto Event205
    }
}
