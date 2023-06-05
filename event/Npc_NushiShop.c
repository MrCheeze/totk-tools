-------- EventFlow: Npc_NushiShop --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventPlayAS', 'EventTriggerChangeAIScheduleEquipState', 'EventTriggerTalk', 'EventTriggerLookAtObject']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSetGameDataString64', 'EventTriggerCopyGameDataString64', 'EventTriggerCalcAndWriteCaveMasterMedalNum']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsDefeatCaveMaster']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch', 'EventQueryCanAddToPorchByGameData']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision', 'EventQueryWeather']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToStarterLinkAnchor', 'EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventWait', 'EventOpenCaveMasterMedalDisplay', 'EventCloseCaveMasterMedalDisplay', 'EventEventFadeIn', 'EventCloseMessageDialog', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryRandomChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Mannequin_029_Head
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_030_Head
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_032_Head
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_031_Head
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_017_Upper
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_017_Lower
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Mannequin_017_Head
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerSoundBeginForbidDialogDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: {'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1, 'IsGrounding': False, 'IsBindNearestActor': False}

Actor: GameSystemActor[ForWait01]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NushiShop_Challenge00_IsCompleted_Exp'}) {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})


        call TimeCheck()

        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call Greeting()

        }
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_TalkAboutMultiTrade', 'Index': -1}) {
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call PouchCheck()

            }
            Event59:
            GameSystemActor.EventOpenCaveMasterMedalDisplay({'IsWaitEnd': True})
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
              case 0:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {
                  case [0, 1]:
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_23', 'ChoiceLabel3': 9, 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    switch GameSystemActor.EventQueryTalkChoice3() {
                      case 0:

                        call ItemCheck()

                      case 1:

                        call RewardItem_Root()

                      case 2:

                        call Bye()

                    }
                  case 2:
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_23', 'ChoiceLabel1': 1, 'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'IsNotOpenIfSkipedMostRecent': False})
                    Event0:
                    switch GameSystemActor.EventQueryTalkChoice4() {
                      case 0:

                        call ItemCheck()

                      case 1:

                        call RewardItem_Root()

                      case 2:

                        call CaveMasterPlace()

                      case 3:

                        call Bye()

                    }
                }
              case [1, 2]:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_MedalComplete'}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_ShowLastAllMedal'}) {
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_61', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'IsNotOpenIfSkipedMostRecent': False})
                        Event26:
                        if !GameSystemActor.EventQueryTalkChoice2() {

                            call CompleteEvent()

                        } else {
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_74', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
                        }
                    } else {
                        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NushiShop_ShowLastAllMedal'})
                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_73', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 13, 'ChoiceLabel2': 14, 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event26
                    }
                } else
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_NoticeSearchLastMedalNum'}) {
                    Event458:
                    GameDataActor.EventTriggerCalcAndWriteCaveMasterMedalNum({'DependenceLocation': '', 'AllNumGameData': '', 'DefeatNumGameData': '', 'RestNumGameData': 'Nushishop_MedalRemaining'})
                    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_79', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 9, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    if !GameSystemActor.EventQueryTalkChoice2() {

                        call CaveMasterPlace()

                    } else {

                        call Bye()

                    }
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_78', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NushiShop_NoticeSearchLastMedalNum'})
                    goto Event458
                }
            }
        } else {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_21', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_TalkAboutMultiTrade', 'Value': True, 'Index': -1})
            goto Event59
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})


        call ItemNameDefaultSetup()


        call FirstTalkNushiShop()

        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'NushiShop_Challenge00_IsCompleted_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_NushiShop:Near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_NushiShop:Near_01', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void CompleteEvent() {
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 88})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Value': 1, 'Index': -1})
    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'CaveMasterMedal', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'Num': -101, 'IsSetOnlyEquipIndex': False})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'ExchangedCaveMasterMedalNum', 'Value': 101})
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_26', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Receive', 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_56', 'IsNotOpenIfSkipedMostRecent': False})
    } {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    }

    SoundSystemActor.EventTriggerSoundBeginForbidDialogDucking({'CommandLife': 0})

    call EatAction()

    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'IsWaitEnd': False, 'ASName': 'Wait'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Transform_St', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'Partial': 'Material', 'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})

    call CompleteDemo()

}

