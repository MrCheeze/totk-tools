-------- EventFlow: DmF_SY_HorseDecorate --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestChangeHorseTack', 'EventEventFadeIn', 'EventEventFadeOut', 'EventTriggerSaveObjectsOfOwnedHorse', 'EventTriggerRequestAutoSave']
queries: ['EventQueryIsHorseTackEquipped', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventOpenShopMenuUIForHorseCustomize', 'EventCloseShopMenuUIForHorseCustomize', 'EventWaitShopUIInput', 'EventWarpOwnedHorse', 'EventTriggerLookAtObject']
queries: ['EventQueryHorseCustomizeResult']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: OwnedHorse_ForEvent
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWaitState', 'EventHorseEquipHorseTack']
queries: []
params: {'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void HorseRegisterCustomize_HarnessOnly() {

    call HorseDecoStart()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryIsHorseTackEquipped({'HorseTack': 2, 'TackActorName': 'GameRomHorseSaddle_07'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'ChoiceLabel1': 7022, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Harness_Remove()

        }
        Event184:

        call TakeEnd()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register29', 'ChoiceLabel1': 7015, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Set_Harness_TakingHorse()

        }
        goto Event184
    }
}

void HorseRegisterCustomize() {

    call HorseDecoStart()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 1, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register25', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'ExcludeChoice_HorseManeCustom', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HorseInn_isCustumSadle', 'ChoiceExcludeGameData2': 'HorseInn_isCustumReins'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetMane3', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceNumber': 4, 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register26', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'ChoiceLabel4': 7020, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceNumber': 4, 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7018, 'ChoiceLabel1': 7008, 'ChoiceLabel4': 7020, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event11:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Change_Saddle()

        Event60:

        call Return_UmaCustomize_HarnessCheck()

      case 1:

        call Change_Taduna()

        goto Event60
      case 2:

        call Change_Tategami()

        goto Event60
      case 3:

        call TakeEnd()

    }
}

void Return_UmaCustomize_HarnessCheck() {

    call HorseCamera_DecoDefault()

    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'ExcludeChoice_HorseManeCustom', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HorseInn_isCustumSadle', 'ChoiceExcludeGameData2': 'HorseInn_isCustumReins'})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom007', 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel2': 7018, 'ChoiceLabel1': 7008, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event11
}

void HorseTakeCustomize() {

    call HorseDecoStart()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom101', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'ExcludeChoice_HorseManeCustom', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HorseInn_isCustumSadle', 'ChoiceExcludeGameData2': 'HorseInn_isCustumReins'})
    if !GameSystemActor.EventQueryIsHorseTackEquipped({'HorseTack': 2, 'TackActorName': 'GameRomHorseSaddle_07'}) {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 7021, 'ChoiceLabel3': 7010, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk1004', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk1003', 'IsAnonymous': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 7021, 'ChoiceLabel3': 7010, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'IsNotOpenIfSkipedMostRecent': False})
    }
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Change_Saddle()

        Event35:

        call Return_UmaCustomize_HarnessCheck()

      case 1:

        call Change_Taduna()

        goto Event35
      case 2:

        call Change_Tategami()

        goto Event35
      case 3:

        call TakeEnd()

    }
}

void TakeEnd() {
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call Check_HorseCustomised()

}

void CustomEnd() {
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseCustomised', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isCanceledHorseCustom', 'Value': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'isCanceledHorseCustom', 'Value': True})
    }
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    call Check_HorseCustomised()

}

void HorseCustomize() {

    call HorseDecoStart()

    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'ExcludeChoice_HorseManeCustom', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HorseInn_isCustumSadle', 'ChoiceExcludeGameData2': 'HorseInn_isCustumReins'})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HorseInn_GetMane3', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceLabel4': 7, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom001', 'ChoiceNumber': 4, 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceLabel4': 7, 'ChoiceNumber': 4, 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom008', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Event51:
    switch GameSystemActor.EventQueryTalkChoice4() {
      case 0:

        call Change_Saddle()

        Event82:

        call Return_HarnessCheck()

      case 1:

        call Change_Taduna()

        goto Event82
      case 2:

        call Change_Tategami()

        goto Event82
      case 3:

        call CustomEnd()

    }
}

void Return_HarnessCheck() {

    call HorseCamera_DecoDefault()

    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData3': 'ExcludeChoice_HorseManeCustom', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HorseInn_isCustumSadle', 'ChoiceExcludeGameData2': 'HorseInn_isCustumReins'})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsWaitEnd': True, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom007', 'IsAnonymous': False, 'ChoiceLabel3': 7010, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 7008, 'ChoiceLabel2': 7018, 'ChoiceLabel4': 3, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event51
}

void Set_Harness_TakingHorse() {
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1052', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestChangeHorseTack({'ActorName': 'GameRomHorseSaddle_07', 'HorseTack': 2})
    OwnedHorse_ForEvent.EventHorseEquipHorseTack({'HorseTack': 2, 'Actor': 'GameRomHorseSaddle_07', 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1003', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk1005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseCustomised'})
    GameSystemActor.EventTriggerSaveObjectsOfOwnedHorse()
}

void Harness_Remove() {
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1054', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestChangeHorseTack({'HorseTack': 2, 'ActorName': 'GameRomHorseSaddle_00'})
    OwnedHorse_ForEvent.EventHorseEquipHorseTack({'HorseTack': 2, 'Actor': 'GameRomHorseSaddle_00', 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1004', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseCustomised'})
    GameSystemActor.EventTriggerSaveObjectsOfOwnedHorse()
}

