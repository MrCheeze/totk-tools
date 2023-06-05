-------- EventFlow: CarryGoronKid1 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule']
queries: ['EventQueryIsFollowToTargetActor', 'EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait', 'EventResetGimmick', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventEventCircleWipeFadeIn', 'EventClearActorsAroundAnchor', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryTalkChoice2', 'EventQueryTalkChoice3', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt', 'EventTriggerSetDayTimeStruct']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerTurnAndLook', 'EventPlayerUnequip', 'EventPlayerStopInAir', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestParasail']
queries: ['EventQueryPlayerCheckRideHorse', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: Npc_Goron031[CarryGoronKid1]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventTalk', 'EventAIScheduleMoveToAnchor', 'EventNPCTurnToTarget', 'EventCancelFollowToTargetActor', 'EventGoOffstageForUser', 'EventTriggerChangeEmotion', 'EventPlayAS', 'EventTriggerLookAtObject', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_DeathMtArtifactTrain_B_02[Carry01]
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll', 'EventTriggerCombinedActorDeleteAllWithoutKorokCarry']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron031[Hand(Koppus)]
entrypoint: Hand(Koppus)
actions: ['EventTalk']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[Hand(Train)]
entrypoint: Hand(Train)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[Tilt(Train)]
entrypoint: Tilt(Train)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Goron031[Tilt(Koppus)]
entrypoint: Tilt(Koppus)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[Interact(Train)]
entrypoint: Interact(Train)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Goron031[OutOfChallengeArea_Warning(Koppus)]
entrypoint: OutOfChallengeArea_Warning(Koppus)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea_Warning(Train_Actor)]
entrypoint: OutOfChallengeArea_Warning(Train_Actor)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Goron031[OutOfChallengeArea(Koppus)]
entrypoint: OutOfChallengeArea(Koppus)
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerLookAtObject', 'EventTalk']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea(Train_Actor)]
entrypoint: OutOfChallengeArea(Train_Actor)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: Npc_Goron031[Drown(Koppus)]
entrypoint: Drown(Koppus)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[Drown(Train)]
entrypoint: Drown(Train)
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_B_02[CheckTrainSeat(Train)]
entrypoint: CheckTrainSeat(Train)
actions: ['EventTriggerParticipateEvent', 'EventTriggerErasePauseMask']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle']
params: None

Actor: Npc_Goron031[CheckTrainSeat(Koppus)]
entrypoint: CheckTrainSeat(Koppus)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_EventStarter[KoppusFollowToTrain(Koppus)]
entrypoint: KoppusFollowToTrain(Koppus)
actions: ['EventFollowToTargetActor', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_Goron031[GetOff_Common(Npc_Goron031)]
entrypoint: GetOff_Common(Npc_Goron031)
actions: ['EventCancelFollowToTargetActor']
queries: ['EventQueryIsFollowToTargetActor']
params: None

Actor: Npc_Goron031[Camera_LookAtTrain(Npc_Goron031)]
entrypoint: Camera_LookAtTrain(Npc_Goron031)
actions: ['EventNPCTurnToTarget']
queries: []
params: None

void Ready_Npc_Goron031_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 120, 'MessageID': 'EventFlowMsg/CarryGoronKid1:Near01', 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Goron031_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk01', 'ChoiceNumber': 2, 'ChoiceLabel1': 1, 'ChoiceLabel2': 2, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk02', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event7:
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'CarryGoronKid1', 'IsWaitEnd': True})
        Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk14', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk16', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event7
    }
}

