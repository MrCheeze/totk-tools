-------- EventFlow: GroundPaintingAir01 --------

Actor: Npc_Wanderer[GP01]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleWarpToAnchor', 'EventFollowToTargetActor', 'EventCancelFollowToTargetActor', 'EventNPCTurnToTarget', 'EventTriggerBalloonMessage', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: ['EventQueryIsFollowToTargetActor', 'EventQueryOwningObjectPlayerInterference', 'EventQueryHaveTalked', 'EventQueryIsOnRecentTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventPlayerWarpToNearAnchor', 'EventPlayerTurnAndLook', 'EventPlayerClimbOff', 'EventGoOffstageForUser', 'EventPlayerWait', 'EventPlayerOffMotionTypeStatic', 'EventPlayerUnequip']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryIsEquipArmor', 'EventQueryPlayerEquipArmorSeries', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventEventCircleWipeFadeIn', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventTraverseAroundAndWaitCreateActor', 'EventRequestSoulSageLightOrb']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_kakariko005_NewMaritta
entrypoint: None()
actions: ['EventTriggerForceSetRecentTalkFlag']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: AsbObj_BalloonEnvelopeBase_A_03[GP01]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerParticipateEvent', 'EventTriggerRequestChemicalRequestExtinguish', 'EventWarpToHomeMatrix']
queries: ['EventQueryConnectedByBondConstraint', 'EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle', 'EventQueryWarpToSafeSpaceWithCombinedActor', 'EventQueryChemicalIsBurning']
params: {'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'EventMemberCreateMethod': 0, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: SpObj_BalloonEnvelope_A_06[GP01]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerCombinedActorDeleteExcept']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'IsBindNearestActor': False}

void Ready_Npc_Wanderer_GP01_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_00', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !Player.EventQueryPlayerEquipArmorSeries({'CheckHead': True, 'CheckSeries': 'Yiga', 'CheckUpper': False, 'CheckLower': False}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_69', 'IsNotOpenIfSkipedMostRecent': False})
    }

    call DragonMemory_Fast.Telop_View()

    if !Player.EventQueryPlayerEquipArmorSeries({'CheckSeries': 'Naked', 'CheckLower': True, 'CheckUpper': True, 'CheckHead': False}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_70', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_01', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    }
    Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_02', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'GroundPaintingAir01', 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Carry', 'IsWaitEnd': True})
    Npc_kakariko005_NewMaritta.EventTriggerForceSetRecentTalkFlag({'value': False})
}

void Ready_Npc_Wanderer_GP01_Near() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'GroundPaintingAir01_IsAfter_Ready_Exp'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GroundPaintingAir01:near_01', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GroundPaintingAir01:near_01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    }
}