void ItemCheck() {
    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 7}) {
                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
                                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
                                                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                                        if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {

                                                            call Trade({'ItemCost': 2, 'ItemStatusNum': 0, 'Minus_ItemCost': -2, 'ItemName': 'Armor_045_Head'})

                                                        }
                                                    } else {

                                                        call Trade({'ItemStatusNum': 1, 'ItemName': 'Item_Enemy_32', 'ItemCost': 2, 'Minus_ItemCost': -2})

                                                    }
                                                } else {

                                                    call Trade({'ItemName': 'Armor_1086_Upper', 'ItemStatusNum': 2, 'ItemCost': 3, 'Minus_ItemCost': -3})

                                                }
                                            } else {

                                                call Trade({'ItemStatusNum': 3, 'ItemName': 'Item_Enemy_117', 'ItemCost': 3, 'Minus_ItemCost': -3})

                                            }
                                        } else {

                                            call Trade({'ItemStatusNum': 4, 'ItemName': 'Armor_055_Head', 'ItemCost': 3, 'Minus_ItemCost': -3})

                                        }
                                    } else {

                                        call Trade({'ItemStatusNum': 5, 'ItemName': 'Item_Enemy_42', 'ItemCost': 3, 'Minus_ItemCost': -3})

                                    }
                                } else {

                                    call Trade({'ItemStatusNum': 6, 'ItemName': 'Armor_1086_Lower', 'ItemCost': 4, 'Minus_ItemCost': -4})

                                }
                            } else {

                                call Trade({'ItemStatusNum': 7, 'ItemName': 'Item_Enemy_217', 'ItemCost': 4, 'Minus_ItemCost': -4})

                            }
                        } else {

                            call Trade({'ItemStatusNum': 8, 'ItemName': 'Armor_1125_Head', 'ItemCost': 4, 'Minus_ItemCost': -4})

                        }
                    } else {

                        call Trade({'ItemStatusNum': 9, 'ItemName': 'Item_Enemy_156', 'ItemCost': 4, 'Minus_ItemCost': -4})

                    }
                } else {

                    call Trade({'ItemStatusNum': 10, 'ItemName': 'Armor_056_Head', 'ItemCost': 4, 'Minus_ItemCost': -4})

                }
            } else {

                call Trade({'ItemStatusNum': 11, 'ItemName': 'Item_Enemy_155', 'ItemCost': 4, 'Minus_ItemCost': -4})

            }
        } else {

            call Trade({'ItemName': 'Armor_1086_Head', 'ItemStatusNum': 12, 'ItemCost': 5, 'Minus_ItemCost': -5})

        }
    } else {

        call No_Item()

    }
}

void Bye() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_16', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': False})
}

void No_Item() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_49', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'ASName': 'Talk_Lament', 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_63', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_64', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_50', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
}

void CantReceive() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_09', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': False})
}

void CaveMasterPlace() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': False, 'GameDataName': 'NushiShop_NotFoundNushi', 'Index': -1})

    call TalkPlace()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_NotFoundNushi'}) {
        Event581:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_111', 'ChoiceLabel1': 1, 'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NushiShop_HeardCaveInfoThisTalk'})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

        call Return_FromReward4()

    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_71', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
          case 0:
            goto Event581
          case [1, 2]:
            GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'NushiShop_HeardCaveInfoThisTalk'})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    }
}

void FirstTalkNushiShop() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_00', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Act_MamonoShop', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 5, 'FaceControlType': 0, 'ActorName': 'AnchorAction7', 'InstanceName': 'Front', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'Act_CounterWait', 'IsWaitEnd': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Talk_Lament', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_04', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_05', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_06', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

    call Before_FocusCloth()

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_07', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 11, 'ChoiceLabel2': 12, 'ChoiceCancelNo': 1, 'IsNotOpenIfSkipedMostRecent': False})
    if GameSystemActor.EventQueryTalkChoice2() in [0, 1] {

        call After_FocusCloth()

        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_08', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'NushiShop_Challenge00', 'IsIgnoreCompletedChallenge': True, 'StepName': 'Complete', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    }
}

