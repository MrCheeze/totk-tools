-------- EventFlow: Npc_Zonau_Golem_Servant_FirstIsland_22 --------

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Zonau_Golem_Servant_FirstIsland_22
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventTriggerSetDisplayEnergyGauge', 'EventOpenEnergyMaterialDisplay', 'EventCloseEnergyMaterialDisplay', 'EventTriggerExecuteEnergyGaugeExchange', 'EventTriggerPrepareEnergyGaugeExchange', 'EventTriggerStartMaxEnergyExpansionNotice', 'EventPlayMaxEnergyExpansionDirecting', 'EventSetEnergyGaugeMax', 'EventWait']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryEnergyGaugeExchangeReachLimit']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerMaxEnergy']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShop', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerCalcShopTradeItemPaymentMaterialTotalNum', 'EventGoOffstageForUser', 'EventWait', 'EventWarpToTargetActor', 'EventTriggerResetPauseControllerCameraForUI', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryIsShopUIInput', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryIsShopSoldOut', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryIsShopUIOnDecideAmount', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Accessory_Battery
entrypoint: None()
actions: ['EventTriggerBatteryRequestIncreaseAnm', 'EventTriggerBatterySetUpIncrease', 'EventTriggerBatteryRequestIncreaseStAnm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'TextureReplaceType': 1, 'IsBindNearestActor': False}

Actor: B_Generator_A[TwnObj_BatteryExchange_FirstSkyIsland]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void talk() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_Zonau_Golem_Servant_FirstIsland_22")})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'IsAccessed_BatteryExchangeObj_FirstSkyIsland', 'Index': -1, 'Value': True})
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Obj_Battery_Get', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {

        call BatteryExchange_Common()

    } else
    if Npc_Zonau_Golem_Servant_FirstIsland_22.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 16, 'ChoiceLabel4': 17, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1012', 'IsNotOpenIfSkipedMostRecent': False})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 16, 'ChoiceLabel4': 17, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1013', 'IsNotOpenIfSkipedMostRecent': False})
}

void GetAndFinish0() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1019', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTriggerResetPauseControllerCameraForUI()
    GameSystemActor.EventTriggerRequestAutoSave()
    Event136:
    GameSystemActor.EventCloseEnergyMaterialDisplay({'IsWaitEnd': True})
    GameSystemActor.EventTriggerSetDisplayEnergyGauge({'IsDisplayEnergyGauge': False, 'IsWaitEnd': True, 'IsDisplayExEnergyGauge': False})
}

void ZonauGearShop0() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_12', 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
          case 0:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
              case [0, 2]:
                Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel3': 5503, 'ChoiceLabel2': 5507, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 3, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_30', 'ChoiceLabel1': 5500, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                    Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
                    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                          case [0, 2]:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                            Event172:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                                    Npc_EventStarter.EventBuyFromShop({'IsWaitEnd': True})
                                    if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_38', 'IsNotOpenIfSkipedMostRecent': False})

                                        call GetAndFinish0()

                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_11', 'IsNotOpenIfSkipedMostRecent': False})

                                        call ZonauGearShop0()

                                    }
                                } else {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_09', 'IsNotOpenIfSkipedMostRecent': False})

                                    call ZonauGearShop0()

                                }
                            } else {
                                Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_06', 'IsNotOpenIfSkipedMostRecent': False})

                                call ZonauGearShop0()

                            }
                          case 1:
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_32', 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event172
                        }
                    } else {

                        call LackZonanium_2DShop0()

                    }
                  case 1:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                    Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
                    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_34', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event172
                    } else {

                        call LackZonanium_2DShop0()

                    }
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_06', 'IsNotOpenIfSkipedMostRecent': False})

                    call ZonauGearShop0()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                    Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_10', 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event172
                } else {

                    call LackZonanium_2DShop0()

                }
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_07', 'IsNotOpenIfSkipedMostRecent': False})
            Event161:

            call ZonauGearShop0()

          case 2:
            Event174:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:Com_Talk_08', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event161
        }
    } else {

        call GetAndFinish0()

    }
}

void LackZonanium_2DShop0() {
    goto Event174
}

