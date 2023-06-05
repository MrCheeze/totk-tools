-------- EventFlow: Npc_Attacked02_004 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice5', 'EventQueryRandomChoice2', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {
    Event2:

    call Npc_Road_012.NpcBattle({'Self': ActorIdentifier(name="Npc_EventStarter"), 'FlagNameToTurnON': 'Npc_Attacked02_004_Reward', 'DefeatEnemy': 'Npc_Attacked02_004_EnemyDefeat', 'HaveRescuedNpc': 'Npc_Attacked02_004_HelpOn'})

}

void Npc_Attacked02_004_EnemyDefeat_Talk() {
    goto Event2
}

void GoodBye() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call SkipSelect()

    } else {

        call SelectFreeTalk()

        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:GoodBye00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:GoodBye00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event164:
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'Npc_Attacked02_004_FreeTalkNum'}) {
          case 0:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk01_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event172:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk01_01_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk01_00_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event200:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk100', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk01_00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event172
          case 2:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk02_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GoodByeGreet()

            }
          case 3:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk03_01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk03_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GoodByeGreet()

            }
          case 4:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk03_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call GoodByeGreet()

            }
          case 5:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call GoodByeGreet()

            }
          case [6, 11, 12, 13, 15]:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk04_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk04_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GoodByeGreet()

            }
          case 7:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk06_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                call GoodByeGreet()

            }
          case 8:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk07_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk07_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            }
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_ShowSilentCloth'}) {
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call GoodByeGreet()

                }
            } else
            if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Sheikah', 'CheckHead': False, 'CheckLower': False}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk07_00_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Attacked02_004_ShowSilentCloth', 'Value': True, 'Index': -1})
                Event209:
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call GoodByeGreet()

                }
            } else
            goto Event209
          case 9:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk08_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk08', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call GoodByeGreet()

                }
            }
          case 10:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk00_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                    call GoodByeGreet()

                }
            }
        }
    }
}

void NormalTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        goto Event164
    } else {

        call SelectFreeTalk()

        if !Npc_EventStarter.EventQueryHaveTalked() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk99_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Attacked02_004:Talk99', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event164
    }
}

