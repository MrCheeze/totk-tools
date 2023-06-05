-------- EventFlow: Npc_Road_012 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTriggerSetRecentTalkFlag', 'EventTalk']
queries: ['EventQueryCheckTerrorLevel', 'EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryResultOfNPCRescue']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice2', 'EventQueryRandomChoice3', 'EventQueryRandomChoice7', 'EventQueryRandomChoice6', 'EventQueryRandomChoice5']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch', 'EventQueryIsPouchContentForCooking']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Road_001[NpcBattle(Self)]
entrypoint: NpcBattle(Self)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Road_001[Atacked_Road(Self)]
entrypoint: Atacked_Road(Self)
actions: ['EventNPCTurnToTarget', 'EventTalk', 'EventTriggerSetHaveTalked']
queries: ['EventQueryResultOfNPCRescue', 'EventQueryCheckRankOfEnemyAttackedNPC']
params: None

Actor: Npc_Road_001[CookReword(Self)]
entrypoint: CookReword(Self)
actions: []
queries: []
params: None

Actor: Npc_Road_001[InitTalk_Npc_Attacked_Common(Self)]
entrypoint: InitTalk_Npc_Attacked_Common(Self)
actions: []
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: None

Actor: Npc_Road_001[Npc_Road_Common_Start(Self)]
entrypoint: Npc_Road_Common_Start(Self)
actions: ['EventTalk', 'EventTriggerSetHaveTalked']
queries: ['EventQueryCheckTerrorLevel', 'EventQueryResultOfNPCRescue']
params: None

void Talk() {
    Event0:

    call NpcBattle({'FlagNameToTurnON': 'Npc_Road_012_Reward', 'DefeatEnemy': 'Npc_Road_012_EnemyDefeat', 'HaveRescuedNpc': 'Npc_Road_012_HelpOn', 'Self': ActorIdentifier(name="Npc_EventStarter")})

}

void Near() {
    if Npc_EventStarter.EventQueryCheckTerrorLevel() == 3
    && !Npc_EventStarter.EventQueryResultOfNPCRescue() {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Road_012:Near00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void NpcBattle() {
    switch Npc_EventStarter.EventQueryCheckTerrorLevel() {
      case [0, 1, 2, 4]:
        Event1:

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatEnemy'})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Attacked_Common_AfterFailed', 'Index': -1}) {
                Npc_Road_001[NpcBattle(Self)].EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:AfterFailed', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChangeMstxtForActor': True, 'IsNotOpenIfSkipedMostRecent': False})
            } else
            Event214:
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_001'}) {

                call Npc_Attacked02_001.NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_002'}) {

                call Npc_Attacked02_002.NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_003'}) {

                call Npc_Attacked02_003.NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_004'}) {

                call Npc_Attacked02_004.NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Road_012'}) {

                call NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_NorthHateru_around001'}) {

                call Npc_NorthHateru_around001.NormalTalk()

            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_BaseCamp008'}) {

                call Npc_BaseCamp008.NormalTalk()

            }
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked_Common_AfterFailed', 'Index': -1, 'Value': False})
            goto Event214
        }
      case [3, 5]:

        call InitTalk_Npc_Attacked_Common({'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc', 'Self': ActorIdentifier(name="Npc_EventStarter"), 'FlagNameToTurnON': 'FlagNameToTurnON'})

        goto Event1
    }
}

