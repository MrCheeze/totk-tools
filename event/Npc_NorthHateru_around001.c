-------- EventFlow: Npc_NorthHateru_around001 --------

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
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {
    Event19:

    call Npc_Road_012.NpcBattle({'Self': ActorIdentifier(name="Npc_EventStarter"), 'FlagNameToTurnON': 'Npc_NorthHateru_around001_Reward', 'DefeatEnemy': 'Npc_NorthHateru_around001_EnemyDefeat', 'HaveRescuedNpc': 'Npc_NorthHateru_around001_HelpOn'})

}

void Npc_NorthHateru_around001_HelpOn_Talk() {
    goto Event19
}

void GoodBye() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call RecentTalkFlagOn()

    } else {

        call FreeTalkSelect()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Event52:
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum'}) {
              case 0:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:After00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case [1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 2:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk01_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Event74:
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 3:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk02_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call GoodByeGreet()

                }
              case 4:
                if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk03_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk03_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call GoodByeGreet()

                }
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye00', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void NormalTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event52
    } else {

        call FreeTalkSelect()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk99_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event52
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:Talk99', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NorthHateru_around001:GoodBye00', 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void FreeTalkSelect() {
    if !Npc_EventStarter.EventQueryHaveTalked() {

        call CheckFoundMemory()

        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_GetDragonMemory'}) {
            switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_NorthHateru_around001_FreeTalkCounter'}) {
              case [0, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15]:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkCounter', 'Value': 1})
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 1})
              case 1:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkCounter', 'Value': 1})
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 2})
              case 2:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkCounter', 'Value': 1})
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 3})
              case 3:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkCounter', 'Value': 1})
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 4})
              case 4:
                switch GameSystemActor.EventQueryRandomChoice3() {
                  case 0:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 2})
                  case 1:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 3})
                  case 2:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum', 'Value': 4})
                }
            }
        } else {
            GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum'})
        }
    } else {
        GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_FreeTalkNum'})
    }
}

void RecentTalkFlagOn() {
    goto Event52
}

void CheckFoundMemory() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Hebra_D-1_Mem08'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears08', 'Index': -1}) {
            Event31:
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_GetDragonMemory'})
        } else {
            Event33:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_GetDragonMemory', 'Value': False})
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Hills_C-5_Mem06'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears06', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Forest_F-1_Mem11'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears11', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Eldin_H-4_Mem03'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears03', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Plain_F-6_Mem04'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears04', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Zora_J-5_Mem09'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears09', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Hateru_I-8_Mem07'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears07', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_NorthHateru_around001', 'InstanceName': 'Gerudo_C-6_Mem05'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsVisitLocation.DragonTears05', 'Index': -1}) {
            goto Event31
        } else {
            goto Event33
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_NorthHateru_around001_GetDragonMemory', 'Value': False})
    }
}

void GoodByeGreet() {
    goto Event74
}