void SelectFreeTalk() {

    call CheckSilentSuits()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutBasic'}) {
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Plateau_D-4'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutElectric'})
            && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                    switch GameSystemActor.EventQueryRandomChoice5() {
                      case [0, 1, 2]:
                        Event68:

                        call TalkElectric_Plateau()

                      case [3, 4]:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                            if !GameSystemActor.EventQueryRandomChoice2() {
                                goto Event68
                            } else {
                                Event81:

                                call TalkDark()

                            }
                        } else
                        if !GameSystemActor.EventQueryRandomChoice2() {
                            goto Event81
                        } else {

                            call TalkSilent()

                        }
                    }
                } else {

                    call TalkSilent()

                }
            } else {

                call TalkElectric_Plateau()

            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Eldin'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutFire'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutBeetle'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                            switch GameSystemActor.EventQueryRandomChoice5() {
                              case [0, 1]:

                                call TalkFire()

                              case 2:
                                Event98:

                                call TalkBeetle()

                              case [3, 4]:
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        goto Event98
                                    } else {
                                        Event96:

                                        call TalkDark()

                                    }
                                } else
                                if !GameSystemActor.EventQueryRandomChoice2() {
                                    goto Event96
                                } else {

                                    call TalkSilent()

                                }
                            }
                        } else {

                            call TalkSilent()

                        }
                    } else
                    if !GameSystemActor.EventQueryRandomChoice2() {

                        call TalkFire()

                    } else {

                        call TalkBeetle()

                    }
                } else {

                    call TalkBeetle()

                }
            } else {

                call TalkFire()

            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Zora_J-4'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutCool'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutFireFly'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                            switch GameSystemActor.EventQueryRandomChoice5() {
                              case [0, 1]:

                                call TalkCool_Zora()

                              case 2:
                                Event113:

                                call TalkFireFly()

                              case [3, 4]:
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        goto Event113
                                    } else {
                                        Event109:

                                        call TalkDark()

                                    }
                                } else
                                if !GameSystemActor.EventQueryRandomChoice2() {
                                    goto Event109
                                } else {

                                    call TalkSilent()

                                }
                            }
                        } else {

                            call TalkSilent()

                        }
                    } else
                    if !GameSystemActor.EventQueryRandomChoice2() {

                        call TalkCool_Zora()

                    } else {

                        call TalkFireFly()

                    }
                } else {

                    call TalkFireFly()

                }
            } else {

                call TalkCool_Zora()

            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Lanayru_I-6'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutCool'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutLocust'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                            switch GameSystemActor.EventQueryRandomChoice5() {
                              case [0, 1]:

                                call TalkCool_Snow()

                              case 2:
                                Event127:

                                call TalkLocust()

                              case [3, 4]:
                                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        goto Event127
                                    } else {
                                        Event123:

                                        call TalkDark()

                                    }
                                } else
                                if !GameSystemActor.EventQueryRandomChoice2() {
                                    goto Event123
                                } else {

                                    call TalkSilent()

                                }
                            }
                        } else {

                            call TalkSilent()

                        }
                    } else
                    if !GameSystemActor.EventQueryRandomChoice2() {

                        call TalkLocust()

                    } else {

                        call TalkCool_Snow()

                    }
                } else {

                    call TalkLocust()

                }
            } else {

                call TalkCool_Snow()

            }
        } else
        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Firone_G-8'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutElectric'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutFireFly'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutBeetle'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                                switch GameSystemActor.EventQueryRandomChoice5() {
                                  case 0:

                                    call TalkElectric_Firone()

                                  case 1:

                                    call TalkFireFly()

                                  case 2:
                                    Event147:

                                    call TalkBeetle()

                                  case [3, 4]:
                                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                                        if !GameSystemActor.EventQueryRandomChoice2() {
                                            goto Event147
                                        } else {
                                            Event143:

                                            call TalkDark()

                                        }
                                    } else
                                    if !GameSystemActor.EventQueryRandomChoice2() {
                                        goto Event143
                                    } else {

                                        call TalkSilent()

                                    }
                                }
                            } else {

                                call TalkSilent()

                            }
                        } else
                        switch GameSystemActor.EventQueryRandomChoice3() {
                          case 0:

                            call TalkElectric_Firone()

                          case 1:

                            call TalkFireFly()

                          case 2:

                            call TalkBeetle()

                        }
                    } else {

                        call TalkBeetle()

                    }
                } else {

                    call TalkFireFly()

                }
            } else {

                call TalkElectric_Firone()

            }
        } else
        if EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'ActorName': 'Npc_Attacked02_004', 'InstanceName': 'Gerudo_B-5'}) in [0, 1] {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'HyruleCastleIncident_IsAfter_DefeatBlackZelda_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'}) {
                    switch GameSystemActor.EventQueryRandomChoice5() {
                      case 0:
                        Event159:

                        call TalkDark()

                      case 1:
                        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'}) {
                            goto Event159
                        } else {

                            call TalkSilent()

                        }
                      case 2:

                        call TalkLocust()

                      case 3:

                        call TalkBeetle()

                      case 4:

                        call TalkFireFly()

                    }
                } else {

                    call TalkSilent()

                }
            } else
            switch GameSystemActor.EventQueryRandomChoice5() {
              case [0, 1]:

                call TalkDark()

              case 2:

                call TalkLocust()

              case 3:

                call TalkBeetle()

              case 4:

                call TalkFireFly()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutBasic', 'Value': True})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 10})
    }
}

void SkipSelect() {
    goto Event164
}

void TalkFire() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutFire'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 2})
}

void TalkCool_Zora() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 3})
    Event52:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutCool'})
}

void TalkCool_Snow() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 4})
    goto Event52
}

void TalkElectric_Plateau() {
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 1})
    Event32:
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutElectric'})
}

void TalkFireFly() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutFireFly'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 5})
}

void TalkLocust() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutLocust'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 6})
}

void TalkBeetle() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutBeetle'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 7})
}

void TalkSilent() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutSilent'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 8})
}

void TalkDark() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_FreeTalkAboutUnderGround'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum', 'Value': 9})
}

void CheckSilentSuits() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'Actor': 'Armor_012_Upper', 'IsExcludeAttachment': True}) {
        Event75:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits'})
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'Actor': 'Armor_042_Upper', 'IsExcludeAttachment': True}) {
        goto Event75
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'Actor': 'Armor_077_Upper', 'IsExcludeAttachment': True}) {
        goto Event75
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'Actor': 'Armor_078_Upper', 'IsExcludeAttachment': True}) {
        goto Event75
    } else
    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'IsExcludeAttached': False, 'Actor': 'Armor_079_Upper', 'IsExcludeAttachment': True}) {
        goto Event75
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Attacked02_004_HaveSilentSuits', 'Value': False})
    }
}

void TalkElectric_Firone() {
    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'Npc_Attacked02_004_FreeTalkNum'})
    goto Event32
}

void GoodByeGreet() {
    goto Event200
}