void Carry_Npc_Goron031_Talk() {
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})
    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry01'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 7, 'ChoiceLabel3': 2, 'ChoiceLabel1': 8, 'IsNotOpenIfSkipedMostRecent': False})
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            EventCamera.EventTriggerCameraSavePoint()

            call Camera_LookAtGoal()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk37', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'ReviseMode': 0, 'MoveFrame': 1, 'CollisionInterpolateSkip': True, 'EnableCameraAlpha': False})
            FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
            EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk05', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call StopBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid1_IsTalkReset', 'Value': True})
            FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()

            call WarpToHome()

          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk07', 'IsNotOpenIfSkipedMostRecent': False})
            FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
        }
    } else {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 0})

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Goron_Coppus_First', 'Index': -1})
        && !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 2, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk21', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk12', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                Event21:
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Goron_Coppus_First'})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid1_IsReadyCarry'}) {

                    call GetOn()

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk24', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                }
                FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
            } else {
                Event8:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk20', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk04', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel2': 2, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk17', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                goto Event21
            } else {
                goto Event8
            }
        }
    }
}

void GetOn() {

    call CheckTrainSeat({'Train_InstanceName': 'Carry01', 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'Koppus': ActorIdentifier(name="Npc_EventStarter"), 'Koppus_InstanceName': 'CarryGoronKid1'})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call KoppusFollowToTrain({'Train_InstanceName': 'Carry01', 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'CarryGoronKid1_OnTrain'})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'CarryGoronKid_Hand_Num', 'Value': 0})
    EventSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void Hand() {
    Player.EventPlayerWait({'IsWaitEnd': True})
    FldObj_DeathMtArtifactTrain_B_02[Hand(Train)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 1, 'Self': 'Koppus'})

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'CarryGoronKid_Hand_Num'}) {
      case 0:
        Npc_Goron031[Hand(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk38', 'IsNotOpenIfSkipedMostRecent': False})
        Event156:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'CarryGoronKid_Hand_Num'})
        FldObj_DeathMtArtifactTrain_B_02[Hand(Train)].EventTriggerErasePauseMask()
      case 1:
        Event54:
        Npc_Goron031[Hand(Koppus)].EventTalk({'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk22', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event156
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'CarryGoronKid_Hand_Num'}) {
          case 0:
            goto Event54
          case 1:
            Npc_Goron031[Hand(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk39', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event156
          case 2:
            Npc_Goron031[Hand(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel1': 7, 'ChoiceLabel2': 4, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk40', 'IsNotOpenIfSkipedMostRecent': False})

            call StopBgm()

            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            goto Event156
        }
    }
}

void Tilt() {
    FldObj_DeathMtArtifactTrain_B_02[Tilt(Train)].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[Tilt(Koppus)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Koppus'})

    } {

        call Camera_WipeFadeOut({'Koppus': 'Koppus_ActorName', 'InstanceName': 'Koppus_InstanceName'})

    }

    GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    Npc_Goron031[Tilt(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk23', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Crouch', 'IsNotOpenIfSkipedMostRecent': False})

    call StopBgm()

    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    FldObj_DeathMtArtifactTrain_B_02[Tilt(Train)].EventTriggerErasePauseMask()
}

void Interact() {

    call Common.AirStartUP_Player()

    FldObj_DeathMtArtifactTrain_B_02[Interact(Train)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    if Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) in [1, 2, 3, 4, 6] {

        call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 3})

        Npc_EventStarter.EventNPCTurnToTarget({'IsWaitEnd': True, 'Target': 3, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'TrainInstanceName', 'FaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk26', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        FldObj_DeathMtArtifactTrain_B_02[Interact(Train)].EventTriggerErasePauseMask()
    }
}

void TrainOutOfArea() {
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry01', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 2, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron031[CarryGoronKid1].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk29', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PlayerWarpToStart()


    call ResetPlayerState()


    call TrainWarp()

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call Camera_LookatKoppus_Reset()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Goron031[CarryGoronKid1].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk30', 'IsNotOpenIfSkipedMostRecent': False})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
        FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
    }
}

