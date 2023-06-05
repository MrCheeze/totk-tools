-------- EventFlow: Npc_AncientAssistant003 --------

Actor: Npc_AncientAssistant003
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerOpenHouseShopMenuScreen', 'EventWaitHouseShopUIInput', 'EventCloseHouseShopUI', 'EventSetShopMessageDialogNumberChoice', 'EventBuyFromHouseShop', 'EventTriggerOpenHouseShopMenuScreenForTakeOut', 'EventTriggerCalcTakeOutChoiceNumForHouseShopUI', 'EventTriggerCalcTakeOutAllNumForHouseShopUI', 'EventAIScheduleWarpToAnchor', 'EventTriggerRefreshHouseShopUI', 'EventCalcShopTradeNumAndPrice_All', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryIsHouseShopUIInput', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryIsShopUIOnDecideAmount', 'EventQueryIsShopSoldOut']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventCloseRupeeDisplay', 'EventWait', 'EventOpenRupeeDisplay', 'EventTriggerAddGameDataIntToRupee', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerRequestAutoSave', 'EventTriggerLeaveGameSafetySection', 'EventEnterGameSafetySection']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryHasRuppeSpecifyGameData']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataInt', 'EventTriggerCopyGameDataInt', 'EventTriggerSetGameDataString64']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataString64', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerCloseHouseBuildingUI', 'EventTriggerOpenHouseBuildingUI', 'EventHouseShopDecreaseNumProductInStock']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleGetChaseState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: CustomHouseControlActor
entrypoint: None()
actions: ['EventCustomHouseControlDeleteSampleUnit', 'EventCustomHouseControlRequestChangeMode', 'EventCustomHouseControlEraseAllHouseUnitInRespawnArea', 'EventCustomHouseControlCreateSampleUnit', 'EventCstmHouseCtrlReqDeathAllActorInBldAreaExceptHouseUnit', 'EventTriggerCustomHouseControlCountUsedHouseUnitNum', 'EventCstmHouseCtrlIncreaseAsManyOwnHouseUnitAsGameDataIntValue', 'EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue', 'EventCstmHouseCtrlAddHouseUnitFromRequestToAddHouseUnit', 'EventCstmHouseCtrlClearAllRequestToAddHouseUnit', 'EventCstmHouseCtrlUpdateRespawnAreaVacantLotInfo', 'EventCstmHouseCtrlUnregisterHorseFromLastAccessedHorseRoom']
queries: ['EventQueryCustomHouseControlGetCurrentMode', 'EventQueryCustomHouseControlBranchByUnusedHouseUnitNum', 'EventQueryCustomHouseControlCheckIsAnyOtherObjectsInBuildArea', 'EventQueryCustomHouseControlBranchByUsedHouseUnitNumAll', 'EventQueryCstmHouseCtrlCheckIsAnyOtherObjectsInRespawnArea', 'EventQueryCustomHouseControlCheckIsThereObjectsInSampleUnit', 'EventQueryCstmHouseCtrlCheckIsOutSideOfBuildAreaCombinedParts', 'EventQueryCustomHouseControlCheckIsThereObjectsInHouseUnit', 'EventQueryCstmHouseCtrlIsLastRequestToAddHouseUnitSuccessful', 'EventQueryCstmHouseCtrlIsExistHorseInSampleUnit', 'EventQueryCustomHouseControlCheckIsAnyHouseUnitStationary', 'EventQueryCstmHouseCtrlBranchByUsedHouseUnitNumAllAddGdtInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchor', 'EventWait', 'EventPlayerPlayASForFlowchart', 'EventPlayerHorseGetOff', 'EventPlayerClimbOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void WeatherHello() {
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        switch EventWorldManagerController.EventQueryTimeDivision() {
          case [0, 1]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:Greeting_Morning', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [2, 3, 4, 5]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:Greeting_Noon', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
          case [6, 7]:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:Greeting_Evening', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsWaitEnd': True, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel2': 0, 'ChoiceLabel1': 1, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:Greeting_Rain', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Edit() {
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 111, 'ChoiceLabel1': 110, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0110', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 119, 'ChoiceLabel4': 112, 'IsNotOpenIfSkipedMostRecent': False})
    Event15:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData2': 'ExcludeChoice_BuildHouseTakeOut', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'ExcludeChoice_MyHomeBuilder_Buy'})
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 102, 'ChoiceLabel1': 101, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0111', 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 118, 'ChoiceLabel4': 103, 'IsNotOpenIfSkipedMostRecent': False})
        Event17:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Event267:
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildHouse_RoomAllBought'}) {
                Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0202', 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_Buy'})
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

                call RetrunBuyFlow_BuildingMode()

            } else {

                call Buy()

            }
          case 1:

            call TakeOut()

          case 2:
            Event265:

            call Yorozuya_Kaiwa.SellFlow()


            call RetrunBuyFlow_BuildingMode()

          case 3:
            Event24:

            call Retrun_BuildingModeChoice()

        }
      case 1:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/BuildHouse:Talk_1008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call MyHomeCheck()

      case 2:

        call BuildTips()

      case 3:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0116', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call FlagReset()

    }
}

