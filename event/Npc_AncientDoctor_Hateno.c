-------- EventFlow: Npc_AncientDoctor_Hateno --------

Actor: Npc_AncientDoctor_Hateno[Hateno]
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventTriggerParticipateEvent', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag', 'EventAIScheduleWarpToAnchor']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventTriggerBalloonMessage', 'EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShopForPictureBookPhoto', 'EventTriggerSetVolatileGeneralPurposeFlag', 'EventWait', 'EventCloseShopUI', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag', 'EventQueryAIScheduleCheckActorAction14', 'EventQueryIsShopUIInput', 'EventQueryIsShopUIOnDecideAmount', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryVolatileGeneralPurposeFlagOn', 'EventQueryIsShopSoldOut']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_AncientDoctor_Hateno
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventOpenDemoNicknameUI', 'EventCloseDemoNicknameUI', 'EventStartPictureBookBuyDirection', 'EventWaitFinishPictureBookBuyDirection', 'EventWaitStableNumDisplay', 'EventCloseMinusMenu', 'EventTriggerCalcPictureBookCompleteRate', 'EventCloseRupeeDisplay', 'EventCloseMessageDialog', 'EventEventFadeOut', 'EventEventFadeIn']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice4', 'EventQueryTalkChoice3', 'EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: MinusMenuSystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventWait', 'EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryRidableIsRidden']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {
    EventSystemActor.EventTransition({'EventName': 'Npc_AncientDoctor_Hateno_BeforeMeetPurah', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
}

void Greeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_22', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_23', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5]:
        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_24', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_AncientDoctor_Hateno.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Near() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Near_03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Near_02', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': True})
    }
}

void GOToTheCastleOfHyrule_IsAfter_MeetPurah_Exp_Talk() {
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Npc_AncientDoctor_Hateno_AfterMeetPurah'})
}

void PurchaseTalk() {
    Npc_AncientDoctor_Hateno[Hateno].EventTriggerParticipateEvent()

    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientDoctor_Hateno", sub_name="Hateno")})

    Npc_AncientDoctor_Hateno[Hateno].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventTriggerCameraSavePoint()
    Player.EventPlayerTurnAndLook({'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'TurnFaceControlType': 1, 'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 15, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'Actor1InstanceName': 'Hateno', 'PosVector': [0.0, 1.2000000476837158, 1.7100000381469727], 'AtVector': [0.0, 0.8500000238418579, 0.20000000298023224], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch4', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_PicCmp1stTalk', 'Index': -1}) {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2019', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event217:
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2018', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_PicCmp1stTalk', 'Index': -1, 'Value': True})
            Npc_AncientDoctor_Hateno[Hateno].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            Npc_EventStarter.EventWait({'Frames': 1, 'IsWaitEnd': True})
            goto Event217
        }
    } else {

        call CmpPicture_AfterPurchase()

        if !Npc_AncientDoctor_Hateno[Hateno].EventQueryIsOnRecentTalkFlag() {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 5})
            Event37:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:

                call PurchasePictureFlow()

                if !Npc_EventStarter.EventQueryVolatileGeneralPurposeFlagOn() {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event217
                } else {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2002', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
                    goto Event217
                }
              case 1:
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2017', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event37
              case 2:
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2003', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event217
            }
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceLabel1': 1, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2000', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'ChoiceLabel2': 5})
            Npc_AncientDoctor_Hateno[Hateno].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
            goto Event37
        }
    }
}

