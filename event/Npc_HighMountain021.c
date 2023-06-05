-------- EventFlow: Npc_HighMountain021 --------

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryRandomChoice2', 'EventQueryRandomChoice4', 'EventQueryRandomChoice3', 'EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain021
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventNPCTurnToObjectGreeting', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryCheckPlacedItemNumber', 'EventQueryIsShopSoldOutFor3DShop']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HighMountain033
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void MisasaHello() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1, 2, 3, 4, 5]:
        Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event45:
        if !Npc_HighMountain021.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [6, 7]:
        Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event45
    }
}

void SageOfWind_IsAfter_TouchSecretStone_Exp_Buy() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call GenkoJoin()


    call DisplayShop.Multiple({'Self': ActorIdentifier(name="Npc_HighMountain021")})


    call Sell()

}

void Sell() {
    switch Npc_HighMountain021.EventQueryCheckPlacedItemNumber() {
      case [0, 2]:
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1014', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1015', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1016', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1017', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case 1:
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk2014', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 3:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk2017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void SageOfWind_IsAfter_TouchSecretStone_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


    call GenkoJoin()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Misasa_ClearTalk'}) {
        if Npc_HighMountain021.EventQueryIsOnRecentTalkFlag() {

            call MisasaHello()

        }
        Event0:
        Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1006', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event15:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1007', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HighMountain021")})

            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1013', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event15
              case 1:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1018', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event15
              case 2:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1019', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event15
            }
          case 1:
            Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1009', 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryRandomChoice2() {
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1011', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1013', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
                Event53:
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Yorozuya_Kaiwa.Yorozuya_Kaitori({'Self': ActorIdentifier(name="Npc_HighMountain021")})

                    Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1008', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Event37:
                    Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1012', 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
              case 1:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1018', 'ChoiceLabel1': 1, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event53
              case 2:
                Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1019', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel3': 0, 'ChoiceLabel1': 1, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event53
            }
          case 2:
            goto Event37
        }
    } else {
        Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk2001', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_HighMountain021.EventTalk({'EndDialogOption': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk1022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Misasa_ClearTalk'})
        goto Event0
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_HighMountain021.EventQueryIsOnRecentTalkFlag() {
        Npc_HighMountain021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk002', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_HighMountain021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk001', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Misasa_TouchGolemItem', 'Value': True, 'Index': -1})
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Misasa_GetAllGolemItem', 'Index': -1}) {
        Npc_HighMountain021.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain021:near3000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_HighMountain021.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain021:near2000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void SageOfWind_IsAfter_TouchSecretStone_Exp_Near() {
    Npc_HighMountain021.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Npc_HighMountain021:near1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Misasa_TouchGolemItem() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'ActorNameB': 'Npc_HighMountain021', 'InstanceNameA': '', 'InstanceNameB': '', 'CheckDistance': 10.0, 'IsTargetPlayingAllEvent': False}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    } else {

        call BustUpCamera()

    }
    Npc_HighMountain021.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HighMountain021:Talk003', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Misasa_TouchGolemItem', 'Value': True, 'Index': -1})
}

void GenkoJoin() {
    if !Npc_HighMountain033.EventQueryAIScheduleCheckActorAction({'ActionType': 1, 'AIScheduleState': 1}) {
        Npc_HighMountain033.EventTriggerParticipateEvent()
    }
}

void BustUpCamera() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVector': [-3574.2900390625, 249.5399932861328, -2244.02001953125], 'AtVector': [-3572.81005859375, 248.55999755859375, -2247.1298828125], 'TargetFovy': 50.0})
    } {
        Npc_HighMountain021.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_HighMountain021.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 4, 'TurnType': 2})
    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})
}
