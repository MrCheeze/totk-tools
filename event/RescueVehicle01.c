-------- EventFlow: RescueVehicle01 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventTriggerLookAtObject', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerBecomeSpeaker']
queries: ['EventQueryIsFollowToTargetActor', 'EventQueryIsOnRecentTalkFlag', 'EventQueryOwningObjectPlayerInterference']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 1, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventResetGimmick', 'EventWait', 'EventEventCircleWipeFadeOutFirst', 'EventEventCircleWipeFadeOutSecond', 'EventEventCircleWipeFadeIn', 'EventClearActorsAroundAnchor', 'EventTraverseAroundAndWaitCreateActor', 'EventWarpSoulSageFormation']
queries: ['EventQueryTalkChoice2']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerHorseGetOff', 'EventPlayerWait', 'EventPlayerTurnAndLook', 'EventPlayerWarpToNearAnchorWithRidableActor', 'EventPlayerUnequip']
queries: ['EventQueryPlayerCheckRideHorse']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera', 'EventSendEventTalkMessageToPlayerCamera', 'EventBasedOnLookAtCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: Npc_Goron040[Normal]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront', 'EventTriggerChangeAIScheduleEquipState', 'EventWaitCreationFinishedEquipment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: Npc_Goron040[Miasma]
entrypoint: None()
actions: ['EventAIScheduleWarpToAnchor', 'EventPlayAS', 'EventTriggerRequestLookAtTheFront']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Helmet': '', 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Arrow': '', 'IsBindNearestActor': False}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventRequestQuit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: FldObj_DeathMtArtifactTrain_A_03
entrypoint: None()
actions: ['EventTriggerPushPauseMask', 'EventTriggerErasePauseMask', 'EventTriggerCombinedActorDeleteAll']
queries: ['EventQueryWarpToSafeSpaceWithCombinedActor']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Npc_Goron040[GetOff(Motta)]
entrypoint: GetOff(Motta)
actions: ['EventCancelFollowToTargetActor']
queries: ['EventQueryIsFollowToTargetActor']
params: None

Actor: Npc_Goron040[GetOn(Motta)]
entrypoint: GetOn(Motta)
actions: ['EventFollowToTargetActor']
queries: []
params: None