void FinishEditing() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MyHomeBuilder_BuildingMode'})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    CustomHouseControlActor.EventCustomHouseControlRequestChangeMode({'IsWaitEnd': True, 'HouseMode': 0})
    GameSystemActor.EventTriggerLeaveGameSafetySection()
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    Npc_EventStarter.EventTriggerCloseHouseBuildingUI()
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuildHouse_AreaInRoom', 'Index': -1}) {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0112', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0140', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
    }

    call CameraPan_Reset2()

    if !CustomHouseControlActor.EventQueryCustomHouseControlCheckIsThereObjectsInHouseUnit() {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0159', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0157', 'IsNotOpenIfSkipedMostRecent': False})
        Event240:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0133', 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 46})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_LimitOver_OutPutUnit', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MyHomeBuilder_LimitOver_BuyUnit'})
    } else {
        goto Event240
    }
}

void Buy() {
    Npc_AncientAssistant003.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0102', 'IsWaitEnd': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Event9:
    Npc_AncientAssistant003.EventTriggerOpenHouseShopMenuScreen()
    Npc_AncientAssistant003.EventWaitHouseShopUIInput({'IsWaitEnd': True})
    if !Npc_AncientAssistant003.EventQueryIsHouseShopUIInput() {
        switch Npc_AncientAssistant003.EventQueryIsShopUIOnDecideGoods() {
          case [0, 2]:
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_R_01'}) {

                call BuyHouseUnit({'HouseUnitType': 17, 'SelectItemName': 'Obj_LinkHouse_R_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_Q_01'}) {

                call BuyHouseUnit({'HouseUnitType': 16, 'SelectItemName': 'Obj_LinkHouse_Q_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_P_01'}) {

                call BuyHouseUnit({'HouseUnitType': 15, 'SelectItemName': 'Obj_LinkHouse_P_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_O_01'}) {

                call BuyHouseUnit({'HouseUnitType': 14, 'SelectItemName': 'Obj_LinkHouse_O_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_N_01'}) {

                call BuyHouseUnit({'HouseUnitType': 13, 'SelectItemName': 'Obj_LinkHouse_N_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_M_01'}) {

                call BuyHouseUnit({'HouseUnitType': 12, 'SelectItemName': 'Obj_LinkHouse_M_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_L_01'}) {

                call BuyHouseUnit({'HouseUnitType': 11, 'SelectItemName': 'Obj_LinkHouse_L_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_K_01'}) {

                call BuyHouseUnit({'HouseUnitType': 10, 'SelectItemName': 'Obj_LinkHouse_K_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_J_01'}) {

                call BuyHouseUnit({'HouseUnitType': 9, 'SelectItemName': 'Obj_LinkHouse_J_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_I_01'}) {

                call BuyHouseUnit({'HouseUnitType': 8, 'SelectItemName': 'Obj_LinkHouse_I_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_H_01'}) {

                call BuyHouseUnit({'HouseUnitType': 7, 'SelectItemName': 'Obj_LinkHouse_H_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_G_01'}) {

                call BuyHouseUnit({'HouseUnitType': 6, 'SelectItemName': 'Obj_LinkHouse_G_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_F_01'}) {

                call BuyHouseUnit({'HouseUnitType': 5, 'SelectItemName': 'Obj_LinkHouse_F_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_E_01'}) {

                call BuyHouseUnit({'HouseUnitType': 4, 'SelectItemName': 'Obj_LinkHouse_E_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_D_01'}) {

                call BuyHouseUnit({'HouseUnitType': 3, 'SelectItemName': 'Obj_LinkHouse_D_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_C_01'}) {

                call BuyHouseUnit({'HouseUnitType': 2, 'SelectItemName': 'Obj_LinkHouse_C_01'})

            } else
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Obj_LinkHouse_B_01', 'Index': -1}) {

                call BuyHouseUnit({'HouseUnitType': 1, 'SelectItemName': 'Obj_LinkHouse_B_01'})

            } else {

                call BuyHouseUnit({'HouseUnitType': 0, 'SelectItemName': 'Obj_LinkHouse_A_01'})

            }
          case 1:
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0123', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnBuy()

        }
    } else {
        Event102:
        Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_AddUnitReserved'}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0165', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

            call PositionReset()


            call NpcPositionSetUp()

            CustomHouseControlActor.EventCstmHouseCtrlAddHouseUnitFromRequestToAddHouseUnit({'IncreaseOwnHouseUnitNum': True, 'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_BuildingMode'})

            call CameraPan_CreateUnit()

            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0106', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call PreviewUnitInObjectMessage()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_IsFullSpaceTalk', 'Value': False})

            call LetsBuildingSetUp()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MyHomeBuilder_AddUnitReserved', 'Value': False, 'Index': -1})
            CustomHouseControlActor.EventCstmHouseCtrlClearAllRequestToAddHouseUnit({'IsWaitEnd': True})
        } else {

            call RetrunBuyFlow_BuildingMode()

        }
    }
}

void TakeOut() {
    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 0, 'ComparisonValue': 0}) {
      case [0, 1]:
        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 1, 'ComparisonValue': 0}) {
          case [0, 1]:
            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 2, 'ComparisonValue': 0}) {
              case [0, 1]:
                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 3, 'ComparisonValue': 0}) {
                  case [0, 1]:
                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 4, 'ComparisonValue': 0}) {
                      case [0, 1]:
                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 5, 'ComparisonValue': 0}) {
                          case [0, 1]:
                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 6, 'ComparisonValue': 0}) {
                              case [0, 1]:
                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 7, 'ComparisonValue': 0}) {
                                  case [0, 1]:
                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 8, 'ComparisonValue': 0}) {
                                      case [0, 1]:
                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 9, 'ComparisonValue': 0}) {
                                          case [0, 1]:
                                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 10, 'ComparisonValue': 0}) {
                                              case [0, 1]:
                                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 11, 'ComparisonValue': 0}) {
                                                  case [0, 1]:
                                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 12}) {
                                                      case [0, 1]:
                                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 13}) {
                                                          case [0, 1]:
                                                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 14}) {
                                                              case [0, 1]:
                                                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 15}) {
                                                                  case [0, 1]:
                                                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 16}) {
                                                                      case [0, 1]:
                                                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 17}) {
                                                                          case [0, 1]:

                                                                            call NotExistUnusedHouseUnit()

                                                                          case 2:
                                                                            Event653:

                                                                            call ExistUnusedHouseUnit()

                                                                        }
                                                                      case 2:
                                                                        goto Event653
                                                                    }
                                                                  case 2:
                                                                    goto Event653
                                                                }
                                                              case 2:
                                                                Event633:

                                                                call ExistUnusedHouseUnit()

                                                            }
                                                          case 2:
                                                            goto Event633
                                                        }
                                                      case 2:
                                                        goto Event633
                                                    }
                                                  case 2:
                                                    Event349:

                                                    call ExistUnusedHouseUnit()

                                                }
                                              case 2:
                                                goto Event349
                                            }
                                          case 2:
                                            goto Event349
                                        }
                                      case 2:
                                        Event345:

                                        call ExistUnusedHouseUnit()

                                    }
                                  case 2:
                                    goto Event345
                                }
                              case 2:
                                goto Event345
                            }
                          case 2:
                            Event341:

                            call ExistUnusedHouseUnit()

                        }
                      case 2:
                        goto Event341
                    }
                  case 2:
                    goto Event341
                }
              case 2:
                Event337:

                call ExistUnusedHouseUnit()

            }
          case 2:
            goto Event337
        }
      case 2:
        goto Event337
    }
}