void Greeting() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_HeardCaveInfoThisTalk', 'Value': False})
    switch EventWorldManagerController.EventQueryWeather({'IsCheckRainRate': True}) {
      case [0, 1]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_11', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3, 4, 5, 6, 7, 8]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_12', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Return_FromReward4() {
    goto Event0
}

void CaveInfo01() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_CentralHyrule_0022.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk1001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Lanayru_0006.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk1002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_CentralHyrule_0030.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk1003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_HyruleRidge_0002.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk1004', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_CentralHyrule_0009.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk1005', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo03() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Hebra_0037.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk3001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Hebra_0016.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk3002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Hebra_0022.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk3003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Hebra_0023.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk3004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Hebra_0013.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk3005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo04() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Eldin_0023.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk4001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Eldin_0033.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk4002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Eldin_0034.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk4003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Eldin_0025.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk4004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_HyruleForest_0008.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk4005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo05() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Akkala_0010.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk5001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Eldin_0031.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk5002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Akkala_0003.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk5003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Lanayru_0057.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk5004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Lanayru_0035.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk5005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo13() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Firone_0016.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk13001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Firone_0023.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk13002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Firone_0009.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk13003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_HateruEast_0006.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk13004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_Firone_0029.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk13005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo09() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_GerudoDesert_0051.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk9001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_GerudoDesert_0031.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk9002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_GerudoDesert_0045.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk9003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_GerudoDesert_0015.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk9004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_GerudoDesert_0044.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk9005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void CaveInfo11() {
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_LanayruMountain_0014.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk11001', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_LanayruMountain_0008.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk11002', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_LanayruMountain_0025.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk11003', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_LanayruMountain_0016.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk11004', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsDefeatCaveMaster({'Location': 'Work/Location/Cave_HateruEast_0000.game__location__Location.gyml'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk11005', 'IsNotOpenIfSkipedMostRecent': False})
    } else {

        call NotFoundCaveMaster()

    }
}

void TalkPlace() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_HeardCaveInfoThisTalk'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_70', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel01'}) {

        call CaveInfo01()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel03'}) {

        call CaveInfo03()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel04'}) {

        call CaveInfo04()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel05'}) {

        call CaveInfo05()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel09'}) {

        call CaveInfo09()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel11'}) {

        call CaveInfo11()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Travel13'}) {

        call CaveInfo13()

    }
}

void ItemNameDefaultSetup() {
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 0, 'Value': 'Armor_045_Head'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 1, 'Value': 'Item_Enemy_32'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 2, 'Value': 'Armor_1086_Upper'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 3, 'Value': 'Item_Enemy_117'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 4, 'Value': 'Armor_055_Head'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 5, 'Value': 'Item_Enemy_42'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Value': 'Armor_1086_Lower', 'Index': 6})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 7, 'Value': 'Item_Enemy_217'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 8, 'Value': 'Armor_1125_Head'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 9, 'Value': 'Item_Enemy_156'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 10, 'Value': 'Armor_056_Head'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Index': 11, 'Value': 'Item_Enemy_155'})
    GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'NushiShop_ItemName', 'Value': 'Armor_1086_Head', 'Index': 12})
}