Actor: Npc_Goron040[hand_talk(Npc)]
entrypoint: hand_talk(Npc)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Goron040[TrainOutOfArea(Motta)]
entrypoint: TrainOutOfArea(Motta)
actions: ['EventTriggerLookAtObject', 'EventTriggerBecomeSpeaker', 'EventTalk', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: FldObj_DeathMtArtifactTrain_A_03[CheckTrainSeat(Train)]
entrypoint: CheckTrainSeat(Train)
actions: ['EventTriggerParticipateEvent']
queries: ['EventQueryCheckNoObjectDirY', 'EventQueryActorIsRotYTiltOverAngle']
params: None

Actor: Npc_Goron040[CheckTrainSeat(Motta)]
entrypoint: CheckTrainSeat(Motta)
actions: ['EventTalk']
queries: []
params: None

Actor: Npc_Goron040[PrepareGoalPosition(Motta)]
entrypoint: PrepareGoalPosition(Motta)
actions: ['EventAIScheduleWarpToAnchor', 'EventNPCTurnToTarget']
queries: []
params: None

Actor: Npc_Goron040[Camera_AfterReset(Motta)]
entrypoint: Camera_AfterReset(Motta)
actions: ['EventTriggerLookAtObject']
queries: []
params: None

Actor: Npc_Goron040[WarpToHome(Motta)]
entrypoint: WarpToHome(Motta)
actions: ['EventAIScheduleWarpToAnchor', 'EventTriggerLookAtObject', 'EventPlayAS', 'EventTriggerChangeEmotion', 'EventTriggerNPCChangePosture', 'EventTalk', 'EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule', 'EventTriggerAIScheduleSetIsRequestSetPostTalkTimer']
queries: []
params: None

Actor: Npc_EventStarter[Arrived_Talk(Motta_Actor)]
entrypoint: Arrived_Talk(Motta_Actor)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: Npc_Goron040[Tilt_Sub(Motta)]
entrypoint: Tilt_Sub(Motta)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

Actor: Npc_Goron040[Failed_Sub(Motta)]
entrypoint: Failed_Sub(Motta)
actions: ['EventTriggerBecomeSpeaker', 'EventTalk']
queries: []
params: None

void Failed() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call Failed_Sub({'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'MottaInstanceName': 'Normal', 'ASName_Rest': 'Rest', 'ASName_Talk': ''})

    } else {

        call Failed_Sub({'ASName_Rest': 'Act_Rest_Miasma', 'MottaInstanceName': 'Miasma', 'ASName_Talk': 'Talk_Eat_Miasma', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma")})

    }
}

void Ready_Npc_Goron040_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsIgnoreDisplayKeepDepth': True, 'DisplayFrame': 90, 'MessageID': 'EventFlowMsg/RescueVehicle01:Near01', 'IsChallenge': True, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_Goron040_Talk() {

    call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 3})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/RescueVehicle01:Talk02', 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk57', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        Event194:
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 3, 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        GameSystemActor.EventWait({'Frames': 15, 'IsWaitEnd': True})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Player.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
        }
        EventCamera.EventTriggerCameraSavePoint()

        call Camera_Train()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk15', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk15', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Eat_Miasma', 'IsNotOpenIfSkipedMostRecent': False})
        }
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 0, 'EnableCameraAlpha': False})
        Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
        Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 1, 'KeepTalkWait': True, 'OffsetBase': 0})
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk14', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
            Event7:
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': '', 'StepName': '', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
                Npc_EventStarter.EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk14', 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Eat_Miasma', 'IsNotOpenIfSkipedMostRecent': False})
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RescueVehicle01_YunboExists', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceNumber': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk45', 'ASName': 'Talk_Eat_Miasma', 'IsNotOpenIfSkipedMostRecent': False})
            }
            goto Event7
        }
    } else {
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/RescueVehicle01:Talk02', 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Eat_Miasma', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk13', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'Talk_Eat_Miasma', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event194
    }
}

void Carry_Npc_Goron040_Talk() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call Carry_Talk({'ASName': '', 'Motta_InstanceName': 'Normal'})

    } else {

        call Carry_Talk({'ASName': 'Talk_Eat_Miasma', 'Motta_InstanceName': 'Miasma'})

    }
}

void Reach_Npc_Goron040_Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 3, 'Arg_Greeting': 3})

    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk64', 'IsNotOpenIfSkipedMostRecent': False})

        call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk61', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }

        call CearWarp()

    } else {
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk63', 'IsNotOpenIfSkipedMostRecent': False})
    }
}