void CmpPicture_AfterPurchase() {
    GameSystemActor.EventTriggerCalcPictureBookCompleteRate()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PictureBook_CompleteRate', 'Value': 100, 'Index': -1}) {
      case 0:
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2018', 'IsNotOpenIfSkipedMostRecent': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
      case [1, 2]:
        Event74:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call AnchorCheck()

        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        Npc_AncientDoctor_Hateno[Hateno].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_16'})

        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch4'})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void PurchasePictureFlow() {
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2001', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event79:
    Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2005', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
          case 0:
            Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2006', 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2007', 'ChoiceLabel1': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event91:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Npc_EventStarter.EventBuyFromShopForPictureBookPhoto({'IsWaitEnd': True})
                        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2011', 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                        GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                        GameSystemActor.EventStartPictureBookBuyDirection({'IsWaitEnd': True})
                        GameSystemActor.EventWaitFinishPictureBookBuyDirection({'IsWaitEnd': True})
                        MinusMenuSystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                        GameSystemActor.EventTriggerCalcPictureBookCompleteRate()
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Index': -1, 'Value': 0})
                        GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PictureBook_CompleteRate', 'Value': 100, 'Index': -1}) {
                          case 0:
                            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                Npc_EventStarter.EventCloseShopUI({'IsWaitEnd': True})
                                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2018', 'IsNotOpenIfSkipedMostRecent': False})
                                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                            } else {

                                call ReturnPurcaseFlow()

                            }
                          case [1, 2]:

                            call TalkEndCmp()

                        }
                    } else {
                        Npc_EventStarter.EventTriggerHideShopMenuTotalNum()

                        call ReturnPurcaseFlow()

                    }
                } else {
                    Event96:
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call ReturnPurcaseFlow()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2009', 'ChoiceLabel1': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event91
                } else {
                    goto Event96
                }
              case 2:

                call ReturnPurcaseFlow()

            }
          case 1:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2012', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnPurcaseFlow()

          case 2:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnPurcaseFlow()

        }
    }
}

void ReturnPurcaseFlow() {
    goto Event79
}

void Select_TalkWalker() {
    Event122:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch6', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1010', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event54:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1003', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 20, 'ChoiceLabel2': 19, 'ChoiceLabel3': 18, 'ChoiceLabel4': 21, 'ChoiceNumber': 4, 'IsNotOpenIfSkipedMostRecent': False})
        Event59:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:

            call Select_Warp()

          case 1:

            call Select_TalkWalker()

          case 2:

            call Select_SensorPlus()

          case 3:

            call Select_Goodbye()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch6', 'Index': -1, 'Value': True})
        goto Event54
    }
}

void Select_SensorPlus() {
    Event124:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch7', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1010', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event60:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1002', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 19, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1006', 'ChoiceLabel1': 20, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel3': 18, 'ChoiceLabel4': 21, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event59
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch7', 'Index': -1, 'Value': True})
        goto Event60
    }
}

void Select_Warp() {
    Event120:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch5', 'Index': -1}) {
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1011', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1010', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event61:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1004', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1006', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 4, 'ChoiceLabel1': 20, 'ChoiceLabel2': 19, 'ChoiceLabel3': 18, 'ChoiceLabel4': 21, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event59
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch5', 'Index': -1, 'Value': True})
        goto Event61
    }
}

void Select_Goodbye() {
    Event24:
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch4', 'Index': -1}) {
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1009', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1005', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void AfterClearGetSeries_Near() {
    switch Npc_EventStarter.EventQueryAIScheduleCheckActorAction14() {
      case 3:
        Npc_AncientDoctor_Hateno[Hateno].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Near_1002', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 5:
        Npc_AncientDoctor_Hateno[Hateno].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Near_1000', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
      case 7:
        Npc_AncientDoctor_Hateno[Hateno].EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Near_1001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void AfterClearGetSeries_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClearGetSeries'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch1'}) {
                Event18:
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 19, 'ChoiceNumber': 4, 'ChoiceLabel4': 21, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1001', 'ChoiceLabel1': 20, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event64:
                switch GameSystemActor.EventQueryTalkChoice4() {
                  case 0:
                    goto Event120
                  case 1:
                    goto Event122
                  case 2:
                    goto Event124
                  case 3:
                    goto Event24
                }
            } else {
                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 19, 'ChoiceNumber': 4, 'ChoiceLabel4': 21, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1000', 'ChoiceLabel1': 20, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch1'})
                goto Event64
            }
        } else {
            goto Event18
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'ClearGetSeries'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch1'}) {
            Event53:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1007', 'ChoiceLabel2': 19, 'ChoiceLabel4': 21, 'ChoiceNumber': 4, 'ChoiceLabel1': 20, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event64
        } else {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceCancelNo': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 19, 'ChoiceLabel4': 21, 'ChoiceNumber': 4, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_1000', 'ChoiceLabel1': 20, 'ChoiceLabel3': 18, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch1'})
            goto Event64
        }
    } else {
        goto Event53
    }
}

