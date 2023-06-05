-------- EventFlow: CarryGoronKid2 --------

Actor: Npc_Goron031[CarryGoronKid2]
entrypoint: None()
actions: ['EventAIScheduleMoveToAnchor', 'EventTalk', 'EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget', 'EventGoOffstageForUser', 'EventCancelFollowToTargetActor', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsFollowToTargetActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_DeathMtArtifactTrain_B_02[Carry02]
entrypoint: None()
actions: ['EventTriggerErasePauseMask', 'EventTriggerPushPauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventNPCTurnToTarget', 'EventTalk', 'EventTriggerChangeEmotion', 'EventTriggerLookAtObject']
queries: ['EventQueryIsFollowToTargetActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventResetGimmick', 'EventWaitForActorPresence', 'EventEventCircleWipeFadeIn', 'EventClearActorsAroundAnchor', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventTriggerProgressChallengeStep', 'EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerWait', 'EventPlayerStopInAir', 'EventPlayerHorseGetOff']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

void Carry_Npc_Goron031_Talk() {
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry02'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk38', 'ChoiceNumber': 3, 'ChoiceLabel2': 12, 'ChoiceLabel3': 4, 'ChoiceLabel1': 13, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            EventCamera.EventTriggerCameraSavePoint()

            call Camera_LookatGoal()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk31', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'MoveFrame': 0, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
          case 1:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk40', 'IsNotOpenIfSkipedMostRecent': False})
            SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid1_IsTalkReset', 'Value': True})
            FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()

            call WarpToHome()

          case 2:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
            FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CarryGoronkid2_IsRockOnRail', 'Index': -1}) {
            EventCamera.EventTriggerCameraSavePoint()

            call Camera_LookatRock()

            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk23', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'KeepTalkWait': True, 'IsWaitEnd': True, 'OffsetBase': 0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event95:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Goron_Coppus_First2'}) {
                    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk27', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    Event94:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Goron_Coppus_First2'})
                    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid2_IsReadyCarry'}) {

                        call GetOn()

                    } else {
                        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    }
                    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
                } else {
                    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk03', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    goto Event94
                }
            } else {
                Event28:
                Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk08', 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid2_HaveTalkedAfterRemovedRock'}) {
            Event50:
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk39', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event95
            } else {
                goto Event28
            }
        } else {
            EventCamera.EventTriggerCameraSavePoint()

            call Camera_LookatRock()

            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk26', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CarryGoronKid2_HaveTalkedAfterRemovedRock', 'Index': -1, 'Value': True})
            Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'KeepTalkWait': True, 'IsWaitEnd': True, 'OffsetBase': 0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
            goto Event50
        }
    }
}

void GetOn() {

    call CarryGoronKid1.CheckTrainSeat({'Train_InstanceName': 'Carry02', 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Koppus': ActorIdentifier(name="Npc_EventStarter"), 'Koppus_InstanceName': 'CarryGoronKid2'})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CarryGoronKid1.KoppusFollowToTrain({'Train_InstanceName': 'Carry02', 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2")})

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CarryGoronKid2_OnTrain', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'CarryGoronKid_Hand_Num', 'Value': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void GetOff() {

    call CarryGoronKid1.GetOff_Common({'Npc_Goron031': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'InstanceName': 'Carry02', 'OnTrainFlag': 'CarryGoronKid2_OnTrain'})

}

void Reach_Npc_Goron031_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 4})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk20', 'IsWaitEnd': True, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})

        call GetReward()

    } else {
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk16', 'IsWaitEnd': True, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void Ready_Npc_Goron031_SageOfFire_IsAfter_Dream_Exp_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/CarryGoronKid2:Near01', 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Goron031_SageOfFire_IsAfter_Dream_Exp_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk12', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 7, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk01', 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event86:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk22', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': '', 'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'ChoiceLabel1': 8, 'ChoiceLabel2': 9, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk13', 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk14', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event86
    }
}

void CarryGoronKid2_Hand() {

    call CarryGoronKid1.Hand({'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Train_Name': 'Carry02'})

    if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'CarryGoronKid_Hand_Num', 'Value': 2}) == 2 {

        call WarpToHome()

    }
}

void CarryGoronKid2_Tilt() {

    call CarryGoronKid1.Tilt({'Train_Name': 'Carry02', 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Koppus_ActorName': 'Npc_Goron031', 'Koppus_InstanceName': 'CarryGoronKid2'})


    call WarpToHome()

}

void ToStation_Npc_Goron031_CarryGoronKid2_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 3})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk19', 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
}