void Trade() {
    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'NushiShop_CostNum', 'Index': -1, 'Value': 'ItemCost'})
    GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'NushiShop_ItemName', 'DstGameDataName': 'NushiShopRewardName', 'Index': -1, 'SrcIndex': 'ItemStatusNum'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': False})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                  case [0, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                      case [0, 2]:
                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 1})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_HeardAboutReward', 'Index': 'ItemStatusNum'}) {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31', 'IsNotOpenIfSkipedMostRecent': False})
                            Event141:
                            if !GameSystemActor.EventQueryTalkChoice2() {
                                Event142:
                                if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'CaveMasterMedal', 'Num': 'ItemCost', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                      case [0, 2]:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                                          case [0, 2]:
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                              case [0, 2]:
                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                                                  case [0, 2]:
                                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                                                      case [0, 2]:
                                                        if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'Num': 1, 'GameDataForActorName': 'NushiShopRewardName'}) {
                                                            Event140:
                                                            PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'CaveMasterMedal', 'AttachmentActor': '', 'IsEquipDIrect': False, 'EffectType': 0, 'EffectValue': -1, 'Num': 'Minus_ItemCost', 'IsSetOnlyEquipIndex': False})
                                                            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'ExchangedCaveMasterMedalNum', 'Value': 'ItemCost'})

                                                            call EatMedal()

                                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_19', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                                                            call ItemDisappeared()

                                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                                              case [0, 2]:
                                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                                                                  case [0, 2]:
                                                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                                                      case [0, 2]:
                                                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                                                                          case [0, 2]:
                                                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                                                                              case [0, 2]:

                                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'ItemName'})

                                                                                Event186:
                                                                                GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
                                                                                GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Value': 1, 'Index': -1})
                                                                                Player.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'InstanceName': 'Front', 'NotChangeRot': True, 'ActorName': 'AnchorAction7', 'UseDemoWait': True})
                                                                                Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'InstanceName': 'Front', 'ActorName': 'AnchorAction7', 'Target': 1, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
                                                                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
                                                                                Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                                                                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': False})
                                                                                Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
                                                                                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                                                                                GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
                                                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                                                                  case [0, 1]:
                                                                                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_121', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                    Event67:
                                                                                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_111', 'ChoiceLabel1': 1, 'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                    GameSystemActor.EventTriggerRequestAutoSave()

                                                                                    call Return_FromReward4()

                                                                                  case 2:
                                                                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
                                                                                      case [0, 1]:
                                                                                        goto Event67
                                                                                      case 2:
                                                                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'NushiShop_CostNum', 'Index': -1, 'Value': 39})
                                                                                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_76', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_76_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_76_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_76_03', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                                                                                        GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
                                                                                        GameSystemActor.EventTriggerRequestAutoSave()
                                                                                    }
                                                                                }
                                                                              case 1:

                                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_155_Bundle_A'})

                                                                                goto Event186
                                                                            }
                                                                          case 1:

                                                                            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_156_Bundle_A'})

                                                                            goto Event186
                                                                        }
                                                                      case 1:

                                                                        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_42_Bundle_A'})

                                                                        goto Event186
                                                                    }
                                                                  case 1:

                                                                    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_117_Bundle_A'})

                                                                    goto Event186
                                                                }
                                                              case 1:

                                                                call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_32_Bundle_A'})

                                                                goto Event186
                                                            }
                                                        } else {
                                                            Event147:

                                                            call CantReceive()

                                                        }
                                                      case 1:
                                                        if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'NushiShopRewardName', 'Num': 3}) {
                                                            goto Event140
                                                        } else {
                                                            goto Event147
                                                        }
                                                    }
                                                  case 1:
                                                    if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'NushiShopRewardName', 'Num': 2}) {
                                                        goto Event140
                                                    } else {
                                                        goto Event147
                                                    }
                                                }
                                              case 1:
                                                if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'NushiShopRewardName', 'Num': 5}) {
                                                    goto Event140
                                                } else {
                                                    goto Event147
                                                }
                                            }
                                          case 1:
                                            if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'NushiShopRewardName', 'Num': 8}) {
                                                goto Event140
                                            } else {
                                                goto Event147
                                            }
                                        }
                                      case 1:
                                        if !PouchSystemActor.EventQueryCanAddToPorchByGameData({'GameDataForActorName': 'NushiShopRewardName', 'Num': 3}) {
                                            goto Event140
                                        } else {
                                            goto Event147
                                        }
                                    }
                                } else {

                                    call No_Item()

                                }
                            } else {

                                call Bye()

                            }
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 5, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31', 'ChoiceLabel2': 16, 'ChoiceLabel3': 2, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
                            Event300:
                            switch GameSystemActor.EventQueryTalkChoice3() {
                              case 0:
                                goto Event142
                              case 1:

                                call TalkAboutReward({'Index': 'ItemStatusNum'})

                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    goto Event142
                                } else {

                                    call Bye()

                                }
                              case 2:

                                call Bye()

                            }
                        }
                      case 1:
                        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 3})
                        Event466:
                        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_HeardAboutReward', 'Index': 'ItemStatusNum'}) {
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event141
                        } else {
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31_01', 'ChoiceLabel1': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 16, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event300
                        }
                    }
                  case 1:
                    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 2})
                    goto Event466
                }
              case 1:
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 5})
                Event244:
                GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_HeardAboutReward', 'Index': 'ItemStatusNum'}) {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event141
                } else {
                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_31_01', 'ChoiceLabel1': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 15, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event300
                }
            }
          case 1:
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 8})
            goto Event244
        }
      case 1:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'NushiShopRewardBundleNum', 'Value': 3})
        goto Event244
    }
}

