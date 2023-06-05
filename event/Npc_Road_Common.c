-------- EventFlow: Npc_Road_Common --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice2', 'EventQueryRandomChoice4', 'EventQueryRandomChoice3', 'EventQueryRandomChoice6']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_Road_001[Atacked_Road(Self)]
entrypoint: Atacked_Road(Self)
actions: ['EventTalk']
queries: ['EventQueryResultOfNPCRescue', 'EventQueryCheckRankOfEnemyAttackedNPC', 'EventQueryAIScheduleIsBattleEnemy', 'EventQueryHorseState']
params: None

Actor: Npc_Road_001[CookReword(Self)]
entrypoint: CookReword(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[InitTalk_Npc_Road_Common(Self)]
entrypoint: InitTalk_Npc_Road_Common(Self)
actions: []
queries: ['EventQueryCheckTerrorLevel', 'EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryResultOfNPCRescue']
params: None

Actor: Npc_Road_001[Reword(Self)]
entrypoint: Reword(Self)
actions: []
queries: ['EventQueryCheckRankOfEnemyAttackedNPC']
params: None

Actor: Npc_Road_001[Npc_Road_Common_Start(Self)]
entrypoint: Npc_Road_Common_Start(Self)
actions: ['EventTriggerSetHaveTalked', 'EventTalk']
queries: ['EventQueryCheckTerrorLevel', 'EventQueryResultOfNPCRescue', 'EventQueryHorseState']
params: None

Actor: Npc_Road_001[CookEX(Self)]
entrypoint: CookEX(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[2ndReward(Self)]
entrypoint: 2ndReward(Self)
actions: []
queries: ['EventQueryCheckRankOfEnemyAttackedNPC']
params: None

Actor: Npc_Road_001[1st_Reword(Self)]
entrypoint: 1st_Reword(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[CookEX0_Bongo(Self)]
entrypoint: CookEX0_Bongo(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[2ndReward0_Bongo(Self)]
entrypoint: 2ndReward0_Bongo(Self)
actions: []
queries: ['EventQueryCheckRankOfEnemyAttackedNPC']
params: None

void Atacked_Road() {
    switch Npc_Road_001[Atacked_Road(Self)].EventQueryResultOfNPCRescue() {
      case 0:
        switch Npc_Road_001[Atacked_Road(Self)].EventQueryCheckRankOfEnemyAttackedNPC() {
          case 0:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event20:
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call CookReword({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON'})

          case 1:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event20
          case 2:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event20
        }
      case [1, 3]:
        if !Npc_Road_001[Atacked_Road(Self)].EventQueryAIScheduleIsBattleEnemy() {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_Common_UseMsgASInBattle', 'Index': -1}) {
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        switch Npc_Road_001[Atacked_Road(Self)].EventQueryHorseState() {
          case 0:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [1, 2]:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideCrouch', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideCrouch', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
      case 2:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void CookReword() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlagNameToTurnON', 'Index': -1}) {

        call 2ndReward({'Self': 'Self'})

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FlagNameToTurnON', 'Index': -1, 'Value': True})

        call CookEX({'Self': 'Self'})

    }
}

void InitTalk_Npc_Road_Common() {
    switch Npc_Road_001[InitTalk_Npc_Road_Common(Self)].EventQueryCheckTerrorLevel() {
      case [0, 1, 2, 4, 5]:
        Event28:
        if !Npc_Road_001[InitTalk_Npc_Road_Common(Self)].EventQueryHaveTalked() {
            if !Npc_Road_001[InitTalk_Npc_Road_Common(Self)].EventQueryIsOnRecentTalkFlag() {

                call Npc_Road_Common_Start({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'Talked': True, 'RecentTalkFlag': True})

            } else {

                call Npc_Road_Common_Start({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'Talked': True, 'RecentTalkFlag': False})

            }
        } else
        if !Npc_Road_001[InitTalk_Npc_Road_Common(Self)].EventQueryIsOnRecentTalkFlag() {

            call Npc_Road_Common_Start({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'RecentTalkFlag': True, 'Talked': False})

        } else {

            call Npc_Road_Common_Start({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'Talked': False, 'RecentTalkFlag': False})

        }
      case 3:
        switch Npc_Road_001[InitTalk_Npc_Road_Common(Self)].EventQueryResultOfNPCRescue() {
          case 0:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_Common_RecentTalkFlagONInRescue', 'Index': -1}) {

                call Npc_Road_Common_Start({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'Talked': True, 'RecentTalkFlag': True})

            } else
            goto Event28
          case [1, 2, 3]:
            goto Event28
        }
    }
}

void Reword() {
    switch Npc_Road_001[Reword(Self)].EventQueryCheckRankOfEnemyAttackedNPC() {
      case 0:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee'})

      case 1:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Blue'})

      case 2:

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

    }
}

void Npc_Road_Common_Start() {
    switch Npc_Road_001[Npc_Road_Common_Start(Self)].EventQueryCheckTerrorLevel() {
      case 3:
        switch Npc_Road_001[Npc_Road_Common_Start(Self)].EventQueryResultOfNPCRescue() {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            Event5:

            call Atacked_Road({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON'})

            Event345:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Road_Common_RecentTalkFlagONInRescue', 'Value': False, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'Npc_Road_Common_UseMsgASInBattle', 'Index': -1})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_Road_001[Npc_Road_Common_Start(Self)].EventTriggerSetHaveTalked({'value': 'Talked', 'IsReflectWhenSleep': False})
            Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': 'RecentTalkFlag', 'IsReflectWhenSleep': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
          case 2:

            call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 4})

            goto Event5
          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

            goto Event5
        }
      case 5:

        call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 4})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_Common_UseMsgASInBattle', 'Index': -1}) {
            Npc_Road_001[Npc_Road_Common_Start(Self)].EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event345
        } else
        switch Npc_Road_001[Npc_Road_Common_Start(Self)].EventQueryHorseState() {
          case 0:
            Npc_Road_001[Npc_Road_Common_Start(Self)].EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Notice', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event345
          case [1, 2]:
            Npc_Road_001[Npc_Road_Common_Start(Self)].EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'RideCrouch', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event345
        }
    }
}

void CookEX() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_002_Road', 'InstanceName': '', 'IsCheckInstanceName': False}) {

        call CookEX0_Bongo({'Self': 'Self'})

    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        switch GameSystemActor.EventQueryRandomChoice6() {
          case 0:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_K_03'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_FishGet_G', 'MaterialActorName2': 'Item_Fruit_J', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Material_07', 'MaterialActorName5': 'Item_Material_06'})

            } else {
                Event266:

                call 1st_Reword({'Self': 'Self'})

            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_I_06'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName2': 'Item_Fruit_J', 'MaterialActorName4': 'Item_Material_07', 'MaterialActorName5': 'Item_Material_06', 'MaterialActorName1': 'Item_Material_01', 'MaterialActorName3': 'Item_Material_07'})

            } else {
                goto Event266
            }
          case 2:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_K_08'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName4': 'Item_Material_07', 'MaterialActorName5': 'Item_Material_06', 'MaterialActorName1': 'Item_Material_01', 'MaterialActorName2': 'Item_PlantGet_M', 'MaterialActorName3': 'Item_PlantGet_M'})

            } else {
                goto Event266
            }
          case 3:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_J_02'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName3': 'Item_PlantGet_M', 'MaterialActorName1': 'Item_Fruit_E', 'MaterialActorName2': 'Item_Fruit_E', 'MaterialActorName4': 'Item_Material_02', 'MaterialActorName5': 'Item_Material_03'})

            } else {
                goto Event266
            }
          case 4:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_I_05'}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_PlantGet_Q', 'MaterialActorName2': 'Item_Material_07', 'MaterialActorName3': 'Item_Material_01', 'MaterialActorName4': 'Item_Material_06'})

            } else {
                goto Event266
            }
          case 5:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_F_03'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_PlantGet_Q', 'MaterialActorName2': 'Item_Material_05', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Material_05', 'MaterialActorName5': 'Item_Ore_H'})

            } else {
                goto Event266
            }
        }
    } else
    switch GameSystemActor.EventQueryRandomChoice6() {
      case 0:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_I_15'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName2': 'Item_Material_06', 'MaterialActorName3': 'Item_Material_07', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName1': 'Item_FishGet_I'})

        } else {
            Event264:

            call 1st_Reword({'Self': 'Self'})

        }
      case 1:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_N_04'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName3': 'Item_Material_06', 'MaterialActorName2': 'Item_Material_04', 'MaterialActorName1': 'Item_Mushroom_F'})

        } else {
            goto Event264
        }
      case 2:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_A_13'}) {

            call GetPouchContent.GetCookResult2({'MaterialActorName2': 'BeeHome', 'MaterialActorName1': 'Item_FishGet_L'})

        } else {
            goto Event264
        }
      case 3:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_G_16'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName3': 'Item_Material_03', 'MaterialActorName2': 'Item_Material_04', 'MaterialActorName1': 'Item_InsectGet_Z'})

        } else {
            goto Event264
        }
      case 4:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_J_03'}) {

            call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_Material_02', 'MaterialActorName3': 'Item_Material_02', 'MaterialActorName4': 'Item_Material_03', 'MaterialActorName5': 'Item_Material_03'})

        } else {
            goto Event264
        }
      case 5:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_G_10'}) {

            call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName3': 'Item_Material_03', 'MaterialActorName1': 'Item_FishGet_F', 'MaterialActorName2': 'Item_FishGet_F'})

        } else {
            goto Event264
        }
    }
}