void BuyHouseUnit() {

    call ReadyBuy({'SelectItemName': 'SelectItemName'})

    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 108, 'ChoiceLabel4': 0, 'ChoiceLabel1': 107, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 5503, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0127', 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        if !Npc_AncientAssistant003.EventQueryIsShopUIOnDecideAmount() {
            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUsedHouseUnitNumAll({'ComparisonValue': 15}) {
              case 0:
                CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'HouseUnitType': 'HouseUnitType', 'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0})
                if !CustomHouseControlActor.EventQueryCstmHouseCtrlIsLastRequestToAddHouseUnitSuccessful() {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_IsFullSpaceTalk'}) {
                        Event561:
                        Npc_AncientAssistant003.EventBuyFromHouseShop({'IsWaitEnd': True})
                        if !Npc_AncientAssistant003.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildHouse_RoomAllBought', 'Index': -1, 'Value': True})
                        }
                        CustomHouseControlActor.EventCstmHouseCtrlIncreaseAsManyOwnHouseUnitAsGameDataIntValue({'IsWaitEnd': True, 'HouseUnitType': 'HouseUnitType', 'GameDataName': 'Shop_TradeItemNum'})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_IsFullSpaceTalk', 'Index': -1}) {
                            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0164', 'IsNotOpenIfSkipedMostRecent': False})
                            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0168', 'IsNotOpenIfSkipedMostRecent': False})
                            Event569:

                            call PreviewUnitInObjectMessage()

                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_LimitOver_BuyUnit', 'Value': True})
                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': False})

                            call SoldOutCheck()

                        } else {
                            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0137', 'IsNotOpenIfSkipedMostRecent': False})
                            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_IsFullSpaceTalk'})
                            goto Event569
                        }
                    } else {
                        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 107, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 5503, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0161', 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            goto Event561
                        } else {
                            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                            call ReturnBuy()

                        }
                    }
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_AddUnitReserved'})
                    Npc_AncientAssistant003.EventBuyFromHouseShop({'IsWaitEnd': True})
                    if !Npc_AncientAssistant003.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildHouse_RoomAllBought', 'Index': -1, 'Value': True})
                    }
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0164', 'IsNotOpenIfSkipedMostRecent': False})

                    call SoldOutCheck()

                }
              case [1, 2]:

                call IsMaxUnitBuyFlow({'HouseUnitType': 'HouseUnitType'})

            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0118', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnBuy()

        }
      case 1:
        Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        if !CustomHouseControlActor.EventQueryCstmHouseCtrlCheckIsAnyOtherObjectsInRespawnArea() {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0152', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraPan_Unit()

            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0167', 'IsNotOpenIfSkipedMostRecent': False})
            Event756:

            call CameraPan_Reset()

            Npc_AncientAssistant003.EventTriggerOpenHouseShopMenuScreen()

            call ReturnBuy()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_RoomInPreviewArea'}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0152', 'IsNotOpenIfSkipedMostRecent': False})

            call CameraPan_Unit()

            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0129', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0130', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5503, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0176', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                CustomHouseControlActor.EventCustomHouseControlEraseAllHouseUnitInRespawnArea({'IsWaitEnd': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                CustomHouseControlActor.EventCstmHouseCtrlUpdateRespawnAreaVacantLotInfo({'IsWaitEnd': True})
                Event467:

                call PositionReset()


                call NpcPositionSetUp()

                CustomHouseControlActor.EventCustomHouseControlCreateSampleUnit({'IsWaitEnd': True, 'HouseUnitType': 'HouseUnitType', 'OffsetPos': [10.0, 0.0, 10.0], 'YAngle': 0.0})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_PreviewingMode'})
                EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})

                call CameraPan_PreviewUnit()

                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0105', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call FlagReset()

            } else {
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event756
            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0176', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            goto Event467
        }
      case 2:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call ReturnBuy()

    }
}

