-------- EventFlow: FldObj_AmosStatue_A_02 --------

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventDoNothing', 'EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk']
queries: ['EventQueryIsShopSoldOut']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenMinusRupeeDisplay', 'EventWait', 'EventCloseMinusMenu', 'EventTriggerEmphasizeMapIcon', 'EventCloseMinusRupeeDisplay', 'EventShowMap']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsOpenUnderGroundMap']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTalk', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_BaseCamp_Assistant[WatchTower]
entrypoint: None()
actions: []
queries: ['EventQueryAIScheduleCheckActorAction']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void TwnObj_DemonStatue_A_01_Have_MinusRupee_00_Talk() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'MinusRupee_00', 'Num': 1, 'IsExcludeAttached': False, 'IsExcludeAttachment': True})
    && !GameSystemActor.EventQueryIsOpenUnderGroundMap() {
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkAmosStatue'}) {

            call JoshuaTalk_IfPossible()

        }

        call InitTalkAmos()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1000', 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'OverrideStyle': 0, 'ChoiceLabel3': 1002, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventOpenMinusRupeeDisplay({'IsWaitEnd': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'OverrideStyle': 0, 'ChoiceLabel3': 1002, 'ChoiceNumber': 3, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1020', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1001', 'ChoiceLabel1': 1001, 'ChoiceNumber': 2, 'ChoiceLabel2': 1002, 'ChoiceCancelNo': 0, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'MinusRupee_00', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
                GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1002', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event3:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1004', 'IsNotOpenIfSkipedMostRecent': False})

                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Material_11'})

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'TwnObj_DemonStatue_B_01_GetUp', 'Index': -1, 'Value': True})

                call TwnObj_DemonStatue_C_02.UpdateMeetCount()

                switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_MeetCount', 'Value': 1}) {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1023', 'IsNotOpenIfSkipedMostRecent': False})

                    call TwnObj_DemonStatue_C_02.BuyFlow()

                    if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1018', 'IsNotOpenIfSkipedMostRecent': False})

                        call TwnObj_DemonStatue_C_02.CloseShopUI()

                        GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                        Event65:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1007', 'ChoiceNumber': 2, 'ChoiceLabel1': 1030, 'ChoiceLabel2': 1031, 'IsNotOpenIfSkipedMostRecent': False})
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            GameSystemActor.EventOpenMinusRupeeDisplay({'IsWaitEnd': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1020, 'ChoiceLabel2': 1021, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1025', 'IsNotOpenIfSkipedMostRecent': False})

                            call WhereIsFirst()

                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1017', 'IsNotOpenIfSkipedMostRecent': False})
                        }
                    } else {
                        goto Event65
                    }
                  case 2:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1006', 'IsNotOpenIfSkipedMostRecent': False})

                    call TwnObj_DemonStatue_C_02.Message_NewArmor()


                    call TwnObj_DemonStatue_C_02.BuyFlow()

                    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_KnownWhereIsCount', 'Value': 6}) {
                      case 0:
                        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1018', 'IsNotOpenIfSkipedMostRecent': False})

                            call TwnObj_DemonStatue_C_02.CloseShopUI()

                            Event139:
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                            GameSystemActor.EventOpenMinusRupeeDisplay({'IsWaitEnd': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1020, 'ChoiceLabel2': 1021, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1024', 'IsNotOpenIfSkipedMostRecent': False})

                            call WhereIsFirst()

                        } else {
                            goto Event139
                        }
                      case [1, 2]:

                        call NormalBuyFlowEnd()

                    }
                }
            } else {
                Event42:
                GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1014', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case 1:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkHandOver', 'KeepOneTimeAnm': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'MinusRupee_00', 'Num': -1, 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
            GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 1001, 'ChoiceCancelNo': 1, 'OverrideStyle': 0, 'ChoiceLabel1': 1001, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1003', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event3
          case 2:
            goto Event42
        }
    } else {

        call Talk()

    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/FldObj_AmosStatue_A_02:near1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'DisplayFrame': 180})
}

void TwnObj_DemonStatue_B_01_GetUp_Talk() {

    call InitTalkAmos()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1011', 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel1': 1010, 'IsNotOpenIfSkipedMostRecent': False})
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceLabel2': 5501, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:Com_Talk_37', 'IsNotOpenIfSkipedMostRecent': False})
        } else {

            call TwnObj_DemonStatue_C_02.BuyFlow()

            Event8:
            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': True, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:Com_Talk_36', 'IsNotOpenIfSkipedMostRecent': False})

                call TwnObj_DemonStatue_C_02.CloseShopUI()

                GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
            } else {

                call Bye()

            }
        }
      case 1:

        call TwnObj_DemonStatue_C_02.UpdateKnownCount()

        EventSystemActor.EventDoNothing({'IsWaitEnd': True})

        call WhereIs()

      case 2:

        call Bye()

    }
}