void RewardItem_Mamono() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_HeardAboutReward', 'Index': 'Index', 'Value': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': False})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {
      case 1:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 10, 'ChoiceNumber': 3, 'ChoiceLabel3': 9, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_101', 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call ItemCheck()

          case 1:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 7, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_93', 'IsNotOpenIfSkipedMostRecent': False})

            call RewardItem_Root()

          case 2:

            call Bye()

        }
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
          case 1:
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_109', 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnforReward_Mamono()

          case 2:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
              case 1:

                call RewardCloth_Upper()


                call ReturnforReward_Mamono()

              case 2:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                  case 1:
                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_94', 'IsNotOpenIfSkipedMostRecent': False})

                    call ReturnforReward_Mamono()

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
                      case 1:
                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_106', 'IsNotOpenIfSkipedMostRecent': False})

                        call ReturnforReward_NoConnect()

                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                          case 1:
                            Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_96', 'IsNotOpenIfSkipedMostRecent': False})

                            call ReturnforReward_Mamono()

                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                              case 1:

                                call RewardCloth_Lower()


                                call ReturnforReward_Mamono()

                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 7}) {
                                  case 1:
                                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_95', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                    call ReturnforReward_Mamono()

                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                                      case 1:
                                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_107', 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})

                                        call ReturnforReward_NoConnect()

                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                                          case 1:
                                            Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_97', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                            call ReturnforReward_Mamono()

                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                                              case 1:
                                                Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_108', 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})

                                                call ReturnforReward_NoConnect()

                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                                                  case 1:
                                                    Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_98', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                    call ReturnforReward_Mamono()

                                                  case 2:
                                                    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {

                                                        call RewardCloth_Head()


                                                        call ReturnforReward_Mamono()

                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ReturnforReward_Mamono() {
    Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'ChoiceNumber': 4, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_99', 'IsNotOpenIfSkipedMostRecent': False})
    Event53:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call ItemCheck()

      case 1:
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 7, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_93', 'IsNotOpenIfSkipedMostRecent': False})

        call RewardItem_Root()

      case 2:

        call CaveMasterPlace()

      case 3:

        call Bye()

    }
}

void ReturnforReward_NoConnect() {
    goto Event53
}

void RewardCloth_Upper() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void RewardCloth_Lower() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void RewardCloth_Head() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void Before_FocusCloth() {
    Player.EventTriggerPlayerLookAtObject({'PosOffset': [0.0, 6.0, 0.0], 'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'AtVectorSetType': 2, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'PosVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 2, 'AtVector': [-0.7300000190734863, 1.6299999952316284, 4.440000057220459], 'Actor1ActorName': 'AnchorAction7', 'Actor1InstanceName': 'Front', 'PosVector': [1.6399999856948853, 0.9300000071525574, -6.559999942779541]})
}

void After_FocusCloth() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 0, 'CollisionInterpolateSkip': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Player.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
}

void EatMedal() {
    Player.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'ASCommand': 'TalkHandOver', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_102_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        Event122:

        fork {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_102', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': 'Act_Receive', 'IsNotOpenIfSkipedMostRecent': False})
        } {
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Talk', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        }


        call EatAction()

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ASName': 'Talk_Lament', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104_03', 'IsNotOpenIfSkipedMostRecent': False})
            Event468:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_105', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ASName': 'Talk_Lament', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104_04', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event468
          case 2:
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'ASName': 'Talk_Lament', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_104_05', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event468
        }
      case 1:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_102_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event122
      case 2:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_102_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event122
    }
}

