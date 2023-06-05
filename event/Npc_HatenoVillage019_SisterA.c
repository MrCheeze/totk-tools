-------- EventFlow: Npc_HatenoVillage019_SisterA --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataString64', 'EventQueryIsGameDataInt', 'EventQueryCheckIsGet', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventBuyFromShop', 'EventOpenShopBuyUI', 'EventCalcShopTradeNumAndPrice_All', 'EventSellToShop', 'EventTriggerBalloonMessage', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryIsShopUIInput', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryIsShopSoldOut', 'EventQueryIsShopUIOnDecideAmount']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage019_SisterA
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventTriggerSetMessageLogDisableSectionStart', 'EventTriggerSetMessageLogDisableSectionEnd']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryTalkChoice4', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryIsEquipArmor', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerConversionPouchContentAll']
queries: ['EventQueryCheckSellResult', 'EventQueryIsEquippedWithDyedArmor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_HatenoVillage019
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventDoNothing', 'EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_FirstEvent_Inside', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsCompleted_Exp'}) {

                call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_VillageMayorElection_Challengetalk'}) {
                    if !Npc_HatenoVillage019_SisterA.EventQueryIsOnRecentTalkFlag() {
                        Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceLabel3': 15, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_102', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event198:
                        switch GameSystemActor.EventQueryTalkChoice3() {
                          case 0:
                            Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_97', 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_98', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            Event194:
                            if !Player.EventQueryCheckPlayerState({'State': 0}) {
                                if !PouchSystemActor.EventQueryIsEquippedWithDyedArmor() {
                                    Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_99', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                } else {
                                    Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_100', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                }
                            } else {
                                Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_101', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                          case 1:
                            Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_98', 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 15, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_97', 'ChoiceLabel1': 14, 'ChoiceLabel2': 15, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            }
                            goto Event194
                          case 2:
                            goto Event194
                        }
                    } else {
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_84', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_96', 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'ChoiceLabel3': 15, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event198
                    }
                } else {
                    Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_104', 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_VillageMayorElection_Challengetalk', 'Index': -1, 'Value': True})
                }
            } else {

                call Hateno_VillageMayorElection.Step01_Npc_HatenoVillage019_SisterA_Talk()

            }
        } else {

            call Hateno_VillageMayorElection.Ready_Npc_HatenoVillage019_SisterA_Talk()

        }
    } else {
        EventSystemActor.EventTransition({'EventName': 'Dm_OT_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage008_NotSave01'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_05', 'Index': -1, 'Value': True})
    }
}

void Hateno_LetUsElection_IsCompleted_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})


    call Hood()

    if !Npc_HatenoVillage019_SisterA.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_105', 'ChoiceLabel3': 19, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_103', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 19, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event220:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Shop_BuyStart()

        Event404:
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 19, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_107', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_20', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 19, 'ChoiceLabel4': 5, 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event220
      case 1:

        call Shop_SellStart()

        goto Event404
      case 2:

        call CheckArmor()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_34', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event404
      case 3:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Hateno_LetUsElection_IsCompleted_Exp_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:near0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Armor_Zora() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_81', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void CheckArmor() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'AncientHeroSoul'}) {

        call Armor_AncientHeroSoul()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Awakening'}) {

        call Armor_Awakening()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'ChemicalElectric'}) {

        call Armor_ChemicalElectric()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'ChemicalFire'}) {

        call Armor_ChemicalFire()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'ChemicalIce'}) {

        call Armor_ChemicalIce()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Climb'}) {

        call Armor_Climb()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Dark'}) {

        call Armor_Dark()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Diving'}) {

        call Armor_Diving()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Gerudo'}) {

        call Armor_Gerudo()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Goron'}) {

        call Armor_Goron()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Hylia'}) {

        call Armor_Hylia()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'HyliaArmor'}) {

        call Armor_HyliaArmor()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Kishin'}) {

        call Armor_Kishin()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Korok'}) {

        call Armor_Korok()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'LightEmission'}) {

        call Armor_LightEmission()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'MagicArmor'}) {

        call Armor_MagicArmor()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'NightGlow'}) {

        call Armor_NightGlow()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'NotSlippy'}) {

        call Armor_NotSlippy()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'OcarinaOfTime'}) {

        call Armor_OcarinaOfTime()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Phantom'}) {

        call Armor_Phantom()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'PhantomGanon'}) {

        call Armor_PhantomGanon()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Power'}) {

        call Armor_Power()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Rito'}) {

        call Armor_Rito()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'RoyalGuard'}) {

        call Armor_RoyalGuard()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Rubber', 'CheckUpper': True, 'CheckLower': True}) {

        call Armor_Rubber()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Sheikah', 'CheckUpper': True, 'CheckLower': True}) {

        call Armor_Sheikah()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'SkywardSword', 'CheckUpper': True, 'CheckLower': True}) {

        call Armor_SkywardSword()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Tingle'}) {

        call Armor_Tingle()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'TwilightPrincess'}) {

        call Armor_TwilightPrincess()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'UnderGround'}) {

        call Armor_UnderGround()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'WindWaker'}) {

        call Armor_WindWaker()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Yiga'}) {

        call Armor_Yiga()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Zelda1'}) {

        call Armor_Zelda()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Zonanium'}) {

        call Armor_Zonanium()

    } else
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckUpper': True, 'CheckLower': True, 'CheckSeries': 'Zora'}) {

        call Armor_Zora()

    } else
    if !Player.EventQueryIsEquipArmor({'ArmorName': 'Armor_1076_Head', 'ArmorSlot': 0}) {

        call Armor_StylishHat()

    } else
    if !Player.EventQueryCheckPlayerState({'State': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_18', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_44', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Armor_Gerudo() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_55', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Rito() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_69', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Goron() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_57', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Sheikah() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_72', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_NightGlow() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Climb() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_51', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Rubber() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_71', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Power() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_68', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Zelda() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_79', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Awakening() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_47', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_OcarinaOfTime() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_65', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_TwilightPrincess() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_75', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_SkywardSword() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_73', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_WindWaker() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_77', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Dark() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_52', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Tingle() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_74', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Phantom() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_66', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_PhantomGanon() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_67', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_RoyalGuard() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_70', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_UnderGround() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_76', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_NotSlippy() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_64', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_MagicArmor() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_62', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Kishin() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_59', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_AncientHeroSoul() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_46', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Yiga() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_78', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_ChemicalElectric() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_48', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_ChemicalFire() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_49', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_ChemicalIce() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_50', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Diving() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_53', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Hylia() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_58', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_HyliaArmor() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_83', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_LightEmission() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_61', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Zonanium() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_80', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_StylishHat() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_94', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Armor_Korok() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_60', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void Hood() {
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_001_Head'}) {
        Event49:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_22', 'ChoiceNumber': 2, 'ChoiceLabel1': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event74:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            PouchSystemActor.EventTriggerConversionPouchContentAll()
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            GameSystemActor.EventEventFadeIn({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_24', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Event326:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_25', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_002_Head'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_003_Head'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_004_Head'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_015_Head'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_001_Head_B'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_002_Head_B'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_003_Head_B'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_004_Head_B'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_015_Head_B'}) {
        goto Event49
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1152_Head'}) {
        Event69:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_23', 'ChoiceLabel1': 1, 'ChoiceNumber': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event74
        } else {
            goto Event326
        }
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1153_Head'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1154_Head'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1155_Head'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1156_Head'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1152_Head_B'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1153_Head_B'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1154_Head_B'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1155_Head_B'}) {
        goto Event69
    } else
    if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1156_Head_B'}) {
        goto Event69
    }
}