void WhereIs() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_KnownWhereIsCount', 'Value': 6}) {
      case 0:
        GameSystemActor.EventOpenMinusRupeeDisplay({'IsWaitEnd': True})
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_WhereIsCount'}) {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1008', 'ChoiceLabel1': 1020, 'ChoiceLabel2': 1021, 'IsNotOpenIfSkipedMostRecent': False})
            Event14:
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'MinusRupee_00', 'Num': 10, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'MinusRupee_00', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'Num': -10, 'IsSetOnlyEquipIndex': False})
                    Event49:
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1015', 'IsNotOpenIfSkipedMostRecent': False})

                    call OpenUnknownStatueMap()

                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1021', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1016', 'IsNotOpenIfSkipedMostRecent': False})

                    call TwnObj_DemonStatue_C_02.UpdateKnownCount()

                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'DemonStatue_WhereIsCount'})
                } else {
                    Event24:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1019', 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                }
            } else {
                Event15:
                GameSystemActor.EventCloseMinusRupeeDisplay({'IsWaitEnd': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1017', 'IsNotOpenIfSkipedMostRecent': False})
            }
          case [1, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 1020, 'ChoiceLabel2': 1021, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1009', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'MinusRupee_00', 'Num': 100, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'MinusRupee_00', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'Num': -100, 'IsSetOnlyEquipIndex': False})
                    goto Event49
                } else {
                    goto Event24
                }
            } else {
                goto Event15
            }
        }
      case [1, 2]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1026', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Connect_FirstIsland_IsCompleted_Exp'}) {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1027', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    }
}

void NormalBuyFlowEnd() {
    goto Event8
}

void Bye() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'DemonStatue_KnownWhereIsCount', 'Value': 6}) {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceLabel2': 5501, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1012', 'IsNotOpenIfSkipedMostRecent': False})
      case [1, 2]:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChoiceLabel2': 5501, 'ChangeMstxtForActor': True, 'ChoiceLabel1': 5500, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1013', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void OpenUnknownStatueMap() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_01', 'Index': -1}) {
        Event55:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_03', 'Index': -1}) {
            Event54:
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_05', 'Index': -1}) {
                Event56:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_04', 'Index': -1}) {
                    Event58:
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_02', 'Index': -1}) {
                        Event59:
                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveKnownDemonStatue_00', 'Index': -1})
                        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Minus_DemonStatue1'}) {
                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'HaveKnownDemonStatue_00', 'Index': -1})
                            GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [-775.9063110351562, -446.42718505859375, 1899.2449951171875], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
                            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                            GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_00'})
                        }
                    } else
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue3', 'Index': -1}) {
                        goto Event59
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'HaveKnownDemonStatue_02', 'Index': -1})
                        GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [-1033.4339599609375, -161.24679565429688, -2688.5390625], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
                        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                        GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_02'})
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue5', 'Index': -1}) {
                    goto Event58
                } else {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'HaveKnownDemonStatue_04', 'Index': -1})
                    GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [881.896484375, -281.0163879394531, 2393.7451171875], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                    GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_04'})
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue6', 'Index': -1}) {
                goto Event56
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveKnownDemonStatue_05', 'Value': True, 'Index': -1})
                GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [3702.14990234375, -306.64990234375, -2604.202880859375], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_05'})
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue4', 'Index': -1}) {
            goto Event54
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'HaveKnownDemonStatue_03', 'Index': -1})
            GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [3850.77099609375, -745.759521484375, 1333.9300537109375], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
            GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_03'})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Minus_DemonStatue2', 'Index': -1}) {
        goto Event55
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveKnownDemonStatue_01', 'Value': True, 'Index': -1})
        GameSystemActor.EventShowMap({'InShowIcon': True, 'IsShowPlayerNavi': True, 'CenterPos': [458.314208984375, -364.9590148925781, 796.51171875], 'IsShowChallenge': True, 'ZoomLevel': 3, 'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerEmphasizeMapIcon({'TargetIconType': 32, 'TargetIconName': 'DemonStatue_01'})
    }
}

void WhereIsFirst() {
    goto Event14
}

void Talk() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkAmosStatue'}) {

        call JoshuaTalk_IfPossible()

    }

    call InitTalkAmos()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'OverrideStyle': 0, 'ChoiceLabel3': 1002, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/FldObj_AmosStatue_A_02:talk1022', 'IsNotOpenIfSkipedMostRecent': False})
}

void JoshuaTalk_IfPossible() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GetCamera_IsAfter_Ready_Exp'}) {
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'ActionType': 9, 'AIScheduleState': 1}) {
            Event134:

            call Npc_BaseCamp_Assistant.Talk_FldObj_AmosStatue_A_02()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_BaseCamp_Assistant_TalkAmosStatue'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 6}) {
            goto Event134
        } else
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 2}) {
            goto Event134
        } else
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 3}) {
            goto Event134
        } else
        if !Npc_BaseCamp_Assistant[WatchTower].EventQueryAIScheduleCheckActorAction({'AIScheduleState': 1, 'ActionType': 7}) {
            goto Event134
        }
    }
}

void InitTalkAmos() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerTalk({'HelloType': 0, 'IsWaitEnd': True})

    call InitTalk.InitTalkNoTurn()

}
