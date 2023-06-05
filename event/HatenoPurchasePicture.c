-------- EventFlow: HatenoPurchasePicture --------

Actor: Npc_AncientDoctor_Hateno[Hateno]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerSetRecentTalkFlag', 'EventTriggerSetVolatileGeneralPurposeFlag']
queries: ['EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventStartPictureBookBuyDirection', 'EventWaitFinishPictureBookBuyDirection', 'EventWaitStableNumDisplay', 'EventCloseMinusMenu', 'EventTriggerCalcPictureBookCompleteRate', 'EventWait', 'EventCloseRupeeDisplay', 'EventCloseMessageDialog', 'EventEventFadeOut', 'EventEventFadeIn']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventOpenShopSellUI', 'EventWaitShopUIInput', 'EventSetShopMessageDialogNumberChoice', 'EventCalcShopTradeNumAndPrice_NumberChoice', 'EventCalcShopTradeNumAndPrice_All', 'EventBuyFromShopForPictureBookPhoto', 'EventCloseShopUI', 'EventTriggerHideShopMenuTotalNum']
queries: ['EventQueryIsShopUIInput', 'EventQueryIsShopUIOnDecideAmount', 'EventQueryIsShopUIOnDecideGoods', 'EventQueryIsShopSoldOut']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: MinusMenuSystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Obj_HatenoLaboBook_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveCameraToSavePoint', 'EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

void Ready_Obj_HatenoLaboBook_A_01_Talk() {

    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientDoctor_Hateno", sub_name="Hateno")})

    Npc_AncientDoctor_Hateno[Hateno].EventTriggerParticipateEvent()
    Npc_AncientDoctor_Hateno[Hateno].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_1000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()
    Player.EventPlayerTurnAndLook({'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'TurnFaceControlType': 1, 'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 15, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'Actor1InstanceName': 'Hateno', 'PosVector': [0.0, 1.2000000476837158, 1.7100000381469727], 'AtVector': [0.0, 0.8500000238418579, 0.20000000298023224], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_1001', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_1002', 'ASName': 'TalkWait', 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_1003', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_AncientDoctor_Hateno[Hateno].EventTriggerSetRecentTalkFlag({'value': True, 'IsReflectWhenSleep': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Purchase', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0})

    call CmpPicture()

}

void Purchase_Obj_HatenoLaboBook_A_01_Talk() {

    call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 4, 'Self': ActorIdentifier(name="Npc_AncientDoctor_Hateno", sub_name="Hateno")})

    Obj_HatenoLaboBook_A_01.EventTriggerParticipateEvent()
    Npc_AncientDoctor_Hateno[Hateno].EventTriggerParticipateEvent()
    Npc_AncientDoctor_Hateno[Hateno].EventTriggerSetVolatileGeneralPurposeFlag({'Value': True})
    Npc_AncientDoctor_Hateno[Hateno].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    EventCamera.EventTriggerCameraSavePoint()
    Player.EventPlayerTurnAndLook({'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'TurnFaceControlType': 1, 'Target': 3, 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 15, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_AncientDoctor_Hateno', 'Actor1InstanceName': 'Hateno', 'PosVector': [0.0, 1.2000000476837158, 1.7100000381469727], 'AtVector': [0.0, 0.8500000238418579, 0.20000000298023224], 'TargetFovy': 55.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionMode': 0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    if !Npc_AncientDoctor_Hateno[Hateno].EventQueryIsOnRecentTalkFlag() {

        call CmpPicture_AfterPurchase()

        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2004', 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event63:

        call CmpPicture()

        Event7:
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:

            call PurchasePicture()

            Event10:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2002', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
          case 1:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2017', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceLabel1': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnTalkSelect()

          case 2:
            Event9:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2003', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
    } else {

        call Greeting()


        call CmpPicture_AfterPurchase()

        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2000', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 3, 'ChoiceLabel1': 1, 'ChoiceLabel2': 5, 'ChoiceLabel3': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event63
    }
}