void What_ZonauEnergy() {
    if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_22'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1010', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1026', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1030', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void BatteryExchange_Common() {
    GameSystemActor.EventSetEnergyGaugeMax()
    GameSystemActor.EventTriggerPrepareEnergyGaugeExchange()
    switch Player.EventQueryPlayerMaxEnergy() {
      case 0:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1006', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 16, 'ChoiceLabel4': 17, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventTriggerSetDisplayEnergyGauge({'IsDisplayEnergyGauge': True, 'IsWaitEnd': True, 'IsDisplayExEnergyGauge': False})
        GameSystemActor.EventOpenEnergyMaterialDisplay({'IsWaitEnd': True})
        EventCamera.EventTriggerCameraSavePoint()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 4, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceLabel3': 16, 'ChoiceLabel4': 17, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Event130:
            if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Energy_Material_01', 'Num': 100, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                GameSystemActor.EventTriggerStartMaxEnergyExpansionNotice()
                if !GameSystemActor.EventQueryEnergyGaugeExchangeReachLimit() {
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1031', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1017', 'ChoiceNumber': 2, 'ChoiceLabel1': 30, 'ChoiceLabel2': 31, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
                    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1029', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventTriggerSetDisplayEnergyGauge({'IsWaitEnd': True, 'IsDisplayEnergyGauge': False, 'IsDisplayExEnergyGauge': False})
                    GameSystemActor.EventTriggerExecuteEnergyGaugeExchange()
                    EventCamera.EventTriggerCameraSavePoint()
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'PosVector': [-4.670000076293945, 5.550000190734863, 9.550000190734863], 'AtVector': [-2.049999952316284, 7.409999847412109, 5.440000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'B_Generator_A', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'PosVector': [-4.869999885559082, 4.119999885559082, 9.739999771118164], 'AtVector': [-2.309999942779541, 3.5199999809265137, 5.230000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'B_Generator_A', 'MoveTime': 90, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    } {
                        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Wait', 'IsWaitEnd': False, 'ClothWarpMode': 0})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        Player.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 0, 'OffsetBase': 1, 'ActorName': '', 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, -2.299999952316284], 'UseDemoWait': True})
                    } {
                        B_Generator_A[TwnObj_BatteryExchange_FirstSkyIsland].EventPlayAS({'ASName': 'Battery_Press', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    } {
                        Npc_EventStarter.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'ActorName': 'B_Generator_A', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.8500000238418579, 5.0]})
                        if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': True, 'InstanceName': '', 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_22'}) {
                            Npc_EventStarter.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 5, 'ActorName': 'DestinationAnchor'})
                        } else {
                            Npc_EventStarter.EventNPCTurnToTarget({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': 'TwnObj_BatteryExchange_BaseCamp', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'DestinationAnchor', 'Target': 5})
                        }
                    }


                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'B_Generator_A', 'Actor1InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'PosVector': [0.07000000029802322, 3.299999952316284, 5.329999923706055], 'AtVector': [0.05999999865889549, 3.3499999046325684, 4.480000019073486], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
                        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'Pattern': 1, 'Power': 0.05000000074505806, 'IsRumbleController': True})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                    } {
                        Npc_EventStarter.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'ActorName': 'B_Generator_A', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.8500000238418579, 10.0]})
                    }


                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [1.3700000047683716, 1.5299999713897705, -1.8600000143051147], 'AtVector': [-0.6499999761581421, 2.0299999713897705, 2.3399999141693115], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                    } {
                        Npc_EventStarter.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'OffsetBase': 1, 'InstanceName': 'TwnObj_BatteryExchange_FirstSkyIsland', 'ActorName': 'B_Generator_A', 'YAngle': 180.0, 'PositionOffset': [0.0, 0.8500000238418579, 5.0]})
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1018', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_EnergyUtuwa_A_01_Bundle'})

                    Accessory_Battery.EventTriggerBatterySetUpIncrease()
                    Accessory_Battery.EventTriggerBatteryRequestIncreaseStAnm()
                    GameSystemActor.EventPlayMaxEnergyExpansionDirecting({'IsWaitEnd': True})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

                    fork {
                        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': '', 'Actor1ActorName': 'Player', 'PosVector': [0.6100000143051147, 0.8899999856948853, 0.75], 'AtVector': [-2.549999952316284, 0.4099999964237213, -3.4800000190734863], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'CameraCollisionMode': 2})
                    } {
                        Npc_EventStarter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                    }

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    Accessory_Battery.EventTriggerBatteryRequestIncreaseAnm()
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                    switch Player.EventQueryPlayerMaxEnergy() {
                      case 0:

                        call GetAndFinish()

                      case [1, 2]:
                        SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})

                        fork {
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            Npc_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1020', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        } {
                            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                        }

                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1021', 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'ChoiceLabel2': 11, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameSystemActor.EventTriggerSetDisplayEnergyGauge({'IsWaitEnd': True, 'IsDisplayEnergyGauge': False, 'IsDisplayExEnergyGauge': False})

                            call ZonauGearShop0()

                        } else {

                            call GetAndFinish0()

                        }
                    }
                } else {

                    call GetAndFinish0()

                }
            } else {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1015', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !EventSystemActor.EventQueryIsEventStarter({'IsCheckInstanceName': False, 'InstanceName': '', 'ActorName': 'Npc_Zonau_Golem_Servant_FirstIsland_22'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1016', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event136
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1027', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Firstskyisland_IsChanged_CaptionBattery'})
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1007', 'ChoiceNumber': 3, 'ChoiceLabel1': 18, 'ChoiceLabel2': 19, 'ChoiceLabel3': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event130
              case 1:

                call What_ZonauEnergy()

                Event227:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1009', 'ChoiceNumber': 2, 'ChoiceLabel1': 18, 'ChoiceLabel2': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event130
                } else {

                    call GetAndFinish0()

                }
              case 2:

                call GetAndFinish0()

            }
          case 2:

            call What_ZonauEnergy()

            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1008', 'ChoiceNumber': 3, 'ChoiceLabel1': 18, 'ChoiceLabel2': 20, 'ChoiceLabel3': 21, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                goto Event130
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1027', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Firstskyisland_IsChanged_CaptionBattery'})
                goto Event227
              case 2:

                call GetAndFinish0()

            }
          case 3:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1028', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventCloseEnergyMaterialDisplay({'IsWaitEnd': True})
        }
      case [1, 2]:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1025', 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventTriggerCameraSavePoint()
                Event206:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event148:

                    call ZonauGearShop0()

                } else {
                    Event155:

                    call GetAndFinish0()

                }
            } else {
                Event208:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1023', 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'ChoiceNumber': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventTriggerCameraSavePoint()
                if !GameSystemActor.EventQueryTalkChoice2() {
                    goto Event148
                } else {
                    goto Event155
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1022', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventTriggerCameraSavePoint()
            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1024', 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event206
            } else {
                goto Event208
            }
        }
    }
}

void GetAndFinish() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        Npc_EventStarter.EventWait({'IsWaitEnd': True, 'Frames': 30})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_FirstIsland_22:talk_1019', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }

    GameSystemActor.EventTriggerRequestAutoSave()
    goto Event136
}