void TakeOutDepositedHouseUnit() {
    switch CustomHouseControlActor.EventQueryCstmHouseCtrlBranchByUsedHouseUnitNumAllAddGdtInt({'ComparisonValue': 15, 'GameDataName': 'Shop_ExpectSelectNum'}) {
      case 0:
        Event727:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_LimitOver_OutPutUnit', 'Index': -1}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0138', 'IsNotOpenIfSkipedMostRecent': False})
            Event630:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_AddUnitReserved', 'Index': -1}) {
                Event784:

                call HouseUnitSelectNumReset()

                Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call FinishTakeOut()

            } else {
                Event783:

                call HouseUnitSelectNumReset()

                Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                call Retrun_BuildingModeChoice()

            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0136', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_LimitOver_OutPutUnit'})
            goto Event630
        }
      case [1, 2]:
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'HouseUnitType': 'HouseUnitType', 'AngleXZ': 180.0, 'IsWaitEnd': True, 'GameDataName': 'Shop_ExpectSelectNum', 'DesiredColumn': 0, 'DesiredRow': 0})
        Event629:
        if !CustomHouseControlActor.EventQueryCstmHouseCtrlIsLastRequestToAddHouseUnitSuccessful() {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0162', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event630
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_AddUnitReserved'})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call TakeOut_ReCheck()

        }
    }
}

void Retrun_BuildingModeChoice() {
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 111, 'ChoiceLabel1': 110, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0117', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 119, 'ChoiceLabel4': 112, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event15
}

void BuildingModeComeBack() {

    call Common.AirStartUP_Player()

    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0121', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientAssistant003")})


    call PositionReset()


    call NpcPositionSetUp()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'BuildHouse_IsCompleted_Exp'}) {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0122', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/BuildHouse:Talk_1019', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void ReturnBuy() {
    Npc_AncientAssistant003.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0124', 'IsWaitEnd': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event9
}

void ReturnTakeOut() {
    Npc_AncientAssistant003.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0124', 'IsWaitEnd': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'EndDialogOption': 2, 'IsCloseDialog': False})

    call CountUsedHouseUnitNum()

    Npc_AncientAssistant003.EventTriggerRefreshHouseShopUI()
    Event143:
    Npc_AncientAssistant003.EventWaitHouseShopUIInput({'IsWaitEnd': True})
    if !Npc_AncientAssistant003.EventQueryIsHouseShopUIInput() {
        switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
          case [0, 2]:
            Npc_AncientAssistant003.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 117, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0104', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 5503, 'ChoiceLabel1': 5500, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_AncientAssistant003.EventTriggerCalcTakeOutChoiceNumForHouseShopUI()
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_R_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 17})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_Q_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 16})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_P_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 15})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_O_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 14})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_N_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 13})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_M_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 12})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_L_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 11})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_K_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 10})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_J_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 9})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_I_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 8})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_H_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 7})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_G_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 6})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_F_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 5})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_E_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 4})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_D_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 3})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_C_01'}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 2})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Obj_LinkHouse_B_01', 'Index': -1}) {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 1})

                } else {

                    call TakeOutDepositedHouseUnit({'HouseUnitType': 0})

                }
              case 1:
                Event150:
                Npc_AncientAssistant003.EventTriggerCalcTakeOutAllNumForHouseShopUI()
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_R_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 17})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_Q_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 16})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_P_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 15})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_O_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 14})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_N_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 13})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_M_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 12})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_L_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 11})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_K_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 10})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_J_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 9})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_I_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 8})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_H_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 7})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_G_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 6})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_F_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 5})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_E_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 4})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_D_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 3})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Obj_LinkHouse_C_01'}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 2})

                } else
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Value': 'Obj_LinkHouse_B_01', 'Index': -1}) {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 1})

                } else {

                    call TakeOutDepositedHouseUnitAll({'HouseUnitType': 0})

                }
              case 2:
                Event155:
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call ReturnTakeOut()

            }
          case 1:
            Npc_AncientAssistant003.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 5500, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0175', 'ChoiceLabel2': 5503, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event150
            } else {
                goto Event155
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_AddUnitReserved', 'Index': -1}) {
        goto Event784
    } else {
        goto Event783
    }
}

void Retrun_DoNotTakeOut_BuildingMode() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'ExcludeChoice_MyHomeBuilder_Buy', 'ChoiceExcludeGameData2': ''})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 101, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0120', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 118, 'ChoiceLabel3': 103, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        goto Event267
      case 1:
        goto Event265
      case 2:
        goto Event24
    }
}

void RequestChangeModeToDynamic() {
    if !CustomHouseControlActor.EventQueryCustomHouseControlGetCurrentMode() {
        CustomHouseControlActor.EventCstmHouseCtrlReqDeathAllActorInBldAreaExceptHouseUnit({'IsWaitEnd': True})
        CustomHouseControlActor.EventCustomHouseControlRequestChangeMode({'HouseMode': 1, 'IsWaitEnd': True})
        GameSystemActor.EventEnterGameSafetySection({'GameSafetySetting': 'BuildHouse', 'IsWaitEnd': True})
    }
}

void TakeOutDepositedHouseUnitAll() {
    switch CustomHouseControlActor.EventQueryCstmHouseCtrlBranchByUsedHouseUnitNumAllAddGdtInt({'ComparisonValue': 15, 'GameDataName': 'Shop_SelectItemStockNum'}) {
      case 0:
        goto Event727
      case [1, 2]:
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'HouseUnitType': 'HouseUnitType', 'AngleXZ': 180.0, 'IsWaitEnd': True, 'GameDataName': 'Shop_SelectItemStockNum', 'DesiredColumn': 0, 'DesiredRow': 0})
        goto Event629
    }
}