void Carry_Npc_Wanderer_GP01_Talk() {

    fork {

        call Common.AirStartUP_Player()

    } {
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }


    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'InstanceName': 'GP01', 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_22', 'ChoiceNumber': 3, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceLabel3': 5, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_23', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_24', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

            call GetOff()


            call Reset()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_SelectReturn'})
            EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_BalloonInArea'}) {
        if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'SpObj_BalloonEnvelope_A_01', 'IsCheckAdjustPoint': True, 'AdjustPointIndexSelf': -1, 'AdjustPointIndexTarget': -1}) {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GroundPaintingAir01_ImpaTalk', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_35', 'NotPlayLipSyncAnim': False, 'ChoiceLabel1': 8, 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'ChoiceLabel3': 0, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_36', 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

                    call GP01_CheckSeats()

                    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryChemicalIsBurning() {
                        Event34:

                        call GetOn()

                    } else {
                        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'InstanceName': 'GP01', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
                        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'InstanceName': 'GP01', 'OffsetBase': 0, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
                        EventCamera.EventTriggerCameraSavePoint()
                        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': 'GP01', 'PosVector': [-1.7899999618530273, 3.2200000286102295, 3.930000066757202], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'AtVector': [0.0, 0.949999988079071, 0.0]})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event34
                    }
                } else {
                    Event35:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_49', 'IsNotOpenIfSkipedMostRecent': False})
                    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
                }
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_BalloonTalk'}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_50', 'ChoiceLabel3': 9, 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'ChoiceLabel1': 8, 'IsNotOpenIfSkipedMostRecent': False})
                Event171:
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_48', 'IsNotOpenIfSkipedMostRecent': False})

                    call GP01_CheckSeats()

                    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryChemicalIsBurning() {
                        Event87:

                        call GetOn()

                    } else {
                        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'InstanceName': 'GP01', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
                        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'KeepTalkWait': True, 'InstanceName': 'GP01', 'OffsetBase': 0, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
                        EventCamera.EventTriggerCameraSavePoint()
                        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': 'GP01', 'PosVector': [-1.7899999618530273, 3.2200000286102295, 3.930000066757202], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'AtVector': [0.0, 0.949999988079071, 0.0]})
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceLabel3': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_42', 'IsNotOpenIfSkipedMostRecent': False})
                        goto Event87
                    }
                } else {
                    goto Event35
                }
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_BalloonTalk'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_21', 'ChoiceLabel1': 8, 'ChoiceLabel3': 9, 'ChoiceNumber': 2, 'ChoiceLabel2': 9, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event171
            }
        } else {
            Npc_Wanderer[GP01].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_07', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel1': 10, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'IsNotOpenIfSkipedMostRecent': False})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_53', 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_19', 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_18', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()

                call MemoryOfTheDragon.Naked()

              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_19', 'ChoiceLabel2': 2, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 10, 'IsNotOpenIfSkipedMostRecent': False})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel2': 2, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_53', 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_30', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_31', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
                    Event165:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_18', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()

                    call MemoryOfTheDragon.Naked()

                } else {
                    goto Event165
                }
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_18', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()

                call MemoryOfTheDragon.Naked()

            }
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_20', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
    }
}

void GetOn() {
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Wanderer[GP01].EventFollowToTargetActor({'IsWaitEnd': True, 'InstanceName': 'GP01', 'Posture': 0, 'PositionOffset': [1.25, 0.5, 0.0], 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'XZDegOffset': 240.0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_ImpaTalk'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_Carrying'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWanderer_Carrying', 'Value': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_BalloonRegeneration', 'Value': False})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
}

void GetOff() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventTriggerParticipateEvent()
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        Event321:
        if !Player.EventQueryCheckPlayerState({'State': 6}) {
            Player.EventPlayerUnequip({'IsWaitEnd': True})
            Player.EventPlayerWait({'IsWaitEnd': True})
            Event310:
            Npc_Wanderer[GP01].EventCancelFollowToTargetActor({'InstanceName': 'GP01', 'ASName': 'SitGetUp', 'IsWaitEnd': True, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
            Player.EventPlayerWarpToNearAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'InstanceName': 'GP01_PlayerReset', 'UseDemoWait': True})
            Npc_Wanderer[GP01].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'InstanceName': '', 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [-1307.2900390625, 204.2100067138672, -816.1799926757812], 'AtVector': [-1310.2099609375, 203.1300048828125, -821.3900146484375], 'TargetFovy': 50.0, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'GroundPaintingAir01_IsReset'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_Carrying', 'Value': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWanderer_Carrying', 'Value': True})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_BalloonRegeneration', 'Value': False})
            Npc_Wanderer[GP01].EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } else {
            Player.EventPlayerClimbOff({'IsWaitEnd': True})
            goto Event310
        }
    } else
    goto Event321
}

void GP01_Hand() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_26', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_24', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call GetOff()


        call Reset()

        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZE_0012', 'Index': -1}) {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_58', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Complete_DragonTears01'}) {
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_25', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
    }
}