void Atacked_Road() {
    switch Npc_Road_001[Atacked_Road(Self)].EventQueryResultOfNPCRescue() {
      case 0:
        Npc_Road_001[Atacked_Road(Self)].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked_Common_AfterFailed', 'Value': False, 'Index': -1})
        switch Npc_Road_001[Atacked_Road(Self)].EventQueryCheckRankOfEnemyAttackedNPC() {
          case 0:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv1_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            Event49:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveRescuedNpc'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DefeatEnemy'})
            if !PouchSystemActor.EventQueryIsPouchContentForCooking({'Number': 1}) {
                Event190:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Event66:
                    Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks01', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Event67:

                call CookReword({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON'})

                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_001'}) {

                    call Npc_Attacked02_001.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_002'}) {

                    call Npc_Attacked02_002.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_003'}) {

                    call Npc_Attacked02_003.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_004'}) {

                    call Npc_Attacked02_004.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Road_012'}) {

                    call GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_NorthHateru_around001'}) {

                    call Npc_NorthHateru_around001.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                } else
                if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_BaseCamp008'}) {

                    call Npc_BaseCamp008.GoodBye()

                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Road_012'}) {
                if !GameSystemActor.EventQueryRandomChoice2() {
                    goto Event66
                } else {
                    Event174:
                    Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks02', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event67
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_001'}) {
                Event192:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    goto Event174
                } else {
                    Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Thanks03', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event67
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_004'}) {
                goto Event192
            } else
            goto Event190
          case 1:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv2_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event49
          case 2:
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Road_001:SavedLv3_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event49
        }
      case [1, 3]:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked_Common_AfterFailed', 'Value': False, 'Index': -1})
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Atacked01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'BattleWait', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_Road_001[Atacked_Road(Self)].EventTriggerSetHaveTalked({'IsReflectWhenSleep': False, 'value': 'Talked'})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'IsReflectWhenSleep': False, 'value': 'RecentTalkFlag'})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
      case 2:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Road_001[Atacked_Road(Self)].EventTalk({'ChangeMstxtForActor': True, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_Road_001:Failed01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_Road_001[Atacked_Road(Self)].EventTriggerSetHaveTalked({'IsReflectWhenSleep': False, 'value': 'Talked'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked_Common_AfterFailed', 'Value': True, 'Index': -1})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void CookReword() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'FlagNameToTurnON', 'Index': -1}) {

        call Npc_Road_Common.2ndReward({'Self': 'Self'})

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'FlagNameToTurnON', 'Index': -1, 'Value': True})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Cook_G_10'}) {
            if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': '', 'IsCheckInstanceName': False}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_Cheese_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
                        switch GameSystemActor.EventQueryRandomChoice7() {
                          case 0:
                            Event131:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_FishGet_A', 'MaterialActorName3': 'Item_FishGet_A'})

                          case 1:
                            Event132:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_PlantGet_A', 'MaterialActorName3': 'Item_PlantGet_A'})

                          case 2:
                            Event133:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_Fruit_M', 'MaterialActorName3': 'Item_Mushroom_E'})

                          case 3:
                            Event137:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Material_07', 'MaterialActorName3': 'Item_Material_07', 'MaterialActorName4': 'Item_Material_01'})

                          case 4:
                            Event118:

                            call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Material_07'})

                          case 5:
                            Event119:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName3': 'Item_Ore_H', 'MaterialActorName2': 'Item_Material_03', 'MaterialActorName4': 'Item_FishGet_A'})

                          case 6:

                            call GetPouchContent.GetCookResult5({'MaterialActorName3': 'Item_Material_07', 'MaterialActorName1': 'Item_Fruit_N', 'MaterialActorName2': 'Item_Fruit_N', 'MaterialActorName5': 'Item_Material_01', 'MaterialActorName4': 'Item_Material_06'})

                        }
                    } else
                    switch GameSystemActor.EventQueryRandomChoice6() {
                      case 0:
                        goto Event131
                      case 1:
                        goto Event132
                      case 2:
                        goto Event133
                      case 3:
                        goto Event137
                      case 4:
                        goto Event118
                      case 5:
                        goto Event119
                    }
                } else
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    goto Event131
                  case 1:
                    goto Event132
                  case 2:
                    goto Event133
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Road_012'}) {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:

                    call GetPouchContent.GetCookResult5({'MaterialActorName1': 'WaterFruit', 'MaterialActorName2': 'WaterFruit', 'MaterialActorName3': 'Item_Fruit_A', 'MaterialActorName4': 'Item_Fruit_A', 'MaterialActorName5': 'Item_Fruit_A'})

                  case 1:

                    call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Fruit_E', 'MaterialActorName2': 'Item_Fruit_E', 'MaterialActorName3': 'Item_Fruit_A', 'MaterialActorName4': 'Item_Fruit_A'})

                  case 2:

                    call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Material_06', 'MaterialActorName1': 'Item_PlantGet_S', 'MaterialActorName2': 'Item_PlantGet_S', 'MaterialActorName3': 'Item_PlantGet_S'})

                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_001'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_Cheese_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
                        switch GameSystemActor.EventQueryRandomChoice7() {
                          case 0:
                            Event128:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Meat_06', 'MaterialActorName2': 'Item_Meat_06', 'MaterialActorName3': 'Item_Meat_06', 'MaterialActorName4': 'Item_Material_09'})

                          case 1:
                            Event129:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_09', 'MaterialActorName2': 'Item_Material_03', 'MaterialActorName4': 'Item_Material_04', 'MaterialActorName3': 'Item_Meat_01'})

                          case 2:
                            Event130:

                            call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Material_09', 'MaterialActorName2': 'Item_PlantGet_S', 'MaterialActorName3': 'Item_PlantGet_S', 'MaterialActorName1': 'Item_FishGet_A'})

                          case 3:
                            Event114:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Fruit_M', 'MaterialActorName3': 'Item_Material_07'})

                          case 4:
                            Event134:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Meat_01', 'MaterialActorName3': 'Item_Material_03', 'MaterialActorName4': 'Item_Ore_H'})

                          case 5:
                            Event135:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_Material_04', 'MaterialActorName3': 'Item_Ore_H', 'MaterialActorName4': 'Item_Mushroom_E'})

                          case 6:

                            call GetPouchContent.GetCookResult5({'MaterialActorName3': 'Item_Material_07', 'MaterialActorName1': 'Item_Fruit_N', 'MaterialActorName2': 'Item_Fruit_N', 'MaterialActorName4': 'Item_Material_05', 'MaterialActorName5': 'Item_Material_06'})

                        }
                    } else
                    switch GameSystemActor.EventQueryRandomChoice6() {
                      case 0:
                        goto Event128
                      case 1:
                        goto Event129
                      case 2:
                        goto Event130
                      case 3:
                        goto Event114
                      case 4:
                        goto Event134
                      case 5:
                        goto Event135
                    }
                } else
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    goto Event128
                  case 1:
                    goto Event129
                  case 2:
                    goto Event130
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_002'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_Cheese_IsCompleted_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_NewSpecialty_IsCompleted_Exp'}) {
                        switch GameSystemActor.EventQueryRandomChoice6() {
                          case 0:
                            Event140:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_H', 'MaterialActorName2': 'Item_Material_07', 'MaterialActorName3': 'Item_Material_01'})

                          case 1:
                            Event141:

                            call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Fruit_J', 'MaterialActorName2': 'Item_Material_07', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Material_06'})

                          case 2:
                            Event142:

                            call GetPouchContent.GetCookResult4({'MaterialActorName4': 'Item_Material_06', 'MaterialActorName1': 'Item_PlantGet_S', 'MaterialActorName2': 'Item_PlantGet_S', 'MaterialActorName3': 'Item_PlantGet_A'})

                          case 3:
                            Event145:

                            call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_FishGet_F'})

                          case 4:
                            Event146:

                            call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_Material_10', 'MaterialActorName2': 'Item_FishGet_G'})

                          case 5:

                            call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_Fruit_N', 'MaterialActorName2': 'Item_Fruit_N', 'MaterialActorName3': 'Item_Meat_01'})

                        }
                    } else
                    switch GameSystemActor.EventQueryRandomChoice5() {
                      case 0:
                        goto Event140
                      case 1:
                        goto Event141
                      case 2:
                        goto Event142
                      case 3:
                        goto Event145
                      case 4:
                        goto Event146
                    }
                } else
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    goto Event140
                  case 1:
                    goto Event141
                  case 2:
                    goto Event142
                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_003'}) {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:

                    call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Mushroom_L', 'MaterialActorName2': 'Item_Mushroom_E', 'MaterialActorName3': 'Item_Mushroom_E', 'MaterialActorName4': 'Item_Mushroom_E', 'MaterialActorName5': 'Item_Mushroom_E'})

                  case 1:

                    call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_FishGet_H', 'MaterialActorName2': 'Item_FishGet_A', 'MaterialActorName3': 'Item_FishGet_A'})

                  case 2:

                    call GetPouchContent.GetCookResult2({'MaterialActorName1': 'Item_InsectGet_Z', 'MaterialActorName2': 'Item_FishGet_A'})

                }
            } else
            if !EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_Attacked02_004'}) {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:

                    call GetPouchContent.GetCookResult5({'MaterialActorName1': 'Item_Fruit_M', 'MaterialActorName2': 'Item_Fruit_M', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Ore_H', 'MaterialActorName5': 'Item_Mushroom_J'})

                  case 1:

                    call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_Material_03', 'MaterialActorName3': 'Item_Material_05', 'MaterialActorName4': 'Item_Mushroom_J', 'MaterialActorName2': 'Item_PlantGet_A'})

                  case 2:

                    call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_PlantGet_S', 'MaterialActorName2': 'Item_PlantGet_S', 'MaterialActorName3': 'Item_PlantGet_S'})

                }
            } else
            if EventSystemActor.EventQueryIsEventStarter({'InstanceName': '', 'IsCheckInstanceName': False, 'ActorName': 'Npc_BaseCamp008'}) in [0, 1] {
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:

                    call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_PlantGet_I', 'MaterialActorName2': 'Item_PlantGet_I', 'MaterialActorName3': 'Item_PlantGet_I', 'MaterialActorName4': 'Item_PlantGet_I'})

                  case 1:

                    call GetPouchContent.GetCookResult4({'MaterialActorName1': 'Item_PlantGet_H', 'MaterialActorName2': 'Item_PlantGet_H', 'MaterialActorName3': 'Item_PlantGet_H', 'MaterialActorName4': 'Item_PlantGet_H'})

                  case 2:

                    call GetPouchContent.GetCookResult3({'MaterialActorName1': 'Item_PlantGet_O', 'MaterialActorName2': 'Item_PlantGet_O', 'MaterialActorName3': 'Item_PlantGet_O'})

                }
            }
        } else {

            call Npc_Road_Common.1st_Reword({'Self': 'Self'})

        }
    }
}