void RescueVehicle01_Goron040_Hand() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call hand_talk({'Npc': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'MottaInstanceName': 'Normal'})

        if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'RescueVehicle01_Hand_Num'}) == 2 {

            call WarpToHome({'MottaInstanceName': 'Normal', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'ASName_Rest': 'Rest', 'ASName_Talk': ''})

        }
    } else {

        call hand_talk({'Npc': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma"), 'MottaInstanceName': 'Miasma'})

        if GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'RescueVehicle01_Hand_Num'}) == 2 {

            call WarpToHome({'MottaInstanceName': 'Miasma', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma"), 'ASName_Talk': 'Talk_Eat_Miasma', 'ASName_Rest': 'Act_Rest_Miasma'})

        }
    }
}

void RescueVehicle01_Goron040_Tilt() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call Tilt_Sub({'MottaInstanceName': 'Normal', 'ASName_Rest': 'Rest', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'ASName_Carry': 'Carry_Rest_Gear1', 'ASName_Talk': ''})

    } else {

        call Tilt_Sub({'MottaInstanceName': 'Miasma', 'ASName_Rest': 'Act_Rest_Miasma', 'ASName_Talk': 'Talk_Eat_Miasma', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma"), 'ASName_Carry': 'Act_Carry_Rest_Miasma'})

    }
}

void GetOff() {
    if !Npc_Goron040[GetOff(Motta)].EventQueryIsFollowToTargetActor({'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'InstanceName': ''}) {
        Npc_Goron040[GetOff(Motta)].EventCancelFollowToTargetActor({'IsWaitEnd': True, 'ASName': 'RestGetUp', 'InstanceName': '', 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03'})
    }
}

void GetOn() {

    call CheckTrainSeat({'Motta': 'Motta', 'ASName': 'ASName', 'Train': ActorIdentifier(name="FldObj_DeathMtArtifactTrain_A_03"), 'Motta_InstanceName': 'Motta_InstanceName'})

    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron040[GetOn(Motta)].EventFollowToTargetActor({'IsWaitEnd': True, 'Posture': 3, 'InstanceName': '', 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'XZDegOffset': 0.0, 'PositionOffset': [0.0, 1.0, -0.8999999761581421]})
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RescueVehicle01_OnTrain', 'Index': -1, 'Value': True})
    GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'RescueVehicle01_Hand_Num', 'Value': 0})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
}

void hand_talk() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    Player.EventPlayerWait({'IsWaitEnd': True})
    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEvent({'Arg_Turn': 0, 'Self': 'Npc'})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'RescueVehicle01_Hand_Num'}) {
      case 0:
        Npc_Goron040[hand_talk(Npc)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk19', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        Event181:
        GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'RescueVehicle01_Hand_Num'})
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
      case 1:
        Event58:
        Npc_Goron040[hand_talk(Npc)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk41', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event181
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'Value': 2, 'GameDataName': 'RescueVehicle01_Hand_Num'}) {
          case 0:
            goto Event58
          case 1:
            Npc_Goron040[hand_talk(Npc)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk42', 'IsNotOpenIfSkipedMostRecent': False})
            goto Event181
          case 2:
            Npc_Goron040[hand_talk(Npc)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk43', 'IsNotOpenIfSkipedMostRecent': False})
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'RescueVehicle01_Hand_Num'})
            FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
        }
    }
}

void RescueVehicle01_Interact() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call Train_Interact({'ASName': ''})

    } else {

        call Train_Interact({'ASName': 'Talk_Eat_Miasma'})

    }
}

void TrainOutOfArea() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_Goron040[TrainOutOfArea(Motta)].EventTriggerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'Target': 3, 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'PosOffset': [0.0, 1.0, 0.0], 'ResetArriveTransformFixed': False})
    Npc_Goron040[TrainOutOfArea(Motta)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Motta'})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_Goron040[TrainOutOfArea(Motta)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk36', 'ASName': 'ASName_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

    call PlayerWarpToStart()


    call TrainWarp()


    call Camera_AfterReset({'MottaInstanceName': 'InstanceName', 'Motta': 'Motta'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Goron040[TrainOutOfArea(Motta)].EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 2})
    Npc_Goron040[TrainOutOfArea(Motta)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName_Rest'})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Npc_Goron040[TrainOutOfArea(Motta)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 2, 'ChoiceLabel1': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk37', 'ASName': 'ASName_Talk', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventWarpSoulSageFormation({'IsWaitEnd': True})
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
    }
}

