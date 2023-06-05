-------- EventFlow: Npc_Zonau_Golem_Servant_Minus0012 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToNearAnchor', 'EventPlayerUnequip', 'EventPlayerClimbOff']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS', 'EventTriggerSetRecentTalkFlag', 'EventTriggerChangeChoiceNumMsgFor3DShop', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShopFor3DShop', 'EventTriggerSetAttentionForbidSaleFor3DShop', 'EventInitFor3DShop', 'EventTriggerCalcShopTradeItemPaymentMaterialTotalNum', 'EventTriggerBalloonMessage', 'EventTriggerEmitXLink', 'EventNPCTurnToObjectGreeting', 'EventTriggerSetHaveTalked', 'EventTriggerShowShopInfoFor3DShop', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: ['EventQueryIsShopSoldOutFor3DShop', 'EventQueryIsOnRecentTalkFlag', 'EventQueryIsShopUIOnDecideAmount', 'EventQueryCheckPouchVacancyForBuying', 'EventQueryCheckPlacedItemNumber']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventEventFadeOut', 'EventEventFadeIn', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerRequestAutoSave']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataString64']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundReleaseDucking', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Talk() {

    call Talk_Common({'CameraPosBaseInstance': 'PosBase0012'})

}

void Activate_Common() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'CommandLife': 2, 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)(Env除外)'})
    Npc_EventStarter.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})

    call Common.InitPlayState({'IsUnequip': True, 'IsRidableGetOff': True})

    Player.EventPlayerUnequip({'IsWaitEnd': True})

    fork {
        EventEffectEmitter.EventEffectAddELinkHiddenSetting({'KeyName': 'HandLamp', 'ActorName': 'Npc_Zonau_Golem_Servant'})
    } {
        Npc_EventStarter.EventTriggerEmitXLink({'SLinkKey': 'Dm_Zonau_Authentication', 'ELinkKey': 'Npc_Zonau_Golem_Authentication'})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'PosVector': [-1.75, 1.4800000190734863, -2.6700000762939453], 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } {
        Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_Auth', 'UseDemoWait': True})
    }

    Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ASCommand': 'OpenCDungeonGate', 'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ForceFadeInFrame': -1.0, 'ASName': 'Mat_ChestAndHead_In'})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'SleepNear', 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'IsAllSlot': False, 'Partial': 'Material', 'ForceFadeInFrame': -1.0, 'ASName': 'Mat_AllON'})
        Npc_EventStarter.EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'ASName': 'WakeUp', 'ForceFadeInFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True})
        Npc_EventStarter.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_EventStarter.EventTriggerSetHaveTalked({'value': True, 'IsReflectWhenSleep': False})
    Npc_EventStarter.EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    Npc_EventStarter.EventTriggerAIScheduleSetForceCancelEventContinueArrivalAS({'Value': True})
    Npc_EventStarter.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'DmF:Bgmミュート(フェード普通)', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False, 'DuckingName2': 'DmF:WorldSEミュート(フェード普通)(Env除外)'})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0001', 'IsCloseDialog': True, 'ASName': 'Wait', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1016, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0003', 'IsNotOpenIfSkipedMostRecent': False})

        call EnableShop({'IsActivated': 'IsActivated', 'PlayerPos_InShop': 'PlayerPos_InShop'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0002', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1001, 'IsNotOpenIfSkipedMostRecent': False})

        call TeachMe_Smelt({'CameraPosBaseInstance': 'CameraPosBaseInstance', 'CameraPosBaseActor': 'DesignateMatrixActor'})

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0004', 'IsNotOpenIfSkipedMostRecent': False})

        call EnableShop({'IsActivated': 'IsActivated', 'PlayerPos_InShop': 'PlayerPos_InShop'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'IsCloseDialog': True, 'ASName': 'Wait', 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0002', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 1000, 'ChoiceLabel3': 1001, 'ChoiceLabel2': 1002, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})

        call TeachMe({'CameraPosBaseInstance': 'CameraPosBaseInstance', 'CameraPosBaseActor': 'DesignateMatrixActor'})

    }
}

void Buy() {
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Npc_EventStarter.EventNPCTurnToObjectGreeting({'IsWaitEnd': True, 'GreetType': 3, 'TurnType': 3})

    call SmeltShop()

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveSmelted_NpcZonauGolem'}) {
        switch Npc_EventStarter.EventQueryCheckPlacedItemNumber() {
          case [0, 2]:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0060', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'IsNotOpenIfSkipedMostRecent': False})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0070', 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0071', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveSmelted_NpcZonauGolem', 'Value': True, 'Index': -1})
    }
}