void InitTalk_Npc_Attacked_Common() {
    if !Npc_Road_001[InitTalk_Npc_Attacked_Common(Self)].EventQueryHaveTalked() {
        if !Npc_Road_001[InitTalk_Npc_Attacked_Common(Self)].EventQueryIsOnRecentTalkFlag() {

            call Npc_Road_Common_Start({'Talked': True, 'RecentTalkFlag': True, 'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc'})

        } else {

            call Npc_Road_Common_Start({'Talked': True, 'RecentTalkFlag': False, 'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc'})

        }
    } else
    if !Npc_Road_001[InitTalk_Npc_Attacked_Common(Self)].EventQueryIsOnRecentTalkFlag() {

        call Npc_Road_Common_Start({'RecentTalkFlag': True, 'Talked': False, 'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc'})

    } else {

        call Npc_Road_Common_Start({'Talked': False, 'RecentTalkFlag': False, 'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc'})

    }
}

void Npc_Road_Common_Start() {
    switch Npc_Road_001[Npc_Road_Common_Start(Self)].EventQueryCheckTerrorLevel() {
      case 3:
        switch Npc_Road_001[Npc_Road_Common_Start(Self)].EventQueryResultOfNPCRescue() {
          case [0, 1]:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

            Event31:

            call Atacked_Road({'Self': 'Self', 'FlagNameToTurnON': 'FlagNameToTurnON', 'DefeatEnemy': 'DefeatEnemy', 'HaveRescuedNpc': 'HaveRescuedNpc', 'Talked': 'Talked', 'RecentTalkFlag': 'RecentTalkFlag'})

            Event34:
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
          case 2:

            call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 4})

            goto Event31
          case 3:

            call InitTalk.InitTalkNPCEquip({'Arg_Greeting': 4})

            goto Event31
        }
      case 5:

        call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 4})

        Npc_Road_001[Npc_Road_Common_Start(Self)].EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_001:Guardian00', 'ChangeMstxtForActor': True, 'ASName': 'Notice', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_Road_001[Npc_Road_Common_Start(Self)].EventTriggerSetHaveTalked({'IsReflectWhenSleep': False, 'value': 'Talked'})
        Npc_EventStarter.EventTriggerSetRecentTalkFlag({'IsReflectWhenSleep': False, 'value': 'RecentTalkFlag'})
        goto Event34
    }
}

