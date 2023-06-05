-------- EventFlow: Npc_Goron018 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventOpenRupeeDisplay', 'EventCloseRupeeDisplay', 'EventTriggerIncreaseRupee', 'EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice2', 'EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent']
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: []
queries: ['EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Index': -1}) {

        call FirstTime_AfterSellAmbers()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Value': True, 'Index': -1})
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Event128:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event84:

            call Sell()

        } else {

            call Greeting()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_20', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event128
        }
    }
}

void Step_SageOfFire_VillagersSchedule_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 2})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterSageOfFire', 'Index': -1}) {

        call FirstTime_AfterSellAmbers()

    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'Npc_Goron018_FirstTalk_AfterSageOfFire'})

        call Greeting()

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Goron_JewelerEventDone'}) {
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron018_FirstTalk_AfterSellAmbers'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_Goron018_FirstTalk_AfterSellAmbers', 'Index': -1})
            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_24', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Value': True, 'Index': -1})
            }
            Event100:

            call Sell()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_02', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Value': True, 'Index': -1})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'AmberCollector', 'StepName': 'SellAmbers', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 150})
            goto Event100
        }
    }
}

void Sell_Amber() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_F', 'Num': 10, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Actor': 'Item_Ore_F', 'Num': -10, 'IsEquipDIrect': False, 'AttachmentActor': '', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
        GameSystemActor.EventTriggerIncreaseRupee({'Value': 200})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_28', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_31', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call ClothCheck()

        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AmberCollector_IsCompleted_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'AmberCollector', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerRequestAutoSave()
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_05', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

        call ClothCheck()

    }
}

void Sell() {
    GameSystemActor.EventOpenRupeeDisplay({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AmberCollector_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade01', 'Index': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade02', 'Index': -1}) {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade03', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade04', 'Index': -1}) {
                        switch GameDataActor.EventQueryIsGameDataInt({'Value': 0, 'GameDataName': 'Npc_Goron018_Price', 'Index': -1}) {
                          case [0, 1]:
                            switch GameSystemActor.EventQueryRandomChoice4() {
                              case 0:
                                Event52:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 4, 'Index': -1})
                                Event51:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_15', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 10, 'Actor': 'Item_Ore_A', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -10, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_A', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                                        GameSystemActor.EventTriggerIncreaseRupee({'Value': 5500})
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Index': -1, 'Value': 0})
                                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade04', 'Index': -1}) {
                                            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_Trade04', 'Value': True, 'Index': -1})
                                        }
                                        Event8:
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_06', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                        GameSystemActor.EventTriggerRequestAutoSave()

                                        call ClothCheck()

                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_19', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                        call ClothCheck()

                                    }
                                } else {
                                    Event91:
                                    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_23', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                    Event142:

                                    call ClothCheck()

                                }
                              case 1:
                                Event47:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 3, 'Index': -1})
                                Event44:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_14', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 10, 'Actor': 'Item_Ore_C', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -10, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_C', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                                        GameSystemActor.EventTriggerIncreaseRupee({'Value': 1700})
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Index': -1, 'Value': 0})
                                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade03', 'Index': -1}) {
                                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_Goron018_Trade03', 'Index': -1})
                                        }
                                        goto Event8
                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_18', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                        call ClothCheck()

                                    }
                                } else {
                                    goto Event91
                                }
                              case 2:
                                Event46:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 2, 'Index': -1})
                                Event43:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_13', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 10, 'Actor': 'Item_Ore_B', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -10, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_B', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                                        GameSystemActor.EventTriggerIncreaseRupee({'Value': 1300})
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Index': -1, 'Value': 0})
                                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade02', 'Index': -1}) {
                                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_Goron018_Trade02', 'Index': -1})
                                        }
                                        goto Event8
                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_17', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                        call ClothCheck()

                                    }
                                } else {
                                    goto Event91
                                }
                              case 3:
                                Event45:
                                GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 1, 'Index': -1})
                                Event22:
                                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_12', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                if !GameSystemActor.EventQueryTalkChoice2() {
                                    if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 10, 'Actor': 'Item_Ore_D', 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
                                        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': -10, 'IsEquipDIrect': False, 'AttachmentActor': '', 'Actor': 'Item_Ore_D', 'EffectType': 0, 'EffectValue': -1, 'IsSetOnlyEquipIndex': False})
                                        GameSystemActor.EventTriggerIncreaseRupee({'Value': 1000})
                                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Index': -1, 'Value': 0})
                                        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Trade01', 'Index': -1}) {
                                            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_Goron018_Trade01', 'Index': -1})
                                        }
                                        goto Event8
                                    } else {
                                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_16', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                                        GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})

                                        call ClothCheck()

                                    }
                                } else {
                                    goto Event91
                                }
                            }
                          case 2:
                            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 1, 'Index': -1}) {
                              case 1:
                                goto Event22
                              case 2:
                                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 2, 'Index': -1}) {
                                  case 1:
                                    goto Event43
                                  case 2:
                                    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Npc_Goron018_Price', 'Value': 3, 'Index': -1}) {
                                      case 1:
                                        goto Event44
                                      case 2:
                                        goto Event51
                                    }
                                }
                            }
                        }
                    } else {
                        goto Event52
                    }
                } else {
                    goto Event47
                }
            } else {
                goto Event46
            }
        } else {
            goto Event45
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_00', 'ChoiceNumber': 2, 'ChoiceLabel2': 1, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Sell_Amber()

        } else {
            GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_03', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event142
        }
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Greeting1', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_09', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_25', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_Greeting1', 'Index': -1, 'Value': True})
        }
      case [2, 3, 4]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Greeting2', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_10', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_26', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_Greeting2', 'Index': -1, 'Value': True})
        }
      case [5, 6, 7]:
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_Greeting3', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_11', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Goron018_Greeting3', 'Index': -1, 'Value': True})
        }
    }
}

void Near_Challenge() {
    if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Ore_F', 'Num': 10, 'IsExcludeAttached': False, 'IsExcludeAttachment': True}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Event133:
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_02', 'IsChallenge': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Index': -1}) {
            goto Event133
        } else {
            Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_00', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
        Event134:
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_02', 'IsChallenge': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Goron018_FirstTalk_AfterEvent', 'Index': -1}) {
        goto Event134
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_00', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Near() {
    goto Event134
}

void Near_Challenge_Ready() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_02', 'IsChallenge': True})
}

void FirstTime_AfterSellAmbers() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AmberCollector_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron018_FirstTalk_AfterSellAmbers'}) {
            Event120:

            call No_FirstTime_AfterSellAmbers()

        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'Npc_Goron018_FirstTalk_AfterSellAmbers', 'Index': -1})
            if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call Greeting()

            }
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_33', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event84
        }
    } else {
        goto Event120
    }
}

void No_FirstTime_AfterSellAmbers() {
    if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

        call Greeting()

    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_32', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event84
}

void Step_SageOfFire_VillagersSchedule_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Goron018:Near_02', 'IsChallenge': False})
}

void ClothCheck() {
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_37', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if Player.EventQueryCheckPlayerState({'State': 0}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Goron018:Talk_36', 'IsNotOpenIfSkipedMostRecent': False})
    }
}