void GP01_Tilt() {

    call Common.AirStartUP_Player()

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    }

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'Actor1InstanceName': 'GP01', 'PosVector': [-1.190000057220459, 1.1799999475479126, -1.3300000429153442], 'AtVector': [1.9800000190734863, 1.5299999713897705, 0.38999998569488525], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
    }

    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_27', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call GetOff()


    call Reset()

    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZE_0012', 'Index': -1}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_58', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Complete_DragonTears01'}) {
            EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
        } else {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Reset() {
    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerRequestChemicalRequestExtinguish({'IsRequestToAllCombinedActors': True})
    GameSystemActor.EventResetGimmick({'IsResetCamera': True, 'IsWaitEnd': True, 'Option': 0})
    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'BaseRot': [0.0, 0.0, 0.0], 'BasePos': [-1309.675048828125, 201.4499969482422, -826.356689453125], 'IsEnableHitPlayer': True, 'IsEnableFailDelete': True}) {
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_IsReset'})
        GameSystemActor.EventResetGimmick({'IsResetCamera': True, 'IsWaitEnd': True, 'Option': 0})
        GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_IsReset', 'Value': False})
        GameSystemActor.EventRequestSoulSageLightOrb({'IsWaitEnd': True})
    }
}

void Search_Npc_Wanderer_GP01_Talk() {

    call Common.AirStartUP_Player()


    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'InstanceName': 'GP01', 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'}) {
        Npc_Wanderer[GP01].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    } else {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    }
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_06', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NPCPlace'}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_56', 'IsNotOpenIfSkipedMostRecent': False})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GroundPaintingAir01_Carrying', 'Index': -1}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_37', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_56', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void NearEvent01() {
    Npc_Wanderer[GP01].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/GroundPaintingAir01:near_02', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void NearEvent03() {
    Npc_Wanderer[GP01].EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/GroundPaintingAir01:near_04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void GP01_Zonau() {

    call Common.AirStartUP_Player()


    fork {
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'GP01', 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'Npc_Wanderer'})
    } {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'Player', 'InstanceName': ''})
    }

    if Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) in [1, 2, 3, 4] {

        call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})


        fork {
            Player.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsWaitEnd': True, 'IsRidingTargetGoOffstage': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1InstanceName': 'GP01', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'Actor1ActorName': 'Npc_Wanderer', 'PosVector': [-0.15000000596046448, 0.9700000286102295, 2.2799999713897705], 'AtVector': [0.019999999552965164, 0.949999988079071, -0.009999999776482582], 'EnableCameraAlpha': True})
        }

        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})

        fork {
            Player.EventPlayerWait({'IsWaitEnd': True})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'EnableCameraAlpha': False, 'Actor1ActorName': 'Player', 'PosVector': [0.0, 4.21999979019165, -6.360000133514404], 'AtVector': [0.0, 1.7999999523162842, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': ''})
        }

    }
}

void GP01_OutChallenge() {

    call Common.AirStartUP_Player()


    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkInAir({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        }
    } {
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'ActorNameB': 'Npc_Wanderer', 'InstanceNameB': 'GP01', 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 10.0}) {

        call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01"), 'Arg_Turn': 1})

        Event67:
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_51', 'IsNotOpenIfSkipedMostRecent': False})
        SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_SelectReturn'})
        GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call GetOff()


        call Reset()

        EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZE_0012', 'Index': -1}) {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_58', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Complete_DragonTears01'}) {
                EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
            } else {
                Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else
        if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'SpObj_BalloonEnvelope_A_01', 'IsCheckAdjustPoint': True, 'AdjustPointIndexSelf': -1, 'AdjustPointIndexTarget': -1}) {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_28', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_52', 'IsNotOpenIfSkipedMostRecent': False})
        }
    } else {
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'Actor1InstanceName': 'GP01', 'PosVector': [-1.190000057220459, 1.1799999475479126, -1.3300000429153442], 'AtVector': [1.9800000190734863, 1.5299999713897705, 0.38999998569488525], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 0})
        goto Event67
    }
}

