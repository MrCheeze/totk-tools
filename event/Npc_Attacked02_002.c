-------- EventFlow: Npc_Attacked02_002 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event2:

    call Npc_Road_012.NpcBattle({'Self': ActorIdentifier(name="Npc_EventStarter"), 'FlagNameToTurnON': 'Npc_Attacked02_002_Reward', 'DefeatEnemy': 'Npc_Attacked02_002_EnemyDefeat', 'HaveRescuedNpc': 'Npc_Attacked02_002_HelpOn'})

}

void Npc_Attacked02_002_EnemyDefeat_Talk() {
    goto Event2
}

void GoodBye() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call RecentTalkFlagOn()

    } else {

        call FreeTalkSelect()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryHaveTalked() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event37:
                switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum'}) {
                  case 0:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                  case [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk01_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        Event50:
                        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter'}) {
                          case [0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                          case 4:
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk100_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    }
                  case 2:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk02_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                        call GoodByeGreet()

                    }
                  case 3:
                    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk03_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk03_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                        call GoodByeGreet()

                    }
                }
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void NormalTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event37
    } else {

        call FreeTalkSelect()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk99_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event37
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:Talk99', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_002:GoodBye00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void FreeTalkSelect() {
    if !Npc_EventStarter.EventQueryHaveTalked() {

        call CheckLamdaPrizeExist()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Index': -1}) {
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter'}) {
              case 0:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 1, 'Index': -1})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter', 'Index': -1})
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 2, 'Index': -1})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter', 'Index': -1})
              case 2:
                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 3, 'Index': -1})
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter', 'Index': -1})
              case 3:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Npc_Attacked02_002_FreeTalkCounter', 'Index': -1})
                Event21:
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 1, 'Index': -1})
                  case 1:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 2, 'Index': -1})
                  case 2:
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 3, 'Index': -1})
                }
              case [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                goto Event21
            }
        } else {
            GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 0, 'Index': -1})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Attacked02_002_FreeTalkNum', 'Value': 0, 'Index': -1})
    }
}

void CheckLamdaPrizeExist() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_002', 'InstanceName': 'Hebra_C-2'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Attacked02_002_GotPrize_Hebra'}) {
            Event61:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Value': True, 'Index': -1})
        } else {
            Event62:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Value': False, 'Index': -1})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_002', 'InstanceName': 'HyrulePlain_E-6'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Attacked02_002_GotPrize_Plain'}) {
            goto Event61
        } else {
            goto Event62
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_002', 'InstanceName': 'Goron_G-2'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Attacked02_002_GotPrize_Goron'}) {
            goto Event61
        } else {
            goto Event62
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_002', 'InstanceName': 'Firone_G-8'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Attacked02_002_GotPrize_Firone'}) {
            goto Event61
        } else {
            goto Event62
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_002', 'InstanceName': 'Gerudo_C-5'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Npc_Attacked02_002_GotPrize_Gerudo'}) {
            goto Event61
        } else {
            goto Event62
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked02_002_GetCaveItem', 'Value': True, 'Index': -1})
    }
}

void RecentTalkFlagOn() {
    goto Event37
}

void GoodByeGreet() {
    goto Event50
}