void CheckTrainSeat() {
    FldObj_DeathMtArtifactTrain_A_03[CheckTrainSeat(Train)].EventTriggerParticipateEvent()
    if !FldObj_DeathMtArtifactTrain_A_03[CheckTrainSeat(Train)].EventQueryCheckNoObjectDirY({'Length': 2.0, 'Offest': [0.0, 1.5, 0.0], 'Radius': 0.20000000298023224}) {

        call Camera_TrainSeat({'Motta_InstanceName': 'Motta_InstanceName'})

        Npc_Goron040[CheckTrainSeat(Motta)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk39', 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        Event217:
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
        EventSystemActor.EventRequestQuit({'IsWaitEnd': True, 'SpecialEventActionType': 5})
    } else
    if !FldObj_DeathMtArtifactTrain_A_03[CheckTrainSeat(Train)].EventQueryActorIsRotYTiltOverAngle({'Angle': 25.0}) {

        call Camera_TrainSeat({'Motta_InstanceName': 'Motta_InstanceName'})

        Npc_Goron040[CheckTrainSeat(Motta)].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel1': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk40', 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event217
    }
}

void RescueVehicle01_TrainOutOfArea() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call TrainOutOfArea({'InstanceName': 'Normal', 'ASName_Rest': 'Rest', 'ASName_Talk': '', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Normal")})

    } else {

        call TrainOutOfArea({'InstanceName': 'Miasma', 'ASName_Rest': 'Act_Rest_Miasma', 'ASName_Talk': 'Talk_Eat_Miasma', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma")})

    }
}

void PrepareGoalPosition() {

    call GetOff({'Motta': 'Motta'})

    FldObj_DeathMtArtifactTrain_A_03.EventTriggerCombinedActorDeleteAll()
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'Radius': 2.0, 'AnchorActorName': 'AnchorAction2', 'AnchorInstanceName': 'Goron040', 'IsSweepOut': True, 'IsExcludePlacedAroundAnchor': False, 'IsDeleteActor': True})

    call PlayerWarpToGoal()

    Npc_Goron040[PrepareGoalPosition(Motta)].EventAIScheduleWarpToAnchor({'AnchorType': 2, 'IsWaitEnd': True, 'ActionType': 1, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': 'Goron040', 'EnableArrivalState': False})
    Npc_Goron040[PrepareGoalPosition(Motta)].EventNPCTurnToTarget({'IsWaitEnd': True, 'InstanceName': '', 'Target': 2, 'ActorName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'FaceControlType': 1, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Goron040', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'InstanceName': 'MottaInstanceName'})
}

void Camera_Train() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'PosVector': [1.8600000143051147, 3.059999942779541, 10.75], 'AtVector': [1.0399999618530273, 2.109999895095825, 5.010000228881836], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_Failure_Motta() {
    EventCamera.EventBasedOnLookAtCamera({'IdealDistance': 4.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'TargetOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_Goron040', 'TargetActorInstanceName': 'InstanceName', 'MoveTime': 5, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Camera_AfterReset() {
    Npc_Goron040[Camera_AfterReset(Motta)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Player.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'Npc_Goron040', 'InstanceName': 'MottaInstanceName', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventBasedOnLookAtCamera({'IdealDistance': 4.0, 'LookAtVectorXZ': 1, 'LookAtVectorY': 1, 'IsWaitEnd': True, 'ToleranceDistance': 3.0, 'ToleranceXZAngle': 10.0, 'ToleranceYUpwardAngle': 30.0, 'ToleranceYDownwardAngle': -5.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'TargetActorName': 'Npc_Goron040', 'TargetOffset': [0.0, 1.0, 0.0], 'CameraCollisionMode': 0, 'MoveTime': 0, 'TargetActorInstanceName': 'MottaInstanceName', 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void WarpToHome() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call GetOff({'Motta': 'Motta'})


    call PlayerWarpToStart()

    GameSystemActor.EventClearActorsAroundAnchor({'IsWaitEnd': True, 'Height': 4.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'RV01_Delete', 'Radius': 6.0, 'IsExcludePlacedAroundAnchor': True, 'IsSweepOut': True, 'IsDeleteActor': True})
    Npc_Goron040[WarpToHome(Motta)].EventAIScheduleWarpToAnchor({'IsWaitEnd': True, 'ActionType': 0, 'AnchorType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'InstanceName': 'Goron040', 'EnableArrivalState': True})

    call TrainWarp()

    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})

    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': 'Motta'})


    call Camera_AfterReset({'MottaInstanceName': 'MottaInstanceName', 'Motta': 'Motta'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    Npc_Goron040[WarpToHome(Motta)].EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
    Npc_Goron040[WarpToHome(Motta)].EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName_Rest'})
    GameSystemActor.EventWarpSoulSageFormation({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RescueVehicle01_SelectedReturn', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RescueVehicle01_SelectedReturn', 'Value': False, 'Index': -1})
        Npc_Goron040[WarpToHome(Motta)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Event315:
        if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Carry_FailedWarp', 'Index': -1}) {
            FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
        }
    } else
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'RescueVehicle01_Hand_Num', 'Value': 3}) {
      case [0, 1]:
        Npc_Goron040[WarpToHome(Motta)].EventTriggerChangeEmotion({'EmotionType': 4, 'IsActFaceOnly': True})
        GameSystemActor.EventEventCircleWipeFadeIn({'IsWaitEnd': True})
        Npc_Goron040[WarpToHome(Motta)].EventTriggerNPCChangePosture({'Posture': 3, 'IsPlayCurrentAS': False})
        Npc_Goron040[WarpToHome(Motta)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk12', 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName_Talk', 'IsNotOpenIfSkipedMostRecent': False})
        Event266:
        Npc_Goron040[WarpToHome(Motta)].EventTriggerAIScheduleSetKeepPostWaitOnChangeActionSchedule()
        Npc_Goron040[WarpToHome(Motta)].EventTriggerAIScheduleSetIsRequestSetPostTalkTimer()
        goto Event315
      case 2:
        Npc_Goron040[WarpToHome(Motta)].EventTriggerChangeEmotion({'EmotionType': 2, 'IsActFaceOnly': True})
        GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        Npc_Goron040[WarpToHome(Motta)].EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceLabel1': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk44', 'ASName': 'ASName_Talk', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event266
    }
}

void TrainWarp() {
    if !FldObj_DeathMtArtifactTrain_A_03.EventQueryWarpToSafeSpaceWithCombinedActor({'IsEnableFailDelete': True, 'EndHeightOffset': -1.0, 'StartHeightOffset': 4.0, 'BasePos': [2343.0, 621.0, -2690.0], 'BaseRot': [107.0, 79.0, 107.0], 'IsEnableHitPlayer': True}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Carry_FailedWarp', 'Value': False})
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Carry_FailedWarp'})
        GameSystemActor.EventResetGimmick({'IsWaitEnd': True, 'IsResetCamera': True, 'Option': 1})
    }
}

void RescueVehicle01_Arrived() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

        call Arrived_Talk({'Motta_Actor': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'Motta_InstanceName': 'Normal'})

    } else {

        call Arrived_Talk({'Motta_InstanceName': 'Miasma', 'Motta_Actor': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma")})

    }
}

void Arrived_Talk() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Motta_Actor'})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'MessageId': 'EventFlowMsg/RescueVehicle01:Talk01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': -1, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()

    call PrepareGoalPosition({'Motta': 'Motta_Actor', 'MottaInstanceName': 'Motta_InstanceName'})


    call InitTalk.InitTalkOnEvent({'Arg_Turn': 0, 'Self': 'Motta_Actor'})


    call Camera_GoalEvent({'InstanceName': 'Motta_InstanceName'})

    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
        Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk60', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

            Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk61', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            Event251:
            GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {

                call ClearWarpAfterSage()

            } else {

                call ClearWarpBeforeSage()

            }
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
            GameSystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'RescueVehicle01', 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'IsWaitEnd': True})
        } else {
            Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk62', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'RescueVehicle01', 'StepName': 'Reach', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    } else {
        Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk26', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {

            call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'Item_Enemy_131'})

            Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk27', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            goto Event251
        } else {
            Npc_EventStarter[Arrived_Talk(Motta_Actor)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk62', 'IsNotOpenIfSkipedMostRecent': False})
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'RescueVehicle01', 'StepName': 'Reach', 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True})
        }
    }
}

