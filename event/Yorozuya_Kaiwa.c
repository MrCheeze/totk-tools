-------- EventFlow: Yorozuya_Kaiwa --------

Actor: EventSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShop', 'EventOpenShopBuyUI', 'EventSellToShop', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryIsShopUIInput', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryIsShopSoldOut', 'EventQueryIsShopUIOnDecideAmount']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataString64']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCheckSellResult']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Kakariko010[Yorozuya_Kaitori(Self)]
entrypoint: Yorozuya_Kaitori(Self)
actions: []
queries: []
params: None

void Yorozuya_Kaitori() {
    Event264:

    call OpenSellUI()

    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_00', 'ChangeMstxtForActor': True, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event69:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch PouchSystemActor.EventQueryCheckSellResult() {
          case 0:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
              case [0, 2]:
                Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'ChoiceNumber': 3, 'ChoiceLabel2': 5508, 'ChoiceLabel3': 5503, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                      case [0, 2]:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_14', 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event79:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_EventStarter.EventSellToShop({'IsWaitEnd': True})
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event103:

                                call Sell_ChoiceWait()

                              case 1:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02b', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event103
                              case 2:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02c', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event103
                              case 3:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02d', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event103
                            }
                        } else {

                            call Sell_Cancel()

                        }
                      case 1:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_33', 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event79
                    }
                  case 1:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_35', 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event79
                  case 2:

                    call Sell_Cancel()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event79
            }
          case 1:
            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
            Event102:

            call Sell_InputReturn()

          case 2:
            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_16', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event102
        }
    } else {
        GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    }
}

void BuyFlow() {
    if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_37', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event36:
            Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
            Event104:
            Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIInput() {
                switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
                  case 0:
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
                      case [0, 2]:
                        Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel3': 5503, 'ChoiceLabel2': 5507, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_30', 'ChangeMstxtForActor': True, 'ChoiceNumber': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                                      case [0, 2]:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_31', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Event141:
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            Event142:
                                            Npc_EventStarter.EventBuyFromShop({'IsWaitEnd': True})
                                            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_36', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                Event55:

                                                call Select()

                                            } else
                                            switch GameSystemActor.EventQueryRandomChoice4() {
                                              case 0:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event55
                                              case 1:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_b', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event55
                                              case 2:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_c', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event55
                                              case 3:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_d', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event55
                                            }
                                        } else {
                                            Event255:
                                            Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
                                            Event150:
                                            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_06', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event55
                                        }
                                      case 1:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_32', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Event8:
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            goto Event142
                                        } else {
                                            goto Event255
                                        }
                                    }
                                } else {
                                    Event54:

                                    call LackRupee_2DShop()

                                }
                            } else {

                                call PouchFull_2DShop()

                            }
                          case 1:
                            Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_34', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event141
                                } else {
                                    goto Event54
                                }
                            } else {

                                call PouchFull_2DShop()

                            }
                          case 2:
                            goto Event150
                        }
                      case 1:
                        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_10', 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event8
                            } else {
                                goto Event54
                            }
                        } else {

                            call PouchFull_2DShop()

                        }
                    }
                  case 1:
                    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_07', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    Event152:

                    call Select()

                  case 2:
                    Event145:
                    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_08', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event152
                }
            }
        }
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsWaitEnd': False, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_12', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event36
      case [2, 3, 4, 5, 6, 7, 8]:
        if !EventSystemActor.EventQueryIsEventStarter({'ActorName': 'Npc_Road_031', 'InstanceName': '', 'IsCheckInstanceName': False}) {

            call Npc_Road_031.Npc_Road_031_RainyBuy()

        } else {
            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsWaitEnd': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_20', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event36
    }
}

void SellFlow() {
    goto Event264
}

void Sell_InputReturn() {
    goto Event69
}

void Sell_Cancel() {
    Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_04', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event127:
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Event76:

        call Sell_InputReturn()

      case 1:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05b', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event76
      case 2:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05c', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event76
      case 3:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05d', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event76
    }
}

void Sell_ChoiceWait() {
    goto Event127
}

void LackRupee_2DShop() {
    goto Event145
}

void Select() {
    goto Event104
}

