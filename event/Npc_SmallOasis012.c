-------- EventFlow: Npc_SmallOasis012 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsTravelerWait', 'EventQueryTravelerDirection', 'EventQueryTravelerMovingBetweenCheckPoint', 'EventQueryIsOnRecentTalkFlag', 'EventQueryTravelerPrevCheckPoint', 'EventQueryCheckTerrorLevel', 'EventQueryTravelerCheckStateOfShelterFromRain', 'EventQueryHaveTalked']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 2, 'Arg_Greeting': 2})


    call NpcBattle()


    call GerudoGreet()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_FirstTalk_atKD', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Event66:

            call Talk_Main({'StartPoint': 'D-4_Bato_Npc_SmallOasis012_Start', 'GoalPoint': 'D-5_Bato_Npc_SmallOasis012_Goal', 'RestPoint': 'D-5_Bato_Npc_SmallOasis012_00'})

        } else
        switch Npc_EventStarter.EventQueryTravelerCheckStateOfShelterFromRain() {
          case 0:
            goto Event66
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Greeting_02', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event66
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_FirstTalk_Tree', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Greeting', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Greeting_00', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Greeting_01', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_SmallOasis012_FirstTalk_atKD', 'Index': -1, 'Value': True})
}

void Near() {
    if Npc_EventStarter.EventQueryCheckTerrorLevel() in [0, 1, 2, 4] {

        call Near_Main({'StartPoint': 'D-4_Bato_Npc_SmallOasis012_Start', 'GoalPoint': 'D-5_Bato_Npc_SmallOasis012_Goal', 'RestPoint': 'D-5_Bato_Npc_SmallOasis012_00'})

    }
}

void GerudoGreet() {

    call GerudoGreeting.Hello1()

}

void NpcBattle() {
    if Npc_EventStarter.EventQueryCheckTerrorLevel() in [3, 5] {

        call Npc_Road_Common.Set_RecentFlagOnRescue()


        call Npc_Road_Common.InitTalk_Npc_Road_Common({'Self': ActorIdentifier(name="Npc_EventStarter"), 'FlagNameToTurnON': 'Npc_SmallOasis012_Reward'})

    }
}

void Talk_Main() {
    if !Npc_EventStarter.EventQueryIsTravelerWait() {
        if !Npc_EventStarter.EventQueryTravelerPrevCheckPoint({'CheckPointName': 'StartPoint'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:StartPoint_01_2', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:StartPoint_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if Npc_EventStarter.EventQueryTravelerPrevCheckPoint({'CheckPointName': 'GoalPoint'}) in [0, 1] {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:GoalPoint_01_2', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:GoalPoint_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else
    switch Npc_EventStarter.EventQueryTravelerCheckStateOfShelterFromRain() {
      case 0:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:RainPoint_01_2', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:RainPoint_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [1, 2]:
        if !Npc_EventStarter.EventQueryTravelerDirection() {
            if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'StartPoint', 'BackCheckPointName': 'RestPoint'}) {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() in [0, 1] {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:GoRange_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            } else
            if Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'RestPoint', 'BackCheckPointName': 'GoalPoint'}) in [0, 1] {
                Event34:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:BackRange_02_2', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:BackRange_02', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else
        if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'StartPoint', 'BackCheckPointName': 'RestPoint'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:BackRange_01_2', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:BackRange_01', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'RestPoint', 'BackCheckPointName': 'GoalPoint'}) {

            call About_MtSatori()

        }
    }
}

void Near_Main() {
    if !Npc_EventStarter.EventQueryIsTravelerWait() {
        if !Npc_EventStarter.EventQueryTravelerPrevCheckPoint({'CheckPointName': 'StartPoint'}) {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_StartPoint_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        } else
        if Npc_EventStarter.EventQueryTravelerPrevCheckPoint({'CheckPointName': 'GoalPoint'}) in [0, 1] {
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_GoalPoint_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    switch Npc_EventStarter.EventQueryTravelerCheckStateOfShelterFromRain() {
      case 0:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_RainPoint_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
      case [1, 2]:
        switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
          case [0, 1, 4, 5]:
            if !Npc_EventStarter.EventQueryTravelerDirection() {
                if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'StartPoint', 'BackCheckPointName': 'RestPoint'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_GoRange_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                } else
                if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'RestPoint', 'BackCheckPointName': 'GoalPoint'}) {
                    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_GoRange_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
                }
            } else
            if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'StartPoint', 'BackCheckPointName': 'RestPoint'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_BackRange_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            } else
            if !Npc_EventStarter.EventQueryTravelerMovingBetweenCheckPoint({'ForwardCheckPointName': 'RestPoint', 'BackCheckPointName': 'GoalPoint'}) {
                Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_BackRange_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
            }
          case [2, 3, 6, 8]:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_Rain', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
          case 7:
            Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_Thunder', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    }
}

void Npc_SmallOasis012_Tree_Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_CaveMasterComplete', 'Index': -1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_SmallOasis012:Near_01', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Npc_SmallOasis012_Tree_Talk() {

    call NpcBattle()


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryHaveTalked()
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_FirstTalk_Tree', 'Index': -1}) {

        call FirstTalk_ThisTree_Check()

    } else {

        call FirstTalk_Check()


        call GerudoGreet()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_SmallOasis012_FirstTalk_Tree', 'Value': True, 'Index': -1})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_08', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': '01', 'ActorName': 'Npc_SmallOasis012_Cherry'}) {
            Event105:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_11', 'IsNotOpenIfSkipedMostRecent': False})
            Event78:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_CaveMasterComplete', 'Index': -1}) {
                Event79:
                Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': '01', 'ActorName': 'Npc_SmallOasis012'}) {
            goto Event105
        }
        goto Event78
    }
}

void About_MtSatori() {
    goto Event34
}

void FirstTalk_ThisTree_Check() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '01'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_01'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_01'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '02'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_02'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_02'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '03'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_03'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_03'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '04'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_04'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_04'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '05'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_05'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_05'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '06'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_06'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_06'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '07'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_07'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_07'})

            call FitstTalk_ThisTree()

        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '08'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Talked_08'}) {

            call AfterFirstTalk_ThisTree()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Talked_08'})

            call FitstTalk_ThisTree()

        }
    }
}

void AfterFirstTalk_ThisTree() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Event68:
        Npc_EventStarter.EventTalk({'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_05', 'ChoiceLabel2': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_CaveMasterComplete', 'Index': -1}) {
                goto Event79
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_SmallOasis012_CaveMasterComplete', 'Index': -1}) {
            goto Event79
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': '01', 'ActorName': 'Npc_SmallOasis012_Cherry'}) {
            Event104:
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_12', 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': '01', 'ActorName': 'Npc_SmallOasis012'}) {
            goto Event104
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_10', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {

        call GerudoGreet()

        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event68
    }
}

void FitstTalk_ThisTree() {

    call GerudoGreet()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_SmallOasis012:Talk_13', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event68
}

void FirstTalk_Check() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '01'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_01'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '02'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_02'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '03'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_03'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '04'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_04'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '05'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_05'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '06'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_06'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '07'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Cherry_FirstTalk_07'})
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_SmallOasis012', 'InstanceName': '08'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_SmallOasis012_Talked_08'})
    }
}