void PlayerWarpToStart() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'IsWaitEnd': True, 'ActorName': 'StartPos', 'InstanceName': 'RescueVehicle01_StartPos', 'UseDemoWait': True})

    call ResetPlayerState()

}

void PlayerWarpToGoal() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerWarpToNearAnchorWithRidableActor({'ActorName': 'DestinationAnchor', 'InstanceName': 'RescueVehicle01_Player', 'IsWaitEnd': True, 'UseDemoWait': True})

    call ResetPlayerState()

}

void ResetPlayerState() {
    if !Player.EventQueryPlayerCheckRideHorse({'IsRidingAny': True, 'Type': 0, 'ActorFileName': ''}) {
        Player.EventPlayerHorseGetOff({'IsWaitEnd': True})
    }
    Player.EventPlayerUnequip({'IsWaitEnd': True})
    Player.EventPlayerWait({'IsWaitEnd': True})
}

void Camera_GoalEvent() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Goron040', 'PosVector': [-5.179999828338623, 2.7899999618530273, -1.2400000095367432], 'AtVector': [-1.0399999618530273, 1.440000057220459, 0.019999999552965164], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': 'InstanceName', 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Reach_Npc_Goron040_Near() {
    if !PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'Item_Enemy_131', 'Num': 1}) {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/RescueVehicle01:Near03', 'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
    } else {
        Npc_EventStarter.EventTriggerBalloonMessage({'MessageID': 'EventFlowMsg/RescueVehicle01:Near03', 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
    }
}

void CearWarp() {
    goto Event251
}

void ClearWarpBeforeSage() {
    Npc_Goron040[Miasma].EventAIScheduleWarpToAnchor({'AnchorType': 4, 'InstanceName': 'Npc_Goron040_BeforeSage', 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Goron040[Miasma].EventTriggerRequestLookAtTheFront()
    Npc_Goron040[Miasma].EventPlayAS({'ASName': 'Act_Rest_Miasma', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void ClearWarpAfterSage() {
    Npc_Goron040[Normal].EventAIScheduleWarpToAnchor({'InstanceName': 'Npc_Goron040_AfterSage', 'AnchorType': 6, 'IsWaitEnd': True, 'ActionType': 0, 'ForceGetUpDuringSleep': True, 'ResetArrivalState': False, 'EnableArrivalState': False})
    Npc_Goron040[Normal].EventTriggerChangeAIScheduleEquipState({'EquipState': 0})
    Npc_Goron040[Normal].EventWaitCreationFinishedEquipment({'IsWaitEnd': True})
    Npc_Goron040[Normal].EventTriggerRequestLookAtTheFront()
    Npc_Goron040[Normal].EventPlayAS({'ASName': 'Act_Dig_Emotion', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
}

void Carry_Talk() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !Npc_EventStarter.EventQueryIsFollowToTargetActor({'InstanceName': '', 'ActorName': 'FldObj_DeathMtArtifactTrain_A_03'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RescueVehicle_NearGoal', 'Index': -1}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk35', 'ChoiceNumber': 2, 'ChoiceLabel1': 6, 'ChoiceLabel2': 3, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Event108:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'RescueVehicle01_SelectedReturn'})
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk59', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()

                    call WarpToHome({'MottaInstanceName': 'Normal', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Normal"), 'ASName_Rest': 'Rest', 'ASName_Talk': ''})

                } else {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk10', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                    GameSystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()

                    call WarpToHome({'MottaInstanceName': 'Miasma', 'ASName_Rest': 'Act_Rest_Miasma', 'Motta': ActorIdentifier(name="Npc_Goron040", sub_name="Miasma"), 'ASName_Talk': 'Talk_Eat_Miasma'})

                }
            } else {
                Event13:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk25', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
                FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk24', 'ChoiceLabel2': 3, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 6, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            if !GameSystemActor.EventQueryTalkChoice2() {
                goto Event108
            } else {
                goto Event13
            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
        Event37:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk16', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        Event10:
        if !GameSystemActor.EventQueryTalkChoice2() {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RescueVehicle01_IsReadyVehicle', 'Index': -1}) {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk04', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})

                call GetOn({'ASName': 'ASName', 'Motta': ActorIdentifier(name="Npc_EventStarter"), 'Motta_InstanceName': 'Motta_InstanceName'})

                Event126:
                FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk21', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
                goto Event126
            }
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Step_SageOfFire_VillagersSchedule'}) {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk58', 'ASName': '', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk23', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        }
        FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 2, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk28', 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event10
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'RescueVehicle01_YunboExists', 'Index': -1}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk16', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ChoiceNumber': 0, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsCloseDialog': True, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'ChoiceCancelNo': 0, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk45', 'ChoiceLabel1': 0, 'ChoiceLabel2': 1, 'ChoiceNumber': 2, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        goto Event10
    } else {
        goto Event37
    }
}

void Train_Interact() {

    call Common.AirStartUP_Player()

    Npc_EventStarter.EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCamera({'Arg_Greeting': 3, 'Arg_Turn': 1})

    } {
        EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False})
    }

    switch Npc_EventStarter.EventQueryOwningObjectPlayerInterference({'IsCheckBrokenInterferedOnly': False}) {
      case [1, 3, 4, 6]:
        Event106:
        Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk34', 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
      case 2:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'RescueVehicle01_IsAfter_Ready_Exp'}) {
            Npc_EventStarter.EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk33', 'NotPlayLipSyncAnim': False, 'ASName': 'ASName', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            goto Event106
        }
    }
}