void 2ndReward() {
    if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_002_Road', 'InstanceName': '', 'IsCheckInstanceName': False}) {

        call 2ndReward0_Bongo({'Self': 'Self'})

    } else
    switch Npc_Road_001[2ndReward(Self)].EventQueryCheckRankOfEnemyAttackedNPC() {
      case 0:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_A_01'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Mushroom_E', 'MaterialActorName2': 'Item_Mushroom_E', 'MaterialActorName3': 'Item_Mushroom_E'})

            } else {
                Event286:

                call Reword({'Self': 'Self'})

            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_02'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_A', 'MaterialActorName2': 'Item_Fruit_A', 'MaterialActorName3': 'Item_Fruit_A'})

            } else {
                goto Event286
            }
          case 2:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_A_05'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Meat_01', 'MaterialActorName2': 'Item_PlantGet_U', 'MaterialActorName3': 'Item_PlantGet_U'})

            } else {
                goto Event286
            }
        }
      case 1:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_05'}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_FishGet_A', 'MaterialActorName2': 'Item_FishGet_A'})

            } else {
                Event284:

                call Reword({'Self': 'Self'})

            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_06'}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Meat_01', 'MaterialActorName2': 'Item_Meat_01'})

            } else {
                goto Event284
            }
          case 2:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_01'}) {

                call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_PlantGet_A', 'MaterialActorName2': 'Item_PlantGet_A'})

            } else {
                goto Event284
            }
        }
      case 2:
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_17'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName2': 'Item_Mushroom_E', 'MaterialActorName1': 'Item_FishGet_A', 'MaterialActorName3': 'Item_Meat_01'})

            } else {
                Event267:

                call Reword({'Self': 'Self'})

            }
          case 1:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_G_15'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName2': 'Item_Mushroom_E', 'MaterialActorName3': 'Item_Meat_01', 'MaterialActorName1': 'Item_Material_03'})

            } else {
                goto Event267
            }
          case 2:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_P_04'}) {

                call GetPouchContent.GetCookResult3({'MaterialActorName3': 'Item_Meat_01', 'MaterialActorName1': 'Item_Meat_02', 'MaterialActorName2': 'Item_Material_02'})

            } else {
                goto Event267
            }
        }
    }
}

