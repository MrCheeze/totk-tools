-------- EventFlow: DisplayShop --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerChangeChoiceNumMsgFor3DShop', 'EventTalk', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShopFor3DShop', 'EventTriggerSetAttentionForbidSaleFor3DShop', 'EventInitFor3DShop', 'EventTriggerSetSoldGoodsFor3DShop', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerShowShopInfoFor3DShop']
queries: ['EventQueryIsShopUIOnDecideAmount', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataString64', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Kakariko010[Multiple(Self)]
entrypoint: Multiple(Self)
actions: []
queries: []
params: None

Actor: Npc_Kakariko010[Multiple_Uotori(Self)]
entrypoint: Multiple_Uotori(Self)
actions: []
queries: []
params: None

void Multiple() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_PlacedItemStockNum'}) {
      case [0, 2]:
        Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5507, 'ChoiceLabel3': 5503, 'ChoiceNumber': 3, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_31', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                  case [0, 2]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_52', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event8:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event16:
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                            Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event28:
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        }
                    } else {

                        call EndTalk()

                    }
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_56', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event8
                }
            } else {
                Event29:

                call LackRupee()

            }
          case 1:
            Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_34', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event8
            } else {
                goto Event29
            }
          case 2:

            call EndTalk()

        }
      case 1:
        Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_50', 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                goto Event16
            } else {
                goto Event29
            }
        } else {

            call EndTalk()

        }
    }
}

void Armor() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_50', 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                Npc_EventStarter.EventTriggerSetSoldGoodsFor3DShop()
                Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                call GetPouchContent.DisplayGetWindowByGameData({'GameData': 'Shop_SelectItemName', 'IsSuccess': True})

            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else {

            call LackRupee()

        }
    } else {

        call EndTalk()

    }
}

void LackRupee() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_54', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event28
}

void EndTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_53', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event28
}

void Armor_2Choices() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_50', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5504, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_60', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5504, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event157:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {

                    call Bought_Kurari()

                    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'IllnessStartsWithFeelings_CashFlag'})
                    }
                    Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                    Npc_EventStarter.EventTriggerSetSoldGoodsFor3DShop()
                    Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                    call GetPouchContent.DisplayGetWindowByGameData({'GameData': 'Shop_SelectItemName', 'IsSuccess': True})

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event161:
                    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                }
            } else {

                call LackRupee()

            }
        } else {

            call EndTalk_Kurari()

        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_61', 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5504, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event157
    }
}

void Multiple_Uotori() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'WashedAwayBusinessTools_ClearTalk', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Talk_1008', 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event34:
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_PlacedItemStockNum'}) {
          case [0, 2]:
            Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel3': 5503, 'ChoiceNumber': 3, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceLabel2': 5510, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Free_Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5500, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                  case [0, 2]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Free_Talk_52', 'ChoiceLabel1': 5500, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event54:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event83:
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                            Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                        }
                    } else {

                        call EndTalk()

                    }
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Free_Talk_56_a', 'ChoiceLabel1': 5500, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event54
                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Free_Talk_34', 'ChoiceLabel1': 5500, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event54
              case 2:

                call EndTalk()

            }
          case 1:
            Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
            Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Free_Talk_56_b', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event83
            } else {

                call EndTalk()

            }
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'WashedAwayBusinessTools_ClearTalk'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_SouthernVillage014:Talk_1007', 'ChoiceLabel3': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event34
    }
}

void Bought_Kurari() {
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_012_Upper'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Armor_012_Upper_BuyStore', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Armor_012_Upper_BuyCount_Soar', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_012_Lower'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Armor_012_Lower_BuyStore', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Armor_012_Lower_BuyCount_Soar', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_012_Head'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Armor_012_Head_BuyStore', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'Armor_012_Head_BuyCount_Soar', 'Value': 1, 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_017_Upper'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Armor_017_Upper_BuyStore'})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Armor_017_Upper_BuyCount_Soar', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_017_Lower'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Armor_017_Lower_BuyStore', 'Index': -1, 'Value': True})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Armor_017_Lower_BuyCount_Soar', 'Index': -1})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_017_Head'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Armor_017_Head_BuyStore'})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Value': 1, 'GameDataName': 'Armor_017_Head_BuyCount_Soar', 'Index': -1})
    }
}

void novelty_shinobi() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_012_Upper_BuyStore', 'Index': -1}) {
        Event153:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk_1022', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_05'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk_1023', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kakariko012_novelty', 'Index': -1, 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_012_Lower_BuyStore', 'Index': -1}) {
        goto Event153
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_012_Head_BuyStore', 'Index': -1}) {
        goto Event153
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_017_Upper_BuyStore', 'Index': -1}) {
        goto Event153
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_017_Lower_BuyStore', 'Index': -1}) {
        goto Event153
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Armor_017_Head_BuyStore', 'Index': -1}) {
        goto Event153
    }
}

void Armor_Npc_SouthernVillage005() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_50', 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                Npc_EventStarter.EventTriggerSetSoldGoodsFor3DShop()
                Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                call GetPouchContent.DisplayGetWindowByGameData({'GameData': 'Shop_SelectItemName', 'IsSuccess': True})

            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            }
        } else {

            call LackRupee()

        }
    } else {

        call EndTalk()

    }
}

void EndTalk_Kurari() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'IllnessStartsWithFeelings_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'MessageId': 'EventFlowMsg/Npc_Zora002:Com_Talk_53', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event161
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko012:Talk_53', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        goto Event161
    }
}