void BuildHouse_IsCompleted_Exp_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_PreviewingMode'}) {
        if Npc_EventStarter.EventQueryAIScheduleGetChaseState() == 2 {
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientAssistant003:Near_0003', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_BuildingMode'}) {
        if Npc_EventStarter.EventQueryAIScheduleGetChaseState() {
            Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientAssistant003:Near_0002', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientAssistant003:Near_0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void BuildHouse_IsCompleted_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_PreviewingMode'}) {

        call Preview()

    } else {
        CustomHouseControlActor.EventCstmHouseCtrlClearAllRequestToAddHouseUnit({'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_BuildingMode'}) {

            call Edit()

        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_IsFirstTalkd'}) {
            if Npc_AncientAssistant003.EventQueryIsOnRecentTalkFlag() {

                call WeatherHello()

            }
            Event5:
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0100', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 100, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 103, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !CustomHouseControlActor.EventQueryCustomHouseControlCheckIsAnyOtherObjectsInBuildArea() {
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0152', 'IsNotOpenIfSkipedMostRecent': False})

                    call CameraPan_MyHome()

                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0153', 'IsNotOpenIfSkipedMostRecent': False})

                    call CameraPan_Reset()

                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0141', 'IsNotOpenIfSkipedMostRecent': False})

                    call FlagReset()

                } else {
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0134', 'IsNotOpenIfSkipedMostRecent': False})

                    call LinkHorseReset()

                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

                    call RequestChangeModeToDynamic()


                    call NpcPositionSetUp()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_BuildingMode'})
                    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

                    call CameraPan_MyHome2()

                    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0101', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call FlagReset()


                    call LetsBuildingSetUp()

                    Npc_AncientAssistant003.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0119', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
                    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 45})
                }
            } else {
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0119', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                call FlagReset()

            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0113', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0114', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_IsFirstTalkd'})
            goto Event5
        }
    }
}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0132', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0131', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_AncientAssistant003:Near_0004', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void CameraPan_Unit() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 10, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [4165.3798828125, 325.0, -1384.5799560546875], 'AtVector': [4171.02001953125, 318.80999755859375, -1372.7099609375], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CameraPan_Reset() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    fork {
        Npc_AncientAssistant003.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
}

void CameraPan_MyHome() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [4156.5400390625, 333.4700012207031, -1398.9599609375], 'AtVector': [4177.31005859375, 322.1199951171875, -1387.6099853515625], 'TargetFovy': 50.0, 'MoveTime': 30, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void RetrunBuyFlow_BuildingMode() {
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData2': 'ExcludeChoice_BuildHouseTakeOut', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'ExcludeChoice_MyHomeBuilder_Buy'})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 102, 'ChoiceLabel1': 101, 'NotPlayLipSyncAnim': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 118, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0151', 'ChoiceLabel4': 103, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event17
}

void LetsBuildingSetUp() {
    Npc_EventStarter.EventTriggerOpenHouseBuildingUI()
}

void ExistUnusedHouseUnit() {
    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUsedHouseUnitNumAll({'ComparisonValue': 15}) {
      case 0:
        Npc_AncientAssistant003.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0171', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 2})

        call CountUsedHouseUnitNum()

        Npc_AncientAssistant003.EventTriggerOpenHouseShopMenuScreenForTakeOut()
        goto Event143
      case [1, 2]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_LimitOver_OutPutUnit', 'Index': -1}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0138', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0136', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_LimitOver_OutPutUnit'})
        }
    }
}

void NotExistUnusedHouseUnit() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': True})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Retrun_DoNotTakeOut_BuildingMode()

}

void CountUsedHouseUnitNum() {
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 0})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 1})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 2})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 3})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 4})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 5})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 6})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 7})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 8})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 9})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 10})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 11})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 12})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 13})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 14})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 15})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 16})
    CustomHouseControlActor.EventTriggerCustomHouseControlCountUsedHouseUnitNum({'HouseUnitType': 17})
}

void MyHomeCheck() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PositionReset()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'BuildHouse_AreaInRoom', 'Index': -1}) {
        if !CustomHouseControlActor.EventQueryCustomHouseControlCheckIsAnyOtherObjectsInBuildArea() {

            call NpcPositionSetUp()


            call CameraPan_MyHome2()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildHouse:Talk_1025', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            Event775:

            call CameraPan_Reset()


            call Retrun_BuildingModeChoice()

        } else
        if !CustomHouseControlActor.EventQueryCstmHouseCtrlCheckIsOutSideOfBuildAreaCombinedParts() {

            call NpcPositionSetUp()


            call CameraPan_MyHome2()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildHouse:Talk_1034', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0160', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event775
        } else
        if !CustomHouseControlActor.EventQueryCustomHouseControlCheckIsAnyHouseUnitStationary({'StationaryVelocity': 0.8500000238418579, 'StationaryAngularVelocity': 0.8500000238418579}) {
            Event470:

            call CameraPan_MyHome2()


            call FinishEditing()

        } else {

            call NpcPositionSetUp()


            call CameraPan_MyHome2()

            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/BuildHouse:Talk_1034', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0173', 'IsCloseDialog': False, 'EndDialogOption': 3, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event775
        }
    } else {
        goto Event470
    }
}