void CarryGoronKid2_Interact() {

    call CarryGoronKid1.Interact({'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'TrainInstanceName': 'Carry02'})

}

void ToStation_Npc_Goron031_CarryGoronKid2_CarryGoronKid2_ReachedStation_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 3, 'Arg_Turn': 0})

    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk36', 'ASName': 'Wait', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call CarryGoronKid1.ResetPlayerState()


    call PlayerWarpToStart()

    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'CreateTrainPos', 'Radius': 4.0, 'Height': 4.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'StepName': 'Carry', 'ChallengeName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    GameSystemActor.EventWaitForActorPresence({'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry02', 'IsWaitEnd': True})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk37', 'IsNotOpenIfSkipedMostRecent': False})
    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry02', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk32', 'IsNotOpenIfSkipedMostRecent': False})
    EventCamera.EventTriggerCameraSavePoint()

    call Camera_LookatRock()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CarryGoronkid2_IsRockOnRail', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk23', 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk41', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsNotOpenIfSkipedMostRecent': False})
    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk26', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
        Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0})
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'IsWaitEnd': True, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk39', 'ChoiceNumber': 0, 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'CarryGoronKid2_HaveTalkedAfterRemovedRock', 'Index': -1, 'Value': True})
    }
}

void ToStation_Npc_Goron031_CarryGoronKid2_CarryGoronKid2_ReachedStation_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/CarryGoronKid2:Near03', 'IsChallenge': False, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void CarryGoronKid2_Drown() {

    call CarryGoronKid1.Drown({'Train_Name': 'Carry02', 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Koppus_Actor': 'Npc_Goron031', 'Koppus_InstanceName': 'CarryGoronKid2'})


    call WarpToHome()

}

void CarryGoronKid2_OutOfChallengeArea() {

    call CarryGoronKid1.OutOfChallengeArea({'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Train_Actor': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Koppus_InstanceName': 'CarryGoronKid2'})


    call ResetTrolleyAndNPC()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void CarryGoronKid2_OutOfChallengeAreaWarning() {

    call CarryGoronKid1.OutOfChallengeArea_Warning({'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Train_Actor': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry02"), 'Koppus_InstanceName': 'CarryGoronKid2'})

}

void GetReward() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

    Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk11', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': 'Act_LookAround_Loop', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_LookatGorontia()

    Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk35', 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron031[CarryGoronKid2].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'ASName': 'Run_GoronRoll', 'InstanceName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid2].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventTriggerProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'CarryGoronKid2'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void Camera_LookatRock() {
    Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid2_Rock', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'FaceControlType': 1, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid2_Rock', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'DesignateMatrixActor', 'Actor1InstanceName': 'CarryGoronKid2_Rock', 'IsPosVectorReferenceActorPosOnce': True, 'Actor2ActorName': 'Npc_Goron031', 'Actor2InstanceName': 'CarryGoronKid2', 'PosVectorSetType': 4, 'AtVectorSetType': 3, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 30, 'IsWaitEnd': True, 'AtVector': [0.0, 0.0, 0.0], 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 4.0, -2.0], 'CameraCollisionMode': 0, 'MoveTotargetPosType': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Reach_Npc_Goron031_CarryGoronKid2_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 150, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'IsChallenge': True, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/CarryGoronKid2:Near04'})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 150, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/CarryGoronKid2:Near04', 'IsChallenge': False})
    }
}

void CarryGoronKid2_TrainOutOfArea() {
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'InstanceName': 'Carry02', 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'Target': 2})
    Npc_Goron031[CarryGoronKid2].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2")})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk29', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PlayerWarpToStart()


    call CarryGoronKid1.ResetPlayerState()

    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()

    call TrainWarp()

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
        FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    }
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call Camera_LookatKoppus_InStart()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    Npc_Goron031[CarryGoronKid2].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 3})
    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
        FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
    }
}