void GP01_NotNear() {

    call Common.AirStartUP_Player()

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    }

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTime': 30, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'Actor1InstanceName': 'GP01', 'PosVector': [-1.190000057220459, 1.1799999475479126, -1.3300000429153442], 'AtVector': [1.9800000190734863, 1.5299999713897705, 0.38999998569488525], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False})
    }

    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_54', 'IsNotOpenIfSkipedMostRecent': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GroundPaintingAir01_SelectReturn'})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call GetOff()


    call Reset()

    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryConnectedByBondConstraint({'IsLimitActor': True, 'ActorName': 'SpObj_BalloonEnvelope_A_01', 'IsCheckAdjustPoint': True, 'AdjustPointIndexSelf': -1, 'AdjustPointIndexTarget': -1}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_28', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_55', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Carry_Npc_kakariko005_NewMaritta_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Event214:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1007', 'IsNotOpenIfSkipedMostRecent': False})
            Event153:
            if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_kakariko005_NewMaritta_FastTalk'}) {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_kakariko005_NewMaritta_FastTalk'})
            }
        } else
        Event288:
        if AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryConnectedByBondConstraint({'ActorName': 'SpObj_BalloonEnvelope_A_01', 'IsCheckAdjustPoint': True, 'AdjustPointIndexSelf': -1, 'AdjustPointIndexTarget': -1, 'IsLimitActor': False}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1006', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [-1313.4300537109375, 202.0500030517578, -817.6799926757812], 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': [-1313.4300537109375, 202.0500030517578, -817.6799926757812], 'ActorName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1309.0400390625, 201.24000549316406, -763.3499755859375], 'AtVector': [-1309.18994140625, 201.13999938964844, -767.4299926757812], 'TargetFovy': 30.0, 'MoveTime': 24, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        goto Event214
    } else {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1300_Head'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk04', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk01', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1005', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event288
    }
}

void Search_Npc_kakariko005_NewMaritta_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryHaveTalked() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1008', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event153
    } else {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1300_Head'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk04', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk01', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1005', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event153
    }
}

void Ready_Npc_kakariko005_NewMaritta_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Near0001', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_kakariko005_NewMaritta_Talk() {

    call Npc_Kakariko005_Guide.MeetAgain()

    if !Npc_EventStarter.EventQueryHaveTalked() {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1309.0400390625, 201.24000549316406, -763.3499755859375], 'AtVector': [-1309.18994140625, 201.13999938964844, -767.4299926757812], 'TargetFovy': 30.0, 'MoveTime': 24, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1003', 'IsNotOpenIfSkipedMostRecent': False})
        Event218:
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_kakariko005_NewMaritta_FastTalk'}) {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_kakariko005_NewMaritta_FastTalk'})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': 'GoToWandererB', 'ChallengeName': 'GroundPaintingAir01', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    } else {

        call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        if !Player.EventQueryIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_1300_Head'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk04', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_Kakariko005_Guide:Talk01', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'TalkingL', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1001', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 0, 'WorldPos': [-1313.4300537109375, 202.0500030517578, -817.6799926757812], 'ActorName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 0, 'WorldPos': [-1313.4300537109375, 202.0500030517578, -817.6799926757812], 'ActorName': '', 'KeepTalkWait': True, 'OffsetBase': 0})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-1309.0400390625, 201.24000549316406, -763.3499755859375], 'AtVector': [-1309.18994140625, 201.13999938964844, -767.4299926757812], 'TargetFovy': 30.0, 'MoveTime': 24, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Talk1002', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event218
    }
}

void FallEvent() {

    call Common.AirStartUP_Player()

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if !Player.EventQueryCheckPlayerState({'State': 5}) {

        call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    } else {

        call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

    }

    fork {
        GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'Actor1InstanceName': 'GP01', 'PosVector': [-1.190000057220459, 1.1799999475479126, -1.3300000429153442], 'AtVector': [1.9800000190734863, 1.5299999713897705, 0.38999998569488525], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30})
    }

    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_57', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})

    call GetOff()


    call Reset()

    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_58', 'IsNotOpenIfSkipedMostRecent': False})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Complete_DragonTears01'}) {
        Event435:
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HavePlayedEvent.Dm_ZE_0012', 'Index': -1}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_59', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        goto Event435
    }
}