void Greeting() {
    switch EventWorldManagerController.EventQueryTimeDivision() {
      case [0, 1]:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_22', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [2, 3]:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_23', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [4, 5]:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_24', 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
      case [6, 7]:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void PurchasePicture() {
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Event55:
    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2005', 'IsWaitEnd': False, 'NotPlayLipSyncAnim': False, 'EndDialogOption': 2, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventOpenShopSellUI({'IsWaitEnd': True})
    Npc_EventStarter.EventWaitShopUIInput({'IsWaitEnd': True})
    if !Npc_EventStarter.EventQueryIsShopUIInput() {
        switch Npc_EventStarter.EventQueryIsShopUIOnDecideGoods() {
          case 0:
            Npc_EventStarter.EventSetShopMessageDialogNumberChoice({'IsWaitEnd': True, 'MaxSelectBtnIndex': 1})
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 3, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 1, 'ChoiceLabel2': 3, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2006', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'ChoiceLabel3': 4, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_NumberChoice({'IsWaitEnd': True})
                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2007', 'ChoiceLabel1': 6, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event38:
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HatenoPurchasePicture_HaveBought', 'Index': -1, 'Value': True})
                        Npc_EventStarter.EventBuyFromShopForPictureBookPhoto({'IsWaitEnd': True})
                        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceLabel4': 0, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2011', 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsCloseDialog': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
                        GameSystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
                        GameSystemActor.EventStartPictureBookBuyDirection({'IsWaitEnd': True})
                        GameSystemActor.EventWaitFinishPictureBookBuyDirection({'IsWaitEnd': True})
                        MinusMenuSystemTextNPC.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2010', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                        GameSystemActor.EventCloseMinusMenu({'IsWaitEnd': True})
                        GameSystemActor.EventTriggerCalcPictureBookCompleteRate()
                        GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Shop_TradeItemNum', 'Index': -1, 'Value': 0})
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                        switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PictureBook_CompleteRate', 'Value': 100, 'Index': -1}) {
                          case 0:
                            if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
                                GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
                                Npc_EventStarter.EventCloseShopUI({'IsWaitEnd': True})
                                Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2018', 'IsNotOpenIfSkipedMostRecent': False})
                                ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
                                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
                            } else {

                                call ReturnPurchaseFlow()

                            }
                          case [1, 2]:

                            call TalkEndCmp()

                        }
                    } else {
                        Npc_EventStarter.EventTriggerHideShopMenuTotalNum()

                        call ReturnPurchaseFlow()

                    }
                } else {
                    Event43:
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsWaitEnd': True, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2008', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call ReturnPurchaseFlow()

                }
              case 1:
                Npc_EventStarter.EventCalcShopTradeNumAndPrice_All({'IsWaitEnd': True})
                if !Npc_EventStarter.EventQueryIsShopUIOnDecideAmount() {
                    Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'ChoiceLabel4': 0, 'EndDialogOption': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'ChoiceLabel3': 0, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 4, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2009', 'ChoiceLabel1': 6, 'IsWaitEnd': True, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event38
                } else {
                    goto Event43
                }
              case 2:

                call ReturnPurchaseFlow()

            }
          case 1:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2012', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnPurchaseFlow()

          case 2:
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'ChoiceDefaultNo': 0, 'ChoiceLabel4': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'EndDialogOption': 2, 'ASName': '', 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2008', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})

            call ReturnPurchaseFlow()

        }
    } else {

        call NotPurchased()

    }
}

void ReturnPurchaseFlow() {
    goto Event55
}

void ReturnTalkSelect() {
    goto Event7
}

void CmpPicture() {
    GameSystemActor.EventTriggerCalcPictureBookCompleteRate()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PictureBook_CompleteRate', 'Value': 100, 'Index': -1}) {
      case 0:
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2018', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
      case [1, 2]:
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        Event75:
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Talk', 'IsWaitEnd': False, 'ClothWarpMode': 0})
        Player.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'TalkPadShowOn', 'ClothWarpMode': 0})
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2016', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Obj_SubstituteCloth_16'})

        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2017', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventTriggerProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Complete', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_AncientDoctor_Hateno_TalkBranch4'})
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    }
}

void CmpPicture_AfterPurchase() {
    GameSystemActor.EventTriggerCalcPictureBookCompleteRate()
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'PictureBook_CompleteRate', 'Value': 100, 'Index': -1}) {
      case 0:
        if !Npc_EventStarter.EventQueryIsShopSoldOut({'ExcludeItemNotForSale': True}) {
            Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/HatenoPurchasePicture:Talk_2018', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'HatenoPurchasePicture', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        }
      case [1, 2]:
        Event69:
        Npc_AncientDoctor_Hateno[Hateno].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Npc_AncientDoctor_Hateno:Talk_2015', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Player.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [3780.510009765625, 357.07000732421875, 2122.6298828125], 'YAngle': 0.0, 'UseDemoWait': True})
        Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_AncientDoctor_Hateno', 'InstanceName': 'Hateno', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        Npc_AncientDoctor_Hateno[Hateno].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        goto Event75
    }
}

void NotPurchased() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HatenoPurchasePicture_HaveBought', 'Index': -1}) {

        call AfterBoughtClear()

    } else {
        goto Event9
    }
}

void TalkEndCmp() {
    GameSystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
    Npc_EventStarter.EventCloseShopUI({'IsWaitEnd': True})
    goto Event69
}

void AfterBoughtClear() {
    goto Event10
}