void EatAction() {
    Npc_EventStarter.EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Act_Eat', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_EventStarter.EventTriggerChangeAIScheduleEquipState({'EquipState': 2})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        Npc_EventStarter.EventTriggerTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_103', 'EndDialogOption': 2, 'IsEndDialogOptionAuto': False, 'NotPlayLipSyncAnim': True})
    } {
        Npc_EventStarter.EventPlayAS({'IsWaitEnd': True, 'ASName': 'Act_Swallow', 'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

    GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': False})
}

void CompleteDemo() {
    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Transform_Loop', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'Partial': 'Material'})
    GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 5, 'InstanceName': 'Front', 'ActorName': 'AnchorAction7', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 1.5, 0.0], 'ResetArriveTransformFixed': False})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Npc_NushiShop', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.0, 0.0], 'PosVector': [0.0, 1.5, 3.0], 'CameraCollisionMode': 0, 'PosVectorSetType': 2, 'AtVectorSetType': 2, 'Actor1InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToStarterLinkAnchor({'InstanceName': 'LastPlayerPos', 'ActorName': 'AnchorAction5', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    }

    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'Partial': '', 'ASName': 'Talk', 'IsWaitEnd': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_28', 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'Obj_SubstituteCloth_13', 'IsSuccess': True})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_55', 'EndDialogOption': 3, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_55_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 91})
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_55_02', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

    call ShopCompleteSetting()

    EventSystemActor.EventTransition({'FadeInTypeEventEnd': 2, 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_OT_0024'})
}

void NotFoundCaveMaster() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
      case 0:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk90000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_NotFoundNushi', 'Value': True, 'Index': -1})
        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
      case [1, 2]:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk90001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseCaveMasterMedalDisplay({'IsWaitEnd': True})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void RewardItem_Root() {
    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 13}) {
        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 7}) {
                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
                                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
                                                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                                        if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {

                                                            call RewardItem_Mamono({'Index': 0})

                                                        }
                                                    } else {

                                                        call RewardItem_Mamono({'Index': 1})

                                                    }
                                                } else {

                                                    call RewardItem_Mamono({'Index': 2})

                                                }
                                            } else {

                                                call RewardItem_Mamono({'Index': 3})

                                            }
                                        } else {

                                            call RewardItem_Mamono({'Index': 4})

                                        }
                                    } else {

                                        call RewardItem_Mamono({'Index': 5})

                                    }
                                } else {

                                    call RewardItem_Mamono({'Index': 6})

                                }
                            } else {

                                call RewardItem_Mamono({'Index': 7})

                            }
                        } else {

                            call RewardItem_Mamono({'Index': 8})

                        }
                    } else {

                        call RewardItem_Mamono({'Index': 9})

                    }
                } else {

                    call RewardItem_Mamono({'Index': 10})

                }
            } else {

                call RewardItem_Mamono({'Index': 11})

            }
        } else {

            call RewardItem_Mamono({'Index': 12})

        }
    } else {

        call RewardItem_Mamono({'Index': 13})

    }
}

void TalkAboutReward() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_HeardAboutReward', 'Value': True, 'Index': 'Index'})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
              case [0, 2]:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk33', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Event6:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {
                  case 1:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_101', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})

                    call Connect_pt2()

                  case 2:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                      case 1:
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_109', 'IsNotOpenIfSkipedMostRecent': False})

                        call Connect_pt1()

                      case 2:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
                          case 1:
                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_00_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                            call Connect_pt1()

                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                              case 1:
                                Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_94', 'ChoiceLabel3': 6, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                call Connect_pt1()

                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
                                  case 1:
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_106', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                    call Connect_pt2()

                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                      case 1:
                                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_96', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                        call Connect_pt1()

                                      case 2:
                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                                          case 1:
                                            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_01_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                            call Connect_pt1()

                                          case 2:
                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 7}) {
                                              case 1:
                                                Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_95', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                call Connect_pt1()

                                              case 2:
                                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                                                  case 1:
                                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_107', 'IsPlayASAllSlot': True, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                    call Connect_pt2()

                                                  case 2:
                                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                                                      case 1:
                                                        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_97', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                        call Connect_pt1()

                                                      case 2:
                                                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                                                          case 1:
                                                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_108', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                            call Connect_pt2()

                                                          case 2:
                                                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
                                                              case 1:
                                                                Npc_EventStarter.EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 9, 'ChoiceLabel2': 10, 'ChoiceLabel3': 6, 'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_98', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                                call Connect_pt1()

                                                              case 2:
                                                                if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
                                                                    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_91_02_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})

                                                                    call Connect_pt1()

                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              case 1:
                Event315:
                Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk32', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event6
            }
          case 1:
            goto Event315
        }
      case 1:
        goto Event315
    }
}

