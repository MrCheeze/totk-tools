-------- EventFlow: Npc_HatenoVillage027 --------

Actor: Npc_HatenoVillage027
entrypoint: None()
actions: ['EventTalk', 'EventDisableRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage']
queries: ['EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryRandomChoice4', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage029
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientAssistant001
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage021
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage026
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    switch Npc_HatenoVillage027.EventQueryAIScheduleCheckActorAction14() {
      case 0:

        call Act1_MoveTalk()

      case 1:

        call Act1_ArrivalTalk()

      case 6:

        call Act4_MoveTalk()

      case 7:

        call Act4_ArrivalTalk()

      case 10:

        call Sleep1_MoveTalk()

      case 11:

        call Sleep1_ArrivalTalk()

    }
}

void Near() {
    switch Npc_HatenoVillage027.EventQueryAIScheduleCheckActorAction14() {
      case 0:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage027:Near_1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage027:Near_1001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 7:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage027:Near_6000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 10:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage027:Near_7001', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 11:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HatenoVillage027:Near_7000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Act1_MoveTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch1'})
    if !Npc_HatenoVillage027.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
            switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
              case [0, 1]:
                Event19:
                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
              case [2, 3]:
                if !Npc_EventStarter.EventQueryIsIndoor() {
                    goto Event19
                } else {
                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Event15:
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3]:
            if !Npc_EventStarter.EventQueryIsIndoor() {
                goto Event15
            } else {
                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Act1_ArrivalTalk() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch1'})
    if !Npc_HatenoVillage029.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 0})
    && !Npc_AncientAssistant001.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2})
    && !Npc_HatenoVillage021.EventQueryAIScheduleCheckActorAction({'ActionType': 2, 'AIScheduleState': 1})
    && !Npc_HatenoVillage026.EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 1}) {

        call DuringClass()

    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        if !Npc_HatenoVillage027.EventQueryHaveTalked() {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch2', 'Index': -1}) {
                    Event140:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch3', 'Index': -1}) {
                            Event28:
                            if !Npc_HatenoVillage027.EventQueryIsOnRecentTalkFlag() {
                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                            } else
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            } else {
                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else {
                            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_8001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch3', 'Index': -1, 'Value': True})
                        }
                    } else
                    goto Event28
                } else {
                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_8000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch2', 'Index': -1, 'Value': True})
                }
            } else
            goto Event140
        } else {
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void Act4_ArrivalTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch1'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch5'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch2', 'Index': -1}) {
                Event144:
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch3', 'Index': -1}) {
                        Event66:
                        if !Npc_HatenoVillage027.EventQueryIsOnRecentTalkFlag() {
                            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6002', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
                            Event73:
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6004', 'IsNotOpenIfSkipedMostRecent': False})
                                Event71:
                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': True, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsAnimeDriven': True, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6021', 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_SecretLifeOfSagono_IsCompleted_Exp'}) {
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
                                            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch4', 'Index': -1}) {
                                                Event117:
                                                switch GameSystemActor.EventQueryRandomChoice4() {
                                                  case 0:
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    Event116:
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6016', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                  case 1:
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    goto Event116
                                                  case 2:
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    goto Event116
                                                  case 3:
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                    goto Event116
                                                }
                                            } else {
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch4', 'Index': -1, 'Value': True})
                                                goto Event116
                                            }
                                        } else
                                        goto Event117
                                    } else
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    } else {
                                        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    }
                                    goto Event116
                                } else {
                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                              case 1:
                                Event160:
                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_SecretLifeOfSagono_IsCompleted_Exp'}) {
                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
                                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch4', 'Index': -1}) {
                                            Event37:
                                            switch GameSystemActor.EventQueryRandomChoice4() {
                                              case 0:
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                Event153:
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6016', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                if !GameSystemActor.EventQueryTalkChoice2() {
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6004', 'IsNotOpenIfSkipedMostRecent': False})
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6021', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'IsAnimeDriven': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                } else {
                                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                }
                                              case 1:
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event153
                                              case 2:
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6018', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event153
                                              case 3:
                                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event153
                                            }
                                        } else {
                                            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch4', 'Index': -1, 'Value': True})
                                            goto Event153
                                        }
                                    } else
                                    goto Event37
                                } else
                                if !GameSystemActor.EventQueryRandomChoice2() {
                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                                goto Event153
                              case 2:
                                Event82:
                                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
                            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6010', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        } else {
                            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6001', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        goto Event73
                    } else {
                        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_8001', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch3', 'Index': -1, 'Value': True})
                        goto Event73
                    }
                } else
                goto Event66
            } else {
                Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_8000', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage027_TalkBranch2', 'Index': -1, 'Value': True})
                goto Event73
            }
        } else
        goto Event144
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch5'})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6000', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            goto Event71
          case 1:
            goto Event160
          case 2:
            goto Event82
        }
    }
}

void Act4_MoveTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch1'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch5'}) {
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch5'})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher01_IsCompleted_Exp'}) {
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_6020', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Sleep1_MoveTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_HatenoVillage027.EventQueryIsOnRecentTalkFlag() {
        if !Npc_EventStarter.EventQueryIsIndoor() {
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1]:
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5, 6, 7, 8]:
            Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !Npc_EventStarter.EventQueryIsIndoor() {
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_TellMeTeacher02_IsCompleted_Exp'}) {
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Sleep1_ArrivalTalk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_HatenoVillage027.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_HatenoVillage027.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage027:Talk_7005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HatenoVillage027_TalkBranch1'}) {
        Npc_HatenoVillage027.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
    }
}

void DuringClass() {

    call Hateno_TellMeTeacher01.DuringClass({'Student': ActorIdentifier(name="Npc_HatenoVillage027"), 'StudentName': 'Npc_HatenoVillage027'})

}
