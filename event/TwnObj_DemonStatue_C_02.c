-------- EventFlow: TwnObj_DemonStatue_C_02 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBecomeSpeaker', 'EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShop', 'EventCloseShopMenuUIForMinusRupeeExchange', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryIsShopUIInput', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryIsShopSoldOut', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryIsShopUIOnDecideAmount']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataBool', 'EventDoNothing']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd', 'EventCloseMinusRupeeDisplay']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Talk() {

    call InitTalkNoTurn()


    call Talk_Common({'MeetFlag': 'Minus_DemonStatue2', 'KnownFlag': 'HaveKnownDemonStatue_01'})

}

void InitTalkNoTurn() {
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {
        Player.EventTriggerParticipateEvent()
    } {
        SoundSystemActor.EventSoundRequestDucking({'DuckingName': '会話中', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'TwnObj_DemonStatue_C_02', 'PosVector': [8.510000228881836, 77.9800033569336, 34.38999938964844], 'AtVector': [8.470000267028809, 77.97000122070312, 34.29999923706055], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    }

}

void Talk_Common() {

    call Talk_Common_Base({'MeetFlag': 'MeetFlag', 'FirstTalk': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1000', 'SecondTalk': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1009', 'KnownFlag': 'KnownFlag'})

}

void UpdateMeetCount() {
    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'GameDataName': 'DemonStatue_MeetCount', 'Index': -1})
    EventSystemActor.EventDoNothing({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TwnObj_DemonStatue_B_01_GetUp'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue1', 'Index': -1}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue2'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue3'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue4'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue5'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue6'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'DemonStatue_MeetCount', 'Index': -1, 'Value': 1})
    }
    GameDataActor.EventDoNothing({'IsWaitEnd': True})

    call UpdateKnownCount()

    if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 0}) == 2 {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'DemonStatueShop_Item00', 'Value': True})
        if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 1}) == 2 {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item01'})
            if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 2}) == 2 {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item02'})
                if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 3}) == 2 {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item03'})
                    if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 4}) == 2 {
                        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item04'})
                        if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 5}) == 2 {
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item05'})
                            if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 6}) == 2 {
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'DemonStatueShop_Item06'})
                            }
                        }
                    }
                }
            }
        }
    }
}

void BuyFlow() {

    call OpenShopUI()

    Event35:
    Npc_EventStarter.EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsWaitEnd': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_12', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
            switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
              case 0:
                switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
                  case [0, 2]:
                    Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 5503, 'ChoiceLabel2': 5507, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_30', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5500, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:
                        Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                        if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                                  case [0, 2]:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event33:
                                    if !GameSystemActor.EventQueryTalkChoice2() {
                                        Npc_EventStarter.EventBuyFromShop({'IsWaitEnd': True})
                                        if Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_11', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                            call Select()

                                        }
                                    } else {
                                        Npc_EventStarter.EventTriggerHideShopMenuTotalNum()

                                        call Select()

                                    }
                                  case 1:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event33
                                }
                            } else {

                                call TooManyItems()

                            }
                        } else {

                            call LackRupee_2DShop()

                        }
                      case 1:
                        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                        if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                            if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_34', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event33
                            } else {

                                call TooManyItems()

                            }
                        } else {

                            call LackRupee_2DShop()

                        }
                      case 2:

                        call Select()

                    }
                  case 1:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                    if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event33
                        } else {

                            call TooManyItems()

                        }
                    } else {

                        call LackRupee_2DShop()

                    }
                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event72:

                call Select()

              case 2:
                Event38:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event72
            }
        } else {
            Event24:

            call CloseShopUI()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call BuyFlow()

        }
    } else {

        call CloseShopUI()

    }
}

void LackRupee_2DShop() {
    goto Event38
}

void Message_NewArmor() {
    if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 2}) in [1, 2] {
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 2}) {
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1002', 'IsNotOpenIfSkipedMostRecent': False})
            Event104:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1008', 'IsNotOpenIfSkipedMostRecent': False})
          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 3}) {
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1003', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event104
              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 4}) {
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1004', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event104
                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 5}) {
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1005', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event104
                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 6}) {
                          case 1:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1006', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event104
                          case 2:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1007', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event104
                        }
                    }
                }
            }
        }
    }
}

void UpdateKnownCount() {
    GameDataActor.EventTriggerSetGameDataInt({'Value': 0, 'Index': -1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
    EventSystemActor.EventDoNothing({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_00'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue2'}) {
        Event111:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
        Event110:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue3'}) {
            Event113:
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
            Event112:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue4'}) {
                Event115:
                GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
                Event114:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue5'}) {
                    Event117:
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
                    Event116:
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue6'}) {
                        Event119:
                        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_KnownWhereIsCount'})
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_05'}) {
                        goto Event119
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_04'}) {
                    goto Event117
                }
                goto Event116
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_03'}) {
                goto Event115
            }
            goto Event114
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_02'}) {
            goto Event113
        }
        goto Event112
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveKnownDemonStatue_01'}) {
        goto Event111
    }
    goto Event110
}

void Talk_Common_Base() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MeetFlag'}) {
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceLabel2': 5501, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'SecondTalk', 'IsNotOpenIfSkipedMostRecent': False})
            Event79:

            call BuyFlow()

            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Com_Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call CloseShopUI()

                GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
            } else
            switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 7}) {
              case 0:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'TwnObj_DemonStatue_B_01_GetUp'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1013', 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1010', 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1014', 'IsNotOpenIfSkipedMostRecent': False})
              case [1, 2]:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        GameSystemActor.EventTriggerRequestAutoSave()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'FirstTalk', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MeetFlag'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KnownFlag'})

        call UpdateMeetCount()

        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 2}) {
          case 0:
            Event98:

            call Message_NewArmor()

            goto Event79
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/TwnObj_DemonStatue_C_02:Talk_1012', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event98
        }
    }
}

void TooManyItems() {
    goto Event24
}

void OpenShopUI() {
    GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
    Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
}

void CloseShopUI() {
    Npc_EventStarter.EventCloseShopMenuUIForMinusRupeeExchange({'IsWaitEnd': True})
    GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
}

void Select() {
    goto Event35
}
