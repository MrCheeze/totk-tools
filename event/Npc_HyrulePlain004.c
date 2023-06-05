-------- EventFlow: Npc_HyrulePlain004 --------

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HyrulePlain004
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetHaveTalked']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsIndoor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather', 'EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call RainRun()

    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 1, 3, 5, 6, 7, 8, 9, 12, 13]:
        if !Npc_HyrulePlain004.EventQueryHaveTalked() {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_24', 'IsNotOpenIfSkipedMostRecent': False})
                Event10:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call BlockFalls()

                    Event39:

                    call Look_NushiShop()

                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyrulePlain004_Talk03', 'Index': -1}) {
                    Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_10', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_04', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event39
            } else {

                call Weather()

                Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event10
            }
        } else {
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_23', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_29', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_01', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event10
        }
      case [2, 4]:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_20', 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_HyrulePlain004.EventQueryHaveTalked() {
            Npc_HyrulePlain004.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
        if Npc_HyrulePlain004.EventQueryIsOnRecentTalkFlag() {
            Npc_HyrulePlain004.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
      case 10:
        if !Npc_HyrulePlain004.EventQueryHaveTalked() {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_07', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyrulePlain004_Talk03', 'Index': -1}) {
                Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_16', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'IsPlayASAllSlot': False, 'ChoiceCancelNo': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_23', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_22', 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 11:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 6, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_17', 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case [0, 2, 4]:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5]:
            switch EventWorldManagerController.EventQueryTimeDivision() {
              case [0, 1]:
                Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_02', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
              case [2, 3, 4, 5]:
                Event27:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_07', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else {
                    Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_01', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
              case [6, 7]:
                Event34:
                Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_05', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [2, 3, 6, 7, 8]:
            if !Npc_HyrulePlain004.EventQueryIsIndoor() {
                Event35:
                Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_04', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else {
                Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_03', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
        }
      case [1, 3, 5, 6, 7, 8, 9, 12, 13]:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 8]:
            goto Event27
          case [1, 2, 3, 4, 5, 6, 7]:
            goto Event35
        }
      case 10:
        goto Event34
      case 11:
        Npc_HyrulePlain004.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HyrulePlain004:Near_06', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Weather() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case 0:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_18', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 1:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4, 5, 6, 7]:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_19', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case 8:
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void RainRun() {
    if Npc_HyrulePlain004.EventQueryIsIndoor()
    && EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8]
    && Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() in [2, 4] {
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_06', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if Npc_HyrulePlain004.EventQueryHaveTalked() {
            Npc_HyrulePlain004.EventTriggerSetHaveTalked({'value': False, 'IsReflectWhenSleep': False})
        }
        if Npc_HyrulePlain004.EventQueryIsOnRecentTalkFlag() {
            Npc_HyrulePlain004.EventTriggerSetRecentTalkFlag({'value': False, 'IsReflectWhenSleep': False})
        }
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void Look_NushiShop() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NushiShop_Tutorial_IsCompleted_Exp'}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case 3:
            Event60:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Npc_HyrulePlain004.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [3359.0, 230.0, 2137.0], 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Look_NushiShop', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HyrulePlain004.EventTalk({'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_15', 'ASName': '', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
          case 5:
            if EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) in [2, 3, 4, 5, 6, 7, 8] {
                goto Event60
            }
        }
    }
}

void BlockFalls() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag()
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HyrulePlain004_Talk03', 'Index': -1}) {
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_27', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HyrulePlain004.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [3359.0, 230.0, 2137.0], 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Look_NushiShop', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_32', 'ASName': 'Act_LookUp', 'IsNotOpenIfSkipedMostRecent': False})
        Event90:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_HyrulePlain004_Talk02'}) {
            Npc_HyrulePlain004.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_09', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_30', 'ASName': 'Act_LookUp', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HyrulePlain004_Talk02'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [3359.0, 230.0, 2137.0], 'TurnFaceControlType': 1, 'Target': 3, 'InstanceName': 'Look_NushiShop', 'ActorName': 'DesignateMatrixActor', 'KeepTalkWait': True, 'OffsetBase': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            EventCamera.EventTriggerCameraSavePoint()
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsIgnorePosVectorReferenceActorRot': True, 'AtVectorSetType': 0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'TargetFovy': 40.0, 'PosVector': [1101.1700439453125, 131.10000610351562, -1128.2099609375], 'AtVector': [1101.2900390625, 131.25, -1128.2900390625], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})

            fork {
                Npc_HyrulePlain004.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HyrulePlain004', 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_03', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_08', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HyrulePlain004_Talk03', 'Index': -1, 'Value': True})
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_26', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HyrulePlain004.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'WorldPos': [3359.0, 230.0, 2137.0], 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'Look_NushiShop', 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_HyrulePlain004.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyrulePlain004:Talk_31', 'ASName': 'Act_LookUp', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event90
    }
}