void BuyFlow_TripMaster() {
    if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_37', 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceCancelNo': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event136:
            Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
            Event143:
            Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIInput() {
                switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
                  case 0:
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
                      case [0, 2]:
                        Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel3': 5503, 'ChoiceLabel2': 5507, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_30', 'ChangeMstxtForActor': True, 'ChoiceNumber': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                                      case [0, 2]:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_31', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Event174:
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            Event175:
                                            Npc_EventStarter.EventBuyFromShop({'IsWaitEnd': True})

                                            call Buy_InsectTalk()

                                            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_36', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                Event208:

                                                call Select_TripMaster()

                                            } else
                                            switch GameSystemActor.EventQueryRandomChoice4() {
                                              case 0:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event208
                                              case 1:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_b', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event208
                                              case 2:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_c', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event208
                                              case 3:
                                                Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_11_d', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                                goto Event208
                                            }
                                        } else {
                                            Event258:
                                            Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
                                            Event182:
                                            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_06', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                                            goto Event208
                                        }
                                      case 1:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_32', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        Event207:
                                        if !GameSystemActor.EventQueryTalkChoice2() {
                                            goto Event175
                                        } else {
                                            goto Event258
                                        }
                                    }
                                } else {
                                    Event202:

                                    call LackRupee_2DShop_TripMaster()

                                }
                            } else {

                                call PouchFull_2DShop_TripMaster()

                            }
                          case 1:
                            Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_34', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event174
                                } else {
                                    goto Event202
                                }
                            } else {

                                call PouchFull_2DShop_TripMaster()

                            }
                          case 2:
                            goto Event182
                        }
                      case 1:
                        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_10', 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event207
                            } else {
                                goto Event202
                            }
                        } else {

                            call PouchFull_2DShop_TripMaster()

                        }
                    }
                  case 1:
                    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_07', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event198:

                    call Select_TripMaster()

                  case 2:
                    Event177:
                    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_08', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event198
                }
            }
        }
    } else
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsWaitEnd': False, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_12', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event136
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsWaitEnd': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_20', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event136
    }
}

void SellFlow_TripMaster() {

    call OpenSellUI()

    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_00', 'ChangeMstxtForActor': True, 'IsNotBecomeSpeaker': False, 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event60:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch PouchSystemActor.EventQueryCheckSellResult() {
          case 0:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
              case [0, 2]:
                Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'ChoiceNumber': 3, 'ChoiceLabel2': 5508, 'ChoiceLabel3': 5503, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_13', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                      case [0, 2]:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_14', 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event68:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_EventStarter.EventSellToShop({'IsWaitEnd': True})

                            call Sell_InsectTalk()

                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Event135:

                                call Sell_ChoiceWait_TripMaster()

                              case 1:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02b', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event135
                              case 2:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02c', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event135
                              case 3:
                                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_02d', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event135
                            }
                        } else {

                            call Sell_Cancel_TripMaster()

                        }
                      case 1:
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_33', 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event68
                    }
                  case 1:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_35', 'ChoiceNumber': 2, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event68
                  case 2:

                    call Sell_Cancel_TripMaster()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event68
            }
          case 1:
            Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_15', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'EndDialogOption': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event118:

            call Sell_InputReturn_TripMaster()

          case 2:
            Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_16', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': False, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event118
        }
    } else {
        GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    }
}

void Sell_InputReturn_TripMaster() {
    goto Event60
}

void Sell_Cancel_TripMaster() {
    Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_04', 'IsWaitEnd': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event98:
    switch GameSystemActor.EventQueryRandomChoice4() {
      case 0:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Event117:

        call Sell_InputReturn_TripMaster()

      case 1:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05b', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event117
      case 2:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05c', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event117
      case 3:
        Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_05d', 'IsWaitEnd': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event117
    }
}

void Sell_ChoiceWait_TripMaster() {
    goto Event98
}

void LackRupee_2DShop_TripMaster() {
    goto Event177
}

void Select_TripMaster() {
    goto Event143
}

void Buy_InsectTalk() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_T'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event281:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TripMaster_InsectGoodbyeTalk', 'Index': -1, 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_I'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_C'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_Q'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_AB'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0005', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_R'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0006', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_N'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0007', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_E'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_H'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event281
    }
}

void Sell_InsectTalk() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_T'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event316:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TripMaster_InsectGoodbyeTalk', 'Index': -1, 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_I'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0029', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_C'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0030', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_Q'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0031', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_AB'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0032', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_R'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0033', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_N'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0034', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_E'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0035', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_H'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0039', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event316
    } else {

        call Sell_InsectTalk_b()

    }
}

void Sell_InsectTalk_b() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_AI'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0020', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event317:
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TripMaster_InsectGoodbyeTalk', 'Index': -1, 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_AA'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event317
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_G'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0024', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event317
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Animal_Insect_P'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0025', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event317
    } else {

        call Sell_InsectTalk_Other()

    }
}

void Sell_InsectTalk_Other() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Material_01'}) {
        Event291:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0026', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_A'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_B'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_M'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_P'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_C'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_D'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_F'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_J'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_N'}) {
        goto Event291
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Item_Fruit_H'}) {
        goto Event291
    } else {

        call Sell_InsectTalk_FireWood()

    }
}

void Sell_InsectTalk_FireWood() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_FireWoodBundle'}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Talk0027', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void PouchFull_2DShop() {
    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_09', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event152
}

void PouchFull_2DShop_TripMaster() {
    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_TripMaster_00:Com_Talk_09', 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsWaitEnd': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event198
}

void OpenSellUI() {
    GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
    Npc_EventStarter.EventOpenShopBuyUI({'IsWaitEnd': True})
}