void Shop_BuyStart() {

    call ArmorGetCheck()

    if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_95', 'ChoiceLabel2': 18, 'ChoiceLabel1': 17, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 18, 'ChoiceLabel1': 17, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_106', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Event329:
            Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
            Event330:
            Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIInput() {
                if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                    switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
                      case 0:
                        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                        if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_29', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 11, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Npc_EventStarter.EventBuyFromShop({'IsWaitEnd': True})
                                if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_31', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event346:

                                    call Buy_select()

                                } else {
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_82', 'IsNotOpenIfSkipedMostRecent': False})
                                    goto Event346
                                }
                            } else {
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_21', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                                goto Event346
                            }
                        } else {

                            call LackRupee_2DShop()

                        }
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_28', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        if Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_107', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        }
                        Event146:

                        call Buy_select()

                      case 2:
                        Event336:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_27', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_21', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event146
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_26', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 19, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_107', 'ChoiceNumber': 0, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event146
                }
            } else
            if Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                if !GameSystemActor.EventQueryRandomChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_30', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_33', 'IsNotOpenIfSkipedMostRecent': False})
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_17', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_21', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event329
    }
}

void Shop_SellStart() {
    GameSystemActor.EventTriggerSetMessageLogDisableSectionStart()
    Npc_EventStarter.EventOpenShopBuyUI({'IsWaitEnd': True})
    Event350:
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_35', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
    Event351:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch PouchSystemActor.EventQueryCheckSellResult() {
          case 0:
            switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_SelectItemStockNum'}) {
              case [0, 2]:
                Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 8, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_90', 'ChoiceLabel2': 12, 'ChoiceLabel3': 11, 'ChoiceNumber': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                switch GameSystemActor.EventQueryTalkChoice3() {
                  case 0:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                      case [0, 2]:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_92', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        Event359:
                        if !GameSystemActor.EventQueryTalkChoice2() {
                            Npc_EventStarter.EventSellToShop({'IsWaitEnd': True})
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_39', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                            Event402:

                            call AfterSell()

                        } else {
                            Npc_EventStarter.EventTriggerHideShopMenuTotalNum()
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_42', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event402
                        }
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_93', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event359
                    }
                  case 1:
                    Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_91', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event359
                  case 2:

                    call Return()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_SelectItemName', 'Index': -1, 'Value': 'Armor_1076_Head'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_40', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_EventStarter.EventSellToShop({'IsWaitEnd': True})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_41', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event402
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_43', 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event402
                    }
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_38', 'ChoiceNumber': 2, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event359
                }
            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_36', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event358:

            call Return()

          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_37', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event358
        }
    } else {
        GameSystemActor.EventTriggerSetMessageLogDisableSectionEnd()
    }
}