void Change_Saddle() {

    call HorseCamera_DecoSaddle()

    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk502', 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenShopMenuUIForHorseCustomize({'IsWaitEnd': True, 'Type': 2})
    Event120:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    switch Npc_EventStarter.EventQueryHorseCustomizeResult() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 7, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk504', 'ChoiceLabel1': 12, 'ChoiceNumber': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Changed_to_reflect()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk506', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event122:

            call ReturnInput()

        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk505', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event122
      case 2:
        Npc_EventStarter.EventCloseShopMenuUIForHorseCustomize({'IsWaitEnd': True})
    }
}

void Change_Tategami() {

    call HorseCamera_DecoMane()

    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk507', 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenShopMenuUIForHorseCustomize({'IsWaitEnd': True, 'Type': 0})
    Event132:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    switch Npc_EventStarter.EventQueryHorseCustomizeResult() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 12, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk504', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Changed_to_reflect()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk510', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event133:

            call Return_Input_Tategami()

        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk509', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event133
      case 2:
        Npc_EventStarter.EventCloseShopMenuUIForHorseCustomize({'IsWaitEnd': True})
    }
}

void Change_Taduna() {

    call HorseCamera_DecoReins()

    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk511', 'EndDialogOption': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenShopMenuUIForHorseCustomize({'IsWaitEnd': True, 'Type': 1})
    Event143:
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    switch Npc_EventStarter.EventQueryHorseCustomizeResult() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceLabel2': 7, 'ChoiceLabel1': 12, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk504', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Changed_to_reflect()

        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk515', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event144:

            call Return_Input_Taduna()

        }
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk514', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event144
      case 2:
        Npc_EventStarter.EventCloseShopMenuUIForHorseCustomize({'IsWaitEnd': True})
    }
}

void Changed_to_reflect() {
    Npc_EventStarter.EventCloseShopMenuUIForHorseCustomize({'IsWaitEnd': True})

    call HorseCamera_DecoDefault()

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk503', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'HorseCustomised'})
}

void ReturnInput() {
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk502', 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event120
}

void Return_Input_Tategami() {
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk507', 'EndDialogOption': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event132
}

void Return_Input_Taduna() {
    Npc_EventStarter.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel4': 5, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': -3, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Talk511', 'IsCloseDialog': False, 'EndDialogOption': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event143
}

void HorseDecoStart() {
    GameSystemActor.EventTriggerRequestAutoSave()
    OwnedHorse_ForEvent.EventTriggerParticipateEvent()

    call Common.InitPlayStateTrigger({'IsUnequip': True, 'IsRidableGetOff': True})

    OwnedHorse_ForEvent.EventWaitState({'IsAngryEnable': False, 'IsEatEnable': False, 'IsLoveEnable': False, 'IsNoMorph': False, 'HasToCue': True, 'IsWaitEnd': False})
    Player.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'InstanceName': 'HorseDecolate_Link', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True})
    Npc_EventStarter.EventWarpOwnedHorse({'InstanceName': ''})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
    EventCamera.EventTriggerCameraSavePoint()

    call HorseCamera_DecoDefault()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void HorseCamera_DecoSaddle() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [4.389999866485596, 1.2799999713897705, 0.6399999856948853], 'AtVector': [-0.3100000023841858, 1.1399999856948853, -1.090000033378601], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'OwnedHorse_ForEvent', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void HorseCamera_DecoReins() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [3.5199999809265137, 2.0399999618530273, 1.409999966621399], 'AtVector': [-1.2899999618530273, 1.7100000381469727, 0.009999999776482582], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'OwnedHorse_ForEvent', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void HorseCamera_DecoMane() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [3.5199999809265137, 2.0399999618530273, 1.409999966621399], 'AtVector': [-1.2899999618530273, 1.7100000381469727, 0.009999999776482582], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0, 'CameraCollisionMode': 0, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'OwnedHorse_ForEvent', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void HorseCamera_DecoEnd() {
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
}

void HorseCamera_DecoDefault() {
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [4.46999979019165, 1.2999999523162842, -0.23000000417232513], 'AtVector': [-0.5199999809265137, 1.2999999523162842, 0.14000000059604645], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'OwnedHorse_ForEvent', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Check_HorseCustomised() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HorseCustomised'}) {

        call HorseCamera_DecoDefault()

        Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1005', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call HorseCamera_DecoEnd()

    } else {

        call HorseCamera_DecoEnd()

    }
}

void HorseCustomize_HarnessOnly() {

    call HorseDecoStart()

    if !GameSystemActor.EventQueryIsHorseTackEquipped({'HorseTack': 2, 'TackActorName': 'GameRomHorseSaddle_07'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'ChoiceLabel1': 7022, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Harness_Remove()

        }
        Event183:

        call CustomEnd()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register29', 'ChoiceLabel1': 7015, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Set_Harness_TakingHorse()

        }
        goto Event183
    }
}

void HorseCustomisedTalk() {
    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Take1006', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'HorseCustomised', 'Value': False})
}

void HorseTakeCustomize_HarnessOnly() {

    call HorseDecoStart()

    Npc_EventStarter.EventTalk({'EndDialogOption': 0, 'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Custom101', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryIsHorseTackEquipped({'HorseTack': 2, 'TackActorName': 'GameRomHorseSaddle_07'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'ChoiceLabel1': 7022, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Harness_Remove()

        }
        Event65:

        call TakeEnd()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 7020, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_HyruleWestHatago005:Register29', 'ChoiceLabel1': 7015, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !GameSystemActor.EventQueryTalkChoice2() {

            call Set_Harness_TakingHorse()

        }
        goto Event65
    }
}