void PositionReset() {
    if Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'BuildHouse_Link_Warp', 'IsWaitEnd': True, 'UseDemoWait': True})
    Npc_AncientAssistant003.EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'AnchorType': 0, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'Actor1ActorName': 'Player', 'PosVector': [1.2999999523162842, 2.140000104904175, -5.400000095367432], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
}

void ReadyBuy() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'Shop_SelectItemPrice', 'DstGameDataName': 'Shop_TradeItemPrice', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1})
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1})
    GameDataActor.EventTriggerSetGameDataInt({'Value': 1, 'GameDataName': 'Shop_ExpectSelectNum', 'Index': -1})
    GameDataActor.EventTriggerSetGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'SelectItemName'})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataName': 'Shop_SelectItemPrice', 'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'DstGameDataName': 'MyHomeBuilder_Shop_TradeItemPrice'})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Preview() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MyHomeBuilder_Shop_TradeItemPrice', 'DstGameDataName': 'Shop_TradeItemPrice'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0108', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 114, 'ChoiceLabel3': 113, 'ChoiceLabel2': 118, 'ChoiceLabel1': 107, 'IsNotOpenIfSkipedMostRecent': False})
    Event68:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameSystemActor.EventQueryHasRuppeSpecifyGameData({'Value': 'Shop_TradeItemPrice'}) {
            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUsedHouseUnitNumAll({'ComparisonValue': 15}) {
              case 0:

                call PreviewUnitAddCheck()

                if !CustomHouseControlActor.EventQueryCstmHouseCtrlIsLastRequestToAddHouseUnitSuccessful() {
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0162', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy'})

                    call ReturnPreview()

                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_AddUnitReserved'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy', 'Value': False})
                    Event412:
                    GameSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'MyHomeBuilder_Shop_TradeItemPrice'})
                    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0142', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MyHomeBuilder_PreviewingMode'})

                    call PreviewUnitInObjectCheck()

                    CustomHouseControlActor.EventCustomHouseControlDeleteSampleUnit({'IsWaitEnd': True})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_R_01'}) {

                        call ModeToDynamic({'HouseUnitType': 17})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_Q_01'}) {

                        call ModeToDynamic({'HouseUnitType': 16})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_P_01'}) {

                        call ModeToDynamic({'HouseUnitType': 15})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_O_01'}) {

                        call ModeToDynamic({'HouseUnitType': 14})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_N_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 13})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_M_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 12})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_L_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 11})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_K_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 10})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_J_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 9})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_I_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 8})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_H_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 7})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_G_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 6})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_F_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 5})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_E_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 4})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_D_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 3})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_C_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 2})

                    } else
                    if !GameDataActor.EventQueryIsGameDataString64({'Value': 'Obj_LinkHouse_B_01', 'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {

                        call ModeToDynamic({'HouseUnitType': 1})

                    } else {

                        call ModeToDynamic({'HouseUnitType': 0})

                    }
                }
              case [1, 2]:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1}) {
                    goto Event412
                } else {
                    Npc_AncientAssistant003.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0149', 'ChoiceNumber': 2, 'ChoiceLabel1': 107, 'ChoiceLabel2': 103, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        goto Event412
                    } else {

                        call ReturnPreview()

                    }
                }
            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0118', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnPreview()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy'})
        }
      case 1:

        call Yorozuya_Kaiwa.SellFlow()

        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call ReturnPreview()

      case 2:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0143', 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MyHomeBuilder_PreviewingMode'})

        call PreviewUnitInObjectCheck()


        call PreviewEnd_CommonFlow()


        call PreviewUnitInObjectMessage()


        call ReturnBuy()

      case 3:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0115', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy', 'Value': False})
    }
}

void ReturnPreview() {
    GameDataActor.EventTriggerCopyGameDataInt({'SrcGameDataIndex': -1, 'DstGameDataIndex': -1, 'SrcGameDataName': 'MyHomeBuilder_Shop_TradeItemPrice', 'DstGameDataName': 'Shop_TradeItemPrice'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData1': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy', 'ChoiceExcludeGameData2': '', 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 114, 'ChoiceLabel3': 113, 'ChoiceLabel2': 118, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0174', 'ChoiceLabel1': 107, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event68
}

void ModeToDynamic() {
    Npc_EventStarter.EventHouseShopDecreaseNumProductInStock({'DecreaseNum': 1, 'IsWaitEnd': True, 'HouseUnitType': 'HouseUnitType'})
    if !Npc_AncientAssistant003.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildHouse_RoomAllBought', 'Index': -1, 'Value': True})
    }

    call PositionReset()


    call NpcPositionSetUp()

    EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUsedHouseUnitNumAll({'ComparisonValue': 15}) {
      case 0:
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0166', 'IsNotOpenIfSkipedMostRecent': False})
        Event627:

        call PreviewUnitInObjectMessage()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': False})

        call SoldOutCheck()

      case [1, 2]:
        CustomHouseControlActor.EventCstmHouseCtrlIncreaseAsManyOwnHouseUnitAsGameDataIntValue({'IsWaitEnd': True, 'HouseUnitType': 'HouseUnitType', 'GameDataName': 'Shop_TradeItemNum'})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0164', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0168', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event627
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0137', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1, 'Value': True})
            goto Event627
        }
    }
}

void BuildTips() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0144', 'ChoiceNumber': 4, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 5503, 'IsNotOpenIfSkipedMostRecent': False})
    Event445:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0145', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0172', 'IsNotOpenIfSkipedMostRecent': False})
        Event451:

        call ReturnBuildTips()

      case 1:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0146', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event451
      case 2:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0147', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event451
      case 3:

        call Retrun_BuildingModeChoice()

    }
}