void BeforeClearGetSeries_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSeries_1stTalk', 'Index': -1}) {

        call UpgradeOfPurahPad1.Search_Npc_AncientDoctor_Hateno_Hateno_Talk()

    } else {

        call UpgradeOfPurahPad1.Talk()

    }
}

void BeforeClearGetSeries_Near() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GetSeries_1stTalk', 'Index': -1}) {

        call UpgradeOfPurahPad1.Search_Npc_AncientDoctor_Hateno_Hateno_Near()

    } else {

        call UpgradeOfPurahPad1.Near()

    }
}

void TalkEndCmp() {
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventCloseShopUI({'IsWaitEnd': True})
    goto Event74
}

void Camera_BustUp_End() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            Player.EventWait({'IsWaitEnd': False, 'Frames': 0})
        } {
            if LastRiddenAnimal_ForEvent.EventQueryRidableIsRidden({'IsCheckRiderType': False, 'RiderType': 1}) {
                LastRiddenAnimal_ForEvent.EventWait({'Frames': 0, 'IsWaitEnd': False})
            }
        }

    }

}

void AnchorCheck() {
    switch Npc_AncientDoctor_Hateno[Hateno].EventQueryAIScheduleCheckActorAction14() {
      case 2:
        Npc_AncientDoctor_Hateno[Hateno].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Event225:
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [3771.5400390625, 356.4200134277344, 2123.139892578125], 'UseDemoWait': True})
      case 3:
        goto Event225
      case 4:
        Npc_AncientDoctor_Hateno[Hateno].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Event228:
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [3775.25, 356.4200134277344, 2131.580078125], 'UseDemoWait': True})
      case 5:
        goto Event228
      case 6:
        Npc_AncientDoctor_Hateno[Hateno].EventAIScheduleWarpToAnchor({'AnchorType': 6, 'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
        Event220:
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3780.510009765625, 357.07000732421875, 2122.6298828125], 'YAngle': 0.0, 'UseDemoWait': True})
      case 7:
        goto Event220
    }
}

void Npc_AncientDoctor_Hateno_BeforeMeetPurah() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_26', 'ChoiceNumber': 0, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event62:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_69', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } else {

        call Greeting()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_00', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})

        call GetCamera.Camera_BustUp()

        GameSystemActor.EventOpenDemoNicknameUI({'DemoNicknameType': 0, 'IsWaitEnd': True, 'NameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Name', 'NicknameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Alias'})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})

        call Camera_BustUp_End()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_12', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event62
    }
}

void Npc_AncientDoctor_Hateno_AfterMeetPurah() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk01', 'Index': -1}) {
        if Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

            call Greeting()

        }
        Event7:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_79', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_HatenoVillage005_Talk01', 'Index': -1, 'Value': True})
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_68', 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        Event157:
        if !Npc_EventStarter.EventQueryHaveTalked() {
            Event30:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_80', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_66', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event7
        } else {

            call GetCamera.Camera_BustUp()

            GameSystemActor.EventOpenDemoNicknameUI({'DemoNicknameType': 0, 'IsWaitEnd': True, 'NameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Name', 'NicknameMessageLabel': 'ActorMsg/CharaDirectory:Npc_AncientDoctor_Hateno_Alias'})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
            GameSystemActor.EventCloseDemoNicknameUI({'IsWaitEnd': True})

            call Camera_BustUp_End()

            goto Event30
        }
    } else {

        call Greeting()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'ASName': '', 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 4, 'ChoiceLabel2': 5, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 8, 'IsAnimeDriven': False, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_67', 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': False, 'EndDialogOption': 3})
        goto Event157
    }
}