void LackRupee() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_54', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event60:
    EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
}

void EndTalk() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_53', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    goto Event60
}

void Bye() {
    if !Npc_EventStarter.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0140', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0141', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void SmeltShop() {
    Npc_EventStarter.EventInitFor3DShop({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerShowShopInfoFor3DShop()
    switch GameDataActor.EventQueryIsGameDataInt({'Value': 1, 'Index': -1, 'GameDataName': 'Shop_PlacedItemStockNum'}) {
      case [0, 2]:
        Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5507, 'ChoiceLabel3': 5503, 'ChoiceNumber': 3, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_31', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Value': 1, 'Index': -1}) {
                  case [0, 2]:
                    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_TradeItemPaymentMaterial', 'Value': 'Item_Ore_L', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_52', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_52a', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    Event43:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Event61:
                        if !Npc_EventStarter.EventQueryCheckPouchVacancyForBuying() {
                            Npc_EventStarter.EventBuyFromShopFor3DShop({'IsWaitEnd': True})
                            Npc_EventStarter.EventTriggerSetAttentionForbidSaleFor3DShop()
                            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        } else {
                            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_55', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                            goto Event60
                        }
                    } else {

                        call EndTalk()

                    }
                  case 1:
                    if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_TradeItemPaymentMaterial', 'Value': 'Item_Ore_L', 'Index': -1}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_56', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_56a', 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    goto Event43
                }
            } else {
                Event62:

                call LackRupee()

            }
          case 1:
            Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_TradeItemPaymentMaterial', 'Value': 'Item_Ore_L', 'Index': -1}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_34', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5502, 'ChoiceLabel2': 5503, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_34a', 'IsNotOpenIfSkipedMostRecent': False})
                }
                goto Event43
            } else {
                goto Event62
            }
          case 2:

            call EndTalk()

        }
      case 1:
        Npc_EventStarter.EventTriggerChangeChoiceNumMsgFor3DShop()
        Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_EventStarter.EventTriggerCalcShopTradeItemPaymentMaterialTotalNum()
        EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'Shop_TradeItemPaymentMaterial', 'Value': 'Item_Ore_L', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_50', 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel1': 5500, 'ChoiceLabel2': 5501, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:Com_Talk_50a', 'IsNotOpenIfSkipedMostRecent': False})
        }
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                goto Event61
            } else {

                call LackRupee()

            }
        } else {

            call EndTalk()

        }
    }
}

void TeachMe() {
    Event77:
    switch GameSystemActor.EventQueryTalkChoice3() {
      case 0:
        Event78:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0080', 'ChoiceLabel4': 1015, 'ChoiceLabel1': 1013, 'ChoiceLabel2': 1012, 'ChoiceLabel3': 1015, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call Explain_C({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance'})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 1015, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0132', 'ChoiceLabel3': 1015, 'ChoiceLabel2': 1015, 'ChoiceLabel1': 1012, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Explain_D({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance'})

            }
            Event116:

            call Bye()

          case 1:

            call Explain_D({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance'})

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 1015, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0132', 'ChoiceLabel3': 1015, 'ChoiceLabel2': 1015, 'ChoiceLabel1': 1013, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {

                call Explain_C({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance'})

            }
            goto Event116
          case 2:

            call Bye()

        }
      case 1:

        call Explain_A({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel4': 1015, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0132', 'ChoiceLabel3': 1015, 'ChoiceLabel1': 1000, 'ChoiceLabel2': 1015, 'ChoiceNumber': 2, 'IsNotOpenIfSkipedMostRecent': False})
        Event123:
        if !GameSystemActor.EventQueryTalkChoice2() {
            goto Event78
        } else {

            call Bye()

        }
      case 2:

        call Bye()

    }
}