void GoronKid1_OutOfChallengeArea() {

    call OutOfChallengeArea({'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1"), 'Train_Actor': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'Koppus_InstanceName': 'CarryGoronKid1'})


    call ResetTrolleyAndNPC()

    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void GoronKid1_OutOfChallengeArea_Warning() {

    call OutOfChallengeArea_Warning({'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1"), 'Train_Actor': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'Koppus_InstanceName': 'CarryGoronKid1'})

}

void GoronKid1_Drown() {

    call Drown({'Train_Name': 'Carry01', 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1"), 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'Koppus_Actor': 'Npc_Goron031', 'Koppus_InstanceName': 'CarryGoronKid1'})


    call WarpToHome()

}

void OutOfChallengeArea_Warning() {
    FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea_Warning(Train_Actor)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[OutOfChallengeArea_Warning(Koppus)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Koppus'})

    } {

        call Camera_SelectByDistance({'KoppusInstanceName': 'Koppus_InstanceName'})

    }

    Npc_Goron031[OutOfChallengeArea_Warning(Koppus)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron031[OutOfChallengeArea_Warning(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk31', 'IsNotOpenIfSkipedMostRecent': False})

    call Camera_SelectByDistance_Return({'KoppusInstanceName': 'Koppus_InstanceName'})

    FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea_Warning(Train_Actor)].EventTriggerErasePauseMask()
}

void OutOfChallengeArea() {
    FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea(Train_Actor)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[OutOfChallengeArea(Koppus)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Koppus'})

    } {

        call Camera_SelectByDistance({'KoppusInstanceName': 'Koppus_InstanceName'})

    }

    Npc_Goron031[OutOfChallengeArea(Koppus)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron031[OutOfChallengeArea(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk32', 'IsNotOpenIfSkipedMostRecent': False})

    call StopBgm()

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call ResetPlayerState()

    FldObj_DeathMtArtifactTrain_B_02[OutOfChallengeArea(Train_Actor)].EventTriggerErasePauseMask()
}

void Drown() {
    FldObj_DeathMtArtifactTrain_B_02[Drown(Train)].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[Drown(Koppus)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Koppus'})

    } {

        call Camera_WipeFadeOut({'InstanceName': 'Koppus_InstanceName', 'Koppus': 'Koppus_Actor'})

    }

    GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    Npc_Goron031[Drown(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk33', 'IsNotOpenIfSkipedMostRecent': False})

    call StopBgm()

    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    FldObj_DeathMtArtifactTrain_B_02[Drown(Train)].EventTriggerErasePauseMask()
}

void CheckTrainSeat() {
    FldObj_DeathMtArtifactTrain_B_02[CheckTrainSeat(Train)].EventTriggerParticipateEvent()
    if !FldObj_DeathMtArtifactTrain_B_02[CheckTrainSeat(Train)].EventQueryCheckNoObjectDirY({'Length': 2.0, 'Offest': [0.0, 1.5, 0.0], 'Radius': 0.20000000298023224}) {

        call Camera_LookAtTrain({'Train_InstanceName': 'Train_InstanceName', 'Npc_Goron031': 'Koppus', 'Koppus_InstanceName': 'Koppus_InstanceName'})

        Npc_Goron031[CheckTrainSeat(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk34', 'IsNotOpenIfSkipedMostRecent': False})
        Event232:
        FldObj_DeathMtArtifactTrain_B_02[CheckTrainSeat(Train)].EventTriggerErasePauseMask()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !FldObj_DeathMtArtifactTrain_B_02[CheckTrainSeat(Train)].EventQueryActorIsRotYTiltOverAngle({'Angle': 30.0}) {

        call Camera_LookAtTrain({'Train_InstanceName': 'Train_InstanceName', 'Npc_Goron031': 'Koppus', 'Koppus_InstanceName': 'Koppus_InstanceName'})

        Npc_Goron031[CheckTrainSeat(Koppus)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk36', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event232
    }
}

void CarryGoronKid1_Tilt() {

    call Tilt({'Train_Name': 'Carry01', 'Koppus_ActorName': 'Npc_Goron031', 'Koppus_InstanceName': 'CarryGoronKid1', 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})


    call WarpToHome()

}

void Reach_Npc_Goron031_CarryGoronKid1_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 4})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Enemy_130'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk18', 'IsNotOpenIfSkipedMostRecent': False})

        call GetReward()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk15', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void CarryGoronKid1_Hand() {

    call Hand({'Train_Name': 'Carry01', 'Koppus': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1"), 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01")})

    if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'CarryGoronKid_Hand_Num'}) == 2 {

        call WarpToHome()

    }
}

void Reach_Npc_Goron031_CarryGoronKid1_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Enemy_130'}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 120, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/CarryGoronKid1:Near03', 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'DisplayFrame': 120, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'MessageID': 'EventFlowMsg/CarryGoronKid1:Near03', 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
    }
}

void KoppusFollowToTrain() {
    Npc_EventStarter[KoppusFollowToTrain(Koppus)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 3, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'XZDegOffset': 0.0, 'InstanceName': 'Train_InstanceName', 'PositionOffset': [0.0, 1.2000000476837158, 0.0]})
    Npc_EventStarter[KoppusFollowToTrain(Koppus)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter[KoppusFollowToTrain(Koppus)].EventPlayAS({'IsWaitEnd': False, 'ASName': 'Rest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
}

void GetReward() {

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_130'})

    Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk11', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'InstanceName': '', 'Target': 5, 'FaceControlType': 1, 'ActorName': 'AnchorAction3', 'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'IsConfront': True, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron031[CarryGoronKid1].EventAIScheduleMoveToAnchor({'AnchorType': 4, 'ASName': 'Run_GoronRoll', 'InstanceName': '', 'IsTurnToAnchorRot': False, 'IsAlignAnchorPos': False, 'DesiredGear': 1, 'ActionType': 0, 'IsWaitEnd': False, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid1].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'CarryGoronKid1', 'IsWaitEnd': True})
    GameDataActor.EventTriggerSetDayTimeStruct({'GameDataName': 'CarryGoronKid1_ClearTime'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void WarpToHome() {
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call GetOff()


    call PlayerWarpToStart()


    call ResetPlayerState()

    Npc_Goron031[CarryGoronKid1].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})

    call TrainWarp()

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call Camera_LookatKoppus_Reset()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'CarryGoronKid1_IsTalkReset', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'CarryGoronKid1_IsTalkReset'})
        Npc_Goron031[CarryGoronKid1].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron031[CarryGoronKid1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk28', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event321:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
            FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'CarryGoronKid_Hand_Num', 'Value': 3}) {
      case [0, 1]:
        Npc_Goron031[CarryGoronKid1].EventTriggerChangeEmotion({'EmotionType': 3, 'IsActFaceOnly': True})
        Npc_Goron031[CarryGoronKid1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
        Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk25', 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event321
      case 2:
        Npc_Goron031[CarryGoronKid1].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': False})
        Npc_Goron031[CarryGoronKid1].EventPlayAS({'ASName': 'Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event321
    }
}

void GetOff_Common() {
    if !Npc_Goron031[GetOff_Common(Npc_Goron031)].EventQueryIsFollowToTargetActor({'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'InstanceName'}) {
        Npc_Goron031[GetOff_Common(Npc_Goron031)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'RestGetUp', 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'InstanceName'})
    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'OnTrainFlag'})
}

void TrainWarp() {
    if !FldObj_DeathMtArtifactTrain_B_02[Carry01].EventQueryWarpToSafeSpaceWithCombinedActor({'StartHeightOffset': 4.0, 'EndHeightOffset': -1.0, 'IsEnableFailDelete': True, 'BaseRot': [-170.6999969482422, 5.199999809265137, 165.5], 'BasePos': [1741.5, 532.0, -2579.5], 'IsEnableHitPlayer': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Carry_FailedWarp', 'Value': False})
        FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Carry_FailedWarp'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    }
}

void Camera_WipeFadeOut() {
    EventCamera.EventBasedOnLookAtCamera({'IdealDistance': 4.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetOffset': [0.0, 0.5, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 5, 'TargetActorName': 'Koppus', 'TargetActorInstanceName': 'InstanceName', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookAtGoal() {
    Npc_Goron031[CarryGoronKid1].EventTriggerLookAtObject({'Target': 5, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid1_Goal', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid1_Goal', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.0, 3.0, 0.0], 'MoveTime': 15, 'IsWaitEnd': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'TargetFovy': 50.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 3.0, 10.0], 'Actor1ActorName': 'Player', 'Actor2ActorName': 'Player', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CarryGoronKid1_Arrived() {
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsFrameEndCalc': False, 'IsPhysics': True, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron031[CarryGoronKid1].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_Goron031[CarryGoronKid1].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'RestGetUp', 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Carry01'})
    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'ActorName': 'DesignateMatrixActor', 'InstanceName': 'CarryGoronKid1_Goal', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk09', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerCombinedActorDeleteAllWithoutKorokCarry()
    GameSystemActor.EventClearActorsAroundAnchor({'AnchorActorName': 'AnchorAction2', 'AnchorInstanceName': 'Carry01', 'IsWaitEnd': True, 'Radius': 2.0, 'Height': 2.0, 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': False})
    Npc_Goron031[CarryGoronKid1].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'AnchorType': 2, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': 'Carry01', 'EnableArrivalState': False})

    call PlayerWarpToGoal()


    call ResetPlayerState()


    call Camera_LookAtKoppusInGoal()

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})

    Npc_Goron031[CarryGoronKid1].EventNPCTurnToTarget({'InstanceName': '', 'IsWaitEnd': False, 'Target': 2, 'FaceControlType': 1, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk10', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    if !PouchSystemActor.EventQueryCanAddToPorch({'Num': 1, 'Actor': 'Item_Enemy_130'}) {

        call GetReward()

    } else {
        Npc_Goron031[CarryGoronKid1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/CarryGoronKid1:Talk13', 'IsNotOpenIfSkipedMostRecent': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Reach', 'ChallengeName': 'CarryGoronKid1', 'IsWaitEnd': True})
    }
}

void Camera_LookAtKoppusInGoal() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'Actor2ActorName': 'Player', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron031', 'Actor1InstanceName': 'CarryGoronKid1', 'PosVector': [-1.75, 1.8899999856948853, 4.760000228881836], 'AtVector': [-1.2400000095367432, 0.8799999952316284, 0.23000000417232513], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_LookatKoppus_Reset() {
    EventCamera.EventMoveToTargetPosCamera({'Actor2ActorName': 'Player', 'IsAtVectorReferenceActorPosOnce': True, 'IsPosVectorReferenceActorPosOnce': True, 'Actor2InstanceName': '', 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsWaitEnd': True, 'Actor1ActorName': 'Npc_Goron031', 'Actor1InstanceName': 'CarryGoronKid1', 'PosVector': [0.17000000178813934, 2.4600000381469727, 5.25], 'AtVector': [0.4099999964237213, 1.0, 0.9399999976158142], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void ResetTrolleyAndNPC() {
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call GetOff()


    call ResetPlayerState()

    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
    Npc_Goron031[CarryGoronKid1].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'InstanceName': '', 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerErasePauseMask()
    FldObj_DeathMtArtifactTrain_B_02[Carry01].EventTriggerCombinedActorDeleteAll()

    call RespawnTrainAndReset()


    call SetPlayerFall()


    call Camera_Player_OutOfChallengeArea()

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
}

void ResetPlayerState() {
    if !Player.EventQueryCheckPlayerState({'State': 5}) {
        Player.EventTriggerParticipateEvent()
        if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Event225:
        Player.EventPlayerUnequip({'IsWaitEnd': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
    } else {
        goto Event225
    }
}

void GetOff() {

    call GetOff_Common({'InstanceName': 'Carry01', 'OnTrainFlag': 'CarryGoronKid1_OnTrain', 'Npc_Goron031': ActorIdentifier(name="Npc_Goron031", sub_name="CarryGoronKid1")})

}

void PlayerWarpToStart() {
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'AnchorInstanceName': 'CarryGoronKid1', 'AnchorActorName': 'StartPos', 'IsDeleteActor': False, 'Radius': 4.0})
    if !Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': True}) {
        if Player.EventQueryPlayerCheckRideHorse({'Type': 0, 'ActorFileName': '', 'IsRidingAny': False}) {
            Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
        }
        Event185:
        Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'InstanceName': 'CarryGoronKid1', 'ActorName': 'StartPos', 'UseDemoWait': True})
        Player.EventPlayerWait({'IsWaitEnd': True})
    } else {
        goto Event185
    }
}

void PlayerWarpToGoal() {
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'AnchorActorName': 'StartPos', 'IsDeleteActor': False, 'Radius': 4.0, 'AnchorInstanceName': 'CarryGoronKid1_PlayerPos'})
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'InstanceName': 'CarryGoronKid1_PlayerPos', 'ActorName': 'StartPos', 'UseDemoWait': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Camera_LookAtTrain() {
    Npc_Goron031[Camera_LookAtTrain(Npc_Goron031)].EventNPCTurnToTarget({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'Target': 3, 'FaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Train_InstanceName', 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'InstanceName': 'Train_InstanceName', 'OffsetBase': 0})
    EventCamera.EventMoveToTargetPosCamera({'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'MoveTime': 15, 'Actor1ActorName': 'Npc_Goron031', 'Actor2ActorName': 'FldObj_DeathMtArtifactTrain_B_02', 'PosVector': [0.0, 4.0, 0.0], 'AtVectorSetType': 4, 'Actor2InstanceName': 'Train_InstanceName', 'AtVector': [0.0, 0.0, 0.0], 'CameraCollisionMode': 0, 'Actor1InstanceName': 'Koppus_InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void CarryGoronKid1_Interact() {

    call Interact({'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_B_02", sub_name="Carry01"), 'TrainInstanceName': 'Carry01'})

}

void StopBgm() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 1, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False})
}

void RespawnTrainAndReset() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid1_RespawnTrain', 'Value': True})
    GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'CarryGoronKid1_RespawnTrain', 'Value': True})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
}

void Camera_LookAtKoppusInTrain() {
    EventCamera.EventBasedOnLookAtCamera({'IdealDistance': 4.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetOffset': [0.0, 0.5, 0.0], 'CameraCollisionMode': 0, 'TargetActorName': 'Koppus', 'TargetActorInstanceName': 'InstanceName', 'MoveTime': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_Player_OutOfChallengeArea() {
    EventCamera.EventBasedOnLookAtCamera({'IsWaitEnd': False, 'TargetActorName': 'Player', 'IdealDistance': 4.0, 'ToleranceDistance': 2.0, 'TargetActorInstanceName': '', 'ToleranceXZAngle': 10.0, 'LookAtVectorY': 0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LookAtVectorXZ': 0, 'EnableCameraAlpha': False, 'TargetOffset': [0.0, 3.0, 0.0]})
}

void Camera_SelectByDistance() {
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'ActorNameB': 'Npc_Goron031', 'InstanceNameB': 'KoppusInstanceName'}) {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    } else {
        EventCamera.EventTriggerCameraSavePoint()

        call Camera_LookAtKoppusInTrain({'Koppus': 'Npc_Goron031', 'InstanceName': 'KoppusInstanceName'})

    }
}

void Camera_SelectByDistance_Return() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player', 'CheckDistance': 10.0, 'InstanceNameA': '', 'IsTargetPlayingAllEvent': False, 'InstanceNameB': 'KoppusInstanceName', 'ActorNameB': 'Npc_Goron031'}) {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'EnableCameraAlpha': False})
    }
}

void SetPlayerFall() {
    if !Player.EventQueryCheckPlayerState({'State': 5})
    && !Player.EventQueryCheckPlayerState({'State': 6})
    && !Player.EventQueryCheckPlayerState({'State': 11})
    && !Player.EventQueryCheckPlayerState({'State': 4}) {
        Player.EventPlayerPlayASForFlowchart({'ASCommand': 'Fall', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False})
        Player.EventPlayerStopInAir({'IsWaitEnd': True, 'EnableCalcAnm': False})
        Player.EventTriggerPlayerRequestParasail()
    }
}