void Connect_pt2() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk35', 'ChoiceNumber': 2, 'ChoiceLabel2': 2, 'ChoiceLabel1': 5, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void Connect_pt1() {
    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk34', 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 2, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
}

void ItemDisappeared() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {
      case [0, 2]:
        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
          case [0, 2]:
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
              case [0, 2]:
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                  case [0, 2]:
                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                      case [0, 2]:
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                          case [0, 2]:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
                              case [0, 2]:
                                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NushiShop_Item_Disappear', 'Value': True})
                              case 1:
                                Mannequin_017_Head.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                            }
                          case 1:
                            Mannequin_031_Head.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                        }
                      case 1:
                        Mannequin_032_Head.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                    }
                  case 1:
                    Mannequin_017_Lower.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
                }
              case 1:
                Mannequin_030_Head.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
            }
          case 1:
            Mannequin_017_Upper.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        }
      case 1:
        Mannequin_029_Head.EventPlayAS({'ASName': 'VisibleOff', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }
}

void ShopCompleteSetting() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel01', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_01'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel03', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_03'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel04', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_04'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel05', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_05'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel09', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_09'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel11', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_11'})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'NushiShop_Travel13', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NushiShop_TravelComplete_13'})
    }
}

void PouchCheck() {
    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 12}) {
        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 11}) {
            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 10}) {
                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 9}) {
                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 8}) {
                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 7}) {
                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 6}) {
                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 5}) {
                                    if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 4}) {
                                        if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 3}) {
                                            if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 2}) {
                                                if !GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 1}) {
                                                    if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'NushiShop_ItemStatus', 'Index': -1, 'Value': 0}) {

                                                        call PouchCheck_2({'PouchMedalNum': 2})

                                                    }
                                                } else {

                                                    call PouchCheck_2({'PouchMedalNum': 2})

                                                }
                                            } else {

                                                call PouchCheck_2({'PouchMedalNum': 3})

                                            }
                                        } else {

                                            call PouchCheck_2({'PouchMedalNum': 3})

                                        }
                                    } else {

                                        call PouchCheck_2({'PouchMedalNum': 3})

                                    }
                                } else {

                                    call PouchCheck_2({'PouchMedalNum': 3})

                                }
                            } else {

                                call PouchCheck_2({'PouchMedalNum': 4})

                            }
                        } else {

                            call PouchCheck_2({'PouchMedalNum': 4})

                        }
                    } else {

                        call PouchCheck_2({'PouchMedalNum': 4})

                    }
                } else {

                    call PouchCheck_2({'PouchMedalNum': 4})

                }
            } else {

                call PouchCheck_2({'PouchMedalNum': 4})

            }
        } else {

            call PouchCheck_2({'PouchMedalNum': 4})

        }
    } else {

        call PouchCheck_2({'PouchMedalNum': 5})

    }
}

void PouchCheck_2() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'CaveMasterMedal', 'Num': 'PouchMedalNum', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_22', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void TimeCheck() {
    if EventWorldManagerController.EventQueryTimeDivision() in [0, 1, 2, 3, 4, 5] {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_NushiShop:Talk_13', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 0, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_ElucidatedPower', 'Value': True, 'Index': -1})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NushiShop_ElucidatedPower', 'Value': False, 'Index': -1})

        fork {
            GameSystemActor.EventEventFadeIn({'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0})
        } {
            Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Mamono_Shop_Disappear', 'SLinkKey': ''})
            GameSystemActor[ForWait01].EventWait({'IsWaitEnd': True, 'Frames': 45})
            Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkSurprise', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}
