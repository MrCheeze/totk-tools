-------- EventFlow: Hack_GuardGoods --------

Actor: Enemy_Toby_Junior[Hack_A]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Enemy_Toby_Junior[Hack_B]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 3, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Enemy_Toby_Junior[Hack_C]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'UseEventModelAnime': '', 'UseEventAS': '', 'EventMemberCreateMethod': 3, 'IsGrounding': False, 'IsWorld': False, 'IsBindNearestActor': False}

Actor: Npc_HighMountain013
entrypoint: None()
actions: ['EventTriggerBalloonMessage', 'EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Attachment_Weapon': '', 'EquipmentUser_Attachment_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Attachment_Shield': '', 'EquipmentUser_Attachment_Shield_EquipmentState': 0, 'IsBindNearestActor': False}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventMoveCameraToSavePoint']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'IsBindNearestActor': False}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'IsBindNearestActor': False}

Actor: Player
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '', 'UseEventAS': '', 'ExceptionalBindType': 3, 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': '', 'TextureReplaceType': 0, 'IsBindNearestActor': False}

void Ready_Npc_HighMountain013_Near() {
    Npc_HighMountain013.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_HighMountain013_Talk() {
    Event38:
    Enemy_Toby_Junior[Hack_A].EventTriggerParticipateEvent()
    Enemy_Toby_Junior[Hack_B].EventTriggerParticipateEvent()
    Enemy_Toby_Junior[Hack_C].EventTriggerParticipateEvent()

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hack_GuardGoods_ManyDefeat', 'Index': -1}) {
        Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk10', 'IsNotOpenIfSkipedMostRecent': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hack_GuardGoods_TalkAfterDefeat'})
        Npc_HighMountain013.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Event58:

        call Sub_FocusPerch_Start()

        Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

        call Sub_FocusPerch_End()

        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hack_GuardGoods_ManyDefeat', 'Index': -1}) {
            Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk11', 'IsNotOpenIfSkipedMostRecent': False})
        } else {
            Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk06', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        }
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Hack_GuardGoods', 'StepName': 'Defeat', 'IsWaitEnd': True})
    } else {
        Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk01', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event58
    }
}

void Defeat_Npc_HighMountain013_Near() {
    Npc_HighMountain013.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near02', 'IsChallenge': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Defeat_Npc_HighMountain013_Talk() {
    Event11:
    Enemy_Toby_Junior[Hack_A].EventTriggerParticipateEvent()
    Enemy_Toby_Junior[Hack_B].EventTriggerParticipateEvent()
    Enemy_Toby_Junior[Hack_C].EventTriggerParticipateEvent()

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hack_GuardGoods_ManyDefeat', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Hack_GuardGoods_TalkAfterDefeat'}) {
            Npc_HighMountain013.EventTalk({'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk12_01', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False})
            Event20:

            call Sub_FocusPerch_Start()

            Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk08', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

            call Sub_FocusPerch_End()

            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Hack_GuardGoods_ManyDefeat', 'Index': -1}) {
                Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk13', 'IsNotOpenIfSkipedMostRecent': False})
            } else {
                Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk09', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
            }
        } else {
            Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk12', 'IsNotOpenIfSkipedMostRecent': False})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hack_GuardGoods_TalkAfterDefeat'})
            goto Event20
        }
    } else {
        Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk03', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
        goto Event20
    }
}

void Finish_Npc_HighMountain013_Talk() {

    call Reward()

}

void Ready_Npc_HighMountain013_Hack_GuardGoods_DefeatAfter_Talk() {

    call Reward()

}

void Reward() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk04', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})

    call GetPouchContent.GetPouchContentByActorName({'IsSuccess': True, 'ActorName': 'PutRupee_Purple'})

    Npc_HighMountain013.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'IsAnonymous': False, 'ChoiceDefaultNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceCancelNo': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsPlayASAllSlot': False, 'MessageId': 'EventFlowMsg/Hack_GuardGoods:Talk07', 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False})
    GameSystemActor.EventEventFadeOut({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HackChallenge_Clear'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Hack_GuardGoods_TalkAfterDefeat'})
    GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    GameSystemActor.EventEventFadeIn({'Color': 0, 'Length': 1, 'IsWaitEnd': True, 'IsNoPlayAnime': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Hack_GuardGoods', 'StepName': 'Complete', 'IsWaitEnd': True})
}

void Ready_Npc_HighMountain013_Hack_GuardGoods_DefeatAfter_Near() {
    Event14:
    Npc_HighMountain013.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near03', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Finish_Npc_HighMountain013_Near() {
    goto Event14
}

void Sub_FocusPerch_Start() {
    Npc_HighMountain013.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsWaitEnd': True, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [-2184.791015625, 570.0994873046875, -2010.5169677734375], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'WorldPos': [-2184.791015625, 570.0994873046875, -2010.5169677734375], 'KeepTalkWait': True, 'OffsetBase': 0})
    EventCamera.EventTriggerCameraSavePoint()
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'CameraCollisionMode': 0, 'MoveTime': 30, 'PosVector': [-2092.85009765625, 484.7699890136719, -2040.760009765625], 'AtVector': [-2168.43994140625, 514.8900146484375, -2024.22998046875], 'TargetFovy': 40.0, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'EnableCameraAlpha': False})
}

void Sub_FocusPerch_End() {
    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsWaitEnd': True, 'MoveFrame': 0, 'EnableCameraAlpha': False})
    Npc_HighMountain013.EventNPCTurnToTarget({'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'FaceControlType': 1, 'IsConfront': True, 'InstanceName': '', 'ActorName': '', 'Target': 2, 'IsWaitEnd': True, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'WorldPos': [0.0, 0.0, 0.0], 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    Player.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'InstanceName': '', 'IsWaitEnd': True, 'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'ActorName': 'Npc_HighMountain013', 'KeepTalkWait': True, 'OffsetBase': 0})
    Player.EventPlayerTalk({'IsWaitEnd': True, 'HelloType': 0})
}

void Ready_Npc_HighMountain013_Hack_GuardGoods_ManyDefeat_Near() {
    Npc_HighMountain013.EventTriggerBalloonMessage({'IsChallenge': True, 'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Ready_Npc_HighMountain013_Hack_GuardGoods_ManyDefeat_Talk() {
    goto Event38
}

void Defeat_Npc_HighMountain013_Hack_GuardGoods_ManyDefeat_Near() {
    Npc_HighMountain013.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'IsChallenge': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near04', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False})
}

void Defeat_Npc_HighMountain013_Hack_GuardGoods_ManyDefeat_Talk() {
    goto Event11
}

void Defeat_Npc_HighMountain013_Hack_GuardGoods_TalkAfterDefeat_Near() {
    Npc_HighMountain013.EventTriggerBalloonMessage({'DisplayFrame': 90, 'IsIgnoreDisplayKeepDepth': False, 'MessageID': 'EventFlowMsg/Hack_GuardGoods:Near01', 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'IsChallenge': False})
}

void Defeat_Npc_HighMountain013_Hack_GuardGoods_TalkAfterDefeat_Talk() {
    goto Event11
}