void Camera_LookatGoal() {
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'InstanceName': 'CarryGoronKid2_Goal', 'ResetArriveTransformFixed': False})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid2_Goal', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.0, 3.0, 0.0], 'MoveTime': 15, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVector': [0.0, 0.0, 10.0], 'AtVectorSetType': 3, 'CameraCollisionMode': 0, 'Actor1ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2ActorName': 'Player', 'Actor2InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookatKoppus_InGoal() {
    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'Player', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Goron031', 'PosVector': [3.609999895095825, 2.5, 3.2100000381469727], 'AtVector': [2.799999952316284, 2.1700000762939453, 2.740000009536743], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'Actor1InstanceName': 'CarryGoronKid2', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookatKoppus_InStart() {
    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsWaitEnd': False, 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'Player', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Npc_Goron031', 'Actor1InstanceName': 'CarryGoronKid2', 'PosVector': [-4.96999979019165, 3.2300000190734863, -7.03000020980835], 'AtVector': [-4.190000057220459, 3.009999990463257, -6.440000057220459], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookatGorontia() {
    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 5, 'ActorName': 'AnchorAction3', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'IsWaitEnd': True, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Goron031', 'InstanceName': 'CarryGoronKid2', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'PosOffset': [2.0, 0.0, 3.0], 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'AnchorAction3', 'IsWaitEnd': True, 'Actor2InstanceName': '', 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 30, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'Actor1ActorName': 'Npc_Goron031', 'Actor1InstanceName': 'CarryGoronKid2', 'PosVector': [-6.550000190734863, 3.2100000381469727, -3.759999990463257], 'AtVector': [-2.1600000858306885, 3.140000104904175, 0.5899999737739563], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void WarpToHome() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CarryGoronkid2_RemovedRock', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CarryGoronkid2_DeleteRock'})
    }
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call GetOff()


    call PlayerWarpToStart()


    call CarryGoronKid1.ResetPlayerState()

    Npc_Goron031[CarryGoronKid2].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    call TrainWarp()

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call Camera_LookatKoppus_InStart()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Goron031[CarryGoronKid2].EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 2, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'FaceControlType': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CarryGoronKid1_IsTalkReset', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'CarryGoronKid1_IsTalkReset'})
        Npc_Goron031[CarryGoronKid2].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron031[CarryGoronKid2].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk08', 'IsNotOpenIfSkipedMostRecent': False})
        Event268:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
            FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'CarryGoronKid_Hand_Num', 'Value': 3}) {
      case [0, 1]:
        Npc_Goron031[CarryGoronKid2].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron031[CarryGoronKid2].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk33', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event268
      case 2:
        Npc_Goron031[CarryGoronKid2].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
        Npc_Goron031[CarryGoronKid2].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event268
    }
}

void TrainWarp() {
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DesignateMatrixActor', 'AnchorInstanceName': 'CreateTrainPos', 'IsSweepOut': True, 'IsDeleteActor': False, 'IsExcludePlacedAroundAnchor': True, 'Radius': 1.0, 'Height': 3.0})
    if !FldObj_DeathMtArtifactTrain_B_02[Carry02].EventQueryWarpToSafeSpaceWithCombinedActor({'BaseRot': [0.0, 0.0, 0.0], 'StartHeightOffset': 6.0, 'EndHeightOffset': -1.0, 'BasePos': [1615.68603515625, 503.0, -2392.02001953125], 'IsEnableHitPlayer': True, 'IsEnableFailDelete': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Carry_FailedWarp', 'Value': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Carry_FailedWarp'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    }
}

void CarryGoronKid2_Arrived() {
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[CarryGoronKid2].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2")})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk09', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
    if !Npc_Goron031[CarryGoronKid2].EventQueryIsFollowToTargetActor({'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry02'}) {
        Npc_Goron031[CarryGoronKid2].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'RestGetUp', 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry02'})
    }
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerCombinedActorDeleteAll()
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'AnchorAction2', 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 2.0, 'AnchorInstanceName': 'Carry02', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': False})
    Npc_Goron031[CarryGoronKid2].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 1, 'AnchorType': 2, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': 'Carry02', 'EnableArrivalState': False})

    call PlayerWarpToGoal()


    call CarryGoronKid1.ResetPlayerState()


    call InitTalk.InitTalkOnEvent({'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid2"), 'Arg_Turn': 0})


    call Camera_LookatKoppus_InGoal()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid2].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk10', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {

        call GetReward()

    } else {
        Npc_Goron031[CarryGoronKid2].EventTalk({'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ASName': '', 'NotPlayLipSyncAnim': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid2:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Reach', 'ChallengeName': 'CarryGoronKid2', 'IsWaitEnd': True})
    }
}

void ResetTrolleyAndNPC() {
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call GetOff()

    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    Npc_Goron031[CarryGoronKid2].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerErasePauseMask()
    FldObj_DeathMtArtifactTrain_B_02[Carry02].EventTriggerCombinedActorDeleteAll()

    call RespawnTrainAndReset()


    call CarryGoronKid1.SetPlayerFall()


    call CarryGoronKid1.Camera_Player_OutOfChallengeArea()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void PlayerWarpToStart() {
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        if Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Event148:
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'CarryGoronKid2_Start', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
    } else {
        goto Event148
    }
}

void PlayerWarpToGoal() {
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'AnchorActorName': 'StartPos', 'Radius': 3.0, 'IsDeleteActor': False, 'AnchorInstanceName': 'CarryGoronKid2_PlayerPos'})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'InstanceName': 'CarryGoronKid2_PlayerPos', 'ActorName': 'StartPos', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void RespawnTrainAndReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CarryGoronKid2_RespawnTrain'})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CarryGoronKid2_RespawnTrain'})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}