void ReturnBuildTips() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 1001, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1003, 'ChoiceLabel4': 5503, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0148', 'IsNotOpenIfSkipedMostRecent': False})
    goto Event445
}

void FlagReset() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ExcludeChoice_BuildHouseTakeOut', 'Index': -1, 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_Buy', 'Value': False})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_PreviewingMode', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Value': False, 'Index': -1})
        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void PreviewEnd_CommonFlow() {
    CustomHouseControlActor.EventCustomHouseControlDeleteSampleUnit({'IsWaitEnd': True})

    call PositionReset()


    call NpcPositionSetUp()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0109', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'ExcludeChoice_MyHomeBuilder_PreviewUnitBuy', 'Value': False})
}

void PreviewUnitInObjectCheck() {
    if !CustomHouseControlActor.EventQueryCustomHouseControlCheckIsThereObjectsInSampleUnit() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_Preview_EquipmentDrop', 'Value': True})
    } else
    if CustomHouseControlActor.EventQueryCstmHouseCtrlIsExistHorseInSampleUnit() {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_Preview_HorseDrop'})
        GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'Index': -1, 'GameDataName': 'MyHomeBuilder_KeepHorse'})
        CustomHouseControlActor.EventCstmHouseCtrlUnregisterHorseFromLastAccessedHorseRoom({'IsAutoIgnition': True, 'IsWaitEnd': True, 'IsWithHarness': False})
    }
}

void PreviewUnitInObjectMessage() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_Preview_EquipmentDrop', 'Index': -1}) {
        EventCamera.EventTriggerCameraSavePoint()

        fork {
            Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [4171.5400390625, 313.5, -1383.510009765625], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [4171.5400390625, 313.5, -1383.510009765625], 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 10, 'CameraCollisionMode': 0, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [4174.52978515625, 318.0299987792969, -1377.6600341796875], 'AtVector': [4172.77978515625, 313.67999267578125, -1383.0799560546875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0155', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 0, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_Preview_EquipmentDrop', 'Value': False})
        Event661:

        fork {
            Npc_AncientAssistant003.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 2, 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'WorldPos': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_Preview_HorseDrop'}) {
        EventCamera.EventTriggerCameraSavePoint()

        fork {
            Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [4238.7001953125, 315.30999755859375, -1394.6199951171875], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        } {
            Player.EventWait({'Frames': 10, 'IsWaitEnd': True})
            Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [4238.7001953125, 315.30999755859375, -1394.6199951171875], 'KeepTalkWait': True, 'OffsetBase': 0})
        }

        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [4238.6201171875, 316.4599914550781, -1394.3900146484375], 'AtVector': [4237.35986328125, 315.3599853515625, -1390.550048828125], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'MoveTime': 30})
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0156', 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MyHomeBuilder_Preview_HorseDrop'})
        goto Event661
    }
}

void IsMaxUnitBuyFlow() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1}) {
        Event556:
        Npc_AncientAssistant003.EventBuyFromHouseShop({'IsWaitEnd': True})
        if !Npc_AncientAssistant003.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'BuildHouse_RoomAllBought', 'Index': -1, 'Value': True})
        }
        CustomHouseControlActor.EventCstmHouseCtrlIncreaseAsManyOwnHouseUnitAsGameDataIntValue({'IsWaitEnd': True, 'GameDataName': 'Shop_TradeItemNum', 'HouseUnitType': 'HouseUnitType'})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1}) {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0164', 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0168', 'IsNotOpenIfSkipedMostRecent': False})
            Event566:

            call PreviewUnitInObjectMessage()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MyHomeBuilder_LimitOver_BuyUnit', 'Value': True})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildHouse_RoomAllBought'}) {
                Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0201', 'IsNotOpenIfSkipedMostRecent': False})

                call ShoppingEnd()

            } else {

                call ReturnBuy()

            }
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0137', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MyHomeBuilder_IsMaxUnitTalk', 'Index': -1, 'Value': True})
            goto Event566
        }
    } else {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 107, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 5503, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0150', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event556
        } else {
            Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0126', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnBuy()

        }
    }
}

void ShoppingEnd() {
    goto Event102
}

void PreviewUnitAddCheck() {
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_R_01'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 17})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_Q_01'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 16})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_P_01'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 15})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName', 'Value': 'Obj_LinkHouse_O_01'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 14})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_N_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 13})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_M_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 12})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_L_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 11})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_K_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 10})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_J_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 9})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_I_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 8})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_H_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 7})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_G_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 6})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_F_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_E_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 4})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_D_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 3})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Index': -1, 'Value': 'Obj_LinkHouse_C_01', 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 2})
    } else
    if !GameDataActor.EventQueryIsGameDataString64({'Value': 'Obj_LinkHouse_B_01', 'Index': -1, 'GameDataName': 'MyHomeBuilder_Shop_SelectItemName'}) {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 1})
    } else {
        CustomHouseControlActor.EventCstmHouseCtrlRequestToAddAsManyHouseUnitAsGameDataIntValue({'AngleXZ': 180.0, 'GameDataName': 'Shop_TradeItemNum', 'IsWaitEnd': True, 'DesiredColumn': 0, 'DesiredRow': 0, 'HouseUnitType': 0})
    }
}