void Camera_TrainSeat() {
    EventCamera.EventMoveToTargetPosCamera({'MoveTime': 30, 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'FldObj_DeathMtArtifactTrain_A_03', 'TargetFovy': 50.0, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': True, 'IsIgnoreAtVectorReferenceActorRot': True, 'Actor1InstanceName': '', 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False, 'Actor2ActorName': 'Npc_Goron040', 'Actor2InstanceName': 'Motta_InstanceName', 'PosVectorSetType': 4, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'PosVector': [0.0, 3.0, 0.0], 'AtVector': [0.0, 1.0, 0.0]})
}

void Tilt_Sub() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RescueVehicle01_Failed', 'Index': -1, 'Value': True})
    Npc_Goron040[Tilt_Sub(Motta)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Motta'})

    } {

        call Camera_Failure_Motta({'InstanceName': 'MottaInstanceName'})

    }

    GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    Npc_Goron040[Tilt_Sub(Motta)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk20', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'ASName': 'ASName_Carry', 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()

    call WarpToHome({'Motta': 'Motta', 'MottaInstanceName': 'MottaInstanceName', 'ASName_Rest': 'ASName_Rest', 'ASName_Talk': 'ASName_Talk'})

}

void Failed_Sub() {
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerPushPauseMask({'IsPhysics': True, 'IsFrameEndCalc': False, 'IsCloth': False})

    call Common.AirStartUP_Player()

    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'RescueVehicle01_Failed', 'Index': -1, 'Value': True})
    Npc_Goron040[Failed_Sub(Motta)].EventTriggerBecomeSpeaker()

    fork {

        call InitTalk.InitTalkExceptCameraOnEventWithAirPause({'Arg_Turn': 0, 'Self': 'Motta'})

    } {

        call Camera_Failure_Motta({'InstanceName': 'MottaInstanceName'})

    }

    GameSystemActor.EventEventCircleWipeFadeOutFirst({'IsWaitEnd': True})
    Npc_Goron040[Failed_Sub(Motta)].EventTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnimeDriven': False, 'MessageId': 'EventFlowMsg/RescueVehicle01:Talk08', 'IsAnonymous': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventCircleWipeFadeOutSecond({'IsWaitEnd': True})
    FldObj_DeathMtArtifactTrain_A_03.EventTriggerErasePauseMask()

    call WarpToHome({'Motta': 'Motta', 'MottaInstanceName': 'MottaInstanceName', 'ASName_Rest': 'ASName_Rest', 'ASName_Talk': 'ASName_Talk'})

}