void 1st_Reword() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Red'})

}

void CookEX0_Bongo() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_RevitalizeByNewSpeciality_IsCompleted_Exp'}) {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_S_04'}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName3': 'Item_Material_03', 'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Meat_11'})

            } else {
                Event297:

                call Reword({'Self': 'Self'})

            }
          case 1:
            Event295:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_K_05'}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Meat_11', 'MaterialActorName2': 'Item_Material_07', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Material_06'})

            } else {
                goto Event297
            }
          case 2:
            Event314:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_J_09'}) {

                call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Meat_11', 'MaterialActorName2': 'Item_Meat_01', 'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Material_02'})

            } else {
                goto Event297
            }
          case 3:
            Event316:
            if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_I_04'}) {

                call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Meat_11', 'MaterialActorName2': 'Item_Meat_01', 'MaterialActorName3': 'Item_Material_07', 'MaterialActorName4': 'Item_Material_06', 'MaterialActorName5': 'Item_Ore_H'})

            } else {
                goto Event297
            }
        }
    } else
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        goto Event295
      case 1:
        goto Event314
      case 2:
        goto Event316
    }
}

void 2ndReward0_Bongo() {
    switch Npc_Road_001[2ndReward0_Bongo(Self)].EventQueryCheckRankOfEnemyAttackedNPC() {
      case 0:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_B_06'}) {

            call GetPouchContent.GetCookResult1({'MaterialActorName1': 'Item_Meat_02'})

        } else {

            call Reword({'Self': 'Self'})

        }
      case 1:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_G_15'}) {

            call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Meat_01', 'MaterialActorName2': 'Item_Material_03'})

        } else {

            call Reword({'Self': 'Self'})

        }
      case 2:
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_P_04'}) {

            call GetPouchContent.GetCookResult3({'MaterialActorName3': 'Item_Meat_01', 'MaterialActorName1': 'Item_Meat_02', 'MaterialActorName2': 'Item_Material_02'})

        } else {

            call Reword({'Self': 'Self'})

        }
    }
}

void Set_RecentFlagOnRescue() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Road_Common_RecentTalkFlagONInRescue', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Set_UseMsgASInBattle() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Road_Common_UseMsgASInBattle', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}