void Activate() {

    call Activate_Common({'IsActivated': 'IsActivated_Minus0012_NPCZonauGolem', 'Golem': 'Npc_Zonau_Golem_Servant_Minus0012', 'PlayerPos_Auth': 'PlayerPos_AuthShopGolem12', 'PlayerPos_InShop': 'PlayerPos_ShopGolem12', 'CameraPosBaseInstance': 'PosBase0012'})

}

void Explain_A() {

    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0090', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call ShopItemCamera({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance', 'Pos': [3.859999895095825, 2.4800000190734863, 13.630000114440918], 'At': [6.809999942779541, 1.840000033378601, 10.050000190734863]})

    }


    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0091', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call OnExplainEnd_CameraRollback()

    }

}

void Explain_C() {

    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0120', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call ShopItemCamera({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance', 'Pos': [-4.809999942779541, 2.9100000858306885, 14.420000076293945], 'At': [-9.369999885559082, 2.009999990463257, 13.770000457763672]})

    }

    Event139:
    EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 1, 'MoveFrame': 0, 'EnableCameraAlpha': False})
}

void Explain_D() {

    fork {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 1010, 'ChoiceLabel2': 1011, 'ChoiceLabel3': 1012, 'ChoiceLabel4': 1013, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0110', 'IsNotOpenIfSkipedMostRecent': False})
    } {

        call ShopItemCamera({'CameraPosBaseActor': 'CameraPosBaseActor', 'CameraPosBaseInstance': 'CameraPosBaseInstance', 'Pos': [-1.9800000190734863, 2.940000057220459, 15.010000228881836], 'At': [-3.740000009536743, 2.009999990463257, 10.75]})

    }


    call OnExplainEnd_CameraRollback()

}

void EnableShop() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'IsActivated'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enable_SmeltGolemDig', 'Value': False})
    Player.EventPlayerWarpToNearAnchor({'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'PlayerPos_InShop', 'UseDemoWait': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'Actor1ActorName': 'Player', 'AtVector': [-1.2799999713897705, 1.5099999904632568, -1.7899999618530273], 'TargetFovy': 60.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'CameraCollisionMode': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2.0, 1.4800000190734863, -2.6700000762939453], 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    GameSystemActor.EventTriggerRequestAutoSave()
}

void ShopItemCamera() {
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'PosVector': 'Pos', 'AtVector': 'At', 'Actor1ActorName': 'CameraPosBaseActor', 'Actor1InstanceName': 'CameraPosBaseInstance', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 25, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void OnExplainEnd_CameraRollback() {
    goto Event139
}

void Talk_Common() {

    call Talk_Common_Impl({'CameraPosBaseInstance': 'CameraPosBaseInstance', 'CameraPosBaseActor': 'DesignateMatrixActor'})

}

void Owner() {

    call Common.AirStartUP_Player()

    if Player.EventQueryCheckPlayerState({'State': 6}) {
        Player.EventPlayerClimbOff({'IsWaitEnd': True})
    }

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0150', 'IsNotOpenIfSkipedMostRecent': False})
    if Npc_EventStarter.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0151', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:near_1000', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void TeachMe_Smelt() {
    goto Event123
}

void Talk_Common_Impl() {

    call InitTalk.InitTalkZonauGolemServant({'Arg_Turn': 4, 'Arg_Greeting': 4, 'Self': ActorIdentifier(name="Npc_EventStarter")})

    if !Npc_EventStarter.EventQueryIsShopSoldOutFor3DShop({'IsCheckRebuyItemInPouch': False}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0050', 'ChoiceLabel1': 1000, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel3': 1001, 'ChoiceLabel2': 1002, 'ChoiceNumber': 3, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'ChoiceLabel1': 1000, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0040', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1001, 'IsNotOpenIfSkipedMostRecent': False})
        }
        goto Event77
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1000, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0030', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1001, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'ChoiceLabel1': 1000, 'MessageId': 'EventFlowMsg/Npc_Zonau_Golem_Servant_Minus0012:talk0020', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 1002, 'ChoiceLabel3': 1001, 'IsNotOpenIfSkipedMostRecent': False})
    }
    goto Event77
}