void Carry_Npc_kakariko005_NewMaritta_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Npc_kakariko005_NewMaritta:Near0002', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void OnlyBalloonEvent() {

    call Common.AirStartUP_Player()


    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        } else {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        }
    } {
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }

    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'ActorNameB': 'Npc_Wanderer', 'InstanceNameB': 'GP01', 'CheckDistance': 2.0, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': ''}) {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'MoveTime': 30, 'IdealDistance': 4.0, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_Wanderer', 'TargetActorInstanceName': 'GP01', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
    } else {
        EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'IdealDistance': 4.0, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'TargetOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_Wanderer', 'TargetActorInstanceName': 'GP01', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'MoveTime': 0, 'EnableCameraAlpha': False})
    }
    Npc_Wanderer[GP01].EventTriggerLookAtObject({'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'WorldPos': [-1312.4580078125, 355.1642150878906, -823.8900146484375], 'ResetArriveTransformFixed': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_45', 'IsNotOpenIfSkipedMostRecent': False})
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call GetOff()


    call Reset()

    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryConnectedByBondConstraint({'AdjustPointIndexSelf': -1, 'AdjustPointIndexTarget': -1, 'IsLimitActor': False, 'IsCheckAdjustPoint': False, 'ActorName': ''}) {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_46', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void GP01_CheckSeats() {
    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerParticipateEvent()
    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryCheckNoObjectDirY({'Length': 2.0, 'Radius': 0.6000000238418579, 'Offest': [1.2000000476837158, 0.6000000238418579, 0.0]}) {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'GP01', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'GP01', 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': 'GP01', 'PosVector': [-1.7899999618530273, 3.2200000286102295, 3.930000066757202], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': True, 'AtVector': [0.0, 0.949999988079071, 0.0]})
        if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_60', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_39', 'IsNotOpenIfSkipedMostRecent': False})
        }
        Event421:
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerErasePauseMask()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !AsbObj_BalloonEnvelopeBase_A_03[GP01].EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {
        Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'GP01', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
        Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'GP01', 'KeepTalkWait': True, 'OffsetBase': 0, 'ActorName': 'AsbObj_BalloonEnvelopeBase_A_03'})
        EventCamera.EventTriggerCameraSavePoint()
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': 'GP01', 'PosVector': [-1.7899999618530273, 3.2200000286102295, 3.930000066757202], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'CameraCollisionMode': 0, 'IsIgnorePosVectorReferenceActorRot': True, 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'AsbObj_BalloonEnvelopeBase_A_03', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'AtVector': [0.0, 0.949999988079071, 0.0], 'EnableCameraAlpha': True})
        Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_60', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event421
    }
}

void GP01_BalloonOut() {

    call Common.AirStartUP_Player()


    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        } else {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        }
    } {
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
        SpObj_BalloonEnvelope_A_06[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }

    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'Player', 'InstanceName': ''})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerOffMotionTypeStatic()

    call GetOff()

    SpObj_BalloonEnvelope_A_06[GP01].EventTriggerCombinedActorDeleteExcept({'InstanceName': 'GP01'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWandererBalloon_Regeneration', 'Value': True})

    call Reset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWandererBalloon_Regeneration', 'Value': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
}

void GP01_BalloonDead() {

    call Common.AirStartUP_Player()


    fork {
        if !Player.EventQueryCheckPlayerState({'State': 5}) {

            call InitTalk.InitTalkInAir({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        } else {

            call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': ActorIdentifier(name="Npc_Wanderer", sub_name="GP01")})

        }
    } {
        AsbObj_BalloonEnvelopeBase_A_03[GP01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'ActorName': 'Player', 'InstanceName': ''})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_43', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Player.EventPlayerOffMotionTypeStatic()

    call GetOff()

    AsbObj_BalloonEnvelopeBase_A_03[GP01].EventWarpToHomeMatrix({'IsWaitEnd': True})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWandererBalloon_Regeneration', 'Value': True})

    call Reset()

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GroundPaintingAir01_NpcWandererBalloon_Regeneration', 'Value': False})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Length': 1, 'Color': 0, 'IsWaitEnd': True})
    Npc_Wanderer[GP01].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Wanderer[GP01].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/GroundPaintingAir01:Talk_41', 'IsNotOpenIfSkipedMostRecent': False})
}
