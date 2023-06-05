-------- EventFlow: Dm_ZO_0008 --------

Actor: Npc_ZoraB001[ParkShido]
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataEnum', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryHavePlayedEvent']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventCloseMessageDialog', 'EventTriggerRequestAutoSave', 'EventWait', 'EventTriggerSetTraverseBasePos', 'EventTriggerOneShotRequestInvokeTraverse', 'EventTriggerChangeMergeTarLodCenter', 'EventTriggerResetMergeTarLodCenter']
queries: ['EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerEquipArmorSeries']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void DuringResearchShidoTalk() {
    GameSystemActor.EventTriggerChangeMergeTarLodCenter({'Position': [3849.35791015625, 740.0, -569.8812255859375]})

    call Ver2()

    GameSystemActor.EventTriggerResetMergeTarLodCenter()
}

void Ver2() {
    if !GameDataActor.EventQueryIsGameDataEnum({'GameDataName': 'Step_DividedSlate', 'Value': 'Complete', 'Index': -1}) {
        if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_ZO_0006'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'WaterBridgePlace_IsAfter_SearchKingScales_Exp'}) {

                call Pattern_6()

            } else {

                call Pattern_3()

            }
        } else {

            call Pattern_3()

        }
    } else
    if !GameDataActor.EventQueryHavePlayedEvent({'EventName': 'Dm_ZO_0006'}) {

        call Pattern_2()

    } else {

        call Pattern_2()

    }
}

void Pattern_2() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001'}) {
        Event79:
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_04', 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event29:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call Ans_Zia()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call Ans_Hedoro()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'ChoiceLabel2': 3, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Yona()

                    Event103:

                    call Ans_AllSelectEnd()

                } else {
                    Event124:

                    call Ans_End()

                }
              case 1:

                call Ans_Yona()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 1, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Hedoro()

                    goto Event103
                } else {
                    goto Event124
                }
              case 2:

                call Ans_End()

            }
          case 1:

            call Ans_Hedoro()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 2, 'ChoiceLabel3': 3, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call Ans_Zia()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Yona()

                    Event102:

                    call Ans_AllSelectEnd()

                } else {
                    Event151:

                    call Ans_End()

                }
              case 1:

                call Ans_Yona()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceNumber': 2, 'ChoiceLabel2': 3, 'ChoiceLabel1': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Zia()

                    goto Event102
                } else {
                    goto Event151
                }
              case 2:

                call Ans_End()

            }
          case 2:

            call Ans_Yona()

            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call Ans_Zia()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Hedoro()

                    Event104:

                    call Ans_AllSelectEnd()

                } else {
                    Event152:

                    call Ans_End()

                }
              case 1:

                call Ans_Hedoro()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 3, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_05', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 3, 'ChoiceLabel1': 0, 'ChoiceLabel2': 3, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {

                    call Ans_Zia()

                    goto Event104
                } else {
                    goto Event152
                }
              case 2:

                call Ans_End()

            }
          case 3:

            call Ans_End()

        }
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Zora', 'CheckHead': False, 'CheckLower': False}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001', 'Index': -1, 'Value': True})
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_29', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event29
    } else
    goto Event79
}

void Ans_Zia() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_Hedoro() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_Yona() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_End() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_10', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Event210:
        GameSystemActor.EventTriggerSetTraverseBasePos({'BasePosIndex': 0, 'BasePos': [3829.0, 596.0, -569.8812255859375]})
        GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

        call LeadingMap()

    }
}

void Pattern_3() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_ShidoP3_1stTalkEnd', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001'}) {
            Event45:
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_07', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event46:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:

                call Ans_KingSkale()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call Ans_Hedoro_p3()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_Yona_p3()

                        Event99:

                        call Ans_AllSelectEnd_p3()

                    } else {
                        Event167:

                        call Ans_End_p3()

                    }
                  case 1:

                    call Ans_Yona_p3()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_Hedoro_p3()

                        goto Event99
                    } else {
                        goto Event167
                    }
                  case 2:

                    call Ans_End_p3()

                }
              case 1:

                call Ans_Hedoro_p3()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 6, 'ChoiceLabel3': 7, 'ChoiceLabel1': 4, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call Ans_KingSkale()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_Yona_p3()

                        Event98:

                        call Ans_AllSelectEnd_p3()

                    } else {
                        Event182:

                        call Ans_End_p3()

                    }
                  case 1:

                    call Ans_Yona_p3()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceLabel1': 4, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_KingSkale()

                        goto Event98
                    } else {
                        goto Event182
                    }
                  case 2:

                    call Ans_End_p3()

                }
              case 2:

                call Ans_Yona_p3()

                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 7, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:

                    call Ans_KingSkale()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_Hedoro_p3()

                        Event36:

                        call Ans_AllSelectEnd_p3()

                    } else {
                        Event195:

                        call Ans_End_p3()

                    }
                  case 1:

                    call Ans_Hedoro_p3()

                    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_11', 'ChoiceLabel1': 4, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 7, 'ChoiceNumber': 2, 'ChoiceLabel2': 7, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call Ans_KingSkale()

                        goto Event36
                    } else {
                        goto Event195
                    }
                  case 2:

                    call Ans_End_p3()

                }
              case 3:

                call Ans_End_p3()

            }
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Zora', 'CheckHead': False, 'CheckLower': False}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001', 'Index': -1, 'Value': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_29', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event46
        } else {
            goto Event45
        }
    } else {

        call P3_1stTimeMsg()

        goto Event46
    }
}