void Return() {
    goto Event350
}

void Buy_select() {
    goto Event330
}

void LackRupee_2DShop() {
    goto Event336
}

void ArmorGetCheck() {
    if GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_005_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_005_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_005_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_020_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_020_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_020_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_022_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_045_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_046_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_046_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_046_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_048_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_048_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_048_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_055_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_056_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1006_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1006_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1006_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1043_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1043_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1044_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1046_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1046_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1046_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1051_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1051_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1051_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1061_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1061_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1061_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1066_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1066_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1066_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1071_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1071_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1071_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1086_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1086_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1086_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1091_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1091_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1091_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1096_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1096_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1096_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1125_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1141_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1141_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1141_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1151_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1300_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1300_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_1300_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_160_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_160_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_160_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_171_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_171_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_171_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_172_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_173_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_174_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_174_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_174_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_175_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_176_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_177_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_178_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_179_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_179_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_179_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_180_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_180_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_180_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_181_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_182_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_183_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_184_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_200_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_200_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_200_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_205_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_205_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_205_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_210_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_210_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_210_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_215_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_215_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_215_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_220_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_225_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_225_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_225_Head'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_230_Lower'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_230_Upper'})
    && GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_230_Head'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_95', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event414:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel4': 5, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_107', 'ChoiceLabel1': 4, 'ChoiceLabel2': 19, 'ChoiceLabel3': 5, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Shop_SellStart()

            goto Event414
          case 1:

            call CheckArmor()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_34', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event414
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk_17', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    }
}

void Do_SaganoHat() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_FirstEvent_Inside', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_SagonoNearTorso'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsAfter_Ready_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_LetUsElection_IsAfter_Ready2_Exp'}) {

                    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage019_SisterA")})


                    fork {
                        Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HatenoVillage019_SisterA', 'KeepTalkWait': True, 'OffsetBase': 0})
                    }


                    call Hateno_LetUsElection.Do_SagonoHat()

                } else {

                    call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage019_SisterA")})


                    fork {
                        Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    } {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                        Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HatenoVillage019_SisterA', 'KeepTalkWait': True, 'OffsetBase': 0})
                    }

                    Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk043', 'IsNotOpenIfSkipedMostRecent': False})
                    if !Npc_HatenoVillage019_SisterA.EventQueryAvoidDuplicationRandomChoice2() {
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk019', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk033', 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk044', 'IsNotOpenIfSkipedMostRecent': False})
                        Npc_HatenoVillage019_SisterA.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk045', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                }
            } else {

                call InitTalk.InitTalkNoTurnOnEvent({'Self': ActorIdentifier(name="Npc_HatenoVillage019_SisterA")})


                fork {
                    Npc_HatenoVillage019_SisterA.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                } {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HatenoVillage019_SisterA', 'KeepTalkWait': True, 'OffsetBase': 0})
                }


                call Hateno_VillageMayorElection.Do_SaganoHat()

            }
        } else {
            EventCamera.EventDoNothing({'IsWaitEnd': True})
            Npc_HatenoVillage019.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk046', 'IsNotOpenIfSkipedMostRecent': False})

            fork {
                Npc_HatenoVillage019.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsConfront': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            } {
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'ActorName': 'Npc_HatenoVillage019', 'KeepTalkWait': True, 'OffsetBase': 0})
            }

            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hateno_SagonoNearTorso_Sister'}) {
                EventCamera.EventTriggerCameraSavePoint()
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'Actor1ActorName': 'Npc_HatenoVillage019', 'PosVector': [-1.0700000524520874, 1.440000057220459, 2.5199999809265137], 'AtVector': [-0.10000000149011612, 1.2899999618530273, 0.27000001072883606], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
                Npc_HatenoVillage019.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk048', 'IsNotOpenIfSkipedMostRecent': False})
                EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            } else {
                Npc_HatenoVillage019.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HatenoVillage019_SisterA:Talk048', 'IsNotOpenIfSkipedMostRecent': False})
            }
        }
    } else {
        EventSystemActor.EventTransition({'EventName': 'Dm_OT_0005', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_HatenoVillage008_NotSave01'})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Hateno_JustTalked_05', 'Index': -1, 'Value': True})
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hateno_FirstEvent_Inside', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsAfter_Ready_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsAfter_Step08_Exp'})
            && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Hateno_VillageMayorElection_IsCompleted_Exp'}) {

                call Hateno_VillageMayorElection.Step09_Npc_HatenoVillage019_SisterA_Near()

            }
        } else {

            call Hateno_VillageMayorElection.Ready_Npc_HatenoVillage019_SisterA_Near()

        }
    }
}

void AfterSell() {
    goto Event351
}