void FinishTakeOut() {
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0169', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PositionReset()


    call NpcPositionSetUp()


    call RequestChangeModeToDynamic()

    CustomHouseControlActor.EventCstmHouseCtrlAddHouseUnitFromRequestToAddHouseUnit({'IsWaitEnd': True, 'IncreaseOwnHouseUnitNum': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'MyHomeBuilder_BuildingMode'})

    call CameraPan_CreateUnit()

    Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0107', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call LetsBuildingSetUp()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'MyHomeBuilder_AddUnitReserved', 'Value': False, 'Index': -1})
    CustomHouseControlActor.EventCstmHouseCtrlClearAllRequestToAddHouseUnit({'IsWaitEnd': True})
}

void LinkHorseReset() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MyHomeBuilder_KeepHorse', 'Index': -1}) {
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0170', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void CameraPan_PreviewUnit() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'PosVector': [4173.6298828125, 319.3800048828125, -1386.0400390625], 'AtVector': [4174.9501953125, 317.7300109863281, -1379.22998046875], 'TargetFovy': 50.0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'MoveTime': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CameraPan_CreateUnit() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'UnitPosition', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 10, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'CameraCollisionMode': 0, 'Actor1ActorName': 'CustomHouseControlActor', 'PosVector': [1.100000023841858, 8.829999923706055, -17.200000762939453], 'AtVector': [0.10999999940395355, 5.75, -8.390000343322754], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void SoldOutCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'BuildHouse_RoomAllBought'}) {
        Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
        Npc_AncientAssistant003.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientAssistant003:talk_0201', 'IsNotOpenIfSkipedMostRecent': False})

        call ShoppingEnd()

    } else {

        call ReturnBuy()

    }
}

void TakeOut_ReCheck() {
    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 0, 'ComparisonValue': 0}) {
      case [0, 1]:
        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 1, 'ComparisonValue': 0}) {
          case [0, 1]:
            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 2, 'ComparisonValue': 0}) {
              case [0, 1]:
                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 3, 'ComparisonValue': 0}) {
                  case [0, 1]:
                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 4, 'ComparisonValue': 0}) {
                      case [0, 1]:
                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 5, 'ComparisonValue': 0}) {
                          case [0, 1]:
                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 6, 'ComparisonValue': 0}) {
                              case [0, 1]:
                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 7, 'ComparisonValue': 0}) {
                                  case [0, 1]:
                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 8, 'ComparisonValue': 0}) {
                                      case [0, 1]:
                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 9, 'ComparisonValue': 0}) {
                                          case [0, 1]:
                                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 10, 'ComparisonValue': 0}) {
                                              case [0, 1]:
                                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'HouseUnitType': 11, 'ComparisonValue': 0}) {
                                                  case [0, 1]:
                                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 12}) {
                                                      case [0, 1]:
                                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 13}) {
                                                          case [0, 1]:
                                                            switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 14}) {
                                                              case [0, 1]:
                                                                switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 15}) {
                                                                  case [0, 1]:
                                                                    switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 16}) {
                                                                      case [0, 1]:
                                                                        switch CustomHouseControlActor.EventQueryCustomHouseControlBranchByUnusedHouseUnitNum({'ComparisonValue': 0, 'HouseUnitType': 17}) {
                                                                          case [0, 1]:
                                                                            Npc_AncientAssistant003.EventCloseHouseShopUI({'IsWaitEnd': True})
                                                                            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                                                            call FinishTakeOut()

                                                                          case 2:
                                                                            Event625:

                                                                            call ReturnTakeOut()

                                                                        }
                                                                      case 2:
                                                                        goto Event625
                                                                    }
                                                                  case 2:
                                                                    goto Event625
                                                                }
                                                              case 2:
                                                                Event502:

                                                                call ReturnTakeOut()

                                                            }
                                                          case 2:
                                                            goto Event502
                                                        }
                                                      case 2:
                                                        goto Event502
                                                    }
                                                  case 2:
                                                    Event259:

                                                    call ReturnTakeOut()

                                                }
                                              case 2:
                                                goto Event259
                                            }
                                          case 2:
                                            goto Event259
                                        }
                                      case 2:
                                        Event175:

                                        call ReturnTakeOut()

                                    }
                                  case 2:
                                    goto Event175
                                }
                              case 2:
                                goto Event175
                            }
                          case 2:
                            Event101:

                            call ReturnTakeOut()

                        }
                      case 2:
                        goto Event101
                    }
                  case 2:
                    goto Event101
                }
              case 2:
                Event46:

                call ReturnTakeOut()

            }
          case 2:
            goto Event46
        }
      case 2:
        goto Event46
    }
}

void CameraPan_Reset2() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 0, 'PosVector': [4174.52001953125, 315.1099853515625, -1379.4200439453125], 'AtVector': [4169.56982421875, 314.9200134277344, -1379.010009765625], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CameraPan_MyHome2() {

    fork {
        Npc_AncientAssistant003.EventNPCTurnToTarget({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'InstanceName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': '', 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'CameraCollisionMode': 0, 'MoveTime': 0, 'PosVector': [4159.39990234375, 349.75, -1400.2900390625], 'AtVector': [4184.8701171875, 331.510009765625, -1389.3299560546875], 'TargetFovy': 50.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void NpcPositionSetUp() {
    Npc_AncientAssistant003.EventAIScheduleWarpToAnchor({'AnchorType': 22, 'InstanceName': 'BuildModeStartPosition', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientAssistant003', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    EventSystemActor.EventWait({'Frames': 4, 'IsWaitEnd': True})
    EventCamera.EventTriggerCameraSavePoint()
}

void HouseUnitSelectNumReset() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'MyHomeBuilder_OutputHouseNumCheck', 'Index': -1, 'Value': 0})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}