void Ans_KingSkale() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_12', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Pattern_6() {
    GameSystemActor.EventTriggerRequestAutoSave()
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_0008_Pattern06_End', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001'}) {
            Event61:
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_17', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event1:
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
                GameSystemActor.EventTriggerSetTraverseBasePos({'BasePosIndex': 0, 'BasePos': [3829.0, 596.0, -569.8812255859375]})
                GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

                call LeadingMap2()

            }
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Zora', 'CheckHead': False, 'CheckLower': False}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001', 'Index': -1, 'Value': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_31', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event1
        } else {
            goto Event61
        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_0008_Pattern06_End', 'Index': -1, 'Value': True})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001'}) {
            Event55:
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_16', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event70:
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else
        if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Zora', 'CheckHead': False, 'CheckLower': False}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001', 'Index': -1, 'Value': True})
            Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_30', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event70
        } else {
            goto Event55
        }
    }
}

void Ans_Hedoro_p3() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_13', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_Yona_p3() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_14', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_End_p3() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_15', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event92:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'SageOfZora_ShidoP3_1stTalkEnd', 'Index': -1}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfZora_ShidoP3_1stTalkEnd', 'Index': -1, 'Value': True})
            GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestAutoSave()
        }
    } else {
        Event214:
        GameSystemActor.EventTriggerSetTraverseBasePos({'BasePosIndex': 0, 'BasePos': [3829.0, 596.0, -569.8812255859375]})
        GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

        call LeadingMap()

        goto Event92
    }
}

void P3_1stTimeMsg() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001'}) {
        Event68:
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_19', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event69:
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceLabel3': 6, 'ChoiceLabel4': 7, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_20', 'ChoiceNumber': 4, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckUpper': True, 'CheckSeries': 'Zora', 'CheckHead': False, 'CheckLower': False}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ZoraArmorTalk_Npc_ZoraB001', 'Index': -1, 'Value': True})
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_30', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event69
    } else {
        goto Event68
    }
}

void LeadingMap() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_23', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call CamToTower()

    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_24', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerSetTraverseBasePos({'BasePosIndex': 0, 'BasePos': [3829.0, 590.0, -569.8812255859375]})
    GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

    call CamBack()

    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void LeadingMap2() {
    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_26', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call CamToTower()

    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventTriggerSetTraverseBasePos({'BasePosIndex': 0, 'BasePos': [3829.0, 590.0, -569.8812255859375]})
    GameSystemActor.EventTriggerOneShotRequestInvokeTraverse()

    call CamBack()

    Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Ans_AllSelectEnd_p3() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_32', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event92
    } else {
        goto Event214
    }
}

void Ans_AllSelectEnd() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsOpenCannon.Tower07', 'Index': -1}) {
        Npc_ZoraB001[ParkShido].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'ChoiceLabel4': 3, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Dm_ZO_0008:DuringResearchShidoTalk_32', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        goto Event210
    }
}

void CamToTower() {
    Npc_ZoraB001[ParkShido].EventNPCTurnToTarget({'WorldPos': [3772.919921875, 593.010009765625, -573.3599853515625], 'IsWaitEnd': False, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventTriggerCameraSavePoint()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [3860.43994140625, 595.4299926757812, -571.3400268554688], 'AtVector': [3849.4599609375, 594.22998046875, -571.489990234375], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Player.EventPlayerTurnAndLook({'WorldPos': [3772.919921875, 593.010009765625, -573.3599853515625], 'IsWaitEnd': False, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [3815.6201171875, 602.030029296875, -570.3200073242188], 'AtVector': [3805.0, 601.0, -570.4600219726562], 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 25.600000381469727, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [3815.6201171875, 602.030029296875, -570.3200073242188], 'AtVector': [3805.0, 601.0, -570.4600219726562], 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 21.600000381469727, 'IsWaitEnd': False, 'MoveTime': 300, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CamBack() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    Npc_ZoraB001[ParkShido].EventNPCTurnToTarget({'WorldPos': [3772.919921875, 593.010009765625, -573.3599853515625], 'Target': 2, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Player', 'IsWaitEnd': False, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Player.EventPlayerTurnAndLook({'WorldPos': [3772.919921875, 593.010009765625, -573.3599853515625], 'Target': 3, 'ActorName': 'Npc_ZoraB001', 'InstanceName': 'ParkShido', 'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'TurnFaceControlType': 1})
}
