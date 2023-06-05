-------- EventFlow: Npc_CaveTraveler001 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventNPCTurnToTarget', 'EventTriggerSetHaveTalked', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_CaveTraveler001:Near_00', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_00', 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_CaveTraveler001_Yes', 'Value': True, 'Index': -1})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_20', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event9:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_CaveTraveler001_Yes', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_1stTalkEnd'})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_CaveTraveler001', 'InstanceName': '01', 'IsCheckInstanceName': True}) {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_State', 'Value': 1})
            } else {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_State', 'Value': 2})
            }
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_19', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event9
        }
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void Npc_CaveTraveler001_Disappeared_Talk() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'CaveMasterMedal', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_ReportGetNushiMedal'}) {

            call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_36', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event76:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_37', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_CaveTraveler001_ReportGetNushiMedal', 'Index': -1})
            Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            Event38:
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_CaveTraveler001', 'InstanceName': '01', 'IsCheckInstanceName': True}) {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_State', 'Value': 1})
            } else {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_State', 'Value': 2})
            }
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_2ndTalkEnd'})
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_02', 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 0, 'EndDialogOption': 3, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkingS', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_32', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event76
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_2ndTalkEnd'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Event18:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event38
        } else {
            Event27:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 2})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_05', 'ChoiceNumber': 2, 'ChoiceLabel1': 4, 'ChoiceLabel2': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event18
        } else {
            goto Event27
        }
    }
}

void NushiShop_Tutorial_IsCompleted_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_25', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_26', 'IsNotOpenIfSkipedMostRecent': False})
            Event33:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_CaveTraveler001_FirstTalk_AfterNushiShop'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
                  case [0, 1, 4, 5]:
                    Event63:
                    Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_35', 'IsNotOpenIfSkipedMostRecent': False})
                  case [2, 3, 6, 7, 8]:
                    Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event63
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_CaveTraveler001_Yes', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_28', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})
            }
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_30', 'IsNotOpenIfSkipedMostRecent': False})
            Event62:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_CaveTraveler001_FirstTalk_AfterNushiShop', 'Index': -1})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_29', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event33
        }
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1, 4, 5]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1, 2, 3, 4, 5]:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_21', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event55:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event62
          case [6, 7]:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_23', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event55
        }
      case [2, 3, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'ChoiceLabel2': 3, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_CaveTraveler001:Talk_22', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event55
    }
}
