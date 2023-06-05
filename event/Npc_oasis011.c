-------- EventFlow: Npc_oasis011 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventWait']
queries: ['EventQueryAIScheduleCheckActorAction14', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14_2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis011
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerRequestLookSpeaker', 'EventDisableRecentTalkFlag', 'EventNPCTurnToTarget', 'EventTriggerBecomeSpeaker', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis048
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookSpeaker', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_UMiiVillage033_Gerudo
entrypoint: None()
actions: ['EventTalk', 'EventTriggerRequestLookSpeaker', 'EventDisableRecentTalkFlag', 'EventPlayAS', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis022
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis002[OutUG]
entrypoint: None()
actions: []
queries: ['EventQueryIsShopSoldOutFor3DShop']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis002[InUG]
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_oasis013
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Event9:
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 2, 4, 5, 6, 7, 8, 9, 12, 13]:
            Event46:
            if !Npc_oasis011.EventQueryIsOnRecentTalkFlag() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis011.EventPlayAS({'ASName': 'Crouch', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
                EventSystemActor.EventWait({'Frames': 90, 'IsWaitEnd': True})
                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0009', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0027', 'NotPlayLipSyncAnim': False, 'ASName': 'Crouch', 'IsNotOpenIfSkipedMostRecent': False})
                Event142:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis011_FirstTalk_AfterSageChalle'})
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0005', 'ASName': 'Crouch', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0009', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0010', 'NotPlayLipSyncAnim': False, 'ASName': 'Crouch', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event142
            }
          case 1:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [3, 10]:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_oasis011_AreaCheck'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NpcOasis011_JustTalked_NpcOasis002', 'Index': -1}) {

                    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0007', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_oasis002[InUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0024', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event142
                } else {

                    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

                    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0006', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0007', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0005', 'NotPlayLipSyncAnim': False, 'ASName': 'Crouch', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_oasis002[InUG].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0008', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis011_JustTalked_NpcOasis002', 'Index': -1, 'Value': True})
                    goto Event142
                }
            } else
            goto Event46
          case 11:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NpcOasis011_JustTalked_NpcOasis002', 'Value': False, 'Index': -1})
        Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})
        goto Event9
    }
}

void Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 1:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 2:
        if EventWorldManagerController.EventQueryTimeDivision() == 3 {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 3:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0005', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 10:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 11:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case 0:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0007', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 1:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0008', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 4:
            if EventWorldManagerController.EventQueryTimeDivision() == 3 {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0009', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case 5:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0013', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 6:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0018', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 7:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0019', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
      case 10:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0010', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 11:
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0011', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NpcOasis011_FirstTalk_AfterSageChalle'}) {
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
          case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:
            switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
              case [0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]:

                fork {

                    call GerudoGreeting.InitTalk_GerudoGreeting()


                    call GerudoGreeting.HelloYouth()

                } {
                    if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() == 5 {
                        Npc_oasis013.EventTriggerParticipateEvent()
                        Npc_oasis013.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    }
                }

                Event13:
                switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
                  case 0:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0021', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 1:
                    Event68:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0011', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case 4:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 5:
                    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    if !Npc_oasis002[OutUG].EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Npc_oasis013.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                    Npc_oasis013.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                    Npc_oasis011.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
                    Npc_oasis011.EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
                  case 6:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                  case 7:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 1:

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

                goto Event68
            }
          case 10:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 11:

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

            Event23:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Gerudo_UMiiVillage033_CameGerudo'}) {
                Npc_oasis022.EventTriggerParticipateEvent()
                if Npc_oasis022.EventQueryAIScheduleCheckActorAction14() == 3 {

                    call Npc_oasis022.Talk0()

                }
            }
        }
    } else
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14_2() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13]:

        fork {

            call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        } {
            if Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() == 5 {
                Npc_oasis013.EventTriggerParticipateEvent()
                Npc_oasis013.EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            }
        }

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis011_FirstTalk_AfterSageChalle'})
        switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
          case [0, 4, 6, 7]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0037', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [1, 2, 3, 5, 8, 9, 10, 11, 12, 13]:
            goto Event13
        }
      case 10:

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0036', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NpcOasis011_FirstTalk_AfterSageChalle'})
      case 11:

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


        call Sleep2Arrival()

    }
}

void Sleep2Arrival() {
    goto Event23
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_NearActorsTalk() {

    call InitTalk.InitTalk_Pair({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_oasis048', 'Spearker1InstanceName': '', 'Spearker2ActorName': 'Npc_oasis011', 'Spearker2InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_oasis048"), 'Actor2': ActorIdentifier(name="Npc_oasis011")})


    fork {
        Npc_oasis048.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 3, 'Target': 3, 'ActorName': 'Npc_oasis011', 'WorldPos': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_oasis011.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 3, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_oasis048', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_oasis048.EventTriggerRequestLookSpeaker()
    Npc_oasis011.EventTriggerRequestLookSpeaker()
    Npc_oasis048.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_oasis011.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0040', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis048.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0041', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0042', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis048.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0043', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis048.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_oasis011.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void SageOfGerudo_IsAfter_DungeonBossDead_Exp_NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Gerudo_UMiiVillage033_CameGerudo_NearActorsTalk() {

    call InitTalk.InitTalk_Trio({'Arg_Turn': 0, 'Arg_Greeting': 3, 'Spearker1ActorName': 'Npc_oasis048', 'Spearker1InstanceName': '', 'Spearker2InstanceName': '', 'Spearker3InstanceName': '', 'Actor1': ActorIdentifier(name="Npc_oasis048"), 'Actor2': ActorIdentifier(name="Npc_UMiiVillage033_Gerudo"), 'Actor3': ActorIdentifier(name="Npc_oasis011"), 'Spearker2ActorName': 'Npc_UMiiVillage033_Gerudo', 'Spearker3ActorName': 'Npc_oasis011'})

    Npc_oasis011.EventTriggerBecomeSpeaker()

    fork {
        Npc_oasis048.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 3, 'Target': 3, 'ActorName': 'Npc_oasis011', 'WorldPos': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_oasis011.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsWaitEnd': True, 'Target': 0, 'ActorName': '', 'WorldPos': [-3804.340087890625, 149.02000427246094, 2906.679931640625], 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 3, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Npc_UMiiVillage033_Gerudo.EventNPCTurnToTarget({'IsReleaseThreaten': True, 'InstanceName': '', 'Direction': 0.0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': True, 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'FaceControlType': 3, 'Target': 3, 'ActorName': 'Npc_oasis011', 'WorldPos': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }

    Npc_oasis048.EventTriggerRequestLookSpeaker()
    Npc_oasis011.EventTriggerRequestLookSpeaker()
    Npc_UMiiVillage033_Gerudo.EventTriggerRequestLookSpeaker()
    Npc_oasis048.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_oasis011.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_UMiiVillage033_Gerudo.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    Npc_oasis011.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0050', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_UMiiVillage033_Gerudo.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0051', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis048.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_oasis011:talk0052', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_oasis048.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_oasis011.EventDisableRecentTalkFlag({'IsWaitEnd': True})
    Npc_UMiiVillage033_Gerudo.EventDisableRecentTalkFlag({'IsWaitEnd': True})
}

void Gerudo_UMiiVillage033_CameGerudo_NearActorsNear() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_oasis011:near0020', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}