void Npc_Road_012_EnemyDefeat_Talk() {
    goto Event0
}

void GoodBye() {
    Event56:
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Event178:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Road_012_FreeTalkNum'}) {
          case 0:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GreetGoodBye()

            }
          case 1:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_01_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event229:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 2:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_02_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GreetGoodBye()

            }
          case 3:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_03_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk01_03_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GreetGoodBye()

            }
          case 4:
            Event207:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk02_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GreetGoodBye()

            }
          case 5:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk03_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk03_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GreetGoodBye()

            }
          case [6, 7, 8, 9, 10, 11, 12, 13, 15]:
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 4, 'Index': -1})
            goto Event207
        }
    } else {

        call SelectFreeTalk()

        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:GoodBye01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:GoodBye00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event178
    }
}

void NormalTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event56
    } else
    if !Npc_EventStarter.EventQueryHaveTalked() {

        call GerudoGreet()

    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk99', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event56
}

void GerudoGreet() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk99_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk99_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5, 6, 7]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Road_012:Talk99_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SelectFreeTalk() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Road_012', 'InstanceName': 'HyrulePlain_E-5'}) {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 0, 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_012_FreeTalkAboutHighSpotA', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Road_012_FreeTalkAboutHighSpotB', 'Index': -1}) {
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Road_012_FreeTalkAboutShootingStar'}) {
              case [0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 1, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkAboutShootingStar', 'Value': 1, 'Index': -1})
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 2, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkAboutShootingStar', 'Value': 2, 'Index': -1})
              case 2:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 3, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkAboutShootingStar', 'Value': 3, 'Index': -1})
              case 3:
                if !GameSystemActor.EventQueryRandomChoice2() {
                    switch GameSystemActor.EventQueryRandomChoice5() {
                      case [0, 1, 2, 3]:
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 2, 'Index': -1})
                      case 4:
                        Event172:
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 3, 'Index': -1})
                    }
                } else
                switch GameSystemActor.EventQueryRandomChoice5() {
                  case [0, 1]:
                    goto Event172
                  case 2:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 1, 'Index': -1})
                  case 3:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 5, 'Index': -1})
                  case 4:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 4, 'Index': -1})
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 5, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Road_012_FreeTalkAboutHighSpotB'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Road_012_FreeTalkNum', 'Value': 4, 'Index': -1})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Road_012_FreeTalkAboutHighSpotA', 'Value': True})
    }
}

void GreetGoodBye() {
    goto Event229
}
